struct IRegistrarVtbl
{
HRESULT_0 (*QueryInterface)(IRegistrar_0 *, const IID *const, void **);
ULONG (*AddRef)(IRegistrar_0 *);
ULONG (*Release)(IRegistrar_0 *);
HRESULT_0 (*AddReplacement)(IRegistrar_0 *, LPCOLESTR, LPCOLESTR);
HRESULT_0 (*ClearReplacements)(IRegistrar_0 *);
HRESULT_0 (*ResourceRegisterSz)(IRegistrar_0 *, LPCOLESTR, LPCOLESTR, LPCOLESTR);
HRESULT_0 (*ResourceUnregisterSz)(IRegistrar_0 *, LPCOLESTR, LPCOLESTR, LPCOLESTR);
HRESULT_0 (*FileRegister)(IRegistrar_0 *, LPCOLESTR);
HRESULT_0 (*FileUnregister)(IRegistrar_0 *, LPCOLESTR);
HRESULT_0 (*StringRegister)(IRegistrar_0 *, LPCOLESTR);
HRESULT_0 (*StringUnregister)(IRegistrar_0 *, LPCOLESTR);
HRESULT_0 (*ResourceRegister)(IRegistrar_0 *, LPCOLESTR, UINT, LPCOLESTR);
HRESULT_0 (*ResourceUnregister)(IRegistrar_0 *, LPCOLESTR, UINT, LPCOLESTR);
};
