void __thiscall NiDX9TextureBufferData::~NiDX9TextureBufferData(NiDX9TextureBufferData *this)
{
  void *unkD3D; // eax
  IDirect3DSurface9 *Surface; // eax

  unkD3D = this->member.unkD3D;
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiDX9TextureBufferData::`vftable';
  if ( unkD3D )
  {
    (*(void (__stdcall **)(void *))(*(_DWORD *)unkD3D + 8))(unkD3D);
    this->member.unkD3D = 0;
  }
  Surface = this->member.super.Surface;
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiDX92DBufferData::`vftable';
  if ( Surface )
  {
    Surface->lpVtbl->Release(Surface);
    this->member.super.Surface = 0;
  }
  FormHeapFree((unsigned int)this->member.super.SurfaceData);
  this->member.super.SurfaceData = 0;
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
