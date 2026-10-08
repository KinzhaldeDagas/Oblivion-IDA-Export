// D3D9 color-target state cache. Binds Surface only when it differs from the cached surface for this MRT slot; successful SetRenderTarget updates g_D3D9BoundRenderTargetSurfaces[slot].
char __thiscall NiDX92DBufferData::SetRenderTarget(NiDX92DBufferData *this, IDirect3DDevice9 *a2, DWORD a3)
{
  IDirect3DSurface9 *Surface; // eax

  Surface = this->member.Surface; /*0x76d3d3*/
  if ( !Surface ) /*0x76d3d8*/
    return 0; /*0x76d41d*/
  if ( a3 > g_D3D9MaxRenderTargetIndex ) /*0x76d3e5*/
    return 0; /*0x76d409*/
  if ( Surface != *(IDirect3DSurface9 **)(4 * a3 + 0xB42600) ) /*0x76d3ee*/
  {
    if ( (int)a2->lpVtbl->SetRenderTarget(a2, a3, Surface) < 0 ) /*0x76d403*/
      return 0; /*0x76d403*/
    *(_DWORD *)(4 * a3 + 0xB42600) = this->member.Surface; /*0x76d40f*/
  }
  return 1; /*0x76d408*/
}
