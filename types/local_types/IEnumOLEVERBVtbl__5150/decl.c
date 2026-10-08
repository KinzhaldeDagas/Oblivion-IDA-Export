struct IEnumOLEVERBVtbl
{
HRESULT_0 (*QueryInterface)(IEnumOLEVERB_0 *, const IID *const, void **);
ULONG (*AddRef)(IEnumOLEVERB_0 *);
ULONG (*Release)(IEnumOLEVERB_0 *);
HRESULT_0 (*Next)(IEnumOLEVERB_0 *, ULONG, LPOLEVERB, ULONG *);
HRESULT_0 (*Skip)(IEnumOLEVERB_0 *, ULONG);
HRESULT_0 (*Reset)(IEnumOLEVERB_0 *);
HRESULT_0 (*Clone)(IEnumOLEVERB_0 *, IEnumOLEVERB_0 **);
};
