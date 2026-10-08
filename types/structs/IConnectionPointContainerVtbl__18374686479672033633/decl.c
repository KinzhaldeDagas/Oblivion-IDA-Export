struct IConnectionPointContainerVtbl
{
HRESULT_0 (*QueryInterface)(IConnectionPointContainer_0 *, const IID *const, void **);
ULONG (*AddRef)(IConnectionPointContainer_0 *);
ULONG (*Release)(IConnectionPointContainer_0 *);
HRESULT_0 (*EnumConnectionPoints)(IConnectionPointContainer_0 *, IEnumConnectionPoints_0 **);
HRESULT_0 (*FindConnectionPoint)(IConnectionPointContainer_0 *, const IID *const, IConnectionPoint_0 **);
};
