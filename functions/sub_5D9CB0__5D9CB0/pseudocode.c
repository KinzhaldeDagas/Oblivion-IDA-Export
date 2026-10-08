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

  v2 = sub_65FD00((signed int *)reference); /*0x5d9cba*/
  v3 = v2 > 1.0; /*0x5d9cc1*/
  v4 = 1.0 == v2; /*0x5d9cc1*/
  v5 = 1.0; /*0x5d9cc5*/
  if ( v3 || v4 ) /*0x5d9cc7*/
  {
    a3 = 1.0; /*0x5d9ce1*/
  }
  else
  {
    a3 = sub_65FD00((signed int *)reference); /*0x5d9cd9*/
    v5 = 1.0; /*0x5d9cdd*/
  }
  if ( a3 >= dbl_A2FC68 ) /*0x5d9cf4*/
  {
    v6 = sub_65FD00((signed int *)reference); /*0x5d9d06*/
    v7 = v6 > 1.0; /*0x5d9d0d*/
    v8 = 1.0 == v6; /*0x5d9d0d*/
    v5 = 1.0; /*0x5d9d11*/
    if ( v7 || v8 ) /*0x5d9d13*/
    {
      a3a = 1.0; /*0x5d9d2d*/
    }
    else
    {
      a3a = sub_65FD00((signed int *)reference); /*0x5d9d25*/
      v5 = 1.0; /*0x5d9d29*/
    }
  }
  else
  {
    a3a = 0.0; /*0x5d9cf8*/
  }
  a2 = v5; /*0x5d9d35*/
  Tile_SetFloat((Tile *)*(this + 0xC), 0xFAFu, a2); /*0x5d9d3d*/
  Tile_SetFloat((Tile *)*(this + 0xC), 0xFB0u, a3a); /*0x5d9d52*/
}
