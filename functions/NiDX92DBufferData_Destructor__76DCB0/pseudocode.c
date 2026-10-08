NiDX92DBufferData *__thiscall NiDX92DBufferData::Destructor(NiDX92DBufferData *this, char a2)
{
  IDirect3DSurface9 *Surface; // eax

  Surface = this->member.Surface; /*0x76dcb3*/
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiDX92DBufferData::`vftable'; /*0x76dcb8*/
  if ( Surface ) /*0x76dcbe*/
  {
    Surface->lpVtbl->Release(Surface); /*0x76dcc6*/
    this->member.Surface = 0; /*0x76dcc8*/
  }
  FormHeapFree((unsigned int)this->member.SurfaceData); /*0x76dcd3*/
  this->member.SurfaceData = 0; /*0x76dce0*/
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiRefObject::`vftable'; /*0x76dce7*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x76dced*/
  if ( (a2 & 1) != 0 ) /*0x76dcf8*/
    FormHeapFree((unsigned int)this); /*0x76dcfb*/
  return this; /*0x76dd05*/
}
