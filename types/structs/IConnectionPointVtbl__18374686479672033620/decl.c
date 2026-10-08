struct IConnectionPointVtbl
{
HRESULT_0 (*QueryInterface)(IConnectionPoint_0 *, const IID *const, void **);
ULONG (*AddRef)(IConnectionPoint_0 *);
ULONG (*Release)(IConnectionPoint_0 *);
HRESULT_0 (*GetConnectionInterface)(IConnectionPoint_0 *, IID *);
HRESULT_0 (*GetConnectionPointContainer)(IConnectionPoint_0 *, IConnectionPointContainer_0 **);
HRESULT_0 (*Advise)(IConnectionPoint_0 *, IUnknown_0 *, DWORD *);
HRESULT_0 (*Unadvise)(IConnectionPoint_0 *, DWORD);
HRESULT_0 (*EnumConnections)(IConnectionPoint_0 *, IEnumConnections_0 **);
};
