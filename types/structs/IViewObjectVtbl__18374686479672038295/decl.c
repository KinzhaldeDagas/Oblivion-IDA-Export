struct IViewObjectVtbl
{
HRESULT_0 (*QueryInterface)(IViewObject_0 *, const IID *const, void **);
ULONG (*AddRef)(IViewObject_0 *);
ULONG (*Release)(IViewObject_0 *);
HRESULT_0 (*Draw)(IViewObject_0 *, DWORD, LONG, void *, DVTARGETDEVICE *, HDC, HDC, LPCRECTL, LPCRECTL, BOOL (*)(ULONG_PTR), ULONG_PTR);
HRESULT_0 (*GetColorSet)(IViewObject_0 *, DWORD, LONG, void *, DVTARGETDEVICE *, HDC, LOGPALETTE **);
HRESULT_0 (*Freeze)(IViewObject_0 *, DWORD, LONG, void *, DWORD *);
HRESULT_0 (*Unfreeze)(IViewObject_0 *, DWORD);
HRESULT_0 (*SetAdvise)(IViewObject_0 *, DWORD, DWORD, IAdviseSink_0 *);
HRESULT_0 (*GetAdvise)(IViewObject_0 *, DWORD *, DWORD *, IAdviseSink_0 **);
};
