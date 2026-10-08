struct IMMDeviceCollectionVtbl
{
HRESULT_0 (*QueryInterface)(IMMDeviceCollection_0 *, const IID *const, void **);
ULONG (*AddRef)(IMMDeviceCollection_0 *);
ULONG (*Release)(IMMDeviceCollection_0 *);
HRESULT_0 (*GetCount)(IMMDeviceCollection_0 *, UINT *);
HRESULT_0 (*Item)(IMMDeviceCollection_0 *, UINT, IMMDevice_0 **);
};
