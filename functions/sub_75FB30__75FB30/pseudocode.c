NiDX9RenderState *__cdecl sub_75FB30(NiDX9Renderer *a1)
{
  IDirect3DDevice9 *device; // esi
  NiDX9RenderState *result; // eax

  MEMORY[0xB4203C] = a1; /*0x75fb36*/
  if ( a1 ) /*0x75fb3b*/
  {
    device = a1->member.device; /*0x75fb3e*/
    if ( unk_B42038 ) /*0x75fb44*/
      (*(void (__stdcall **)(int))(*(_DWORD *)unk_B42038 + 8))(unk_B42038); /*0x75fb53*/
    unk_B42038 = (int)device; /*0x75fb57*/
    if ( device ) /*0x75fb5d*/
      device->lpVtbl->AddRef(device); /*0x75fb65*/
    result = MEMORY[0xB4203C]->member.renderState; /*0x75fb6d*/
    MEMORY[0xB42040] = result; /*0x75fb73*/
  }
  else
  {
    result = (NiDX9RenderState *)unk_B42038; /*0x75fb7a*/
    if ( unk_B42038 ) /*0x75fb7a*/
      result = (NiDX9RenderState *)((int (__stdcall *)(int))result->vtbl->SetAlpha)(unk_B42038); /*0x75fb89*/
    unk_B42038 = 0; /*0x75fb8b*/
    MEMORY[0xB42040] = 0; /*0x75fb95*/
  }
  return result; /*0x75fb79*/
}
