struct IShellLinkWVtbl
{
HRESULT_0 (*QueryInterface)(IShellLinkW_0 *, const IID *const, void **);
ULONG (*AddRef)(IShellLinkW_0 *);
ULONG (*Release)(IShellLinkW_0 *);
HRESULT_0 (*GetPath)(IShellLinkW_0 *, LPWSTR, int, WIN32_FIND_DATAW *, DWORD);
HRESULT_0 (*GetIDList)(IShellLinkW_0 *, LPITEMIDLIST *);
HRESULT_0 (*SetIDList)(IShellLinkW_0 *, LPCITEMIDLIST);
HRESULT_0 (*GetDescription)(IShellLinkW_0 *, LPWSTR, int);
HRESULT_0 (*SetDescription)(IShellLinkW_0 *, LPCWSTR);
HRESULT_0 (*GetWorkingDirectory)(IShellLinkW_0 *, LPWSTR, int);
HRESULT_0 (*SetWorkingDirectory)(IShellLinkW_0 *, LPCWSTR);
HRESULT_0 (*GetArguments)(IShellLinkW_0 *, LPWSTR, int);
HRESULT_0 (*SetArguments)(IShellLinkW_0 *, LPCWSTR);
HRESULT_0 (*GetHotkey)(IShellLinkW_0 *, WORD *);
HRESULT_0 (*SetHotkey)(IShellLinkW_0 *, WORD);
HRESULT_0 (*GetShowCmd)(IShellLinkW_0 *, int *);
HRESULT_0 (*SetShowCmd)(IShellLinkW_0 *, int);
HRESULT_0 (*GetIconLocation)(IShellLinkW_0 *, LPWSTR, int, int *);
HRESULT_0 (*SetIconLocation)(IShellLinkW_0 *, LPCWSTR, int);
HRESULT_0 (*SetRelativePath)(IShellLinkW_0 *, LPCWSTR, DWORD);
HRESULT_0 (*Resolve)(IShellLinkW_0 *, HWND, DWORD);
HRESULT_0 (*SetPath)(IShellLinkW_0 *, LPCWSTR);
};
