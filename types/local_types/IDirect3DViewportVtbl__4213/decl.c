struct IDirect3DViewportVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirect3DViewport *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirect3DViewport *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirect3DViewport *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirect3DViewport *This, LPDIRECT3D) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetViewport)(IDirect3DViewport *This, LPD3DVIEWPORT) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetViewport)(IDirect3DViewport *This, LPD3DVIEWPORT) __offset(OFF64|AUTO);
HRESULT (__stdcall *TransformVertices)(IDirect3DViewport *This, DWORD, LPD3DTRANSFORMDATA, DWORD, LPDWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *LightElements)(IDirect3DViewport *This, DWORD, LPD3DLIGHTDATA) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetBackground)(IDirect3DViewport *This, D3DMATERIALHANDLE) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetBackground)(IDirect3DViewport *This, LPD3DMATERIALHANDLE, LPBOOL) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetBackgroundDepth)(IDirect3DViewport *This, LPDIRECTDRAWSURFACE) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetBackgroundDepth)(IDirect3DViewport *This, LPDIRECTDRAWSURFACE *, LPBOOL) __offset(OFF64|AUTO);
HRESULT (__stdcall *Clear)(IDirect3DViewport *This, DWORD, LPD3DRECT, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *AddLight)(IDirect3DViewport *This, LPDIRECT3DLIGHT) __offset(OFF64|AUTO);
HRESULT (__stdcall *DeleteLight)(IDirect3DViewport *This, LPDIRECT3DLIGHT) __offset(OFF64|AUTO);
HRESULT (__stdcall *NextLight)(IDirect3DViewport *This, LPDIRECT3DLIGHT, LPDIRECT3DLIGHT *, DWORD) __offset(OFF64|AUTO);
};
