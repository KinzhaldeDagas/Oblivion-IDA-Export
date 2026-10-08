struct IDirect3DLightVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirect3DLight *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirect3DLight *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirect3DLight *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirect3DLight *This, LPDIRECT3D) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetLight)(IDirect3DLight *This, LPD3DLIGHT) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetLight)(IDirect3DLight *This, LPD3DLIGHT) __offset(OFF64|AUTO);
};
