NiD3DTextureStage **__thiscall sub_7AEC20(NiD3DTextureStage **this, NiD3DTextureStage *a2)
{
  NiD3DTextureStage *v3; // ecx
  NiD3DTextureStage **result; // eax

  v3 = *this; /*0x7aec23*/
  if ( v3 == a2 ) /*0x7aec2c*/
    return this; /*0x7aec4e*/
  if ( v3 ) /*0x7aec30*/
  {
    if ( v3[7].Unk08-- == 1 ) /*0x7aec32*/
      sub_772560(v3); /*0x7aec38*/
  }
  *this = a2; /*0x7aec3f*/
  result = this; /*0x7aec41*/
  if ( a2 ) /*0x7aec43*/
    ++a2[7].Unk08; /*0x7aec45*/
  return result; /*0x7aec49*/
}
