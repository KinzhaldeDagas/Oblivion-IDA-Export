struct IDirect3DIndexBuffer9Vtbl
{
HRESULT (__stdcall *QueryInterface)(IDirect3DIndexBuffer9 *This, const IID *const riid, void **ppvObj);
ULONG (__stdcall *AddRef)(IDirect3DIndexBuffer9 *This);
ULONG (__stdcall *Release)(IDirect3DIndexBuffer9 *This);
HRESULT (__stdcall *GetDevice)(IDirect3DIndexBuffer9 *This, IDirect3DDevice9 **ppDevice);
HRESULT (__stdcall *SetPrivateData)(IDirect3DIndexBuffer9 *This, const GUID *const refguid, const void *pData, DWORD SizeOfData, DWORD Flags);
HRESULT (__stdcall *GetPrivateData)(IDirect3DIndexBuffer9 *This, const GUID *const refguid, void *pData, DWORD *pSizeOfData);
HRESULT (__stdcall *FreePrivateData)(IDirect3DIndexBuffer9 *This, const GUID *const refguid);
DWORD (__stdcall *SetPriority)(IDirect3DIndexBuffer9 *This, DWORD PriorityNew);
DWORD (__stdcall *GetPriority)(IDirect3DIndexBuffer9 *This);
void (__stdcall *PreLoad)(IDirect3DIndexBuffer9 *This);
D3DRESOURCETYPE (__stdcall *GetType)(IDirect3DIndexBuffer9 *This);
HRESULT (__stdcall *Lock)(IDirect3DIndexBuffer9 *This, UINT OffsetToLock, UINT SizeToLock, void **ppbData, DWORD Flags);
HRESULT (__stdcall *Unlock)(IDirect3DIndexBuffer9 *This);
HRESULT (__stdcall *GetDesc)(IDirect3DIndexBuffer9 *This, D3DINDEXBUFFER_DESC *pDesc);
};
