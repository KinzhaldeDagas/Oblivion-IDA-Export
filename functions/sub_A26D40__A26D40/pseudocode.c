void __cdecl sub_A26D40()
{
  NiD3DTextureStage *v0; // eax

  v0 = (NiD3DTextureStage *)dword_B42048;
  if ( dword_B42048 )
  {
    --*(_DWORD *)(dword_B42048 + 0x5C);
    if ( !v0[7].Unk08 )
      sub_772560(v0);
  }
}
