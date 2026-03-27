NiD3DTextureStage **__thiscall sub_75FAE0(NiD3DTextureStage **this, unsigned int *a2)
{
  NiD3DTextureStage *v3; // ecx
  bool v4; // zf
  unsigned int v5; // eax

  v3 = *this;
  if ( v3 != (NiD3DTextureStage *)*a2 )
  {
    if ( v3 )
    {
      v4 = v3[7].Unk08-- == 1;
      if ( v4 )
        sub_772560(v3);
    }
    v5 = *a2;
    v4 = *a2 == 0;
    *this = (NiD3DTextureStage *)*a2;
    if ( !v4 )
      ++*(_DWORD *)(v5 + 0x5C);
  }
  return this;
}
