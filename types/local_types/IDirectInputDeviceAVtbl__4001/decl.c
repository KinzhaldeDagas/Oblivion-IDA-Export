struct IDirectInputDeviceAVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirectInputDeviceA *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirectInputDeviceA *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirectInputDeviceA *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetCapabilities)(IDirectInputDeviceA *This, LPDIDEVCAPS) __offset(OFF64|AUTO);
HRESULT (__stdcall *EnumObjects)(IDirectInputDeviceA *This, LPDIENUMDEVICEOBJECTSCALLBACKA, LPVOID, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetProperty)(IDirectInputDeviceA *This, const GUID *const, LPDIPROPHEADER) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetProperty)(IDirectInputDeviceA *This, const GUID *const, LPCDIPROPHEADER) __offset(OFF64|AUTO);
HRESULT (__stdcall *Acquire)(IDirectInputDeviceA *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *Unacquire)(IDirectInputDeviceA *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetDeviceState)(IDirectInputDeviceA *This, DWORD, LPVOID) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetDeviceData)(IDirectInputDeviceA *This, DWORD, LPDIDEVICEOBJECTDATA, LPDWORD, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetDataFormat)(IDirectInputDeviceA *This, LPCDIDATAFORMAT) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetEventNotification)(IDirectInputDeviceA *This, HANDLE) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetCooperativeLevel)(IDirectInputDeviceA *This, HWND, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetObjectInfo)(IDirectInputDeviceA *This, LPDIDEVICEOBJECTINSTANCEA, DWORD, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetDeviceInfo)(IDirectInputDeviceA *This, LPDIDEVICEINSTANCEA) __offset(OFF64|AUTO);
HRESULT (__stdcall *RunControlPanel)(IDirectInputDeviceA *This, HWND, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirectInputDeviceA *This, HINSTANCE, DWORD, const GUID *const) __offset(OFF64|AUTO);
};
