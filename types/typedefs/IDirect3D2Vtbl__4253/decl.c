struct IDirect3D2Vtbl
{
HRESULT (__stdcall *QueryInterface)(IDirect3D2 *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirect3D2 *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirect3D2 *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *EnumDevices)(IDirect3D2 *This, LPD3DENUMDEVICESCALLBACK, LPVOID) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreateLight)(IDirect3D2 *This, LPDIRECT3DLIGHT *, IUnknown *) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreateMaterial)(IDirect3D2 *This, LPDIRECT3DMATERIAL2 *, IUnknown *) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreateViewport)(IDirect3D2 *This, LPDIRECT3DVIEWPORT2 *, IUnknown *) __offset(OFF64|AUTO);
HRESULT (__stdcall *FindDevice)(IDirect3D2 *This, LPD3DFINDDEVICESEARCH, LPD3DFINDDEVICERESULT) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreateDevice)(IDirect3D2 *This, const CLSID *const, LPDIRECTDRAWSURFACE, LPDIRECT3DDEVICE2 *) __offset(OFF64|AUTO);
};
