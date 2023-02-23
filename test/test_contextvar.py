"""
NOTE: this tests are also meant to be run as PyPy "applevel" tests.

This means that global imports will NOT be visible inside the test
functions. In particular, you have to "import pytest" inside the test in order
to be able to use e.g. pytest.raises (which on PyPy will be implemented by a
"fake pytest module")
"""
from .support import HPyTest


class TestHPyContextVar(HPyTest):

    def test_basics(self):
        mod = self.make_module("""
            HPyDef_METH(new, "new", HPyFunc_NOARGS)
            static HPy new_impl(HPyContext *ctx, HPy self)
            {
                return HPyContextVar_New(ctx, "test_contextvar", HPy_NULL);
            }

            HPyDef_METH(set, "set", HPyFunc_VARARGS)
            static HPy set_impl(HPyContext *ctx, HPy self, HPy *args, HPy_ssize_t nargs)
            {
                HPy obj, val;
                if (!HPyArg_Parse(ctx, NULL, args, nargs, "OO", &obj, &val))
                    return HPy_NULL;
                return HPyContextVar_Set(ctx, obj, val);
            }
            HPyDef_METH(get, "get", HPyFunc_VARARGS)
            static HPy get_impl(HPyContext *ctx, HPy self, HPy *args, HPy_ssize_t nargs)
            {
                HPy obj, def=HPy_NULL, val;
                if (!HPyArg_Parse(ctx, NULL, args, nargs, "O|O", &obj, &def))
                    return HPy_NULL;
                if (HPyContextVar_Get(ctx, obj, def, &val) < 0) {
                    return HPy_NULL;
                }
                return val;
            }


            @EXPORT(new)
            @EXPORT(get)
            @EXPORT(set)
            @INIT
        """)
        var = mod.new()
        tok = mod.set(var, 4)
        assert tok.var is var
        four = mod.get(var)
        assert four == 4
