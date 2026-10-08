struct IViewObject2Vtbl
{
HRESULT_0 (*QueryInterface)(IViewObject2_0 *, const IID *const, void **);
ULONG (*AddRef)(IViewObject2_0 *);
ULONG (*Release)(IViewObject2_0 *);
HRESULT_0 (*Draw)(IViewObject2_0 *, DWORD, LONG, void *, DVTARGETDEVICE *, HDC, HDC, LPCRECTL, LPCRECTL, BOOL (*)(ULONG_PTR), ULONG_PTR);
HRESULT_0 (*GetColorSet)(IViewObject2_0 *, DWORD, LONG, void *, DVTARGETDEVICE *, HDC, LOGPALETTE **);
HRESULT_0 (*Freeze)(IViewObject2_0 *, DWORD, LONG, void *, DWORD *);
HRESULT_0 (*Unfreeze)(IViewObject2_0 *, DWORD);
HRESULT_0 (*SetAdvise)(IViewObject2_0 *, DWORD, DWORD, IAdviseSink_0 *);
HRESULT_0 (*GetAdvise)(IViewObject2_0 *, DWORD *, DWORD *, IAdviseSink_0 **);
HRESULT_0 (*GetExtent)(IViewObject2_0 *, DWORD, LONG, DVTARGETDEVICE *, LPSIZEL);
};
