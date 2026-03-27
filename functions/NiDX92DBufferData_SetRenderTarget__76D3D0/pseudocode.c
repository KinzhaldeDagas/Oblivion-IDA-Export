char __thiscall NiDX92DBufferData::SetRenderTarget(NiDX92DBufferData *this, IDirect3DDevice9 *a2, DWORD a3)
{
  IDirect3DSurface9 *Surface; // eax

  Surface = this->member.Surface;
  if ( !Surface )
    return 0;
  if ( a3 > dword_B42614 )
    return 0;
  if ( Surface != *(IDirect3DSurface9 **)(4 * a3 + 0xB42600) )
  {
    if ( (int)a2->lpVtbl->SetRenderTarget(a2, a3, Surface) < 0 )
      return 0;
    *(_DWORD *)(4 * a3 + 0xB42600) = this->member.Surface;
  }
  return 1;
}
