char sub_77BC90()
{
  int v0; // eax

  v0 = FormHeapAlloc(0x10u); /*0x77bc92*/
  if ( v0 ) /*0x77bc9e*/
  {
    *(_DWORD *)v0 = &NiD3DShaderProgramCreatorAsm::`vftable'; /*0x77bca0*/
    *(_DWORD *)(v0 + 4) = 0; /*0x77bca6*/
    *(_DWORD *)(v0 + 8) = 0; /*0x77bca9*/
    *(_DWORD *)(v0 + 0xC) = 0; /*0x77bcac*/
  }
  else
  {
    v0 = 0; /*0x77bcb1*/
  }
  unk_B428CC = v0; /*0x77bcb9*/
  sub_77F720(off_A8AB88, (TESForm *)v0); /*0x77bcbe*/
  return sub_77F720(off_A4D1EC, (TESForm *)unk_B428CC); /*0x77bcd6*/
}
