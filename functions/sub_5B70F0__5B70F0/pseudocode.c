unsigned __int8 __usercall sub_5B70F0@<al>(int a1@<ecx>, double a2@<st1>)
{
  Tile *v5; // ecx
  unsigned __int8 result; // al

  if ( InterfaceManager_MenuModeHasFocus(0x3FF) ) /*0x5b70f8*/
  {
    if ( unk_B3B43D ) /*0x5b7104*/
      sub_5C1000(a2); /*0x5b710d*/
  }
  if ( !*(_BYTE *)(a1 + 0x84) ) /*0x5b7112*/
  {
    v5 = *(Tile **)(a1 + 0x4C); /*0x5b711b*/
    if ( v5 ) /*0x5b7120*/
      Tile_SetFloat(v5, 0xFA1u, 1.0); /*0x5b712d*/
  }
  result = 0xFF; /*0x5b7132*/
  if ( (char)--*(_BYTE *)(a1 + 0x84) < (char)0xFFFFFFFF ) /*0x5b7140*/
    *(_BYTE *)(a1 + 0x84) = 0xFF; /*0x5b7142*/
  return result; /*0x5b7148*/
}
