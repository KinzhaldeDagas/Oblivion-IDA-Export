struct IOleInPlaceFrameVtbl
{
HRESULT_0 (*QueryInterface)(IOleInPlaceFrame_0 *, const IID *const, void **) __offset(OFF64|AUTO);
ULONG (*AddRef)(IOleInPlaceFrame_0 *) __offset(OFF64|AUTO);
ULONG (*Release)(IOleInPlaceFrame_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*GetWindow)(IOleInPlaceFrame_0 *, HWND *) __offset(OFF64|AUTO);
HRESULT_0 (*ContextSensitiveHelp)(IOleInPlaceFrame_0 *, BOOL) __offset(OFF64|AUTO);
HRESULT_0 (*GetBorder)(IOleInPlaceFrame_0 *, LPRECT) __offset(OFF64|AUTO);
HRESULT_0 (*RequestBorderSpace)(IOleInPlaceFrame_0 *, LPCBORDERWIDTHS) __offset(OFF64|AUTO);
HRESULT_0 (*SetBorderSpace)(IOleInPlaceFrame_0 *, LPCBORDERWIDTHS) __offset(OFF64|AUTO);
HRESULT_0 (*SetActiveObject)(IOleInPlaceFrame_0 *, IOleInPlaceActiveObject_0 *, LPCOLESTR) __offset(OFF64|AUTO);
HRESULT_0 (*InsertMenus)(IOleInPlaceFrame_0 *, HMENU, LPOLEMENUGROUPWIDTHS) __offset(OFF64|AUTO);
HRESULT_0 (*SetMenu)(IOleInPlaceFrame_0 *, HMENU, HOLEMENU, HWND) __offset(OFF64|AUTO);
HRESULT_0 (*RemoveMenus)(IOleInPlaceFrame_0 *, HMENU) __offset(OFF64|AUTO);
HRESULT_0 (*SetStatusText)(IOleInPlaceFrame_0 *, LPCOLESTR) __offset(OFF64|AUTO);
HRESULT_0 (*EnableModeless)(IOleInPlaceFrame_0 *, BOOL) __offset(OFF64|AUTO);
HRESULT_0 (*TranslateAccelerator)(IOleInPlaceFrame_0 *, LPMSG, WORD) __offset(OFF64|AUTO);
};
