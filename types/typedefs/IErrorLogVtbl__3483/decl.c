struct IErrorLogVtbl
{
HRESULT_0 (*QueryInterface)(IErrorLog_0 *, const IID *const, void **);
ULONG (*AddRef)(IErrorLog_0 *);
ULONG (*Release)(IErrorLog_0 *);
HRESULT_0 (*AddError)(IErrorLog_0 *, LPCOLESTR, EXCEPINFO *);
};
