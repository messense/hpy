#include <hpy.h>
#include <string.h>

// BEGIN: spec_Dummy
static HPyType_Spec Dummy_spec = {
    .name = "builtin_type.Dummy",
    .basicsize = 0
};

// END: spec_Dummy
static void make_Dummy(HPyContext *ctx, HPy module)
{
// BEGIN: add_Dummy
    HPyType_SpecParam param[] = {
        { HPyType_SpecParam_Base, ctx->h_UnicodeType },
        { (HPyType_SpecParam_Kind)0 }
    };
    if (!HPyHelpers_AddType(ctx, module, "Dummy", &Dummy_spec, param))
        return;
// END: add_Dummy
}

// BEGIN: LanguageObject
typedef struct {
    char *language;
} LanguageObject;
HPyType_HELPERS(LanguageObject, HPyType_BuiltinShape_Unicode)
// END: LanguageObject

HPyDef_GETSET(Language_lang, "lang")
static HPy Language_lang_get(HPyContext *ctx, HPy self, void *closure)
{
    LanguageObject *data = LanguageObject_AsStruct(ctx, self);
    return HPyUnicode_FromString(ctx, data->language);
}
static int Language_lang_set(HPyContext *ctx, HPy self, HPy value, void *closure)
{
    LanguageObject *data = LanguageObject_AsStruct(ctx, self);
    HPy_ssize_t size;
    const char *s = HPyUnicode_AsUTF8AndSize(ctx, value, &size);
    if (s == NULL)
        return -1;
    data->language = (char *)calloc(size+1, sizeof(char));
    strncpy(data->language, s, size);
    return 0;
}

HPyDef_SLOT(Language_destroy, HPy_tp_destroy)
static void Language_destroy_impl(void *data)
{
    LanguageObject *ldata = (LanguageObject *)data;
    if (ldata->language)
        free(ldata->language);
}

HPyDef *Language_defines[] = {
    &Language_lang,
    &Language_destroy,
    NULL
};


// BEGIN: spec_Language
static HPyType_Spec Language_spec = {
    .name = "builtin_type.Language",
    .basicsize = sizeof(LanguageObject),
    .builtin_shape = SHAPE(LanguageObject),
    .defines = Language_defines
};
// END: spec_Language

static void make_Language(HPyContext *ctx, HPy module)
{
// BEGIN: add_Language
    HPyType_SpecParam param[] = {
        { HPyType_SpecParam_Base, ctx->h_UnicodeType },
        { (HPyType_SpecParam_Kind)0 }
    };
    if (!HPyHelpers_AddType(ctx, module, "Language", &Language_spec, param))
        return;
// END: add_Language
}

static HPyModuleDef moduledef = {
    .name = "builtin_type",
    .size = -1,
};

HPy_MODINIT(builtin_type)
static HPy init_builtin_type_impl(HPyContext *ctx)
{
    HPy m = HPyModule_Create(ctx, &moduledef);
    if (HPy_IsNull(m))
        goto MODINIT_ERROR;

    make_Dummy(ctx, m);
    if (HPyErr_Occurred(ctx))
        goto MODINIT_ERROR;

    make_Language(ctx, m);
    if (HPyErr_Occurred(ctx))
        goto MODINIT_ERROR;

    return m;

    MODINIT_ERROR:

    if (!HPy_IsNull(m))
        HPy_Close(ctx, m);
    return HPy_NULL;
}
