char sub_77BCE0()
{
  _DWORD *v0; // eax

  v0 = (_DWORD *)FormHeapAlloc(0x10u);
  if ( v0 )
  {
    v0[1] = 0;
    v0[2] = 0;
    v0[3] = 0;
    *v0 = &NiD3DShaderProgramCreatorObj::`vftable';
  }
  else
  {
    v0 = 0;
  }
  dword_B428D0 = (int)v0;
  sub_77F720(off_A8ABC0, (int)v0);
  return sub_77F720(off_A8ABBC, dword_B428D0);
}
