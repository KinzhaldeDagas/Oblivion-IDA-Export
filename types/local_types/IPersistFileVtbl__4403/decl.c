struct IPersistFileVtbl
{
HRESULT_0 (*QueryInterface)(IPersistFile_0 *, const IID *const, void **);
ULONG (*AddRef)(IPersistFile_0 *);
ULONG (*Release)(IPersistFile_0 *);
HRESULT_0 (*GetClassID)(IPersistFile_0 *, CLSID *);
HRESULT_0 (*IsDirty)(IPersistFile_0 *);
HRESULT_0 (*Load)(IPersistFile_0 *, LPCOLESTR, DWORD);
HRESULT_0 (*Save)(IPersistFile_0 *, LPCOLESTR, BOOL);
HRESULT_0 (*SaveCompleted)(IPersistFile_0 *, LPCOLESTR);
HRESULT_0 (*GetCurFile)(IPersistFile_0 *, LPOLESTR *);
};
