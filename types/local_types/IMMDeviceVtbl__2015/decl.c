struct IMMDeviceVtbl
{
HRESULT_0 (*QueryInterface)(IMMDevice_0 *, const IID *const, void **);
ULONG (*AddRef)(IMMDevice_0 *);
ULONG (*Release)(IMMDevice_0 *);
HRESULT_0 (*Activate)(IMMDevice_0 *, const IID *const, DWORD, PROPVARIANT *, void **);
HRESULT_0 (*OpenPropertyStore)(IMMDevice_0 *, DWORD, IPropertyStore_0 **);
HRESULT_0 (*GetId)(IMMDevice_0 *, LPWSTR *);
HRESULT_0 (*GetState)(IMMDevice_0 *, DWORD *);
};
