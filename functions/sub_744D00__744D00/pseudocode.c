unsigned int __cdecl sub_744D00(_DWORD *a1)
{
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // eax
  int v4; // eax

  if ( !a1 )
    return 0xFFFFFFFE;
  v1 = (_DWORD *)a1[7];
  if ( !v1 || !a1[8] || !a1[9] )
    return 0xFFFFFFFE;
  a1[5] = 0;
  a1[2] = 0;
  a1[6] = 0;
  a1[0xB] = 2;
  v1[4] = v1[2];
  v2 = v1[6];
  v1[5] = 0;
  if ( v2 < 0 )
    v1[6] = -v2;
  v3 = v1[6];
  v1[1] = v3 != 0 ? 0x2A : 0x71;
  if ( v3 == 2 )
    v4 = sub_745D90(0, 0, 0);
  else
    v4 = sub_7459B0(0, 0, 0);
  a1[0xC] = v4;
  v1[8] = 0;
  sub_746FB0((int)v1);
  sub_743F10(v1);
  return 0;
}
