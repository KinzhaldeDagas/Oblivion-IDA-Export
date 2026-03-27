void __userpurge sub_595790(_DWORD *a1@<ecx>, char a2@<bpl>, double a3@<st1>, double a4@<st0>, _DWORD *a5, int a6)
{
  float *sound; // ecx
  double v9; // st5

  if ( a5 == (_DWORD *)0xC )
  {
    sound = (float *)OSGlobals->sound;
    flt_B16190 = sound[0x2E];
    flt_B16198 = sound[0x2F];
    flt_B161B0 = sound[0x30];
    flt_B161A8 = sound[0x31];
    v9 = sub_6A8E00(sound);
    flt_B161A0 = a4;
    sub_595740(v9, a3);
    sub_5BD610(a2, v9, a3);
  }
  else if ( a5 == (_DWORD *)0xB )
  {
    Tile_SetFloat((Tile *)a1[0xA], (_DWORD *)0xFB3, flt_A6B328);
    Tile_SetFloat((Tile *)a1[0xA], (_DWORD *)0xFB3, flt_A2FE7C);
    Tile_SetFloat((Tile *)a1[0xA], (_DWORD *)0xFB3, 0.0);
    Tile_SetFloat((Tile *)a1[0x12], (_DWORD *)0xFB3, flt_A6B328);
    Tile_SetFloat((Tile *)a1[0x12], (_DWORD *)0xFB3, flt_A37CC8);
    Tile_SetFloat((Tile *)a1[0x12], (_DWORD *)0xFB3, 0.0);
    Tile_SetFloat((Tile *)a1[0x10], (_DWORD *)0xFB3, flt_A6B328);
    Tile_SetFloat((Tile *)a1[0x10], (_DWORD *)0xFB3, flt_A6B324);
    Tile_SetFloat((Tile *)a1[0x10], (_DWORD *)0xFB3, 0.0);
    Tile_SetFloat((Tile *)a1[0xC], (_DWORD *)0xFB3, flt_A6B328);
    Tile_SetFloat((Tile *)a1[0xC], (_DWORD *)0xFB3, flt_A6B324);
    Tile_SetFloat((Tile *)a1[0xC], (_DWORD *)0xFB3, 0.0);
    Tile_SetFloat((Tile *)a1[0xE], (_DWORD *)0xFB3, flt_A6B328);
    Tile_SetFloat((Tile *)a1[0xE], (_DWORD *)0xFB3, flt_A6B324);
    Tile_SetFloat((Tile *)a1[0xE], (_DWORD *)0xFB3, 0.0);
  }
}
