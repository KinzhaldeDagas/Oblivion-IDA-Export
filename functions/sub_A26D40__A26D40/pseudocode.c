void __cdecl sub_A26D40()
{
  NiD3DTextureStage *v0; // eax

  v0 = (NiD3DTextureStage *)unk_B42048; /*0xa26d40*/
  if ( unk_B42048 ) /*0xa26d47*/
  {
    --*(_DWORD *)(unk_B42048 + 0x5C); /*0xa26d49*/
    if ( !v0[7].Unk08 ) /*0xa26d52*/
      sub_772560(v0); /*0xa26d57*/
  }
}
