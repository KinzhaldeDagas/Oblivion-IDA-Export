struct IPersistVtbl
{
HRESULT_0 (*QueryInterface)(IPersist_0 *, const IID *const, void **);
ULONG (*AddRef)(IPersist_0 *);
ULONG (*Release)(IPersist_0 *);
HRESULT_0 (*GetClassID)(IPersist_0 *, CLSID *);
};
