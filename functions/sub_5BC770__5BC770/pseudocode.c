double __userpurge sub_5BC770@<st0>(int a1@<ecx>, double st7_0@<st0>, int a3, _DWORD *a4)
{
  _DWORD *v6; // eax
  double v7; // st6
  Tile *v8; // ecx
  float a2; // [esp+0h] [ebp-14h]
  float a2a; // [esp+0h] [ebp-14h]
  float a2b; // [esp+0h] [ebp-14h]
  float a2c; // [esp+0h] [ebp-14h]
  float a2d; // [esp+0h] [ebp-14h]
  float v14; // [esp+1Ch] [ebp+8h]

  if ( *(_DWORD *)(a1 + 0x30) && a4 && Tile_GetFloat(a4, 0xFA8) >= flt_A46B10 ) /*0x5bc7a4*/
  {
    st7_0 = sub_588D90(a4, st7_0); /*0x5bc7ac*/
    v6 = sub_589390(a4); /*0x5bc7bc*/
    v14 = st7_0 - Tile_GetFloat(v6, 0xFAB) - dbl_A2F928; /*0x5bc7d6*/
    Tile_SetFloat(*(Tile **)(a1 + 0x30), 0xFABu, v14); /*0x5bc7e6*/
    a2 = Tile_GetFloat(a4, 0xFCB); /*0x5bc7fb*/
    Tile_SetFloat(*(Tile **)(a1 + 0x30), 0xFCBu, a2); /*0x5bc803*/
    a2a = Tile_GetFloat(a4, 0xFCA); /*0x5bc818*/
    Tile_SetFloat(*(Tile **)(a1 + 0x30), 0xFCAu, a2a); /*0x5bc820*/
    a2b = Tile_GetFloat(a4, 0xFAD); /*0x5bc835*/
    Tile_SetFloat(*(Tile **)(a1 + 0x30), 0xFADu, a2b); /*0x5bc83d*/
    a2c = Tile_GetFloat(a4, 0xFAC); /*0x5bc852*/
    Tile_SetFloat(*(Tile **)(a1 + 0x30), 0xFACu, a2c); /*0x5bc85a*/
    v7 = fConstant_2; /*0x5bc85f*/
    v8 = *(Tile **)(a1 + 0x30); /*0x5bc866*/
  }
  else
  {
    v8 = *(Tile **)(a1 + 0x30); /*0x5bc86b*/
    if ( !v8 ) /*0x5bc870*/
      return st7_0; /*0x5bc870*/
    v7 = 1.0; /*0x5bc872*/
  }
  a2d = v7; /*0x5bc875*/
  Tile_SetFloat(v8, 0xFA1u, a2d); /*0x5bc87d*/
  return st7_0; /*0x5bc882*/
}
