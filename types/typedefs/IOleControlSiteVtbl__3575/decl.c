struct IOleControlSiteVtbl
{
HRESULT_0 (*QueryInterface)(IOleControlSite_0 *, const IID *const, void **);
ULONG (*AddRef)(IOleControlSite_0 *);
ULONG (*Release)(IOleControlSite_0 *);
HRESULT_0 (*OnControlInfoChanged)(IOleControlSite_0 *);
HRESULT_0 (*LockInPlaceActive)(IOleControlSite_0 *, BOOL);
HRESULT_0 (*GetExtendedControl)(IOleControlSite_0 *, IDispatch_0 **);
HRESULT_0 (*TransformCoords)(IOleControlSite_0 *, POINTL *, POINTF *, DWORD);
HRESULT_0 (*TranslateAccelerator)(IOleControlSite_0 *, MSG *, DWORD);
HRESULT_0 (*OnFocus)(IOleControlSite_0 *, BOOL);
HRESULT_0 (*ShowPropertyFrame)(IOleControlSite_0 *);
};
