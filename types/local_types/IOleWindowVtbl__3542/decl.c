struct IOleWindowVtbl
{
HRESULT_0 (*QueryInterface)(IOleWindow_0 *, const IID *const, void **);
ULONG (*AddRef)(IOleWindow_0 *);
ULONG (*Release)(IOleWindow_0 *);
HRESULT_0 (*GetWindow)(IOleWindow_0 *, HWND *);
HRESULT_0 (*ContextSensitiveHelp)(IOleWindow_0 *, BOOL);
};
