IDirect3DDevice9 *__cdecl sub_772060(NiDX9Renderer *a1)
{
  IDirect3DDevice9 *device; // esi
  IDirect3DDevice9 *result; // eax

  dword_B42754 = a1;
  if ( a1 )
  {
    device = a1->member.device;
    if ( dword_B42750 )
      dword_B42750->lpVtbl->Release(dword_B42750);
    dword_B42750 = device;
    if ( device )
      device->lpVtbl->AddRef(device);
    result = (IDirect3DDevice9 *)dword_B42754->member.renderState;
    dword_B42758 = (NiDX9RenderState *)result;
  }
  else
  {
    result = dword_B42750;
    if ( dword_B42750 )
      result = (IDirect3DDevice9 *)result->lpVtbl->Release(dword_B42750);
    dword_B42750 = 0;
    dword_B42758 = 0;
  }
  return result;
}
