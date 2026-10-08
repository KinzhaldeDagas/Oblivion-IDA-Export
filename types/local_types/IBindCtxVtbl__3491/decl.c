struct IBindCtxVtbl
{
HRESULT_0 (*QueryInterface)(IBindCtx_0 *, const IID *const, void **) __offset(OFF64|AUTO);
ULONG (*AddRef)(IBindCtx_0 *) __offset(OFF64|AUTO);
ULONG (*Release)(IBindCtx_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*RegisterObjectBound)(IBindCtx_0 *, IUnknown_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*RevokeObjectBound)(IBindCtx_0 *, IUnknown_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*ReleaseBoundObjects)(IBindCtx_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*SetBindOptions)(IBindCtx_0 *, BIND_OPTS *) __offset(OFF64|AUTO);
HRESULT_0 (*GetBindOptions)(IBindCtx_0 *, BIND_OPTS *) __offset(OFF64|AUTO);
HRESULT_0 (*GetRunningObjectTable)(IBindCtx_0 *, IRunningObjectTable_0 **) __offset(OFF64|AUTO);
HRESULT_0 (*RegisterObjectParam)(IBindCtx_0 *, LPOLESTR, IUnknown_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*GetObjectParam)(IBindCtx_0 *, LPOLESTR, IUnknown_0 **) __offset(OFF64|AUTO);
HRESULT_0 (*EnumObjectParam)(IBindCtx_0 *, IEnumString_0 **) __offset(OFF64|AUTO);
HRESULT_0 (*RevokeObjectParam)(IBindCtx_0 *, LPOLESTR) __offset(OFF64|AUTO);
};
