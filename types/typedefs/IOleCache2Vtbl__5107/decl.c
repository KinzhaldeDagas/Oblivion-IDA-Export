struct IOleCache2Vtbl
{
HRESULT_0 (*QueryInterface)(IOleCache2_0 *, const IID *const, void **);
ULONG (*AddRef)(IOleCache2_0 *);
ULONG (*Release)(IOleCache2_0 *);
HRESULT_0 (*Cache)(IOleCache2_0 *, FORMATETC *, DWORD, DWORD *);
HRESULT_0 (*Uncache)(IOleCache2_0 *, DWORD);
HRESULT_0 (*EnumCache)(IOleCache2_0 *, IEnumSTATDATA_0 **);
HRESULT_0 (*InitCache)(IOleCache2_0 *, IDataObject_0 *);
HRESULT_0 (*SetData)(IOleCache2_0 *, FORMATETC *, STGMEDIUM_0 *, BOOL);
HRESULT_0 (*UpdateCache)(IOleCache2_0 *, LPDATAOBJECT, DWORD, LPVOID);
HRESULT_0 (*DiscardCache)(IOleCache2_0 *, DWORD);
};
