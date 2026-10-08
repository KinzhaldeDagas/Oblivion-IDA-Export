// Shared Oblivion mode-5 caster-pass allocator. Maps rigid/opaque to selector 6, rigid/alpha-test to 7, skinned/opaque to 8, and skinned/alpha-test to 9. Every RenderPass carries the current ShadowSceneLight as its sole light.
NiTPointerList_Node_void *__thiscall sub_85AAC0(_DWORD *this, int a2, char a3, int a4)
{
  int v5; // esi
  int v6; // eax
  bool v7; // zf
  int v8; // eax

  v5 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0x17]; /*0x85aae4*/
  v6 = FormHeapAlloc(0x10u); /*0x85aaec*/
  if ( a3 ) /*0x85aaf9*/
  {
    v7 = (_BYTE)a4 == 0; /*0x85ab50*/
    a4 = v6; /*0x85ab55*/
    if ( v7 ) /*0x85ab59*/
    {
      if ( v6 ) /*0x85ab65*/
      {
        v8 = RenderPass_Construct(v6, a2, 8, 1, 1u, v5);// Mode-5 caster selector 8: skinned geometry without NiAlphaProperty alpha-test flag 0x200. /*0x85ab74*/
        goto LABEL_13; /*0x85ab7c*/
      }
    }
    else if ( v6 ) /*0x85ab88*/
    {
      v8 = RenderPass_Construct(v6, a2, 9, 1, 1u, v5);// Mode-5 caster selector 9: skinned geometry with NiAlphaProperty alpha-test flag 0x200. /*0x85ab97*/
      goto LABEL_13; /*0x85ab9f*/
    }
    goto LABEL_12; /*0x85ab65*/
  }
  v7 = (_BYTE)a4 == 0; /*0x85aafb*/
  a4 = v6; /*0x85ab00*/
  if ( !v7 ) /*0x85ab04*/
  {
    if ( v6 ) /*0x85ab37*/
    {
      v8 = RenderPass_Construct(v6, a2, 7, 1, 1u, v5);// Mode-5 caster selector 7: rigid geometry with NiAlphaProperty alpha-test flag 0x200. /*0x85ab46*/
      goto LABEL_13; /*0x85ab4e*/
    }
LABEL_12:
    v8 = 0; /*0x85aba1*/
    goto LABEL_13; /*0x85aba1*/
  }
  if ( !v6 ) /*0x85ab10*/
    goto LABEL_12; /*0x85ab10*/
  v8 = RenderPass_Construct(v6, a2, 6, 1, 1u, v5);// Mode-5 caster selector 6: rigid geometry without NiAlphaProperty alpha-test flag 0x200. /*0x85ab23*/
LABEL_13:
  a4 = v8; /*0x85aba3*/
  return NiTPointerList__AddTail((BSTextureManager *)(this + 0xE), (void **)&a4); /*0x85abbc*/
}
