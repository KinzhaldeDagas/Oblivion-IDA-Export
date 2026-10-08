struct IDirect3DMaterialVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirect3DMaterial *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirect3DMaterial *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirect3DMaterial *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirect3DMaterial *This, LPDIRECT3D) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetMaterial)(IDirect3DMaterial *This, LPD3DMATERIAL) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetMaterial)(IDirect3DMaterial *This, LPD3DMATERIAL) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetHandle)(IDirect3DMaterial *This, LPDIRECT3DDEVICE, LPD3DMATERIALHANDLE) __offset(OFF64|AUTO);
HRESULT (__stdcall *Reserve)(IDirect3DMaterial *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *Unreserve)(IDirect3DMaterial *This) __offset(OFF64|AUTO);
};
