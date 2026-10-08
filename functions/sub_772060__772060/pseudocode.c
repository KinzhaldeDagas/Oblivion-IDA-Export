IDirect3DDevice9 *__cdecl sub_772060(NiDX9Renderer *a1)
{
  IDirect3DDevice9 *device; // esi
  IDirect3DDevice9 *result; // eax

  unk_B42754 = a1; /*0x772066*/
  if ( a1 ) /*0x77206b*/
  {
    device = a1->member.device; /*0x77206e*/
    if ( unk_B42750 ) /*0x772074*/
      unk_B42750->lpVtbl->Release(unk_B42750); /*0x772083*/
    unk_B42750 = device; /*0x772087*/
    if ( device ) /*0x77208d*/
      device->lpVtbl->AddRef(device); /*0x772095*/
    result = (IDirect3DDevice9 *)unk_B42754->member.renderState; /*0x77209d*/
    unk_B42758 = (NiDX9RenderState *)result; /*0x7720a3*/
  }
  else
  {
    result = unk_B42750; /*0x7720aa*/
    if ( unk_B42750 ) /*0x7720aa*/
      result = (IDirect3DDevice9 *)result->lpVtbl->Release(unk_B42750); /*0x7720b9*/
    unk_B42750 = 0; /*0x7720bb*/
    unk_B42758 = 0; /*0x7720c5*/
  }
  return result; /*0x7720a9*/
}
