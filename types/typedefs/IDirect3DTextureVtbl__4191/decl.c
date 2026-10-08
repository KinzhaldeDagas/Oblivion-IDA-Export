struct IDirect3DTextureVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirect3DTexture *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirect3DTexture *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirect3DTexture *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirect3DTexture *This, LPDIRECT3DDEVICE, LPDIRECTDRAWSURFACE) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetHandle)(IDirect3DTexture *This, LPDIRECT3DDEVICE, LPD3DTEXTUREHANDLE) __offset(OFF64|AUTO);
HRESULT (__stdcall *PaletteChanged)(IDirect3DTexture *This, DWORD, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *Load)(IDirect3DTexture *This, LPDIRECT3DTEXTURE) __offset(OFF64|AUTO);
HRESULT (__stdcall *Unload)(IDirect3DTexture *This) __offset(OFF64|AUTO);
};
