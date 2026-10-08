int __cdecl sub_778F60(NiDX9Renderer *a1)
{
  NiDX9RenderState *renderState; // edi
  NiD3DShaderFactory *v2; // eax
  NiD3DShaderProgramFactory *v3; // eax
  void *v4; // ecx
  NiD3DShaderProgramFactory *v5; // eax
  void *v6; // ecx

  renderState = a1->member.renderState; /*0x778f66*/
  sub_75FB30(a1); /*0x778f6d*/
  sub_772060(a1); /*0x778f73*/
  MEMORY[0xB42834] = renderState; /*0x778f79*/
  sub_77EBB0(a1); /*0x778f7f*/
  sub_77F7E0((int)a1); /*0x778f85*/
  sub_772940(a1); /*0x778f8b*/
  ((void (__thiscall *)(NiDX9RenderState *))renderState->vtbl->Reset)(renderState); /*0x778f9d*/
  v2 = sub_77C0F0(); /*0x778f9f*/
  if ( v2 ) /*0x778fa6*/
    (*(void (__thiscall **)(NiD3DShaderFactory *, NiDX9Renderer *))(*(_DWORD *)v2 + 0x6C))(v2, a1); /*0x778fb0*/
  if ( MEMORY[0xB428A8] ) /*0x778fb2*/
    return 0; /*0x778fbb*/
  v3 = (NiD3DShaderProgramFactory *)FormHeapAlloc(0x20u); /*0x778fbf*/
  if ( v3 ) /*0x778fc9*/
  {
    v5 = NiD3DShaderProgramFactory::NiD3DShaderProgramFactory(v3); /*0x778fcd*/
    MEMORY[0xB428A8] = v5; /*0x778fd4*/
    if ( !v5 ) /*0x778fd9*/
      Shared_NoOpVirtual_60D0A0(v6); /*0x778fe0*/
    return 0; /*0x778fea*/
  }
  MEMORY[0xB428A8] = 0; /*0x778ff0*/
  Shared_NoOpVirtual_60D0A0(v4); /*0x778ffa*/
  return 0; /*0x778fb9*/
}
