struct IROTDataVtbl
{
HRESULT_0 (*QueryInterface)(IROTData_0 *, const IID *const, void **);
ULONG (*AddRef)(IROTData_0 *);
ULONG (*Release)(IROTData_0 *);
HRESULT_0 (*GetComparisonData)(IROTData_0 *, byte *, ULONG, ULONG *);
};
