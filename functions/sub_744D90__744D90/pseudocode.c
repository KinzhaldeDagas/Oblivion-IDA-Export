unsigned int __cdecl sub_744D90(
        _DWORD *a1,
        unsigned int a2,
        int a3,
        signed int a4,
        int a5,
        unsigned int a6,
        _BYTE *a7,
        int a8)
{
  int v8; // ebp
  bool v10; // zf
  int v11; // ebx
  _DWORD *v12; // eax
  _DWORD *v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx

  v8 = 1; /*0x744d99*/
  if ( !a7 || *a7 != 0x31 || a8 != 0x38 ) /*0x744db2*/
    return 0xFFFFFFFA; /*0x744f9e*/
  if ( !a1 ) /*0x744dbf*/
    return 0xFFFFFFFE; /*0x744dc8*/
  v10 = a1[8] == 0; /*0x744dc9*/
  a1[6] = 0; /*0x744dcc*/
  if ( v10 ) /*0x744dcf*/
  {
    a1[8] = sub_744FE0; /*0x744dd1*/
    a1[0xA] = 0; /*0x744dd8*/
  }
  if ( !a1[9] ) /*0x744ddb*/
    a1[9] = sub_745000; /*0x744de0*/
  if ( a2 == 0xFFFFFFFF ) /*0x744dec*/
    a2 = 6; /*0x744dee*/
  v11 = a4; /*0x744df7*/
  if ( a4 >= 0 ) /*0x744dfd*/
  {
    if ( a4 > 0xF ) /*0x744e08*/
    {
      v8 = 2; /*0x744e0a*/
      v11 = a4 - 0x10; /*0x744e0f*/
    }
  }
  else
  {
    v8 = 0; /*0x744dff*/
    v11 = -a4; /*0x744e01*/
  }
  if ( (unsigned int)(a5 - 1) > 8 || a3 != 8 || (unsigned int)(v11 - 8) > 7 || a2 > 9 || a6 > 3 ) /*0x744e49*/
    return 0xFFFFFFFE; /*0x744f97*/
  if ( v11 == 8 ) /*0x744e52*/
    v11 = 9; /*0x744e54*/
  v12 = (_DWORD *)((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[0xA], 1, 0x16B8); /*0x744e68*/
  v13 = v12; /*0x744e6a*/
  if ( v12 ) /*0x744e71*/
  {
    a1[7] = v12; /*0x744e77*/
    v12[6] = v8; /*0x744e7a*/
    v12[0xA] = v11; /*0x744e86*/
    v12[0xB] = (1 << v11) - 1; /*0x744e95*/
    v14 = 1 << (a5 + 7); /*0x744e9b*/
    v13[0x12] = a5 + 7; /*0x744e9d*/
    *v13 = a1; /*0x744ea3*/
    v13[0x11] = v14; /*0x744ea5*/
    v13[0x13] = v14 - 1; /*0x744eab*/
    v13[9] = 1 << v11; /*0x744eb7*/
    v13[0x14] = (a5 + 9) / 3u; /*0x744eba*/
    v15 = ((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[0xA], 1 << v11, 2); /*0x744ec7*/
    v16 = v13[9]; /*0x744ec9*/
    v13[0xC] = v15; /*0x744ecc*/
    v17 = ((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[0xA], v16, 2); /*0x744ed9*/
    v18 = v13[0x11]; /*0x744edb*/
    v13[0xE] = v17; /*0x744ede*/
    v13[0xF] = ((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[0xA], v18, 2); /*0x744eed*/
    v13[0x5A5] = 1 << (a5 + 6); /*0x744efc*/
    v19 = ((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[0xA], 1 << (a5 + 6), 4); /*0x744f0a*/
    v20 = v13[0x5A5]; /*0x744f0c*/
    v10 = v13[0xC] == 0; /*0x744f15*/
    v13[2] = v19; /*0x744f20*/
    v13[3] = 4 * v20; /*0x744f23*/
    if ( !v10 && v13[0xE] && v13[0xF] && v19 ) /*0x744f36*/
    {
      v13[0x5A7] = v19 + 2 * (v20 >> 1); /*0x744f48*/
      v13[0x5A4] = v20 + v19 + 2 * v20; /*0x744f53*/
      v13[0x1F] = a2; /*0x744f59*/
      v13[0x20] = a6; /*0x744f5c*/
      *((_BYTE *)v13 + 0x1D) = 8; /*0x744f62*/
      return sub_744D00(a1); /*0x744f72*/
    }
    v13[1] = 0x29A; /*0x744f73*/
    a1[6] = off_A82848[0]; /*0x744f80*/
    sub_743E50((int)a1); /*0x744f83*/
  }
  return 0xFFFFFFFC; /*0x744dc7*/
}
