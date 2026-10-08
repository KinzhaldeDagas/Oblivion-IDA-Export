BSRenderedTexture *sub_7C02E0()
{
  BSRenderedTexture *result; // eax
  BSRenderedTexture *v1; // esi

  result = unk_B43328; /*0x7c02e0*/
  if ( unk_B43328 ) /*0x7c02e0*/
  {
    BSTextureManager__ReturnRenderedTexture( /*0x7c02f0*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
      unk_B43328);
    result = unk_B43328; /*0x7c02f5*/
    if ( unk_B43328 ) /*0x7c02f5*/
    {
      v1 = unk_B43328; /*0x7c02ff*/
      result = (BSRenderedTexture *)InterlockedDecrement((volatile LONG *)&result->members); /*0x7c0305*/
      if ( !result ) /*0x7c030d*/
      {
        if ( v1 ) /*0x7c0311*/
          result = (BSRenderedTexture *)(*(int (__thiscall **)(BSRenderedTexture *, int))v1->vtbl)(v1, 1); /*0x7c031b*/
      }
      unk_B43328 = 0; /*0x7c031d*/
    }
  }
  return result; /*0x7c0328*/
}
