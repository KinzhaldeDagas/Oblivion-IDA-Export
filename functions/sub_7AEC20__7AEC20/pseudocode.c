NiD3DTextureStage **__thiscall sub_7AEC20(NiD3DTextureStage **this, NiD3DTextureStage *a2)
{
  NiD3DTextureStage *v3; // ecx
  NiD3DTextureStage **result; // eax

  v3 = *this;
  if ( v3 == a2 )
    return this;
  if ( v3 )
  {
    if ( v3[7].Unk08-- == 1 )
      sub_772560(v3);
  }
  *this = a2;
  result = this;
  if ( a2 )
    ++a2[7].Unk08;
  return result;
}
