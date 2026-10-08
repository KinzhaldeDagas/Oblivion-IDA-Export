struct IMMNotificationClientVtbl
{
HRESULT_0 (*QueryInterface)(IMMNotificationClient_0 *, const IID *const, void **);
ULONG (*AddRef)(IMMNotificationClient_0 *);
ULONG (*Release)(IMMNotificationClient_0 *);
HRESULT_0 (*OnDeviceStateChanged)(IMMNotificationClient_0 *, LPCWSTR, DWORD);
HRESULT_0 (*OnDeviceAdded)(IMMNotificationClient_0 *, LPCWSTR);
HRESULT_0 (*OnDeviceRemoved)(IMMNotificationClient_0 *, LPCWSTR);
HRESULT_0 (*OnDefaultDeviceChanged)(IMMNotificationClient_0 *, EDataFlow, ERole, LPCWSTR);
HRESULT_0 (*OnPropertyValueChanged)(IMMNotificationClient_0 *, LPCWSTR, const PROPERTYKEY);
};
