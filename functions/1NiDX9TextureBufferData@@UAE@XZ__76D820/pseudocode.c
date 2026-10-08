void __thiscall NiDX9TextureBufferData::~NiDX9TextureBufferData(NiDX9TextureBufferData *this)
{
  void *unkD3D; // eax
  IDirect3DSurface9 *Surface; // eax

  unkD3D = this->member.unkD3D; /*0x76d823*/
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiDX9TextureBufferData::`vftable'; /*0x76d828*/
  if ( unkD3D ) /*0x76d82e*/
  {
    (*(void (__stdcall **)(void *))(*(_DWORD *)unkD3D + 8))(unkD3D); /*0x76d836*/
    this->member.unkD3D = 0; /*0x76d838*/
  }
  Surface = this->member.super.Surface; /*0x76d83f*/
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiDX92DBufferData::`vftable'; /*0x76d844*/
  if ( Surface ) /*0x76d84a*/
  {
    Surface->lpVtbl->Release(Surface); /*0x76d852*/
    this->member.super.Surface = 0; /*0x76d854*/
  }
  FormHeapFree((unsigned int)this->member.super.SurfaceData); /*0x76d85f*/
  this->member.super.SurfaceData = 0; /*0x76d86c*/
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiRefObject::`vftable'; /*0x76d873*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x76d879*/
}
