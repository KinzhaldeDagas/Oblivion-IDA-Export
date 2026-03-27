int __initstdio()
{
  int v0; // eax
  char *v1; // eax
  int v3; // edx
  void **v4; // ecx
  int v5; // edx
  _DWORD *v6; // ecx
  int v7; // eax

  if ( !dword_BABC00 )
  {
    v0 = 0x200;
LABEL_5:
    dword_BABC00 = v0;
    goto LABEL_6;
  }
  if ( dword_BABC00 < 0x14 )
  {
    v0 = 0x14;
    goto LABEL_5;
  }
LABEL_6:
  v1 = (char *)unknown_libname_74();
  dword_BAABE4 = v1;
  if ( !v1 )
  {
    dword_BABC00 = 0x14;
    v1 = (char *)unknown_libname_74();
    dword_BAABE4 = v1;
    if ( !v1 )
      return 0x1A;
  }
  v3 = 0;
  v4 = &off_B30E28;
  while ( 1 )
  {
    *(_DWORD *)&v1[v3] = v4;
    v4 += 8;
    v3 += 4;
    if ( (int)v4 >= (int)&dword_B310A8 )
      break;
    v1 = (char *)dword_BAABE4;
  }
  v5 = 0;
  v6 = &unk_B30E38;
  do
  {
    v7 = *(_DWORD *)(0x28 * (v5 & 0x1F) + dword_BAAAC0[v5 >> 5]);
    if ( v7 == 0xFFFFFFFF || v7 == 0xFFFFFFFE || !v7 )
      *v6 = 0xFFFFFFFE;
    v6 += 8;
    ++v5;
  }
  while ( (int)v6 < (int)dword_B30E98 );
  return 0;
}
