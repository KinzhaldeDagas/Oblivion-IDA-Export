int __cdecl sub_778F60(NiDX9Renderer *a1)
{
  NiDX9RenderState *renderState; // edi
  NiD3DShaderFactory *v2; // eax
  NiD3DShaderProgramFactory *v3; // eax
  void *v4; // ecx
  NiD3DShaderProgramFactory *v5; // eax
  void *v6; // ecx

  renderState = a1->member.renderState;
  sub_75FB30(a1);
  sub_772060(a1);
  g_RenderState = renderState;
  sub_77EBB0(a1);
  sub_77F7E0((int)a1);
  sub_772940(a1);
  ((void (__thiscall *)(NiDX9RenderState *))renderState->vtbl->Reset)(renderState);
  v2 = sub_77C0F0();
  if ( v2 )
    (*(void (__thiscall **)(NiD3DShaderFactory *, NiDX9Renderer *))(*(_DWORD *)v2 + 0x6C))(v2, a1);
  if ( shaderProgramFactory )
    return 0;
  v3 = (NiD3DShaderProgramFactory *)FormHeapAlloc(0x20u);
  if ( v3 )
  {
    v5 = NiD3DShaderProgramFactory::NiD3DShaderProgramFactory(v3);
    shaderProgramFactory = v5;
    if ( !v5 )
      TESTexture::ClearComponentReferences(v6);
    return 0;
  }
  shaderProgramFactory = 0;
  TESTexture::ClearComponentReferences(v4);
  return 0;
}
