struct IOleCacheControlVtbl
{
HRESULT_0 (*QueryInterface)(IOleCacheControl_0 *, const IID *const, void **);
ULONG (*AddRef)(IOleCacheControl_0 *);
ULONG (*Release)(IOleCacheControl_0 *);
HRESULT_0 (*OnRun)(IOleCacheControl_0 *, LPDATAOBJECT);
HRESULT_0 (*OnStop)(IOleCacheControl_0 *);
};
