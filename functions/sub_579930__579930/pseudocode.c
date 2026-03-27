char __usercall sub_579930@<al>(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  Tile *cursor; // esi

  cursor = InterfaceManager_GetSingleton(0, 1)->cursor;
  Tile_SetFloat(cursor, (_DWORD *)0xFA1, fConstant_2);
  if ( !*((_DWORD *)cursor + 9) )
    *((_DWORD *)cursor + 0xB) |= 2u;
  return sub_58E870((int)cursor, a1, a2, a3);
}
