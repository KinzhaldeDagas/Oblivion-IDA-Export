struct IInspectableVtbl
{
HRESULT_0 (*QueryInterface)(IInspectable_0 *, const IID *const, void **);
ULONG (*AddRef)(IInspectable_0 *);
ULONG (*Release)(IInspectable_0 *);
HRESULT_0 (*GetIids)(IInspectable_0 *, ULONG *, IID **);
HRESULT_0 (*GetRuntimeClassName)(IInspectable_0 *, HSTRING *);
HRESULT_0 (*GetTrustLevel)(IInspectable_0 *, TrustLevel_0 *);
};
