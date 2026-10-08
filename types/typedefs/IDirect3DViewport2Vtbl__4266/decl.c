struct IDirect3DViewport2Vtbl
{
HRESULT (__stdcall *QueryInterface)(IDirect3DViewport2 *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirect3DViewport2 *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirect3DViewport2 *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirect3DViewport2 *This, LPDIRECT3D) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetViewport)(IDirect3DViewport2 *This, LPD3DVIEWPORT) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetViewport)(IDirect3DViewport2 *This, LPD3DVIEWPORT) __offset(OFF64|AUTO);
HRESULT (__stdcall *TransformVertices)(IDirect3DViewport2 *This, DWORD, LPD3DTRANSFORMDATA, DWORD, LPDWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *LightElements)(IDirect3DViewport2 *This, DWORD, LPD3DLIGHTDATA) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetBackground)(IDirect3DViewport2 *This, D3DMATERIALHANDLE) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetBackground)(IDirect3DViewport2 *This, LPD3DMATERIALHANDLE, LPBOOL) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetBackgroundDepth)(IDirect3DViewport2 *This, LPDIRECTDRAWSURFACE) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetBackgroundDepth)(IDirect3DViewport2 *This, LPDIRECTDRAWSURFACE *, LPBOOL) __offset(OFF64|AUTO);
HRESULT (__stdcall *Clear)(IDirect3DViewport2 *This, DWORD, LPD3DRECT, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *AddLight)(IDirect3DViewport2 *This, LPDIRECT3DLIGHT) __offset(OFF64|AUTO);
HRESULT (__stdcall *DeleteLight)(IDirect3DViewport2 *This, LPDIRECT3DLIGHT) __offset(OFF64|AUTO);
HRESULT (__stdcall *NextLight)(IDirect3DViewport2 *This, LPDIRECT3DLIGHT, LPDIRECT3DLIGHT *, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetViewport2)(IDirect3DViewport2 *This, LPD3DVIEWPORT2) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetViewport2)(IDirect3DViewport2 *This, LPD3DVIEWPORT2) __offset(OFF64|AUTO);
};
