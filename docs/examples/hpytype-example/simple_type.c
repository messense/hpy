#include <hpy.h>

// BEGIN: PointObject
typedef struct {
    long x;
    long y;
} PointObject;
HPyType_HELPERS(PointObject)
// END: PointObject

// BEGIN: members
HPyDef_MEMBER(Point_x, "x", HPyMember_LONG, offsetof(PointObject, x))
HPyDef_MEMBER(Point_y, "y", HPyMember_LONG, offsetof(PointObject, y))
// END: members

// BEGIN: methods
HPyDef_METH(Point_foo, "foo", HPyFunc_NOARGS)
static HPy Point_foo_impl(HPyContext *ctx, HPy self)
{
    PointObject *point = PointObject_AsStruct(ctx, self);
    return HPyLong_FromLong(ctx, point->x * 10 + point->y);
}
// END: methods

// BEGIN: getset
HPyDef_GETSET(Point_z, "z", .closure=(void *)1000)
static HPy Point_z_get(HPyContext *ctx, HPy self, void *closure)
{
    PointObject *point = PointObject_AsStruct(ctx, self);
    return HPyLong_FromLong(ctx, point->x*10 + point->y + (long)(HPy_ssize_t)closure);
}

static int Point_z_set(HPyContext *ctx, HPy self, HPy value, void *closure)
{
    PointObject *point = PointObject_AsStruct(ctx, self);
    long current = point->x*10 + point->y + (long)(HPy_ssize_t)closure;
    long target = HPyLong_AsLong(ctx, value);  // assume no exception
    point->y += target - current;
    return 0;
}
// END: getset

// BEGIN: slots
HPyDef_SLOT(Point_new, HPy_tp_new)
static HPy Point_new_impl(HPyContext *ctx, HPy cls, HPy *args,
        HPy_ssize_t nargs, HPy kw)
{
    long x, y;
    if (!HPyArg_Parse(ctx, NULL, args, nargs, "ll", &x, &y))
        return HPy_NULL;
    PointObject *point;
    HPy h_point = HPy_New(ctx, cls, &point);
    if (HPy_IsNull(h_point))
        return HPy_NULL;
    point->x = x;
    point->y = y;
    return h_point;
}
// END: slots

// BEGIN: defines
static HPyDef *Point_defines[] = {
    &Point_x,
    &Point_y,
    &Point_z,
    &Point_new,
    &Point_foo,
    NULL
};
// END: defines

// BEGIN: spec
static HPyType_Spec Point_spec = {
    .name = "simple_type.Point",
    .basicsize = sizeof(PointObject),
    .builtin_shape = PointObject_SHAPE,
    .defines = Point_defines
};
// END: spec

static HPyModuleDef moduledef = {
    .name = "simple_type",
    .doc = "A simple HPy type",
    .size = -1,
    .legacy_methods = NULL,
};

HPy_MODINIT(simple_type)
static HPy init_simple_type_impl(HPyContext *ctx)
{
    HPy m = HPy_NULL;
    m = HPyModule_Create(ctx, &moduledef);
    if (HPy_IsNull(m))
        goto MODINIT_ERROR;

// BEGIN: add_type
    if (!HPyHelpers_AddType(ctx, m, "Point", &Point_spec, NULL)) {
        goto MODINIT_ERROR;
    }
// END: add_type

    return m;

    MODINIT_ERROR:

    if (!HPy_IsNull(m))
        HPy_Close(ctx, m);
    return HPy_NULL;
}
