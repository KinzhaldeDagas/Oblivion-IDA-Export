unsigned __int8 __usercall sub_5B70F0@<al>(int a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>)
{
  Tile *v6; // ecx
  unsigned __int8 result; // al

  if ( InterfaceManager_MenuModeHasFocus(0x3FF) )
  {
    if ( byte_B3B43D )
      sub_5C1000(a3, a4, a2);
  }
  if ( !*(_BYTE *)(a1 + 0x84) )
  {
    v6 = *(Tile **)(a1 + 0x4C);
    if ( v6 )
      Tile_SetFloat(v6, (_DWORD *)0xFA1, 1.0);
  }
  result = 0xFF;
  if ( (char)--*(_BYTE *)(a1 + 0x84) < (char)0xFFFFFFFF )
    *(_BYTE *)(a1 + 0x84) = 0xFF;
  return result;
}
