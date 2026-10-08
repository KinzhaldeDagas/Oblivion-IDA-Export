struct IInitializeSpyVtbl
{
HRESULT_0 (*QueryInterface)(IInitializeSpy_0 *, const IID *const, void **);
ULONG (*AddRef)(IInitializeSpy_0 *);
ULONG (*Release)(IInitializeSpy_0 *);
HRESULT_0 (*PreInitialize)(IInitializeSpy_0 *, DWORD, DWORD);
HRESULT_0 (*PostInitialize)(IInitializeSpy_0 *, HRESULT_0, DWORD, DWORD);
HRESULT_0 (*PreUninitialize)(IInitializeSpy_0 *, DWORD);
HRESULT_0 (*PostUninitialize)(IInitializeSpy_0 *, DWORD);
};
