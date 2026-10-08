struct IDirectInput2AVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirectInput2A *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirectInput2A *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirectInput2A *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreateDevice)(IDirectInput2A *This, const GUID *const, LPDIRECTINPUTDEVICEA *, LPUNKNOWN) __offset(OFF64|AUTO);
HRESULT (__stdcall *EnumDevices)(IDirectInput2A *This, DWORD, LPDIENUMDEVICESCALLBACKA, LPVOID, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetDeviceStatus)(IDirectInput2A *This, const GUID *const) __offset(OFF64|AUTO);
HRESULT (__stdcall *RunControlPanel)(IDirectInput2A *This, HWND, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirectInput2A *This, HINSTANCE, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *FindDevice)(IDirectInput2A *This, const GUID *const, LPCSTR, LPGUID) __offset(OFF64|AUTO);
};
