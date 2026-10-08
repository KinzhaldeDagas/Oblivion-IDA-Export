char __usercall sub_579930@<al>(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  Tile *cursor; // esi

  cursor = InterfaceManager_GetSingleton(0, 1)->cursor; /*0x579940*/
  Tile_SetFloat(cursor, 0xFA1u, fConstant_2); /*0x579951*/
  if ( !*((_DWORD *)cursor + 9) ) /*0x579956*/
    *((_DWORD *)cursor + 0xB) |= 2u; /*0x57995c*/
  return sub_58E870((int)cursor, a1, a2, a3); /*0x579962*/
}
