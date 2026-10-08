int __initstdio()
{
  int v0; // eax
  char *v1; // eax
  int v3; // edx
  void **v4; // ecx
  int v5; // edx
  _DWORD *v6; // ecx
  int v7; // eax

  v0 = dword_BABC00; /*0x98baf6*/
  if ( !dword_BABC00 ) /*0x98bb01*/
  {
    v0 = 0x200; /*0x98bb03*/
LABEL_5:
    dword_BABC00 = v0; /*0x98bb10*/
    goto LABEL_6; /*0x98bb10*/
  }
  if ( dword_BABC00 < 0x14 ) /*0x98bb0c*/
  {
    v0 = 0x14; /*0x98bb0e*/
    goto LABEL_5; /*0x98bb0e*/
  }
LABEL_6:
  v1 = (char *)unknown_libname_74(v0, 4); /*0x98bb15*/
  unk_BAABE4 = v1; /*0x98bb21*/
  if ( !v1 ) /*0x98bb26*/
  {
    dword_BABC00 = 0x14; /*0x98bb2b*/
    v1 = (char *)unknown_libname_74(0x14, 4); /*0x98bb31*/
    unk_BAABE4 = v1; /*0x98bb3a*/
    if ( !v1 ) /*0x98bb3f*/
      return 0x1A; /*0x98bb43*/
  }
  v3 = 0; /*0x98bb46*/
  v4 = &off_B30E28; /*0x98bb48*/
  while ( 1 ) /*0x98bb54*/
  {
    *(_DWORD *)&v1[v3] = v4; /*0x98bb54*/
    v4 += 8; /*0x98bb57*/
    v3 += 4; /*0x98bb5a*/
    if ( (int)v4 >= (int)&dword_B310A8 ) /*0x98bb63*/
      break; /*0x98bb63*/
    v1 = (char *)unk_BAABE4; /*0x98bb4f*/
  }
  v5 = 0; /*0x98bb68*/
  v6 = &unk_B30E38; /*0x98bb6a*/
  do /*0x98bba0*/
  {
    v7 = *(_DWORD *)(0x28 * (v5 & 0x1F) + unk_BAAAC0[v5 >> 5]); /*0x98bb84*/
    if ( v7 == 0xFFFFFFFF || v7 == 0xFFFFFFFE || !v7 ) /*0x98bb92*/
      *v6 = 0xFFFFFFFE; /*0x98bb94*/
    v6 += 8; /*0x98bb96*/
    ++v5; /*0x98bb99*/
  }
  while ( (int)v6 < (int)dword_B30E98 ); /*0x98bba0*/
  return 0; /*0x98bb44*/
}
