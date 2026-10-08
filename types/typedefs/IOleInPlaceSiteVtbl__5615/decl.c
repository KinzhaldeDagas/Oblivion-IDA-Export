struct IOleInPlaceSiteVtbl
{
HRESULT_0 (*QueryInterface)(IOleInPlaceSite_0 *, const IID *, void **);
ULONG (*AddRef)(IOleInPlaceSite_0 *);
ULONG (*Release)(IOleInPlaceSite_0 *);
HRESULT_0 (*GetWindow)(IOleInPlaceSite_0 *, HWND *);
HRESULT_0 (*ContextSensitiveHelp)(IOleInPlaceSite_0 *, BOOL);
HRESULT_0 (*CanInPlaceActivate)(IOleInPlaceSite_0 *);
HRESULT_0 (*OnInPlaceActivate)(IOleInPlaceSite_0 *);
HRESULT_0 (*OnUIActivate)(IOleInPlaceSite_0 *);
HRESULT_0 (*GetWindowContext)(IOleInPlaceSite_0 *, IOleInPlaceFrame_0 **, IOleInPlaceUIWindow_0 **, LPRECT, LPRECT, LPOLEINPLACEFRAMEINFO);
HRESULT_0 (*Scroll)(IOleInPlaceSite_0 *, SIZE);
HRESULT_0 (*OnUIDeactivate)(IOleInPlaceSite_0 *, BOOL);
HRESULT_0 (*OnInPlaceDeactivate)(IOleInPlaceSite_0 *);
HRESULT_0 (*DiscardUndoState)(IOleInPlaceSite_0 *);
HRESULT_0 (*DeactivateAndUndo)(IOleInPlaceSite_0 *);
HRESULT_0 (*OnPosRectChange)(IOleInPlaceSite_0 *, LPCRECT);
};
