struct IPersistStreamVtbl
{
HRESULT_0 (*QueryInterface)(IPersistStream_0 *, const IID *const, void **);
ULONG (*AddRef)(IPersistStream_0 *);
ULONG (*Release)(IPersistStream_0 *);
HRESULT_0 (*GetClassID)(IPersistStream_0 *, CLSID *);
HRESULT_0 (*IsDirty)(IPersistStream_0 *);
HRESULT_0 (*Load)(IPersistStream_0 *, IStream_0 *);
HRESULT_0 (*Save)(IPersistStream_0 *, IStream_0 *, BOOL);
HRESULT_0 (*GetSizeMax)(IPersistStream_0 *, ULARGE_INTEGER *);
};
