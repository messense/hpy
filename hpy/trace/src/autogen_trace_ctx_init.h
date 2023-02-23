
/*
   DO NOT EDIT THIS FILE!

   This file is automatically generated by hpy.tools.autogen.trace.autogen_tracer_ctx_init_h
   See also hpy.tools.autogen and hpy/tools/public_api.h

   Run this to regenerate:
       make autogen

*/

HPy trace_ctx_Dup(HPyContext *tctx, HPy h);
void trace_ctx_Close(HPyContext *tctx, HPy h);
HPy trace_ctx_Long_FromInt32_t(HPyContext *tctx, int32_t value);
HPy trace_ctx_Long_FromUInt32_t(HPyContext *tctx, uint32_t value);
HPy trace_ctx_Long_FromInt64_t(HPyContext *tctx, int64_t v);
HPy trace_ctx_Long_FromUInt64_t(HPyContext *tctx, uint64_t v);
HPy trace_ctx_Long_FromSize_t(HPyContext *tctx, size_t value);
HPy trace_ctx_Long_FromSsize_t(HPyContext *tctx, HPy_ssize_t value);
int32_t trace_ctx_Long_AsInt32_t(HPyContext *tctx, HPy h);
uint32_t trace_ctx_Long_AsUInt32_t(HPyContext *tctx, HPy h);
uint32_t trace_ctx_Long_AsUInt32_tMask(HPyContext *tctx, HPy h);
int64_t trace_ctx_Long_AsInt64_t(HPyContext *tctx, HPy h);
uint64_t trace_ctx_Long_AsUInt64_t(HPyContext *tctx, HPy h);
uint64_t trace_ctx_Long_AsUInt64_tMask(HPyContext *tctx, HPy h);
size_t trace_ctx_Long_AsSize_t(HPyContext *tctx, HPy h);
HPy_ssize_t trace_ctx_Long_AsSsize_t(HPyContext *tctx, HPy h);
void *trace_ctx_Long_AsVoidPtr(HPyContext *tctx, HPy h);
double trace_ctx_Long_AsDouble(HPyContext *tctx, HPy h);
HPy trace_ctx_Float_FromDouble(HPyContext *tctx, double v);
double trace_ctx_Float_AsDouble(HPyContext *tctx, HPy h);
HPy trace_ctx_Bool_FromBool(HPyContext *tctx, bool v);
HPy_ssize_t trace_ctx_Length(HPyContext *tctx, HPy h);
int trace_ctx_Number_Check(HPyContext *tctx, HPy h);
HPy trace_ctx_Add(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_Subtract(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_Multiply(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_MatrixMultiply(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_FloorDivide(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_TrueDivide(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_Remainder(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_Divmod(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_Power(HPyContext *tctx, HPy h1, HPy h2, HPy h3);
HPy trace_ctx_Negative(HPyContext *tctx, HPy h1);
HPy trace_ctx_Positive(HPyContext *tctx, HPy h1);
HPy trace_ctx_Absolute(HPyContext *tctx, HPy h1);
HPy trace_ctx_Invert(HPyContext *tctx, HPy h1);
HPy trace_ctx_Lshift(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_Rshift(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_And(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_Xor(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_Or(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_Index(HPyContext *tctx, HPy h1);
HPy trace_ctx_Long(HPyContext *tctx, HPy h1);
HPy trace_ctx_Float(HPyContext *tctx, HPy h1);
HPy trace_ctx_InPlaceAdd(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_InPlaceSubtract(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_InPlaceMultiply(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_InPlaceMatrixMultiply(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_InPlaceFloorDivide(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_InPlaceTrueDivide(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_InPlaceRemainder(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_InPlacePower(HPyContext *tctx, HPy h1, HPy h2, HPy h3);
HPy trace_ctx_InPlaceLshift(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_InPlaceRshift(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_InPlaceAnd(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_InPlaceXor(HPyContext *tctx, HPy h1, HPy h2);
HPy trace_ctx_InPlaceOr(HPyContext *tctx, HPy h1, HPy h2);
int trace_ctx_Callable_Check(HPyContext *tctx, HPy h);
HPy trace_ctx_CallTupleDict(HPyContext *tctx, HPy callable, HPy args, HPy kw);
void trace_ctx_Err_SetString(HPyContext *tctx, HPy h_type, const char *utf8_message);
void trace_ctx_Err_SetObject(HPyContext *tctx, HPy h_type, HPy h_value);
HPy trace_ctx_Err_SetFromErrnoWithFilename(HPyContext *tctx, HPy h_type, const char *filename_fsencoded);
void trace_ctx_Err_SetFromErrnoWithFilenameObjects(HPyContext *tctx, HPy h_type, HPy filename1, HPy filename2);
int trace_ctx_Err_Occurred(HPyContext *tctx);
int trace_ctx_Err_ExceptionMatches(HPyContext *tctx, HPy exc);
void trace_ctx_Err_NoMemory(HPyContext *tctx);
void trace_ctx_Err_Clear(HPyContext *tctx);
HPy trace_ctx_Err_NewException(HPyContext *tctx, const char *utf8_name, HPy base, HPy dict);
HPy trace_ctx_Err_NewExceptionWithDoc(HPyContext *tctx, const char *utf8_name, const char *utf8_doc, HPy base, HPy dict);
int trace_ctx_Err_WarnEx(HPyContext *tctx, HPy category, const char *utf8_message, HPy_ssize_t stack_level);
void trace_ctx_Err_WriteUnraisable(HPyContext *tctx, HPy obj);
int trace_ctx_IsTrue(HPyContext *tctx, HPy h);
HPy trace_ctx_Type_FromSpec(HPyContext *tctx, HPyType_Spec *spec, HPyType_SpecParam *params);
HPy trace_ctx_Type_GenericNew(HPyContext *tctx, HPy type, HPy *args, HPy_ssize_t nargs, HPy kw);
HPy trace_ctx_GetAttr(HPyContext *tctx, HPy obj, HPy name);
HPy trace_ctx_GetAttr_s(HPyContext *tctx, HPy obj, const char *utf8_name);
int trace_ctx_HasAttr(HPyContext *tctx, HPy obj, HPy name);
int trace_ctx_HasAttr_s(HPyContext *tctx, HPy obj, const char *utf8_name);
int trace_ctx_SetAttr(HPyContext *tctx, HPy obj, HPy name, HPy value);
int trace_ctx_SetAttr_s(HPyContext *tctx, HPy obj, const char *utf8_name, HPy value);
HPy trace_ctx_GetItem(HPyContext *tctx, HPy obj, HPy key);
HPy trace_ctx_GetItem_i(HPyContext *tctx, HPy obj, HPy_ssize_t idx);
HPy trace_ctx_GetItem_s(HPyContext *tctx, HPy obj, const char *utf8_key);
int trace_ctx_Contains(HPyContext *tctx, HPy container, HPy key);
int trace_ctx_SetItem(HPyContext *tctx, HPy obj, HPy key, HPy value);
int trace_ctx_SetItem_i(HPyContext *tctx, HPy obj, HPy_ssize_t idx, HPy value);
int trace_ctx_SetItem_s(HPyContext *tctx, HPy obj, const char *utf8_key, HPy value);
int trace_ctx_DelItem(HPyContext *tctx, HPy obj, HPy key);
int trace_ctx_DelItem_i(HPyContext *tctx, HPy obj, HPy_ssize_t idx);
int trace_ctx_DelItem_s(HPyContext *tctx, HPy obj, const char *utf8_key);
HPy trace_ctx_Type(HPyContext *tctx, HPy obj);
int trace_ctx_TypeCheck(HPyContext *tctx, HPy obj, HPy type);
int trace_ctx_Is(HPyContext *tctx, HPy obj, HPy other);
void *trace_ctx_AsStruct_Object(HPyContext *tctx, HPy h);
void *trace_ctx_AsStruct_Legacy(HPyContext *tctx, HPy h);
void *trace_ctx_AsStruct_Type(HPyContext *tctx, HPy h);
void *trace_ctx_AsStruct_Long(HPyContext *tctx, HPy h);
void *trace_ctx_AsStruct_Float(HPyContext *tctx, HPy h);
void *trace_ctx_AsStruct_Unicode(HPyContext *tctx, HPy h);
void *trace_ctx_AsStruct_Tuple(HPyContext *tctx, HPy h);
void *trace_ctx_AsStruct_List(HPyContext *tctx, HPy h);
HPyType_BuiltinShape trace_ctx_Type_GetBuiltinShape(HPyContext *tctx, HPy h_type);
HPy trace_ctx_New(HPyContext *tctx, HPy h_type, void **data);
HPy trace_ctx_Repr(HPyContext *tctx, HPy obj);
HPy trace_ctx_Str(HPyContext *tctx, HPy obj);
HPy trace_ctx_ASCII(HPyContext *tctx, HPy obj);
HPy trace_ctx_Bytes(HPyContext *tctx, HPy obj);
HPy trace_ctx_RichCompare(HPyContext *tctx, HPy v, HPy w, int op);
int trace_ctx_RichCompareBool(HPyContext *tctx, HPy v, HPy w, int op);
HPy_hash_t trace_ctx_Hash(HPyContext *tctx, HPy obj);
int trace_ctx_Bytes_Check(HPyContext *tctx, HPy h);
HPy_ssize_t trace_ctx_Bytes_Size(HPyContext *tctx, HPy h);
HPy_ssize_t trace_ctx_Bytes_GET_SIZE(HPyContext *tctx, HPy h);
const char *trace_ctx_Bytes_AsString(HPyContext *tctx, HPy h);
const char *trace_ctx_Bytes_AS_STRING(HPyContext *tctx, HPy h);
HPy trace_ctx_Bytes_FromString(HPyContext *tctx, const char *bytes);
HPy trace_ctx_Bytes_FromStringAndSize(HPyContext *tctx, const char *bytes, HPy_ssize_t len);
HPy trace_ctx_Unicode_FromString(HPyContext *tctx, const char *utf8);
int trace_ctx_Unicode_Check(HPyContext *tctx, HPy h);
HPy trace_ctx_Unicode_AsASCIIString(HPyContext *tctx, HPy h);
HPy trace_ctx_Unicode_AsLatin1String(HPyContext *tctx, HPy h);
HPy trace_ctx_Unicode_AsUTF8String(HPyContext *tctx, HPy h);
const char *trace_ctx_Unicode_AsUTF8AndSize(HPyContext *tctx, HPy h, HPy_ssize_t *size);
HPy trace_ctx_Unicode_FromWideChar(HPyContext *tctx, const wchar_t *w, HPy_ssize_t size);
HPy trace_ctx_Unicode_DecodeFSDefault(HPyContext *tctx, const char *v);
HPy trace_ctx_Unicode_DecodeFSDefaultAndSize(HPyContext *tctx, const char *v, HPy_ssize_t size);
HPy trace_ctx_Unicode_EncodeFSDefault(HPyContext *tctx, HPy h);
HPy_UCS4 trace_ctx_Unicode_ReadChar(HPyContext *tctx, HPy h, HPy_ssize_t index);
HPy trace_ctx_Unicode_DecodeASCII(HPyContext *tctx, const char *ascii, HPy_ssize_t size, const char *errors);
HPy trace_ctx_Unicode_DecodeLatin1(HPyContext *tctx, const char *latin1, HPy_ssize_t size, const char *errors);
int trace_ctx_List_Check(HPyContext *tctx, HPy h);
HPy trace_ctx_List_New(HPyContext *tctx, HPy_ssize_t len);
int trace_ctx_List_Append(HPyContext *tctx, HPy h_list, HPy h_item);
int trace_ctx_Dict_Check(HPyContext *tctx, HPy h);
HPy trace_ctx_Dict_New(HPyContext *tctx);
int trace_ctx_Tuple_Check(HPyContext *tctx, HPy h);
HPy trace_ctx_Tuple_FromArray(HPyContext *tctx, HPy items[], HPy_ssize_t n);
HPy trace_ctx_Import_ImportModule(HPyContext *tctx, const char *utf8_name);
HPy trace_ctx_Capsule_New(HPyContext *tctx, void *pointer, const char *utf8_name, HPyCapsule_Destructor *destructor);
void *trace_ctx_Capsule_Get(HPyContext *tctx, HPy capsule, _HPyCapsule_key key, const char *utf8_name);
int trace_ctx_Capsule_IsValid(HPyContext *tctx, HPy capsule, const char *utf8_name);
int trace_ctx_Capsule_Set(HPyContext *tctx, HPy capsule, _HPyCapsule_key key, void *value);
HPy trace_ctx_FromPyObject(HPyContext *tctx, cpy_PyObject *obj);
cpy_PyObject *trace_ctx_AsPyObject(HPyContext *tctx, HPy h);
HPyListBuilder trace_ctx_ListBuilder_New(HPyContext *tctx, HPy_ssize_t size);
void trace_ctx_ListBuilder_Set(HPyContext *tctx, HPyListBuilder builder, HPy_ssize_t index, HPy h_item);
HPy trace_ctx_ListBuilder_Build(HPyContext *tctx, HPyListBuilder builder);
void trace_ctx_ListBuilder_Cancel(HPyContext *tctx, HPyListBuilder builder);
HPyTupleBuilder trace_ctx_TupleBuilder_New(HPyContext *tctx, HPy_ssize_t size);
void trace_ctx_TupleBuilder_Set(HPyContext *tctx, HPyTupleBuilder builder, HPy_ssize_t index, HPy h_item);
HPy trace_ctx_TupleBuilder_Build(HPyContext *tctx, HPyTupleBuilder builder);
void trace_ctx_TupleBuilder_Cancel(HPyContext *tctx, HPyTupleBuilder builder);
HPyTracker trace_ctx_Tracker_New(HPyContext *tctx, HPy_ssize_t size);
int trace_ctx_Tracker_Add(HPyContext *tctx, HPyTracker ht, HPy h);
void trace_ctx_Tracker_ForgetAll(HPyContext *tctx, HPyTracker ht);
void trace_ctx_Tracker_Close(HPyContext *tctx, HPyTracker ht);
void trace_ctx_Field_Store(HPyContext *tctx, HPy target_object, HPyField *target_field, HPy h);
HPy trace_ctx_Field_Load(HPyContext *tctx, HPy source_object, HPyField source_field);
void trace_ctx_ReenterPythonExecution(HPyContext *tctx, HPyThreadState state);
HPyThreadState trace_ctx_LeavePythonExecution(HPyContext *tctx);
void trace_ctx_Global_Store(HPyContext *tctx, HPyGlobal *global, HPy h);
HPy trace_ctx_Global_Load(HPyContext *tctx, HPyGlobal global);
void trace_ctx_Dump(HPyContext *tctx, HPy h);
HPy trace_ctx_Compile_s(HPyContext *tctx, const char *utf8_source, const char *utf8_filename, HPy_SourceKind kind);
HPy trace_ctx_EvalCode(HPyContext *tctx, HPy code, HPy globals, HPy locals);
HPy trace_ctx_ContextVar_New(HPyContext *tctx, const char *name, HPy default_value);
int32_t trace_ctx_ContextVar_Get(HPyContext *tctx, HPy context_var, HPy default_value, HPy *result);
HPy trace_ctx_ContextVar_Set(HPyContext *tctx, HPy context_var, HPy value);

static inline void trace_ctx_init_info(HPyTraceInfo *info, HPyContext *uctx)
{
    info->magic_number = HPY_TRACE_MAGIC;
    info->uctx = uctx;
    info->call_counts = (uint64_t *)calloc(253, sizeof(uint64_t));
    info->durations = (_HPyTime_t *)calloc(253, sizeof(_HPyTime_t));
    info->on_enter_func = HPy_NULL;
    info->on_exit_func = HPy_NULL;
}

static inline void trace_ctx_free_info(HPyTraceInfo *info)
{
    assert(info->magic_number == HPY_TRACE_MAGIC);
    free(info->call_counts);
    free(info->durations);
    HPy_Close(info->uctx, info->on_enter_func);
    HPy_Close(info->uctx, info->on_exit_func);
}

static inline void trace_ctx_init_fields(HPyContext *tctx, HPyContext *uctx)
{
    tctx->h_None = uctx->h_None;
    tctx->h_True = uctx->h_True;
    tctx->h_False = uctx->h_False;
    tctx->h_NotImplemented = uctx->h_NotImplemented;
    tctx->h_Ellipsis = uctx->h_Ellipsis;
    tctx->h_BaseException = uctx->h_BaseException;
    tctx->h_Exception = uctx->h_Exception;
    tctx->h_StopAsyncIteration = uctx->h_StopAsyncIteration;
    tctx->h_StopIteration = uctx->h_StopIteration;
    tctx->h_GeneratorExit = uctx->h_GeneratorExit;
    tctx->h_ArithmeticError = uctx->h_ArithmeticError;
    tctx->h_LookupError = uctx->h_LookupError;
    tctx->h_AssertionError = uctx->h_AssertionError;
    tctx->h_AttributeError = uctx->h_AttributeError;
    tctx->h_BufferError = uctx->h_BufferError;
    tctx->h_EOFError = uctx->h_EOFError;
    tctx->h_FloatingPointError = uctx->h_FloatingPointError;
    tctx->h_OSError = uctx->h_OSError;
    tctx->h_ImportError = uctx->h_ImportError;
    tctx->h_ModuleNotFoundError = uctx->h_ModuleNotFoundError;
    tctx->h_IndexError = uctx->h_IndexError;
    tctx->h_KeyError = uctx->h_KeyError;
    tctx->h_KeyboardInterrupt = uctx->h_KeyboardInterrupt;
    tctx->h_MemoryError = uctx->h_MemoryError;
    tctx->h_NameError = uctx->h_NameError;
    tctx->h_OverflowError = uctx->h_OverflowError;
    tctx->h_RuntimeError = uctx->h_RuntimeError;
    tctx->h_RecursionError = uctx->h_RecursionError;
    tctx->h_NotImplementedError = uctx->h_NotImplementedError;
    tctx->h_SyntaxError = uctx->h_SyntaxError;
    tctx->h_IndentationError = uctx->h_IndentationError;
    tctx->h_TabError = uctx->h_TabError;
    tctx->h_ReferenceError = uctx->h_ReferenceError;
    tctx->h_SystemError = uctx->h_SystemError;
    tctx->h_SystemExit = uctx->h_SystemExit;
    tctx->h_TypeError = uctx->h_TypeError;
    tctx->h_UnboundLocalError = uctx->h_UnboundLocalError;
    tctx->h_UnicodeError = uctx->h_UnicodeError;
    tctx->h_UnicodeEncodeError = uctx->h_UnicodeEncodeError;
    tctx->h_UnicodeDecodeError = uctx->h_UnicodeDecodeError;
    tctx->h_UnicodeTranslateError = uctx->h_UnicodeTranslateError;
    tctx->h_ValueError = uctx->h_ValueError;
    tctx->h_ZeroDivisionError = uctx->h_ZeroDivisionError;
    tctx->h_BlockingIOError = uctx->h_BlockingIOError;
    tctx->h_BrokenPipeError = uctx->h_BrokenPipeError;
    tctx->h_ChildProcessError = uctx->h_ChildProcessError;
    tctx->h_ConnectionError = uctx->h_ConnectionError;
    tctx->h_ConnectionAbortedError = uctx->h_ConnectionAbortedError;
    tctx->h_ConnectionRefusedError = uctx->h_ConnectionRefusedError;
    tctx->h_ConnectionResetError = uctx->h_ConnectionResetError;
    tctx->h_FileExistsError = uctx->h_FileExistsError;
    tctx->h_FileNotFoundError = uctx->h_FileNotFoundError;
    tctx->h_InterruptedError = uctx->h_InterruptedError;
    tctx->h_IsADirectoryError = uctx->h_IsADirectoryError;
    tctx->h_NotADirectoryError = uctx->h_NotADirectoryError;
    tctx->h_PermissionError = uctx->h_PermissionError;
    tctx->h_ProcessLookupError = uctx->h_ProcessLookupError;
    tctx->h_TimeoutError = uctx->h_TimeoutError;
    tctx->h_Warning = uctx->h_Warning;
    tctx->h_UserWarning = uctx->h_UserWarning;
    tctx->h_DeprecationWarning = uctx->h_DeprecationWarning;
    tctx->h_PendingDeprecationWarning = uctx->h_PendingDeprecationWarning;
    tctx->h_SyntaxWarning = uctx->h_SyntaxWarning;
    tctx->h_RuntimeWarning = uctx->h_RuntimeWarning;
    tctx->h_FutureWarning = uctx->h_FutureWarning;
    tctx->h_ImportWarning = uctx->h_ImportWarning;
    tctx->h_UnicodeWarning = uctx->h_UnicodeWarning;
    tctx->h_BytesWarning = uctx->h_BytesWarning;
    tctx->h_ResourceWarning = uctx->h_ResourceWarning;
    tctx->h_BaseObjectType = uctx->h_BaseObjectType;
    tctx->h_TypeType = uctx->h_TypeType;
    tctx->h_BoolType = uctx->h_BoolType;
    tctx->h_LongType = uctx->h_LongType;
    tctx->h_FloatType = uctx->h_FloatType;
    tctx->h_UnicodeType = uctx->h_UnicodeType;
    tctx->h_TupleType = uctx->h_TupleType;
    tctx->h_ListType = uctx->h_ListType;
    tctx->h_ComplexType = uctx->h_ComplexType;
    tctx->h_BytesType = uctx->h_BytesType;
    tctx->h_MemoryViewType = uctx->h_MemoryViewType;
    tctx->h_CapsuleType = uctx->h_CapsuleType;
    tctx->h_SliceType = uctx->h_SliceType;
    tctx->h_Builtins = uctx->h_Builtins;
    tctx->ctx_Dup = &trace_ctx_Dup;
    tctx->ctx_Close = &trace_ctx_Close;
    tctx->ctx_Long_FromInt32_t = &trace_ctx_Long_FromInt32_t;
    tctx->ctx_Long_FromUInt32_t = &trace_ctx_Long_FromUInt32_t;
    tctx->ctx_Long_FromInt64_t = &trace_ctx_Long_FromInt64_t;
    tctx->ctx_Long_FromUInt64_t = &trace_ctx_Long_FromUInt64_t;
    tctx->ctx_Long_FromSize_t = &trace_ctx_Long_FromSize_t;
    tctx->ctx_Long_FromSsize_t = &trace_ctx_Long_FromSsize_t;
    tctx->ctx_Long_AsInt32_t = &trace_ctx_Long_AsInt32_t;
    tctx->ctx_Long_AsUInt32_t = &trace_ctx_Long_AsUInt32_t;
    tctx->ctx_Long_AsUInt32_tMask = &trace_ctx_Long_AsUInt32_tMask;
    tctx->ctx_Long_AsInt64_t = &trace_ctx_Long_AsInt64_t;
    tctx->ctx_Long_AsUInt64_t = &trace_ctx_Long_AsUInt64_t;
    tctx->ctx_Long_AsUInt64_tMask = &trace_ctx_Long_AsUInt64_tMask;
    tctx->ctx_Long_AsSize_t = &trace_ctx_Long_AsSize_t;
    tctx->ctx_Long_AsSsize_t = &trace_ctx_Long_AsSsize_t;
    tctx->ctx_Long_AsVoidPtr = &trace_ctx_Long_AsVoidPtr;
    tctx->ctx_Long_AsDouble = &trace_ctx_Long_AsDouble;
    tctx->ctx_Float_FromDouble = &trace_ctx_Float_FromDouble;
    tctx->ctx_Float_AsDouble = &trace_ctx_Float_AsDouble;
    tctx->ctx_Bool_FromBool = &trace_ctx_Bool_FromBool;
    tctx->ctx_Length = &trace_ctx_Length;
    tctx->ctx_Number_Check = &trace_ctx_Number_Check;
    tctx->ctx_Add = &trace_ctx_Add;
    tctx->ctx_Subtract = &trace_ctx_Subtract;
    tctx->ctx_Multiply = &trace_ctx_Multiply;
    tctx->ctx_MatrixMultiply = &trace_ctx_MatrixMultiply;
    tctx->ctx_FloorDivide = &trace_ctx_FloorDivide;
    tctx->ctx_TrueDivide = &trace_ctx_TrueDivide;
    tctx->ctx_Remainder = &trace_ctx_Remainder;
    tctx->ctx_Divmod = &trace_ctx_Divmod;
    tctx->ctx_Power = &trace_ctx_Power;
    tctx->ctx_Negative = &trace_ctx_Negative;
    tctx->ctx_Positive = &trace_ctx_Positive;
    tctx->ctx_Absolute = &trace_ctx_Absolute;
    tctx->ctx_Invert = &trace_ctx_Invert;
    tctx->ctx_Lshift = &trace_ctx_Lshift;
    tctx->ctx_Rshift = &trace_ctx_Rshift;
    tctx->ctx_And = &trace_ctx_And;
    tctx->ctx_Xor = &trace_ctx_Xor;
    tctx->ctx_Or = &trace_ctx_Or;
    tctx->ctx_Index = &trace_ctx_Index;
    tctx->ctx_Long = &trace_ctx_Long;
    tctx->ctx_Float = &trace_ctx_Float;
    tctx->ctx_InPlaceAdd = &trace_ctx_InPlaceAdd;
    tctx->ctx_InPlaceSubtract = &trace_ctx_InPlaceSubtract;
    tctx->ctx_InPlaceMultiply = &trace_ctx_InPlaceMultiply;
    tctx->ctx_InPlaceMatrixMultiply = &trace_ctx_InPlaceMatrixMultiply;
    tctx->ctx_InPlaceFloorDivide = &trace_ctx_InPlaceFloorDivide;
    tctx->ctx_InPlaceTrueDivide = &trace_ctx_InPlaceTrueDivide;
    tctx->ctx_InPlaceRemainder = &trace_ctx_InPlaceRemainder;
    tctx->ctx_InPlacePower = &trace_ctx_InPlacePower;
    tctx->ctx_InPlaceLshift = &trace_ctx_InPlaceLshift;
    tctx->ctx_InPlaceRshift = &trace_ctx_InPlaceRshift;
    tctx->ctx_InPlaceAnd = &trace_ctx_InPlaceAnd;
    tctx->ctx_InPlaceXor = &trace_ctx_InPlaceXor;
    tctx->ctx_InPlaceOr = &trace_ctx_InPlaceOr;
    tctx->ctx_Callable_Check = &trace_ctx_Callable_Check;
    tctx->ctx_CallTupleDict = &trace_ctx_CallTupleDict;
    tctx->ctx_FatalError = uctx->ctx_FatalError;
    tctx->ctx_Err_SetString = &trace_ctx_Err_SetString;
    tctx->ctx_Err_SetObject = &trace_ctx_Err_SetObject;
    tctx->ctx_Err_SetFromErrnoWithFilename = &trace_ctx_Err_SetFromErrnoWithFilename;
    tctx->ctx_Err_SetFromErrnoWithFilenameObjects = &trace_ctx_Err_SetFromErrnoWithFilenameObjects;
    tctx->ctx_Err_Occurred = &trace_ctx_Err_Occurred;
    tctx->ctx_Err_ExceptionMatches = &trace_ctx_Err_ExceptionMatches;
    tctx->ctx_Err_NoMemory = &trace_ctx_Err_NoMemory;
    tctx->ctx_Err_Clear = &trace_ctx_Err_Clear;
    tctx->ctx_Err_NewException = &trace_ctx_Err_NewException;
    tctx->ctx_Err_NewExceptionWithDoc = &trace_ctx_Err_NewExceptionWithDoc;
    tctx->ctx_Err_WarnEx = &trace_ctx_Err_WarnEx;
    tctx->ctx_Err_WriteUnraisable = &trace_ctx_Err_WriteUnraisable;
    tctx->ctx_IsTrue = &trace_ctx_IsTrue;
    tctx->ctx_Type_FromSpec = &trace_ctx_Type_FromSpec;
    tctx->ctx_Type_GenericNew = &trace_ctx_Type_GenericNew;
    tctx->ctx_GetAttr = &trace_ctx_GetAttr;
    tctx->ctx_GetAttr_s = &trace_ctx_GetAttr_s;
    tctx->ctx_HasAttr = &trace_ctx_HasAttr;
    tctx->ctx_HasAttr_s = &trace_ctx_HasAttr_s;
    tctx->ctx_SetAttr = &trace_ctx_SetAttr;
    tctx->ctx_SetAttr_s = &trace_ctx_SetAttr_s;
    tctx->ctx_GetItem = &trace_ctx_GetItem;
    tctx->ctx_GetItem_i = &trace_ctx_GetItem_i;
    tctx->ctx_GetItem_s = &trace_ctx_GetItem_s;
    tctx->ctx_Contains = &trace_ctx_Contains;
    tctx->ctx_SetItem = &trace_ctx_SetItem;
    tctx->ctx_SetItem_i = &trace_ctx_SetItem_i;
    tctx->ctx_SetItem_s = &trace_ctx_SetItem_s;
    tctx->ctx_DelItem = &trace_ctx_DelItem;
    tctx->ctx_DelItem_i = &trace_ctx_DelItem_i;
    tctx->ctx_DelItem_s = &trace_ctx_DelItem_s;
    tctx->ctx_Type = &trace_ctx_Type;
    tctx->ctx_TypeCheck = &trace_ctx_TypeCheck;
    tctx->ctx_Is = &trace_ctx_Is;
    tctx->ctx_AsStruct_Object = &trace_ctx_AsStruct_Object;
    tctx->ctx_AsStruct_Legacy = &trace_ctx_AsStruct_Legacy;
    tctx->ctx_AsStruct_Type = &trace_ctx_AsStruct_Type;
    tctx->ctx_AsStruct_Long = &trace_ctx_AsStruct_Long;
    tctx->ctx_AsStruct_Float = &trace_ctx_AsStruct_Float;
    tctx->ctx_AsStruct_Unicode = &trace_ctx_AsStruct_Unicode;
    tctx->ctx_AsStruct_Tuple = &trace_ctx_AsStruct_Tuple;
    tctx->ctx_AsStruct_List = &trace_ctx_AsStruct_List;
    tctx->ctx_Type_GetBuiltinShape = &trace_ctx_Type_GetBuiltinShape;
    tctx->ctx_New = &trace_ctx_New;
    tctx->ctx_Repr = &trace_ctx_Repr;
    tctx->ctx_Str = &trace_ctx_Str;
    tctx->ctx_ASCII = &trace_ctx_ASCII;
    tctx->ctx_Bytes = &trace_ctx_Bytes;
    tctx->ctx_RichCompare = &trace_ctx_RichCompare;
    tctx->ctx_RichCompareBool = &trace_ctx_RichCompareBool;
    tctx->ctx_Hash = &trace_ctx_Hash;
    tctx->ctx_Bytes_Check = &trace_ctx_Bytes_Check;
    tctx->ctx_Bytes_Size = &trace_ctx_Bytes_Size;
    tctx->ctx_Bytes_GET_SIZE = &trace_ctx_Bytes_GET_SIZE;
    tctx->ctx_Bytes_AsString = &trace_ctx_Bytes_AsString;
    tctx->ctx_Bytes_AS_STRING = &trace_ctx_Bytes_AS_STRING;
    tctx->ctx_Bytes_FromString = &trace_ctx_Bytes_FromString;
    tctx->ctx_Bytes_FromStringAndSize = &trace_ctx_Bytes_FromStringAndSize;
    tctx->ctx_Unicode_FromString = &trace_ctx_Unicode_FromString;
    tctx->ctx_Unicode_Check = &trace_ctx_Unicode_Check;
    tctx->ctx_Unicode_AsASCIIString = &trace_ctx_Unicode_AsASCIIString;
    tctx->ctx_Unicode_AsLatin1String = &trace_ctx_Unicode_AsLatin1String;
    tctx->ctx_Unicode_AsUTF8String = &trace_ctx_Unicode_AsUTF8String;
    tctx->ctx_Unicode_AsUTF8AndSize = &trace_ctx_Unicode_AsUTF8AndSize;
    tctx->ctx_Unicode_FromWideChar = &trace_ctx_Unicode_FromWideChar;
    tctx->ctx_Unicode_DecodeFSDefault = &trace_ctx_Unicode_DecodeFSDefault;
    tctx->ctx_Unicode_DecodeFSDefaultAndSize = &trace_ctx_Unicode_DecodeFSDefaultAndSize;
    tctx->ctx_Unicode_EncodeFSDefault = &trace_ctx_Unicode_EncodeFSDefault;
    tctx->ctx_Unicode_ReadChar = &trace_ctx_Unicode_ReadChar;
    tctx->ctx_Unicode_DecodeASCII = &trace_ctx_Unicode_DecodeASCII;
    tctx->ctx_Unicode_DecodeLatin1 = &trace_ctx_Unicode_DecodeLatin1;
    tctx->ctx_List_Check = &trace_ctx_List_Check;
    tctx->ctx_List_New = &trace_ctx_List_New;
    tctx->ctx_List_Append = &trace_ctx_List_Append;
    tctx->ctx_Dict_Check = &trace_ctx_Dict_Check;
    tctx->ctx_Dict_New = &trace_ctx_Dict_New;
    tctx->ctx_Tuple_Check = &trace_ctx_Tuple_Check;
    tctx->ctx_Tuple_FromArray = &trace_ctx_Tuple_FromArray;
    tctx->ctx_Import_ImportModule = &trace_ctx_Import_ImportModule;
    tctx->ctx_Capsule_New = &trace_ctx_Capsule_New;
    tctx->ctx_Capsule_Get = &trace_ctx_Capsule_Get;
    tctx->ctx_Capsule_IsValid = &trace_ctx_Capsule_IsValid;
    tctx->ctx_Capsule_Set = &trace_ctx_Capsule_Set;
    tctx->ctx_FromPyObject = &trace_ctx_FromPyObject;
    tctx->ctx_AsPyObject = &trace_ctx_AsPyObject;
    tctx->ctx_CallRealFunctionFromTrampoline = uctx->ctx_CallRealFunctionFromTrampoline;
    tctx->ctx_ListBuilder_New = &trace_ctx_ListBuilder_New;
    tctx->ctx_ListBuilder_Set = &trace_ctx_ListBuilder_Set;
    tctx->ctx_ListBuilder_Build = &trace_ctx_ListBuilder_Build;
    tctx->ctx_ListBuilder_Cancel = &trace_ctx_ListBuilder_Cancel;
    tctx->ctx_TupleBuilder_New = &trace_ctx_TupleBuilder_New;
    tctx->ctx_TupleBuilder_Set = &trace_ctx_TupleBuilder_Set;
    tctx->ctx_TupleBuilder_Build = &trace_ctx_TupleBuilder_Build;
    tctx->ctx_TupleBuilder_Cancel = &trace_ctx_TupleBuilder_Cancel;
    tctx->ctx_Tracker_New = &trace_ctx_Tracker_New;
    tctx->ctx_Tracker_Add = &trace_ctx_Tracker_Add;
    tctx->ctx_Tracker_ForgetAll = &trace_ctx_Tracker_ForgetAll;
    tctx->ctx_Tracker_Close = &trace_ctx_Tracker_Close;
    tctx->ctx_Field_Store = &trace_ctx_Field_Store;
    tctx->ctx_Field_Load = &trace_ctx_Field_Load;
    tctx->ctx_ReenterPythonExecution = &trace_ctx_ReenterPythonExecution;
    tctx->ctx_LeavePythonExecution = &trace_ctx_LeavePythonExecution;
    tctx->ctx_Global_Store = &trace_ctx_Global_Store;
    tctx->ctx_Global_Load = &trace_ctx_Global_Load;
    tctx->ctx_Dump = &trace_ctx_Dump;
    tctx->ctx_Compile_s = &trace_ctx_Compile_s;
    tctx->ctx_EvalCode = &trace_ctx_EvalCode;
    tctx->ctx_ContextVar_New = &trace_ctx_ContextVar_New;
    tctx->ctx_ContextVar_Get = &trace_ctx_ContextVar_Get;
    tctx->ctx_ContextVar_Set = &trace_ctx_ContextVar_Set;
}
