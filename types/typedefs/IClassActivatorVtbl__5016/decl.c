struct IClassActivatorVtbl
{
HRESULT_1 (*QueryInterface)(IClassActivator_0 *, const IID *const, void **);
ULONG (*AddRef)(IClassActivator_0 *);
ULONG (*Release)(IClassActivator_0 *);
HRESULT_1 (*GetClassObject)(IClassActivator_0 *, const CLSID *const, DWORD, LCID, const IID *const, void **);
};
