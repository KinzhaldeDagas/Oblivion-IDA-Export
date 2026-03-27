void __thiscall sub_5D9CB0(_DWORD **this)
{
  double v2; // st7
  bool v3; // c0
  bool v4; // c3
  double v5; // st7
  double v6; // st7
  bool v7; // c0
  bool v8; // c3
  float a2; // [esp+0h] [ebp-Ch]
  float a3; // [esp+8h] [ebp-4h]
  float a3a; // [esp+8h] [ebp-4h]

  v2 = sub_65FD00((signed int *)TESDataHandler_g_PlayerRef);
  v3 = v2 > 1.0;
  v4 = 1.0 == v2;
  v5 = 1.0;
  if ( v3 || v4 )
  {
    a3 = 1.0;
  }
  else
  {
    a3 = sub_65FD00((signed int *)TESDataHandler_g_PlayerRef);
    v5 = 1.0;
  }
  if ( a3 >= dbl_A2FC68 )
  {
    v6 = sub_65FD00((signed int *)TESDataHandler_g_PlayerRef);
    v7 = v6 > 1.0;
    v8 = 1.0 == v6;
    v5 = 1.0;
    if ( v7 || v8 )
    {
      a3a = 1.0;
    }
    else
    {
      a3a = sub_65FD00((signed int *)TESDataHandler_g_PlayerRef);
      v5 = 1.0;
    }
  }
  else
  {
    a3a = 0.0;
  }
  a2 = v5;
  Tile_SetFloat((Tile *)*(this + 0xC), (_DWORD *)0xFAF, a2);
  Tile_SetFloat((Tile *)*(this + 0xC), (_DWORD *)0xFB0, a3a);
}
