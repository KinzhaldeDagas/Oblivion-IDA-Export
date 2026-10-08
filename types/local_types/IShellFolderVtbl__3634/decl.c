struct IShellFolderVtbl
{
HRESULT_0 (*QueryInterface)(IShellFolder_0 *, const IID *const, void **);
ULONG (*AddRef)(IShellFolder_0 *);
ULONG (*Release)(IShellFolder_0 *);
HRESULT_0 (*ParseDisplayName)(IShellFolder_0 *, HWND, LPBC, LPOLESTR, ULONG *, LPITEMIDLIST *, ULONG *);
HRESULT_0 (*EnumObjects)(IShellFolder_0 *, HWND, SHCONTF, IEnumIDList_0 **);
HRESULT_0 (*BindToObject)(IShellFolder_0 *, LPCITEMIDLIST, LPBC, const IID *const, void **);
HRESULT_0 (*BindToStorage)(IShellFolder_0 *, LPCITEMIDLIST, LPBC, const IID *const, void **);
HRESULT_0 (*CompareIDs)(IShellFolder_0 *, LPARAM_0, LPCITEMIDLIST, LPCITEMIDLIST);
HRESULT_0 (*CreateViewObject)(IShellFolder_0 *, HWND, const IID *const, void **);
HRESULT_0 (*GetAttributesOf)(IShellFolder_0 *, UINT, LPCITEMIDLIST *, SFGAOF *);
HRESULT_0 (*GetUIObjectOf)(IShellFolder_0 *, HWND, UINT, LPCITEMIDLIST *, const IID *const, UINT *, void **);
HRESULT_0 (*GetDisplayNameOf)(IShellFolder_0 *, LPCITEMIDLIST, SHGDNF, STRRET *);
HRESULT_0 (*SetNameOf)(IShellFolder_0 *, HWND, LPCITEMIDLIST, LPCOLESTR, SHGDNF, LPITEMIDLIST *);
};
