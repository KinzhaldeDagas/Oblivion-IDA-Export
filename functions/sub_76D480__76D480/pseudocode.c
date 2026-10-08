char __thiscall sub_76D480(IDirect3DSurface9 **this, int a2)
{
  IDirect3DSurface9 *v3; // eax

  v3 = *(this + 3); /*0x76d483*/
  if ( !v3 ) /*0x76d488*/
    return 0; /*0x76d488*/
  if ( v3 != g_D3D9BoundDepthStencilSurface ) /*0x76d496*/
  {
    if ( (*(int (__stdcall **)(int, IDirect3DSurface9 *))(*(_DWORD *)a2 + 0x9C))(a2, v3) < 0 ) /*0x76d4aa*/
      return 0; /*0x76d48d*/
    g_D3D9BoundDepthStencilSurface = *(this + 3); /*0x76d4af*/
  }
  return 1; /*0x76d48c*/
}
