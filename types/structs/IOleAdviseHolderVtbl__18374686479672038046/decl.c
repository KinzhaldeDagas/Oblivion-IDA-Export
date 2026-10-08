struct IOleAdviseHolderVtbl
{
HRESULT_0 (*QueryInterface)(IOleAdviseHolder_0 *, const IID *const, void **);
ULONG (*AddRef)(IOleAdviseHolder_0 *);
ULONG (*Release)(IOleAdviseHolder_0 *);
HRESULT_0 (*Advise)(IOleAdviseHolder_0 *, IAdviseSink_0 *, DWORD *);
HRESULT_0 (*Unadvise)(IOleAdviseHolder_0 *, DWORD);
HRESULT_0 (*EnumAdvise)(IOleAdviseHolder_0 *, IEnumSTATDATA_0 **);
HRESULT_0 (*SendOnRename)(IOleAdviseHolder_0 *, IMoniker_0 *);
HRESULT_0 (*SendOnSave)(IOleAdviseHolder_0 *);
HRESULT_0 (*SendOnClose)(IOleAdviseHolder_0 *);
};
