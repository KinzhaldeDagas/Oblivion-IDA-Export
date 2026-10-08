struct IContextMenuVtbl
{
HRESULT_0 (*QueryInterface)(IContextMenu_0 *, const IID *const, void **);
ULONG (*AddRef)(IContextMenu_0 *);
ULONG (*Release)(IContextMenu_0 *);
HRESULT_0 (*QueryContextMenu)(IContextMenu_0 *, HMENU, UINT, UINT, UINT, UINT);
HRESULT_0 (*InvokeCommand)(IContextMenu_0 *, LPCMINVOKECOMMANDINFO);
HRESULT_0 (*GetCommandString)(IContextMenu_0 *, UINT_PTR_0, UINT, UINT *, LPSTR, UINT);
};
