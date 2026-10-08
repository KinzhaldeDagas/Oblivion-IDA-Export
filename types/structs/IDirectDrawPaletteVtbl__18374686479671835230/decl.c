struct IDirectDrawPaletteVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirectDrawPalette *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirectDrawPalette *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirectDrawPalette *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetCaps)(IDirectDrawPalette *This, LPDWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetEntries)(IDirectDrawPalette *This, DWORD, DWORD, DWORD, LPPALETTEENTRY) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirectDrawPalette *This, LPDIRECTDRAW, DWORD, LPPALETTEENTRY) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetEntries)(IDirectDrawPalette *This, DWORD, DWORD, DWORD, LPPALETTEENTRY) __offset(OFF64|AUTO);
};
