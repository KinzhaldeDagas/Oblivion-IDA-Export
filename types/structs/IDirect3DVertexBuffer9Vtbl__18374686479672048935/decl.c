struct IDirect3DVertexBuffer9Vtbl
{
HRESULT (__stdcall *QueryInterface)(IDirect3DVertexBuffer9 *This, const IID *const riid, void **ppvObj);
ULONG (__stdcall *AddRef)(IDirect3DVertexBuffer9 *This);
ULONG (__stdcall *Release)(IDirect3DVertexBuffer9 *This);
HRESULT (__stdcall *GetDevice)(IDirect3DVertexBuffer9 *This, IDirect3DDevice9 **ppDevice);
HRESULT (__stdcall *SetPrivateData)(IDirect3DVertexBuffer9 *This, const GUID *const refguid, const void *pData, DWORD SizeOfData, DWORD Flags);
HRESULT (__stdcall *GetPrivateData)(IDirect3DVertexBuffer9 *This, const GUID *const refguid, void *pData, DWORD *pSizeOfData);
HRESULT (__stdcall *FreePrivateData)(IDirect3DVertexBuffer9 *This, const GUID *const refguid);
DWORD (__stdcall *SetPriority)(IDirect3DVertexBuffer9 *This, DWORD PriorityNew);
DWORD (__stdcall *GetPriority)(IDirect3DVertexBuffer9 *This);
void (__stdcall *PreLoad)(IDirect3DVertexBuffer9 *This);
D3DRESOURCETYPE (__stdcall *GetType)(IDirect3DVertexBuffer9 *This);
HRESULT (__stdcall *Lock)(IDirect3DVertexBuffer9 *This, UINT OffsetToLock, UINT SizeToLock, void **ppbData, DWORD Flags);
HRESULT (__stdcall *Unlock)(IDirect3DVertexBuffer9 *This);
HRESULT (__stdcall *GetDesc)(IDirect3DVertexBuffer9 *This, D3DVERTEXBUFFER_DESC *pDesc);
};
