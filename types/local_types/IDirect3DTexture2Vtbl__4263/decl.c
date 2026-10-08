struct IDirect3DTexture2Vtbl
{
HRESULT (__stdcall *QueryInterface)(IDirect3DTexture2 *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirect3DTexture2 *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirect3DTexture2 *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetHandle)(IDirect3DTexture2 *This, LPDIRECT3DDEVICE2, LPD3DTEXTUREHANDLE) __offset(OFF64|AUTO);
HRESULT (__stdcall *PaletteChanged)(IDirect3DTexture2 *This, DWORD, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *Load)(IDirect3DTexture2 *This, LPDIRECT3DTEXTURE2) __offset(OFF64|AUTO);
};
