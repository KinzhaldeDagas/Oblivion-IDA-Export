struct IEnumConnectionsVtbl
{
HRESULT_0 (*QueryInterface)(IEnumConnections_0 *, const IID *const, void **);
ULONG (*AddRef)(IEnumConnections_0 *);
ULONG (*Release)(IEnumConnections_0 *);
HRESULT_0 (*Next)(IEnumConnections_0 *, ULONG, LPCONNECTDATA, ULONG *);
HRESULT_0 (*Skip)(IEnumConnections_0 *, ULONG);
HRESULT_0 (*Reset)(IEnumConnections_0 *);
HRESULT_0 (*Clone)(IEnumConnections_0 *, IEnumConnections_0 **);
};
