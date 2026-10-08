struct IDirectDrawVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirectDraw *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirectDraw *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirectDraw *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *Compact)(IDirectDraw *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreateClipper)(IDirectDraw *This, DWORD, LPDIRECTDRAWCLIPPER *, IUnknown *) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreatePalette)(IDirectDraw *This, DWORD, LPPALETTEENTRY, LPDIRECTDRAWPALETTE *, IUnknown *) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreateSurface)(IDirectDraw *This, LPDDSURFACEDESC, LPDIRECTDRAWSURFACE *, IUnknown *) __offset(OFF64|AUTO);
HRESULT (__stdcall *DuplicateSurface)(IDirectDraw *This, LPDIRECTDRAWSURFACE, LPDIRECTDRAWSURFACE *) __offset(OFF64|AUTO);
HRESULT (__stdcall *EnumDisplayModes)(IDirectDraw *This, DWORD, LPDDSURFACEDESC, LPVOID, LPDDENUMMODESCALLBACK) __offset(OFF64|AUTO);
HRESULT (__stdcall *EnumSurfaces)(IDirectDraw *This, DWORD, LPDDSURFACEDESC, LPVOID, LPDDENUMSURFACESCALLBACK) __offset(OFF64|AUTO);
HRESULT (__stdcall *FlipToGDISurface)(IDirectDraw *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetCaps)(IDirectDraw *This, LPDDCAPS, LPDDCAPS) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetDisplayMode)(IDirectDraw *This, LPDDSURFACEDESC) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetFourCCCodes)(IDirectDraw *This, LPDWORD, LPDWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetGDISurface)(IDirectDraw *This, LPDIRECTDRAWSURFACE *) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetMonitorFrequency)(IDirectDraw *This, LPDWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetScanLine)(IDirectDraw *This, LPDWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetVerticalBlankStatus)(IDirectDraw *This, LPBOOL) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirectDraw *This, GUID *) __offset(OFF64|AUTO);
HRESULT (__stdcall *RestoreDisplayMode)(IDirectDraw *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetCooperativeLevel)(IDirectDraw *This, HWND, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetDisplayMode)(IDirectDraw *This, DWORD, DWORD, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *WaitForVerticalBlank)(IDirectDraw *This, DWORD, HANDLE) __offset(OFF64|AUTO);
};
