struct IDocHostUIHandlerVtbl
{
HRESULT_0 (*QueryInterface)(IDocHostUIHandler_0 *, const IID *const, void **);
ULONG (*AddRef)(IDocHostUIHandler_0 *);
ULONG (*Release)(IDocHostUIHandler_0 *);
HRESULT_0 (*ShowContextMenu)(IDocHostUIHandler_0 *, DWORD, POINT *, IUnknown_0 *, IDispatch_0 *);
HRESULT_0 (*GetHostInfo)(IDocHostUIHandler_0 *, DOCHOSTUIINFO *);
HRESULT_0 (*ShowUI)(IDocHostUIHandler_0 *, DWORD, IOleInPlaceActiveObject_0 *, IOleCommandTarget_0 *, IOleInPlaceFrame_0 *, IOleInPlaceUIWindow_0 *);
HRESULT_0 (*HideUI)(IDocHostUIHandler_0 *);
HRESULT_0 (*UpdateUI)(IDocHostUIHandler_0 *);
HRESULT_0 (*EnableModeless)(IDocHostUIHandler_0 *, BOOL);
HRESULT_0 (*OnDocWindowActivate)(IDocHostUIHandler_0 *, BOOL);
HRESULT_0 (*OnFrameWindowActivate)(IDocHostUIHandler_0 *, BOOL);
HRESULT_0 (*ResizeBorder)(IDocHostUIHandler_0 *, LPCRECT, IOleInPlaceUIWindow_0 *, BOOL);
HRESULT_0 (*TranslateAccelerator)(IDocHostUIHandler_0 *, LPMSG, const GUID *, DWORD);
HRESULT_0 (*GetOptionKeyPath)(IDocHostUIHandler_0 *, LPOLESTR *, DWORD);
HRESULT_0 (*GetDropTarget)(IDocHostUIHandler_0 *, IDropTarget_0 *, IDropTarget_0 **);
HRESULT_0 (*GetExternal)(IDocHostUIHandler_0 *, IDispatch_0 **);
HRESULT_0 (*TranslateUrl)(IDocHostUIHandler_0 *, DWORD, OLECHAR *, OLECHAR **);
HRESULT_0 (*FilterDataObject)(IDocHostUIHandler_0 *, IDataObject_0 *, IDataObject_0 **);
};
