struct IDirectInput2WVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirectInput2W *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirectInput2W *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirectInput2W *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreateDevice)(IDirectInput2W *This, const GUID *const, LPDIRECTINPUTDEVICEW *, LPUNKNOWN) __offset(OFF64|AUTO);
HRESULT (__stdcall *EnumDevices)(IDirectInput2W *This, DWORD, LPDIENUMDEVICESCALLBACKW, LPVOID, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetDeviceStatus)(IDirectInput2W *This, const GUID *const) __offset(OFF64|AUTO);
HRESULT (__stdcall *RunControlPanel)(IDirectInput2W *This, HWND, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirectInput2W *This, HINSTANCE, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *FindDevice)(IDirectInput2W *This, const GUID *const, LPCWSTR, LPGUID) __offset(OFF64|AUTO);
};
