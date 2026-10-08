struct IDirect3DStateBlock9Vtbl
{
HRESULT (__stdcall *QueryInterface)(IDirect3DStateBlock9 *This, const IID *const riid, void **ppvObj);
ULONG (__stdcall *AddRef)(IDirect3DStateBlock9 *This);
ULONG (__stdcall *Release)(IDirect3DStateBlock9 *This);
HRESULT (__stdcall *GetDevice)(IDirect3DStateBlock9 *This, IDirect3DDevice9 **ppDevice);
HRESULT (__stdcall *Capture)(IDirect3DStateBlock9 *This);
HRESULT (__stdcall *Apply)(IDirect3DStateBlock9 *This);
};
