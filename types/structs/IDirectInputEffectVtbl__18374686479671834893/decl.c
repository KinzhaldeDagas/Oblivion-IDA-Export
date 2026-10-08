struct IDirectInputEffectVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirectInputEffect *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirectInputEffect *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirectInputEffect *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirectInputEffect *This, HINSTANCE, DWORD, const GUID *const) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetEffectGuid)(IDirectInputEffect *This, LPGUID) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetParameters)(IDirectInputEffect *This, LPDIEFFECT, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetParameters)(IDirectInputEffect *This, LPCDIEFFECT, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *Start)(IDirectInputEffect *This, DWORD, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *Stop)(IDirectInputEffect *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetEffectStatus)(IDirectInputEffect *This, LPDWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *Download)(IDirectInputEffect *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *Unload)(IDirectInputEffect *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *Escape)(IDirectInputEffect *This, LPDIEFFESCAPE) __offset(OFF64|AUTO);
};
