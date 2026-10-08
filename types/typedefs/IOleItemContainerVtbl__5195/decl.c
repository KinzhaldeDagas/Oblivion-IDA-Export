struct IOleItemContainerVtbl
{
HRESULT_1 (*QueryInterface)(IOleItemContainer_0 *, const IID *const, void **);
ULONG (*AddRef)(IOleItemContainer_0 *);
ULONG (*Release)(IOleItemContainer_0 *);
HRESULT_1 (*ParseDisplayName)(IOleItemContainer_0 *, IBindCtx_0 *, LPOLESTR, ULONG *, IMoniker_0 **);
HRESULT_1 (*EnumObjects)(IOleItemContainer_0 *, DWORD, IEnumUnknown_0 **);
HRESULT_1 (*LockContainer)(IOleItemContainer_0 *, BOOL);
HRESULT_1 (*GetObject)(IOleItemContainer_0 *, LPOLESTR, DWORD, IBindCtx_0 *, const IID *const, void **);
HRESULT_1 (*GetObjectStorage)(IOleItemContainer_0 *, LPOLESTR, IBindCtx_0 *, const IID *const, void **);
HRESULT_1 (*IsRunning)(IOleItemContainer_0 *, LPOLESTR);
};
