NiD3DTextureStage **__thiscall sub_75FAE0(NiD3DTextureStage **this, NiD3DTextureStage **a2)
{
  NiD3DTextureStage *v3; // ecx
  bool v4; // zf
  NiD3DTextureStage *v5; // eax

  v3 = *this; /*0x75fae3*/
  if ( v3 != *a2 ) /*0x75faec*/
  {
    if ( v3 ) /*0x75faf0*/
    {
      v4 = v3[7].Unk08-- == 1; /*0x75faf2*/
      if ( v4 ) /*0x75faf6*/
        sub_772560(v3); /*0x75faf8*/
    }
    v5 = *a2; /*0x75fafd*/
    v4 = *a2 == 0; /*0x75faff*/
    *this = *a2; /*0x75fb01*/
    if ( !v4 ) /*0x75fb03*/
      ++v5[7].Unk08; /*0x75fb05*/
  }
  return this; /*0x75fb09*/
}
