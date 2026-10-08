struct IOleCommandTargetVtbl
{
HRESULT_0 (*QueryInterface)(IOleCommandTarget_0 *, const IID *const, void **);
ULONG (*AddRef)(IOleCommandTarget_0 *);
ULONG (*Release)(IOleCommandTarget_0 *);
HRESULT_0 (*QueryStatus)(IOleCommandTarget_0 *, const GUID *, ULONG, OLECMD *, OLECMDTEXT *);
HRESULT_0 (*Exec)(IOleCommandTarget_0 *, const GUID *, DWORD, DWORD, VARIANT *, VARIANT *);
};
