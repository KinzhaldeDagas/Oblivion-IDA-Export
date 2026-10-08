struct IOleContainerVtbl
{
HRESULT_0 (*QueryInterface)(IOleContainer_0 *, const IID *const, void **);
ULONG (*AddRef)(IOleContainer_0 *);
ULONG (*Release)(IOleContainer_0 *);
HRESULT_0 (*ParseDisplayName)(IOleContainer_0 *, IBindCtx_0 *, LPOLESTR, ULONG *, IMoniker_0 **);
HRESULT_0 (*EnumObjects)(IOleContainer_0 *, DWORD, IEnumUnknown_0 **);
HRESULT_0 (*LockContainer)(IOleContainer_0 *, BOOL);
};
