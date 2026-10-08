struct IOleInPlaceObjectVtbl
{
HRESULT_0 (*QueryInterface)(IOleInPlaceObject_0 *, const IID *, void **);
ULONG (*AddRef)(IOleInPlaceObject_0 *);
ULONG (*Release)(IOleInPlaceObject_0 *);
HRESULT_0 (*GetWindow)(IOleInPlaceObject_0 *, HWND *);
HRESULT_0 (*ContextSensitiveHelp)(IOleInPlaceObject_0 *, BOOL);
HRESULT_0 (*InPlaceDeactivate)(IOleInPlaceObject_0 *);
HRESULT_0 (*UIDeactivate)(IOleInPlaceObject_0 *);
HRESULT_0 (*SetObjectRects)(IOleInPlaceObject_0 *, LPCRECT, LPCRECT);
HRESULT_0 (*ReactivateAndUndo)(IOleInPlaceObject_0 *);
};
