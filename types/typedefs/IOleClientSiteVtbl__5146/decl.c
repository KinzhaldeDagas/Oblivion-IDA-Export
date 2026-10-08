struct IOleClientSiteVtbl
{
HRESULT_0 (*QueryInterface)(IOleClientSite_0 *, const IID *const, void **);
ULONG (*AddRef)(IOleClientSite_0 *);
ULONG (*Release)(IOleClientSite_0 *);
HRESULT_0 (*SaveObject)(IOleClientSite_0 *);
HRESULT_0 (*GetMoniker)(IOleClientSite_0 *, DWORD, DWORD, IMoniker_0 **);
HRESULT_0 (*GetContainer)(IOleClientSite_0 *, IOleContainer_0 **);
HRESULT_0 (*ShowObject)(IOleClientSite_0 *);
HRESULT_0 (*OnShowWindow)(IOleClientSite_0 *, BOOL);
HRESULT_0 (*RequestNewObjectLayout)(IOleClientSite_0 *);
};
