struct IDirectDraw2Vtbl
{
HRESULT (__stdcall *QueryInterface)(IDirectDraw2 *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirectDraw2 *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirectDraw2 *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *Compact)(IDirectDraw2 *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreateClipper)(IDirectDraw2 *This, DWORD, LPDIRECTDRAWCLIPPER *, IUnknown *) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreatePalette)(IDirectDraw2 *This, DWORD, LPPALETTEENTRY, LPDIRECTDRAWPALETTE *, IUnknown *) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreateSurface)(IDirectDraw2 *This, LPDDSURFACEDESC, LPDIRECTDRAWSURFACE *, IUnknown *) __offset(OFF64|AUTO);
HRESULT (__stdcall *DuplicateSurface)(IDirectDraw2 *This, LPDIRECTDRAWSURFACE, LPDIRECTDRAWSURFACE *) __offset(OFF64|AUTO);
HRESULT (__stdcall *EnumDisplayModes)(IDirectDraw2 *This, DWORD, LPDDSURFACEDESC, LPVOID, LPDDENUMMODESCALLBACK) __offset(OFF64|AUTO);
HRESULT (__stdcall *EnumSurfaces)(IDirectDraw2 *This, DWORD, LPDDSURFACEDESC, LPVOID, LPDDENUMSURFACESCALLBACK) __offset(OFF64|AUTO);
HRESULT (__stdcall *FlipToGDISurface)(IDirectDraw2 *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetCaps)(IDirectDraw2 *This, LPDDCAPS, LPDDCAPS) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetDisplayMode)(IDirectDraw2 *This, LPDDSURFACEDESC) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetFourCCCodes)(IDirectDraw2 *This, LPDWORD, LPDWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetGDISurface)(IDirectDraw2 *This, LPDIRECTDRAWSURFACE *) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetMonitorFrequency)(IDirectDraw2 *This, LPDWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetScanLine)(IDirectDraw2 *This, LPDWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetVerticalBlankStatus)(IDirectDraw2 *This, LPBOOL) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirectDraw2 *This, GUID *) __offset(OFF64|AUTO);
HRESULT (__stdcall *RestoreDisplayMode)(IDirectDraw2 *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetCooperativeLevel)(IDirectDraw2 *This, HWND, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetDisplayMode)(IDirectDraw2 *This, DWORD, DWORD, DWORD, DWORD, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *WaitForVerticalBlank)(IDirectDraw2 *This, DWORD, HANDLE) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetAvailableVidMem)(IDirectDraw2 *This, LPDDSCAPS, LPDWORD, LPDWORD) __offset(OFF64|AUTO);
};
