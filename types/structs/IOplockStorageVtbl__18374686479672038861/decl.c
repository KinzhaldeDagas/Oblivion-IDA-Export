struct IOplockStorageVtbl
{
HRESULT_0 (*QueryInterface)(IOplockStorage_0 *, const IID *, void **);
ULONG (*AddRef)(IOplockStorage_0 *);
ULONG (*Release)(IOplockStorage_0 *);
HRESULT_0 (*CreateStorageEx)(IOplockStorage_0 *, LPCWSTR, DWORD, DWORD, DWORD, const IID *, void **);
HRESULT_0 (*OpenStorageEx)(IOplockStorage_0 *, LPCWSTR, DWORD, DWORD, DWORD, const IID *, void **);
};
