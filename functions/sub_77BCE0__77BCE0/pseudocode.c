char sub_77BCE0()
{
  int v0; // eax

  v0 = FormHeapAlloc(0x10u); /*0x77bce2*/
  if ( v0 ) /*0x77bcee*/
  {
    *(_DWORD *)(v0 + 4) = 0; /*0x77bcf0*/
    *(_DWORD *)(v0 + 8) = 0; /*0x77bcf3*/
    *(_DWORD *)(v0 + 0xC) = 0; /*0x77bcf6*/
    *(_DWORD *)v0 = &NiD3DShaderProgramCreatorObj::`vftable'; /*0x77bcf9*/
  }
  else
  {
    v0 = 0; /*0x77bd01*/
  }
  unk_B428D0 = v0; /*0x77bd09*/
  sub_77F720(off_A8ABC0, (TESForm *)v0); /*0x77bd0e*/
  return sub_77F720(off_A8ABBC, (TESForm *)unk_B428D0); /*0x77bd26*/
}
