struct IOleCacheVtbl
{
HRESULT_0 (*QueryInterface)(IOleCache_0 *, const IID *const, void **);
ULONG (*AddRef)(IOleCache_0 *);
ULONG (*Release)(IOleCache_0 *);
HRESULT_0 (*Cache)(IOleCache_0 *, FORMATETC *, DWORD, DWORD *);
HRESULT_0 (*Uncache)(IOleCache_0 *, DWORD);
HRESULT_0 (*EnumCache)(IOleCache_0 *, IEnumSTATDATA_0 **);
HRESULT_0 (*InitCache)(IOleCache_0 *, IDataObject_0 *);
HRESULT_0 (*SetData)(IOleCache_0 *, FORMATETC *, STGMEDIUM_0 *, BOOL);
};
