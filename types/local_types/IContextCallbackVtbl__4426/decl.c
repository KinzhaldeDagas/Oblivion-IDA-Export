struct IContextCallbackVtbl
{
HRESULT_0 (*QueryInterface)(IContextCallback_0 *, const IID *const, void **);
ULONG (*AddRef)(IContextCallback_0 *);
ULONG (*Release)(IContextCallback_0 *);
HRESULT_0 (*ContextCallback)(IContextCallback_0 *, PFNCONTEXTCALL, ComCallData *, const IID *const, int, IUnknown_0 *);
};
