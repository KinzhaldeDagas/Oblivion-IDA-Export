void __cdecl sub_7B8910(NiNode *a1)
{
  const char *v1; // eax

  if ( a1 ) /*0x7b8917*/
  {
    v1 = 0; /*0x7b891f*/
    if ( *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0xE] ) /*0x7b8919*/
      v1 = (const char *)(*(int (__cdecl **)(NiNode *))&OB_RendererGlobalState_010201A0.pad_00D[0xE])(a1); /*0x7b8926*/
    sub_7B7F00(a1, v1); /*0x7b892d*/
  }
}
