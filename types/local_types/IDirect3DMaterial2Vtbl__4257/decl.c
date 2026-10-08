struct IDirect3DMaterial2Vtbl
{
HRESULT (__stdcall *QueryInterface)(IDirect3DMaterial2 *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirect3DMaterial2 *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirect3DMaterial2 *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetMaterial)(IDirect3DMaterial2 *This, LPD3DMATERIAL) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetMaterial)(IDirect3DMaterial2 *This, LPD3DMATERIAL) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetHandle)(IDirect3DMaterial2 *This, LPDIRECT3DDEVICE2, LPD3DMATERIALHANDLE) __offset(OFF64|AUTO);
};
