struct __declspec(align(4)) NiDX92DBufferDataVtbl
{
NiRefObjectVtbl super;
UInt32 (__thiscall *GetWidth)(NiDX92DBufferData *this);
UInt32 (__thiscall *GetHeight)(NiDX92DBufferData *this);
NiSurfaceData *(__thiscall *GetSurfaceData)(NiDX92DBufferData *this);
void *(__thiscall *GetRTTI)(NiDX92DBufferData *this);
UInt32 (__thiscall *func05)(NiDX92DBufferData *this);
UInt32 (__thiscall *func06)(NiDX92DBufferData *this);
UInt32 (__thiscall *func07)(NiDX92DBufferData *this);
UInt32 (__thiscall *func08)(NiDX92DBufferData *this);
UInt32 (__thiscall *func09)(NiDX92DBufferData *this);
UInt32 (__thiscall *func0A)(NiDX92DBufferData *this);
bool (__thiscall *ReleaseSurface1)(NiDX92DBufferData *this);
bool (__thiscall *GetBufferData)(NiDX92DBufferData *this, IDirect3DDevice9 *D3DDevice);
bool (__thiscall *SetRenderTarget)(NiDX92DBufferData *this, IDirect3DDevice9 *D3DDevice, UInt32 Index);
bool (__thiscall *SetDepthTarget)(NiDX92DBufferData *this, IDirect3DDevice9 *D3DDevice);
void (__thiscall *ReleaseSurface2)(NiDX92DBufferData *this);
};
