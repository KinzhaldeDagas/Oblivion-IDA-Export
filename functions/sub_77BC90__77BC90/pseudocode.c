char sub_77BC90()
{
  _DWORD *v0; // eax

  v0 = (_DWORD *)FormHeapAlloc(0x10u);
  if ( v0 )
  {
    *v0 = &NiD3DShaderProgramCreatorAsm::`vftable';
    v0[1] = 0;
    v0[2] = 0;
    v0[3] = 0;
  }
  else
  {
    v0 = 0;
  }
  dword_B428CC = (int)v0;
  sub_77F720(off_A8AB88, (int)v0);
  return sub_77F720(off_A4D1EC, dword_B428CC);
}
