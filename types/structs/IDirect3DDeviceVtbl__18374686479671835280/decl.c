struct IDirect3DDeviceVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirect3DDevice *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirect3DDevice *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirect3DDevice *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirect3DDevice *This, LPDIRECT3D, LPGUID, LPD3DDEVICEDESC) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetCaps)(IDirect3DDevice *This, LPD3DDEVICEDESC, LPD3DDEVICEDESC) __offset(OFF64|AUTO);
HRESULT (__stdcall *SwapTextureHandles)(IDirect3DDevice *This, LPDIRECT3DTEXTURE, LPDIRECT3DTEXTURE) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreateExecuteBuffer)(IDirect3DDevice *This, LPD3DEXECUTEBUFFERDESC, LPDIRECT3DEXECUTEBUFFER *, IUnknown *) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetStats)(IDirect3DDevice *This, LPD3DSTATS) __offset(OFF64|AUTO);
HRESULT (__stdcall *Execute)(IDirect3DDevice *This, LPDIRECT3DEXECUTEBUFFER, LPDIRECT3DVIEWPORT, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *AddViewport)(IDirect3DDevice *This, LPDIRECT3DVIEWPORT) __offset(OFF64|AUTO);
HRESULT (__stdcall *DeleteViewport)(IDirect3DDevice *This, LPDIRECT3DVIEWPORT) __offset(OFF64|AUTO);
HRESULT (__stdcall *NextViewport)(IDirect3DDevice *This, LPDIRECT3DVIEWPORT, LPDIRECT3DVIEWPORT *, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *Pick)(IDirect3DDevice *This, LPDIRECT3DEXECUTEBUFFER, LPDIRECT3DVIEWPORT, DWORD, LPD3DRECT) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetPickRecords)(IDirect3DDevice *This, LPDWORD, LPD3DPICKRECORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *EnumTextureFormats)(IDirect3DDevice *This, LPD3DENUMTEXTUREFORMATSCALLBACK, LPVOID) __offset(OFF64|AUTO);
HRESULT (__stdcall *CreateMatrix)(IDirect3DDevice *This, LPD3DMATRIXHANDLE) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetMatrix)(IDirect3DDevice *This, D3DMATRIXHANDLE, const LPD3DMATRIX) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetMatrix)(IDirect3DDevice *This, D3DMATRIXHANDLE, LPD3DMATRIX) __offset(OFF64|AUTO);
HRESULT (__stdcall *DeleteMatrix)(IDirect3DDevice *This, D3DMATRIXHANDLE) __offset(OFF64|AUTO);
HRESULT (__stdcall *BeginScene)(IDirect3DDevice *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *EndScene)(IDirect3DDevice *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetDirect3D)(IDirect3DDevice *This, LPDIRECT3D *) __offset(OFF64|AUTO);
};
