struct IActivationFactoryVtbl
{
HRESULT_0 (*QueryInterface)(IActivationFactory_0 *, const IID *const, void **);
ULONG (*AddRef)(IActivationFactory_0 *);
ULONG (*Release)(IActivationFactory_0 *);
HRESULT_0 (*GetIids)(IActivationFactory_0 *, ULONG *, IID **);
HRESULT_0 (*GetRuntimeClassName)(IActivationFactory_0 *, HSTRING *);
HRESULT_0 (*GetTrustLevel)(IActivationFactory_0 *, TrustLevel_0 *);
HRESULT_0 (*ActivateInstance)(IActivationFactory_0 *, IInspectable_0 **);
};
