void __thiscall NiDX9ImplicitBufferData::~NiDX9ImplicitBufferData(NiDX9ImplicitBufferData *this)
{
  IDirect3DDevice9 *device; // eax
  IDirect3DSurface9 *Surface; // eax

  device = this->device; /*0x76dbd3*/
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiDX9ImplicitBufferData::`vftable'; /*0x76dbd8*/
  if ( device ) /*0x76dbde*/
  {
    device->lpVtbl->Release(device); /*0x76dbe6*/
    this->device = 0; /*0x76dbe8*/
  }
  Surface = this->super.Surface; /*0x76dbef*/
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiDX92DBufferData::`vftable'; /*0x76dbf4*/
  if ( Surface ) /*0x76dbfa*/
  {
    Surface->lpVtbl->Release(Surface); /*0x76dc02*/
    this->super.Surface = 0; /*0x76dc04*/
  }
  FormHeapFree((unsigned int)this->super.SurfaceData); /*0x76dc0f*/
  this->super.SurfaceData = 0; /*0x76dc1c*/
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiRefObject::`vftable'; /*0x76dc23*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x76dc29*/
}
