struct ICallFactoryVtbl
{
HRESULT_0 (*QueryInterface)(ICallFactory_0 *, const IID *const, void **);
ULONG (*AddRef)(ICallFactory_0 *);
ULONG (*Release)(ICallFactory_0 *);
HRESULT_0 (*CreateCall)(ICallFactory_0 *, const IID *const, IUnknown_0 *, const IID *const, IUnknown_0 **);
};
