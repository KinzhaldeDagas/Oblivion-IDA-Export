struct IRemUnknown2Vtbl
{
HRESULT_0 (*QueryInterface)(IRemUnknown2_0 *, const IID *, void **);
ULONG (*AddRef)(IRemUnknown2_0 *);
ULONG (*Release)(IRemUnknown2_0 *);
HRESULT_0 (*RemQueryInterface)(IRemUnknown2_0 *, REFIPID_0, ULONG, unsigned __int16, IID *, REMQIRESULT **);
HRESULT_0 (*RemAddRef)(IRemUnknown2_0 *, unsigned __int16, REMINTERFACEREF *, HRESULT_0 *);
HRESULT_0 (*RemRelease)(IRemUnknown2_0 *, unsigned __int16, REMINTERFACEREF *);
HRESULT_0 (*RemQueryInterface2)(IRemUnknown2_0 *, REFIPID_0, unsigned __int16, IID *, HRESULT_0 *, MInterfacePointer **);
};
