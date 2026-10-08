struct IRootStorageVtbl
{
HRESULT_0 (*QueryInterface)(IRootStorage_0 *, const IID *, void **);
ULONG (*AddRef)(IRootStorage_0 *);
ULONG (*Release)(IRootStorage_0 *);
HRESULT_0 (*SwitchToFile)(IRootStorage_0 *, LPOLESTR);
};
