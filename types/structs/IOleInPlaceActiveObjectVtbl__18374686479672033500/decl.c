struct IOleInPlaceActiveObjectVtbl
{
HRESULT_0 (*QueryInterface)(IOleInPlaceActiveObject_0 *, const IID *const, void **);
ULONG (*AddRef)(IOleInPlaceActiveObject_0 *);
ULONG (*Release)(IOleInPlaceActiveObject_0 *);
HRESULT_0 (*GetWindow)(IOleInPlaceActiveObject_0 *, HWND *);
HRESULT_0 (*ContextSensitiveHelp)(IOleInPlaceActiveObject_0 *, BOOL);
HRESULT_0 (*TranslateAccelerator)(IOleInPlaceActiveObject_0 *, LPMSG);
HRESULT_0 (*OnFrameWindowActivate)(IOleInPlaceActiveObject_0 *, BOOL);
HRESULT_0 (*OnDocWindowActivate)(IOleInPlaceActiveObject_0 *, BOOL);
HRESULT_0 (*ResizeBorder)(IOleInPlaceActiveObject_0 *, LPCRECT, IOleInPlaceUIWindow_0 *, BOOL);
HRESULT_0 (*EnableModeless)(IOleInPlaceActiveObject_0 *, BOOL);
};
