struct IGlobalInterfaceTableVtbl
{
HRESULT_0 (*QueryInterface)(IGlobalInterfaceTable_0 *, const IID *const, void **);
ULONG (*AddRef)(IGlobalInterfaceTable_0 *);
ULONG (*Release)(IGlobalInterfaceTable_0 *);
HRESULT_0 (*RegisterInterfaceInGlobal)(IGlobalInterfaceTable_0 *, IUnknown_0 *, const IID *const, DWORD *);
HRESULT_0 (*RevokeInterfaceFromGlobal)(IGlobalInterfaceTable_0 *, DWORD);
HRESULT_0 (*GetInterfaceFromGlobal)(IGlobalInterfaceTable_0 *, DWORD, const IID *const, void **);
};
