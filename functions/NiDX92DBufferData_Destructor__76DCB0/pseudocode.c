NiDX92DBufferData *__thiscall NiDX92DBufferData::Destructor(NiDX92DBufferData *this, char a2)
{
  IDirect3DSurface9 *Surface; // eax

  Surface = this->member.Surface;
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiDX92DBufferData::`vftable';
  if ( Surface )
  {
    Surface->lpVtbl->Release(Surface);
    this->member.Surface = 0;
  }
  FormHeapFree((unsigned int)this->member.SurfaceData);
  this->member.SurfaceData = 0;
  this->__vftable = (NiDX92DBufferDataVtbl *)&NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
