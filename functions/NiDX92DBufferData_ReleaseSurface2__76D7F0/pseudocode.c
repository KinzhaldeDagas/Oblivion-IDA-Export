void __thiscall NiDX92DBufferData::ReleaseSurface2(NiDX92DBufferData *this)
{
  IDirect3DSurface9 *Surface; // eax

  Surface = this->member.Surface;
  if ( Surface )
  {
    Surface->lpVtbl->Release(Surface);
    this->member.Surface = 0;
  }
  FormHeapFree((unsigned int)this->member.SurfaceData);
  this->member.SurfaceData = 0;
}
