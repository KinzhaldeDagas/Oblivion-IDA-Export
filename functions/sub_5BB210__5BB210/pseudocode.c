void __userpurge sub_5BB210(_DWORD *a1@<ecx>, double st6_0@<st1>, double a3@<st0>, _DWORD *a4, _DWORD *a5)
{
  Tile *v8; // ecx
  double v9; // st7
  int v10; // edx
  float a2; // [esp+0h] [ebp-Ch]
  float a2a; // [esp+0h] [ebp-Ch]

  Tile_SetFloat((Tile *)a1[0x13], (_DWORD *)0xFA1, 1.0);
  a2 = (float)(int)a4;
  Tile_SetFloat((Tile *)a1[0xA], (_DWORD *)0xFAE, a2);
  BYTE1(InterfaceManager_GetSingleton(0, 1)->unk008[1]) = (_BYTE)a4;
  Tile_SetFloat((Tile *)a1[0x17], (_DWORD *)0xFA1, 1.0);
  Tile_SetString((_DWORD *)a1[0x17], (_DWORD *)0xFDE, word_A36430);
  v8 = (Tile *)a1[0x3D];
  if ( v8 )
  {
    a3 = 0.0;
    Tile_SetFloat(v8, (_DWORD *)0xFB5, 0.0);
  }
  a1[0x3D] = 0;
  if ( a4 == (_DWORD *)4 || a4 == (_DWORD *)5 )
  {
    sub_5BACB0(1.0, st6_0, a3, 0);
    v9 = 1.0;
LABEL_8:
    a2a = v9;
    Tile_SetFloat((Tile *)a1[0x14], (_DWORD *)0xFA1, a2a);
    Tile_SetFloat((Tile *)a1[0x15], (_DWORD *)0xFA1, 1.0);
    goto LABEL_13;
  }
  if ( a4 == (_DWORD *)3 )
  {
    sub_5BACB0(1.0, st6_0, a3, 0);
    v9 = (double)((sub_65D830(TESDataHandler_g_PlayerRef, a3, v10) != 0) + 1);
    goto LABEL_8;
  }
  if ( a4 == (_DWORD *)2 )
  {
    sub_5B91E0(1.0, st6_0);
  }
  else if ( a4 == (_DWORD *)1 )
  {
    sub_5BA4D0(1.0, st6_0, 1);
  }
LABEL_13:
  Tile_SetFloat((Tile *)a1[0x11], (_DWORD *)0xFB7, flt_A6B618);
  Tile_SetFloat((Tile *)a1[0x11], (_DWORD *)0xFB7, 0.0);
}
