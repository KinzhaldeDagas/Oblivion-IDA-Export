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

  v8 = 1;
  if ( !a7 || *a7 != 0x31 || a8 != 0x38 )
    return 0xFFFFFFFA;
  if ( !a1 )
    return 0xFFFFFFFE;
  v10 = a1[8] == 0;
  a1[6] = 0;
  if ( v10 )
  {
    a1[8] = sub_744FE0;
    a1[0xA] = 0;
  }
  if ( !a1[9] )
    a1[9] = sub_745000;
  if ( a2 == 0xFFFFFFFF )
    a2 = 6;
  v11 = a4;
  if ( a4 >= 0 )
  {
    if ( a4 > 0xF )
    {
      v8 = 2;
      v11 = a4 - 0x10;
    }
  }
  else
  {
    v8 = 0;
    v11 = -a4;
  }
  if ( (unsigned int)(a5 - 1) > 8 || a3 != 8 || (unsigned int)(v11 - 8) > 7 || a2 > 9 || a6 > 3 )
    return 0xFFFFFFFE;
  if ( v11 == 8 )
    v11 = 9;
  v12 = (_DWORD *)((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[0xA], 1, 0x16B8);
  v13 = v12;
  if ( v12 )
  {
    a1[7] = v12;
    v12[6] = v8;
    v12[0xA] = v11;
    v12[0xB] = (1 << v11) - 1;
    v14 = 1 << (a5 + 7);
    v13[0x12] = a5 + 7;
    *v13 = a1;
    v13[0x11] = v14;
    v13[0x13] = v14 - 1;
    v13[9] = 1 << v11;
    v13[0x14] = (a5 + 9) / 3u;
    v15 = ((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[0xA], 1 << v11, 2);
    v16 = v13[9];
    v13[0xC] = v15;
    v17 = ((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[0xA], v16, 2);
    v18 = v13[0x11];
    v13[0xE] = v17;
    v13[0xF] = ((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[0xA], v18, 2);
    v13[0x5A5] = 1 << (a5 + 6);
    v19 = ((int (__cdecl *)(_DWORD, int, int))a1[8])(a1[0xA], 1 << (a5 + 6), 4);
    v20 = v13[0x5A5];
    v10 = v13[0xC] == 0;
    v13[2] = v19;
    v13[3] = 4 * v20;
    if ( !v10 && v13[0xE] && v13[0xF] && v19 )
    {
      v13[0x5A7] = v19 + 2 * (v20 >> 1);
      v13[0x5A4] = v20 + v19 + 2 * v20;
      v13[0x1F] = a2;
      v13[0x20] = a6;
      *((_BYTE *)v13 + 0x1D) = 8;
      return sub_744D00(a1);
    }
    v13[1] = 0x29A;
    a1[6] = off_A82848[0];
    sub_743E50((int)a1);
  }
  return 0xFFFFFFFC;
}
