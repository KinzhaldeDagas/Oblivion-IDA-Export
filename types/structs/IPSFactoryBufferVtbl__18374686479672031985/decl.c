struct IPSFactoryBufferVtbl
{
HRESULT_0 (*QueryInterface)(IPSFactoryBuffer_0 *, const IID *const, void **);
ULONG (*AddRef)(IPSFactoryBuffer_0 *);
ULONG (*Release)(IPSFactoryBuffer_0 *);
HRESULT_0 (*CreateProxy)(IPSFactoryBuffer_0 *, IUnknown_0 *, const IID *const, IRpcProxyBuffer_0 **, void **);
HRESULT_0 (*CreateStub)(IPSFactoryBuffer_0 *, const IID *const, IUnknown_0 *, IRpcStubBuffer_0 **);
};
