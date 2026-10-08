struct IDirectInputDeviceWVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirectInputDeviceW *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirectInputDeviceW *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirectInputDeviceW *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetCapabilities)(IDirectInputDeviceW *This, LPDIDEVCAPS) __offset(OFF64|AUTO);
HRESULT (__stdcall *EnumObjects)(IDirectInputDeviceW *This, LPDIENUMDEVICEOBJECTSCALLBACKW, LPVOID, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetProperty)(IDirectInputDeviceW *This, const GUID *const, LPDIPROPHEADER) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetProperty)(IDirectInputDeviceW *This, const GUID *const, LPCDIPROPHEADER) __offset(OFF64|AUTO);
HRESULT (__stdcall *Acquire)(IDirectInputDeviceW *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *Unacquire)(IDirectInputDeviceW *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetDeviceState)(IDirectInputDeviceW *This, DWORD, LPVOID) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetDeviceData)(IDirectInputDeviceW *This, DWORD, LPDIDEVICEOBJECTDATA, LPDWORD, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetDataFormat)(IDirectInputDeviceW *This, LPCDIDATAFORMAT) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetEventNotification)(IDirectInputDeviceW *This, HANDLE) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetCooperativeLevel)(IDirectInputDeviceW *This, HWND, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetObjectInfo)(IDirectInputDeviceW *This, LPDIDEVICEOBJECTINSTANCEW, DWORD, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetDeviceInfo)(IDirectInputDeviceW *This, LPDIDEVICEINSTANCEW) __offset(OFF64|AUTO);
HRESULT (__stdcall *RunControlPanel)(IDirectInputDeviceW *This, HWND, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirectInputDeviceW *This, HINSTANCE, DWORD, const GUID *const) __offset(OFF64|AUTO);
};
