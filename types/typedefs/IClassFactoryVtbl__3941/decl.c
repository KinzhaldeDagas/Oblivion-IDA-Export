struct IClassFactoryVtbl
{
HRESULT_0 (*QueryInterface)(IClassFactory_0 *, const IID *const, void **);
ULONG (*AddRef)(IClassFactory_0 *);
ULONG (*Release)(IClassFactory_0 *);
HRESULT_0 (*CreateInstance)(IClassFactory_0 *, IUnknown_0 *, const IID *const, void **);
HRESULT_0 (*LockServer)(IClassFactory_0 *, BOOL);
};
