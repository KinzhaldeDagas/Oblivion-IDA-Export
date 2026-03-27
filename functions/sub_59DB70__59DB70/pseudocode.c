void __thiscall sub_59DB70(int this, signed int a3, _DWORD *arg4)
{
  _DWORD *i; // esi
  float a2; // [esp+0h] [ebp-Ch]
  float a3b; // [esp+10h] [ebp+4h]
  float a3c; // [esp+10h] [ebp+4h]
  float a3a; // [esp+10h] [ebp+4h]
  float Float; // [esp+14h] [ebp+8h]

  if ( a3 >= 0x64 )
  {
    sub_57DE50(4);
    a3b = Tile_GetFloat(arg4, 0xFAB);
    a3c = a3b - dbl_A2FAA0;
    Tile_SetFloat(*(Tile **)(this + 0x38), (_DWORD *)0xFAB, a3c);
    a2 = Tile_GetFloat(arg4, 0xFCB);
    Tile_SetFloat(*(Tile **)(this + 0x38), (_DWORD *)0xFCB, a2);
    a3a = Tile_GetFloat(arg4, 0xFAD);
    Float = Tile_GetFloat(arg4, 0xFAC);
    for ( i = (_DWORD *)arg4[4]; i; i = (_DWORD *)i[4] )
    {
      if ( Tile_GetFloat(i, 0xFA6) == fConstant_2 )
      {
        a3a = Tile_GetFloat(i, 0xFAD) + a3a;
        Float = Tile_GetFloat(i, 0xFAC) + Float;
      }
    }
    Tile_SetFloat(*(Tile **)(this + 0x38), (_DWORD *)0xFAD, a3a);
    Tile_SetFloat(*(Tile **)(this + 0x38), (_DWORD *)0xFAC, Float);
    Tile_SetFloat(*(Tile **)(this + 0x38), (_DWORD *)0xFA1, fConstant_2);
  }
}
