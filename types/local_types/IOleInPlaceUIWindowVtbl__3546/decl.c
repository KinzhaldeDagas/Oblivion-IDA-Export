struct IOleInPlaceUIWindowVtbl
{
HRESULT_0 (*QueryInterface)(IOleInPlaceUIWindow_0 *, const IID *const, void **);
ULONG (*AddRef)(IOleInPlaceUIWindow_0 *);
ULONG (*Release)(IOleInPlaceUIWindow_0 *);
HRESULT_0 (*GetWindow)(IOleInPlaceUIWindow_0 *, HWND *);
HRESULT_0 (*ContextSensitiveHelp)(IOleInPlaceUIWindow_0 *, BOOL);
HRESULT_0 (*GetBorder)(IOleInPlaceUIWindow_0 *, LPRECT);
HRESULT_0 (*RequestBorderSpace)(IOleInPlaceUIWindow_0 *, LPCBORDERWIDTHS);
HRESULT_0 (*SetBorderSpace)(IOleInPlaceUIWindow_0 *, LPCBORDERWIDTHS);
HRESULT_0 (*SetActiveObject)(IOleInPlaceUIWindow_0 *, IOleInPlaceActiveObject_0 *, LPCOLESTR);
};
