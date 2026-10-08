struct IRemUnknownVtbl
{
HRESULT_0 (*QueryInterface)(IRemUnknown_0 *, const IID *const, void **);
ULONG (*AddRef)(IRemUnknown_0 *);
ULONG (*Release)(IRemUnknown_0 *);
HRESULT_0 (*RemQueryInterface)(IRemUnknown_0 *, REFIPID, ULONG, unsigned __int16, IID *, REMQIRESULT **);
HRESULT_0 (*RemAddRef)(IRemUnknown_0 *, unsigned __int16, REMINTERFACEREF *, HRESULT_0 *);
HRESULT_0 (*RemRelease)(IRemUnknown_0 *, unsigned __int16, REMINTERFACEREF *);
};
