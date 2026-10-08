struct __declspec(align(4)) IDirectInput8AVtbl
{
void (__stdcall *QueryInterface)(IDirectInput8AVtbl *, signed int, JoystickDeviceState *, int);
ULONG (__stdcall *AddRef)(IDirectInputA *This);
ULONG (__stdcall *Release)(IDirectInputA *This);
HRESULT (__stdcall *CreateDevice)(IDirectInput8 *This, _UNKNOWN *, IDirectInputDevice8 **, LPUNKNOWN);
HRESULT (__stdcall *EnumDevices)(IDirectInput8 *This, DWORD, BOOL (__stdcall *)(_BYTE *a1, InputGlobal *a2), LPVOID, DWORD);
HRESULT (__stdcall *GetDeviceStatus)(IDirectInputA *This, const GUID *const);
HRESULT (__stdcall *RunControlPanel)(IDirectInputA *This, HWND, DWORD);
HRESULT (__stdcall *Initialize)(IDirectInputA *This, HINSTANCE, DWORD);
HRESULT (__stdcall *FindDevice)(IDirectInputA *This, GUID *, const char *, LPGUID);
HRESULT (__stdcall *EnumDevicesBySemantics)(IDirectInputA *This, const char *, void *, void *, void *, DWORD);
HRESULT (__stdcall *ConfigureDevices)(IDirectInputA *This, void *, void *, DWORD, void *);
};
