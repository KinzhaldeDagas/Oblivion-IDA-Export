struct IDirect3DVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirect3D *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirect3D *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirect3D *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirect3D *This, const IID *const) __offset(OFF64|AUTO);
HRESULT (__stdcall *EnumDevices)(IDirect3D *This, LPD3DENUMDEVICESCALLBACK, LPVOID) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreateLight)(IDirect3D *This, LPDIRECT3DLIGHT *, IUnknown *) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreateMaterial)(IDirect3D *This, LPDIRECT3DMATERIAL *, IUnknown *) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreateViewport)(IDirect3D *This, LPDIRECT3DVIEWPORT *, IUnknown *) __offset(OFF64|AUTO);
HRESULT (__stdcall *FindDevice)(IDirect3D *This, LPD3DFINDDEVICESEARCH, LPD3DFINDDEVICERESULT) __offset(OFF64|AUTO);
};
