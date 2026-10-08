void __thiscall NiDX92DBufferData::ReleaseSurface2(NiDX92DBufferData *this)
{
  IDirect3DSurface9 *Surface; // eax

  Surface = this->member.Surface; /*0x76d7f3*/
  if ( Surface ) /*0x76d7f8*/
  {
    Surface->lpVtbl->Release(Surface); /*0x76d800*/
    this->member.Surface = 0; /*0x76d802*/
  }
  FormHeapFree((unsigned int)this->member.SurfaceData); /*0x76d80d*/
  this->member.SurfaceData = 0; /*0x76d815*/
}
