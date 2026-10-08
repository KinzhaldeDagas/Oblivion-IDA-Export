struct IComThreadingInfoVtbl
{
HRESULT_0 (*QueryInterface)(IComThreadingInfo_0 *, const IID *const, void **);
ULONG (*AddRef)(IComThreadingInfo_0 *);
ULONG (*Release)(IComThreadingInfo_0 *);
HRESULT_0 (*GetCurrentApartmentType)(IComThreadingInfo_0 *, APTTYPE *);
HRESULT_0 (*GetCurrentThreadType)(IComThreadingInfo_0 *, THDTYPE *);
HRESULT_0 (*GetCurrentLogicalThreadId)(IComThreadingInfo_0 *, GUID *);
HRESULT_0 (*SetCurrentLogicalThreadId)(IComThreadingInfo_0 *, const GUID *const);
};
