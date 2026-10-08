struct IMultiQIVtbl
{
HRESULT_0 (*QueryInterface)(IMultiQI_0 *, const IID *const, void **);
ULONG (*AddRef)(IMultiQI_0 *);
ULONG (*Release)(IMultiQI_0 *);
HRESULT_0 (*QueryMultipleInterfaces)(IMultiQI_0 *, ULONG, MULTI_QI *);
};
