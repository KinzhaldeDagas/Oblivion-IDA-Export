struct IDirectInputWVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirectInputW *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirectInputW *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirectInputW *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreateDevice)(IDirectInputW *This, const GUID *const, LPDIRECTINPUTDEVICEW *, LPUNKNOWN) __offset(OFF64|AUTO);
HRESULT (__stdcall *EnumDevices)(IDirectInputW *This, DWORD, LPDIENUMDEVICESCALLBACKW, LPVOID, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetDeviceStatus)(IDirectInputW *This, const GUID *const) __offset(OFF64|AUTO);
HRESULT (__stdcall *RunControlPanel)(IDirectInputW *This, HWND, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirectInputW *This, HINSTANCE, DWORD) __offset(OFF64|AUTO);
};
