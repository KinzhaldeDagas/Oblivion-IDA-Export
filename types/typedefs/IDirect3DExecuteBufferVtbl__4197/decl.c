struct IDirect3DExecuteBufferVtbl
{
HRESULT (__stdcall *QueryInterface)(IDirect3DExecuteBuffer *This, const IID *const riid, LPVOID *ppvObj) __offset(OFF64|AUTO);
ULONG (__stdcall *AddRef)(IDirect3DExecuteBuffer *This) __offset(OFF64|AUTO);
ULONG (__stdcall *Release)(IDirect3DExecuteBuffer *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *Initialize)(IDirect3DExecuteBuffer *This, LPDIRECT3DDEVICE, LPD3DEXECUTEBUFFERDESC) __offset(OFF64|AUTO);
HRESULT (__stdcall *Lock)(IDirect3DExecuteBuffer *This, LPD3DEXECUTEBUFFERDESC) __offset(OFF64|AUTO);
HRESULT (__stdcall *Unlock)(IDirect3DExecuteBuffer *This) __offset(OFF64|AUTO);
HRESULT (__stdcall *SetExecuteData)(IDirect3DExecuteBuffer *This, LPD3DEXECUTEDATA) __offset(OFF64|AUTO);
HRESULT (__stdcall *GetExecuteData)(IDirect3DExecuteBuffer *This, LPD3DEXECUTEDATA) __offset(OFF64|AUTO);
HRESULT (__stdcall *Validate)(IDirect3DExecuteBuffer *This, LPDWORD, LPD3DVALIDATECALLBACK, LPVOID, DWORD) __offset(OFF64|AUTO);
HRESULT (__stdcall *Optimize)(IDirect3DExecuteBuffer *This, DWORD) __offset(OFF64|AUTO);
};
