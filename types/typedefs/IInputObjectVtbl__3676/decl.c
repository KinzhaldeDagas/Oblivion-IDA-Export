struct IInputObjectVtbl
{
HRESULT_0 (*QueryInterface)(IInputObject_0 *, const IID *const, void **);
ULONG (*AddRef)(IInputObject_0 *);
ULONG (*Release)(IInputObject_0 *);
HRESULT_0 (*UIActivateIO)(IInputObject_0 *, BOOL, LPMSG);
HRESULT_0 (*HasFocusIO)(IInputObject_0 *);
HRESULT_0 (*TranslateAcceleratorIO)(IInputObject_0 *, LPMSG);
};
