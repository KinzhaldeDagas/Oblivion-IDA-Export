struct IMMDeviceEnumeratorVtbl
{
HRESULT_0 (*QueryInterface)(IMMDeviceEnumerator_0 *, const IID *const, void **);
ULONG (*AddRef)(IMMDeviceEnumerator_0 *);
ULONG (*Release)(IMMDeviceEnumerator_0 *);
HRESULT_0 (*EnumAudioEndpoints)(IMMDeviceEnumerator_0 *, EDataFlow, DWORD, IMMDeviceCollection_0 **);
HRESULT_0 (*GetDefaultAudioEndpoint)(IMMDeviceEnumerator_0 *, EDataFlow, ERole, IMMDevice_0 **);
HRESULT_0 (*GetDevice)(IMMDeviceEnumerator_0 *, LPCWSTR, IMMDevice_0 **);
HRESULT_0 (*RegisterEndpointNotificationCallback)(IMMDeviceEnumerator_0 *, IMMNotificationClient_0 *);
HRESULT_0 (*UnregisterEndpointNotificationCallback)(IMMDeviceEnumerator_0 *, IMMNotificationClient_0 *);
};
