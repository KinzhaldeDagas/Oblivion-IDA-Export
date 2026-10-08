unsigned int __cdecl sub_744D00(_DWORD *a1)
{
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // eax
  unsigned int v4; // eax

  if ( !a1 ) /*0x744d0b*/
    return 0xFFFFFFFE; /*0x744d0b*/
  v1 = (_DWORD *)a1[7]; /*0x744d0d*/
  if ( !v1 || !a1[8] || !a1[9] ) /*0x744d19*/
    return 0xFFFFFFFE; /*0x744d88*/
  a1[5] = 0; /*0x744d1e*/
  a1[2] = 0; /*0x744d21*/
  a1[6] = 0; /*0x744d24*/
  a1[0xB] = 2; /*0x744d27*/
  v1[4] = v1[2]; /*0x744d31*/
  v2 = v1[6]; /*0x744d34*/
  v1[5] = 0; /*0x744d39*/
  if ( v2 < 0 ) /*0x744d3c*/
    v1[6] = -v2; /*0x744d40*/
  v3 = v1[6]; /*0x744d43*/
  v1[1] = v3 != 0 ? 0x2A : 0x71;
  if ( v3 == 2 ) /*0x744d5b*/
    v4 = sub_745D90(0, 0, 0); /*0x744d5d*/
  else
    v4 = sub_7459B0(0, 0, 0); /*0x744d64*/
  a1[0xC] = v4; /*0x744d6c*/
  v1[8] = 0; /*0x744d70*/
  sub_746FB0((int)v1); /*0x744d73*/
  sub_743F10(v1); /*0x744d7b*/
  return 0; /*0x744d80*/
}
