struct IServiceProviderVtbl
{
HRESULT_0 (*QueryInterface)(IServiceProvider_0 *, const IID *const, void **);
ULONG (*AddRef)(IServiceProvider_0 *);
ULONG (*Release)(IServiceProvider_0 *);
HRESULT_0 (*QueryService)(IServiceProvider_0 *, const GUID *const, const IID *const, void **);
};
