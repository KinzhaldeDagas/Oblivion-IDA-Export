struct IShellViewVtbl
{
HRESULT_0 (*QueryInterface)(IShellView_0 *, const IID *const, void **);
ULONG (*AddRef)(IShellView_0 *);
ULONG (*Release)(IShellView_0 *);
HRESULT_0 (*GetWindow)(IShellView_0 *, HWND *);
HRESULT_0 (*ContextSensitiveHelp)(IShellView_0 *, BOOL);
HRESULT_0 (*TranslateAccelerator)(IShellView_0 *, MSG *);
HRESULT_0 (*EnableModeless)(IShellView_0 *, BOOL);
HRESULT_0 (*UIActivate)(IShellView_0 *, UINT);
HRESULT_0 (*Refresh)(IShellView_0 *);
HRESULT_0 (*CreateViewWindow)(IShellView_0 *, IShellView_0 *, LPCFOLDERSETTINGS, IShellBrowser_0 *, RECT *, HWND *);
HRESULT_0 (*DestroyViewWindow)(IShellView_0 *);
HRESULT_0 (*GetCurrentInfo)(IShellView_0 *, LPFOLDERSETTINGS);
HRESULT_0 (*AddPropertySheetPages)(IShellView_0 *, DWORD, LPFNSVADDPROPSHEETPAGE, LPARAM_0);
HRESULT_0 (*SaveViewState)(IShellView_0 *);
HRESULT_0 (*SelectItem)(IShellView_0 *, LPCITEMIDLIST, SVSIF);
HRESULT_0 (*GetItemObject)(IShellView_0 *, UINT, const IID *const, void **);
};
