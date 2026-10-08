struct IDropTargetVtbl
{
HRESULT_0 (*QueryInterface)(IDropTarget_0 *, const IID *const, void **);
ULONG (*AddRef)(IDropTarget_0 *);
ULONG (*Release)(IDropTarget_0 *);
HRESULT_0 (*DragEnter)(IDropTarget_0 *, IDataObject_0 *, DWORD, POINTL, DWORD *);
HRESULT_0 (*DragOver)(IDropTarget_0 *, DWORD, POINTL, DWORD *);
HRESULT_0 (*DragLeave)(IDropTarget_0 *);
HRESULT_0 (*Drop)(IDropTarget_0 *, IDataObject_0 *, DWORD, POINTL, DWORD *);
};
