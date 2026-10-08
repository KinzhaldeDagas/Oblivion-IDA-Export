void __userpurge sub_5BB210(_DWORD *a1@<ecx>, double st6_0@<st1>, double a3@<st0>, _DWORD *a4, _DWORD *a5)
{
  Tile *v6; // ecx
  double v7; // st7
  int v8; // eax
  float a2; // [esp+0h] [ebp-Ch]
  float a2a; // [esp+0h] [ebp-Ch]

  Tile_SetFloat((Tile *)a1[0x13], 0xFA1u, 1.0); /*0x5bb222*/
  a2 = (float)(int)a4; /*0x5bb22f*/
  Tile_SetFloat((Tile *)a1[0xA], 0xFAEu, a2); /*0x5bb237*/
  BYTE1(InterfaceManager_GetSingleton(0, 1)->unk008[1]) = (_BYTE)a4; /*0x5bb252*/
  Tile_SetFloat((Tile *)a1[0x17], 0xFA1u, 1.0); /*0x5bb25d*/
  Tile_SetString((_DWORD *)a1[0x17], (_DWORD *)0xFDE, word_A36430); /*0x5bb26f*/
  v6 = (Tile *)a1[0x3D]; /*0x5bb274*/
  if ( v6 ) /*0x5bb27c*/
  {
    a3 = 0.0; /*0x5bb27e*/
    Tile_SetFloat(v6, 0xFB5u, 0.0); /*0x5bb289*/
  }
  a1[0x3D] = 0; /*0x5bb291*/
  if ( a4 == (_DWORD *)4 || a4 == (_DWORD *)5 ) /*0x5bb2a0*/
  {
    sub_5BACB0(1.0, st6_0, a3, 0); /*0x5bb2a4*/
    v7 = 1.0; /*0x5bb2a9*/
LABEL_8:
    a2a = v7; /*0x5bb2d9*/
    Tile_SetFloat((Tile *)a1[0x14], 0xFA1u, a2a); /*0x5bb2e4*/
    Tile_SetFloat((Tile *)a1[0x15], 0xFA1u, 1.0); /*0x5bb2f7*/
    goto LABEL_13; /*0x5bb2fc*/
  }
  if ( a4 == (_DWORD *)3 ) /*0x5bb2b0*/
  {
    sub_5BACB0(1.0, st6_0, a3, 0); /*0x5bb2b4*/
    sub_65D830(reference, a3); /*0x5bb2c2*/
    v7 = (double)((v8 != 0) + 1); /*0x5bb2d4*/
    goto LABEL_8; /*0x5bb2d4*/
  }
  if ( a4 == (_DWORD *)2 ) /*0x5bb301*/
  {
    TravelPath_DebugRouteToPoint(1.0); /*0x5bb303*/
  }
  else if ( a4 == (_DWORD *)1 ) /*0x5bb30d*/
  {
    sub_5BA4D0(1.0, st6_0, 1); /*0x5bb310*/
  }
LABEL_13:
  Tile_SetFloat((Tile *)a1[0x11], 0xFB7u, flt_A6B618); /*0x5bb318*/
  Tile_SetFloat((Tile *)a1[0x11], 0xFB7u, 0.0); /*0x5bb33d*/
}
