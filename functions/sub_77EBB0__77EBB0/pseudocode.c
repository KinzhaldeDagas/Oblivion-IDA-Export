int __cdecl sub_77EBB0(NiDX9Renderer *a1)
{
  IDirect3DDevice9 *device; // esi
  int result; // eax
  bool v3; // zf

  unk_B428B4 = (int)a1; /*0x77ebb6*/
  if ( a1 ) /*0x77ebbb*/
  {
    device = a1->member.device; /*0x77ebbe*/
    if ( unk_B428B0 ) /*0x77ebc4*/
      (*(void (__stdcall **)(int))(*(_DWORD *)unk_B428B0 + 8))(unk_B428B0); /*0x77ebd3*/
    unk_B428B0 = (int)device; /*0x77ebd7*/
    if ( device ) /*0x77ebdd*/
      device->lpVtbl->AddRef(device); /*0x77ebe5*/
    result = *(_DWORD *)(unk_B428B4 + 0x8AC); /*0x77ebed*/
    unk_B428B8 = result; /*0x77ebf3*/
  }
  else
  {
    result = unk_B428B0; /*0x77ebfa*/
    v3 = unk_B428B0 == 0; /*0x77ebff*/
    unk_B428B8 = 0; /*0x77ec01*/
    if ( !v3 ) /*0x77ec0b*/
      result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x77ec13*/
    unk_B428B0 = 0; /*0x77ec15*/
  }
  return result; /*0x77ebf9*/
}
