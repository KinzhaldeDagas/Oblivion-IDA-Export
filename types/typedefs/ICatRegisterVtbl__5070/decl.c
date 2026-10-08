struct ICatRegisterVtbl
{
HRESULT_0 (*QueryInterface)(ICatRegister_0 *, const IID *const, void **);
ULONG (*AddRef)(ICatRegister_0 *);
ULONG (*Release)(ICatRegister_0 *);
HRESULT_0 (*RegisterCategories)(ICatRegister_0 *, ULONG, CATEGORYINFO *);
HRESULT_0 (*UnRegisterCategories)(ICatRegister_0 *, ULONG, CATID *);
HRESULT_0 (*RegisterClassImplCategories)(ICatRegister_0 *, const CLSID *const, ULONG, CATID *);
HRESULT_0 (*UnRegisterClassImplCategories)(ICatRegister_0 *, const CLSID *const, ULONG, CATID *);
HRESULT_0 (*RegisterClassReqCategories)(ICatRegister_0 *, const CLSID *const, ULONG, CATID *);
HRESULT_0 (*UnRegisterClassReqCategories)(ICatRegister_0 *, const CLSID *const, ULONG, CATID *);
};
