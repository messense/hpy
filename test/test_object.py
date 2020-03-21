"""
NOTE: this tests are also meant to be run as PyPy "applevel" tests.

This means that global imports will NOT be visible inside the test
functions. In particular, you have to "import pytest" inside the test in order
to be able to use e.g. pytest.raises (which on PyPy will be implemented by a
"fake pytest module")
"""
from .support import HPyTest


class TestObject(HPyTest):
    def test_getattr(self):
        import pytest
        mod = self.make_module("""
            HPy_DEF_METH_O(f)
            static HPy f_impl(HPyContext ctx, HPy self, HPy arg)
            {
                HPy name, result;
                name = HPyUnicode_FromString(ctx, "foo");
                if (HPy_IsNull(name))
                    return HPy_NULL;
                result = HPy_GetAttr(ctx, arg, name);
                HPy_Close(ctx, name);
                if (HPy_IsNull(result))
                    return HPy_NULL;
                return result;
            }
            @EXPORT f HPy_METH_O
            @INIT
        """)

        class Attrs:
            def __init__(self, **kw):
                for k, v in kw.items():
                    setattr(self, k, v)

        class ClassAttr:
            foo = 10

        class PropAttr:
            @property
            def foo(self):
                return 11

        assert mod.f(Attrs(foo=5)) == 5
        with pytest.raises(AttributeError):
            mod.f(Attrs())
        with pytest.raises(AttributeError):
            mod.f(42)
        assert mod.f(ClassAttr) == 10
        assert mod.f(ClassAttr()) == 10
        assert mod.f(PropAttr()) == 11

    def test_getattr_s(self):
        import pytest
        mod = self.make_module("""
            HPy_DEF_METH_O(f)
            static HPy f_impl(HPyContext ctx, HPy self, HPy arg)
            {
                HPy result;
                result = HPy_GetAttr_s(ctx, arg, "foo");
                if (HPy_IsNull(result))
                    return HPy_NULL;
                return result;
            }
            @EXPORT f HPy_METH_O
            @INIT
        """)

        class Attrs:
            def __init__(self, **kw):
                for k, v in kw.items():
                    setattr(self, k, v)

        class ClassAttr:
            foo = 10

        class PropAttr:
            @property
            def foo(self):
                return 11

        assert mod.f(Attrs(foo=5)) == 5
        with pytest.raises(AttributeError):
            mod.f(Attrs())
        with pytest.raises(AttributeError):
            mod.f(42)
        assert mod.f(ClassAttr) == 10
        assert mod.f(ClassAttr()) == 10
        assert mod.f(PropAttr()) == 11

    def test_hasattr(self):
        mod = self.make_module("""
            HPy_DEF_METH_O(f)
            static HPy f_impl(HPyContext ctx, HPy self, HPy arg)
            {
                HPy name;
                int result;
                name = HPyUnicode_FromString(ctx, "foo");
                if (HPy_IsNull(name))
                    return HPy_NULL;
                result = HPy_HasAttr(ctx, arg, name);
                HPy_Close(ctx, name);
                if (result == -1)
                    return HPy_NULL;
                if (result)
                    return HPy_Dup(ctx, ctx->h_True);
                return HPy_Dup(ctx, ctx->h_False);
            }
            @EXPORT f HPy_METH_O
            @INIT
        """)

        class Attrs:
            def __init__(self, **kw):
                for k, v in kw.items():
                    setattr(self, k, v)

        class ClassAttr:
            foo = 10

        class PropAttr:
            @property
            def foo(self):
                return 11

        class PropAttrRaising:
            @property
            def foo(self):
                raise RuntimeError


        assert mod.f(Attrs(foo=5)) is True
        assert mod.f(Attrs()) is False
        assert mod.f(42) is False
        assert mod.f(ClassAttr) is True
        assert mod.f(ClassAttr()) is True
        assert mod.f(PropAttr()) is True
        assert mod.f(PropAttrRaising()) is False


    def test_hasattr_s(self):
        mod = self.make_module("""
            HPy_DEF_METH_O(f)
            static HPy f_impl(HPyContext ctx, HPy self, HPy arg)
            {
                int result;
                result = HPy_HasAttr_s(ctx, arg, "foo");
                if (result == -1)
                    return HPy_NULL;
                if (result)
                    return HPy_Dup(ctx, ctx->h_True);
                return HPy_Dup(ctx, ctx->h_False);
            }
            @EXPORT f HPy_METH_O
            @INIT
        """)

        class Attrs:
            def __init__(self, **kw):
                for k, v in kw.items():
                    setattr(self, k, v)

        class ClassAttr:
            foo = 10

        class PropAttr:
            @property
            def foo(self):
                return 11

        class PropAttrRaising:
            @property
            def foo(self):
                raise RuntimeError

        assert mod.f(Attrs(foo=5)) is True
        assert mod.f(Attrs()) is False
        assert mod.f(42) is False
        assert mod.f(ClassAttr) is True
        assert mod.f(ClassAttr()) is True
        assert mod.f(PropAttr()) is True
        assert mod.f(PropAttrRaising()) is False

    def test_setattr(self):
        import pytest
        mod = self.make_module("""
            HPy_DEF_METH_O(f)
            static HPy f_impl(HPyContext ctx, HPy self, HPy arg)
            {
                HPy name;
                int result;
                name = HPyUnicode_FromString(ctx, "foo");
                if (HPy_IsNull(name))
                    return HPy_NULL;
                result = HPy_SetAttr(ctx, arg, name, ctx->h_True);
                HPy_Close(ctx, name);
                if (result < 0)
                    return HPy_NULL;
                return HPy_Dup(ctx, ctx->h_None);
            }
            @EXPORT f HPy_METH_O
            @INIT
        """)

        class Attrs:
            pass

        class ClassAttr:
            pass

        class ReadOnlyPropAttr:
            @property
            def foo(self):
                return 11

        class WritablePropAttr:
            @property
            def foo(self):
                return self._foo

            @foo.setter
            def foo(self, value):
                self._foo = value

        a = Attrs()
        mod.f(a)
        assert a.foo is True

        mod.f(ClassAttr)
        assert ClassAttr.foo is True
        assert ClassAttr().foo is True

        with pytest.raises(AttributeError):
            mod.f(object())

        with pytest.raises(AttributeError):
            mod.f(ReadOnlyPropAttr())

        b = WritablePropAttr()
        mod.f(b)
        assert b.foo is True

    def test_setattr_s(self):
        import pytest
        mod = self.make_module("""
            HPy_DEF_METH_O(f)
            static HPy f_impl(HPyContext ctx, HPy self, HPy arg)
            {
                int result;
                result = HPy_SetAttr_s(ctx, arg, "foo", ctx->h_True);
                if (result < 0)
                    return HPy_NULL;
                return HPy_Dup(ctx, ctx->h_None);
            }
            @EXPORT f HPy_METH_O
            @INIT
        """)

        class Attrs:
            pass

        class ClassAttr:
            pass

        class ReadOnlyPropAttr:
            @property
            def foo(self):
                return 11

        class WritablePropAttr:
            @property
            def foo(self):
                return self._foo

            @foo.setter
            def foo(self, value):
                self._foo = value

        a = Attrs()
        mod.f(a)
        assert a.foo is True

        mod.f(ClassAttr)
        assert ClassAttr.foo is True
        assert ClassAttr().foo is True

        with pytest.raises(AttributeError):
            mod.f(object())

        with pytest.raises(AttributeError):
            mod.f(ReadOnlyPropAttr())

        b = WritablePropAttr()
        mod.f(b)
        assert b.foo is True

    def test_getitem(self):
        import pytest
        mod = self.make_module("""
            HPy_DEF_METH_O(f)
            static HPy f_impl(HPyContext ctx, HPy self, HPy arg)
            {
                HPy key, result;
                key = HPyLong_FromLong(ctx, 3);
                if (HPy_IsNull(key))
                    return HPy_NULL;
                result = HPy_GetItem(ctx, arg, key);
                HPy_Close(ctx, key);
                if (HPy_IsNull(result))
                    return HPy_NULL;
                return result;
            }
            @EXPORT f HPy_METH_O
            @INIT
        """)
        assert mod.f({3: "hello"}) == "hello"
        with pytest.raises(KeyError) as exc:
            mod.f({1: "bad"})
        assert exc.value.args == (3,)

        assert mod.f([0, 1, 2, "hello"]) == "hello"
        with pytest.raises(IndexError):
            mod.f([])

    def test_getitem_i(self):
        import pytest
        mod = self.make_module("""
            HPy_DEF_METH_O(f)
            static HPy f_impl(HPyContext ctx, HPy self, HPy arg)
            {
                HPy result;
                result = HPy_GetItem_i(ctx, arg, 3);
                if (HPy_IsNull(result))
                    return HPy_NULL;
                return result;
            }
            @EXPORT f HPy_METH_O
            @INIT
        """)
        assert mod.f({3: "hello"}) == "hello"
        with pytest.raises(KeyError) as exc:
            mod.f({1: "bad"})
        assert exc.value.args == (3,)

        assert mod.f([0, 1, 2, "hello"]) == "hello"
        with pytest.raises(IndexError):
            mod.f([])

    def test_getitem_s(self):
        import pytest
        mod = self.make_module("""
            HPy_DEF_METH_O(f)
            static HPy f_impl(HPyContext ctx, HPy self, HPy arg)
            {
                HPy result;
                result = HPy_GetItem_s(ctx, arg, "limes");
                if (HPy_IsNull(result))
                    return HPy_NULL;
                return result;
            }
            @EXPORT f HPy_METH_O
            @INIT
        """)
        assert mod.f({"limes": "hello"}) == "hello"
        with pytest.raises(KeyError) as exc:
            mod.f({"oranges": "bad"})
        assert exc.value.args == ("limes",)

        with pytest.raises(TypeError):
            mod.f([])

    def test_setitem(self):
        import pytest
        mod = self.make_module("""
            HPy_DEF_METH_O(f)
            static HPy f_impl(HPyContext ctx, HPy self, HPy arg)
            {
                HPy key;
                int result;
                key = HPyLong_FromLong(ctx, 3);
                if (HPy_IsNull(key))
                    return HPy_NULL;
                result = HPy_SetItem(ctx, arg, key, ctx->h_True);
                HPy_Close(ctx, key);
                if (result < 0)
                    return HPy_NULL;
                return arg;
            }
            @EXPORT f HPy_METH_O
            @INIT
        """)
        assert mod.f({}) == {3: True}
        assert mod.f({"a": 1}) == {"a": 1, 3: True}
        assert mod.f({3: False}) == {3: True}

        assert mod.f([0, 1, 2, False]) == [0, 1, 2, True]
        with pytest.raises(IndexError):
            mod.f([])

    def test_setitem_i(self):
        import pytest
        mod = self.make_module("""
            HPy_DEF_METH_O(f)
            static HPy f_impl(HPyContext ctx, HPy self, HPy arg)
            {
                int result;
                result = HPy_SetItem_i(ctx, arg, 3, ctx->h_True);
                if (result < 0)
                    return HPy_NULL;
                return arg;
            }
            @EXPORT f HPy_METH_O
            @INIT
        """)
        assert mod.f({}) == {3: True}
        assert mod.f({"a": 1}) == {"a": 1, 3: True}
        assert mod.f({3: False}) == {3: True}

        assert mod.f([0, 1, 2, False]) == [0, 1, 2, True]
        with pytest.raises(IndexError):
            mod.f([])

    def test_setitem_s(self):
        import pytest
        mod = self.make_module("""
            HPy_DEF_METH_O(f)
            static HPy f_impl(HPyContext ctx, HPy self, HPy arg)
            {
                int result;
                result = HPy_SetItem_s(ctx, arg, "limes", ctx->h_True);
                if (result < 0)
                    return HPy_NULL;
                return arg;
            }
            @EXPORT f HPy_METH_O
            @INIT
        """)
        assert mod.f({}) == {"limes": True}
        assert mod.f({"a": 1}) == {"a": 1, "limes": True}
        assert mod.f({"limes": False}) == {"limes": True}

        with pytest.raises(TypeError):
            mod.f([])
