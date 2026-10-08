// Unbinds the cached implicit depth/stencil surface with IDirect3DDevice9::SetDepthStencilSurface(NULL), then clears g_D3D9BoundDepthStencilSurface.
bool __cdecl NiDX92DBufferData::UnsetDepthStencilSurface(IDirect3DDevice9 *device)
{
  if ( g_D3D9BoundDepthStencilSurface ) /*0x76d4c0*/
  {
    if ( (int)device->lpVtbl->SetDepthStencilSurface(device, 0) < 0 ) /*0x76d4dc*/
      return 0; /*0x76d4e0*/
    g_D3D9BoundDepthStencilSurface = 0; /*0x76d4e1*/
  }
  return 1; /*0x76d4e0*/
}
