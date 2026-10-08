struct IDirectInputAVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirectInputA *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirectInputA *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirectInputA *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreateDevice)(IDirectInputA *This, const GUID *const, LPDIRECTINPUTDEVICEA *, LPUNKNOWN) __offset(OFF64|AUTO);
HRESULT (__stdcall *EnumDevices)(IDirectInputA *This, DWORD, LPDIENUMDEVICESCALLBACKA, LPVOID, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetDeviceStatus)(IDirectInputA *This, const GUID *const) __offset(OFF64|AUTO);
HRESULT (__stdcall *RunControlPanel)(IDirectInputA *This, HWND, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirectInputA *This, HINSTANCE, DWORD) __offset(OFF64|AUTO);
};
