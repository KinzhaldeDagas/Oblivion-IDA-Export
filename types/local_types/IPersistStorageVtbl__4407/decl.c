struct IPersistStorageVtbl
{
HRESULT_0 (*QueryInterface)(IPersistStorage_0 *, const IID *const, void **);
ULONG (*AddRef)(IPersistStorage_0 *);
ULONG (*Release)(IPersistStorage_0 *);
HRESULT_0 (*GetClassID)(IPersistStorage_0 *, CLSID *);
HRESULT_0 (*IsDirty)(IPersistStorage_0 *);
HRESULT_0 (*InitNew)(IPersistStorage_0 *, IStorage_0 *);
HRESULT_0 (*Load)(IPersistStorage_0 *, IStorage_0 *);
HRESULT_0 (*Save)(IPersistStorage_0 *, IStorage_0 *, BOOL);
HRESULT_0 (*SaveCompleted)(IPersistStorage_0 *, IStorage_0 *);
HRESULT_0 (*HandsOffStorage)(IPersistStorage_0 *);
};
