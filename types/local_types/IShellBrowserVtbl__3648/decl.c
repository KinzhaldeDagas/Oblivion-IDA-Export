struct IShellBrowserVtbl
{
HRESULT_0 (*QueryInterface)(IShellBrowser_0 *, const IID *const, void **);
ULONG (*AddRef)(IShellBrowser_0 *);
ULONG (*Release)(IShellBrowser_0 *);
HRESULT_0 (*GetWindow)(IShellBrowser_0 *, HWND *);
HRESULT_0 (*ContextSensitiveHelp)(IShellBrowser_0 *, BOOL);
HRESULT_0 (*InsertMenusSB)(IShellBrowser_0 *, HMENU, LPOLEMENUGROUPWIDTHS);
HRESULT_0 (*SetMenuSB)(IShellBrowser_0 *, HMENU, HOLEMENU, HWND);
HRESULT_0 (*RemoveMenusSB)(IShellBrowser_0 *, HMENU);
HRESULT_0 (*SetStatusTextSB)(IShellBrowser_0 *, LPCOLESTR);
HRESULT_0 (*EnableModelessSB)(IShellBrowser_0 *, BOOL);
HRESULT_0 (*TranslateAcceleratorSB)(IShellBrowser_0 *, MSG *, WORD);
HRESULT_0 (*BrowseObject)(IShellBrowser_0 *, LPCITEMIDLIST, UINT);
HRESULT_0 (*GetViewStateStream)(IShellBrowser_0 *, DWORD, IStream_0 **);
HRESULT_0 (*GetControlWindow)(IShellBrowser_0 *, UINT, HWND *);
HRESULT_0 (*SendControlMsg)(IShellBrowser_0 *, UINT, UINT, WPARAM_0, LPARAM_0, LRESULT_0 *);
HRESULT_0 (*QueryActiveShellView)(IShellBrowser_0 *, IShellView_0 **);
HRESULT_0 (*OnViewWindowActive)(IShellBrowser_0 *, IShellView_0 *);
HRESULT_0 (*SetToolbarItems)(IShellBrowser_0 *, LPTBBUTTONSB, UINT, UINT);
};
