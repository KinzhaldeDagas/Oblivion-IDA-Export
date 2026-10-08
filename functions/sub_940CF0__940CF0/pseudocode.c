int __thiscall sub_940CF0(int this)
{
  unsigned __int8 v1; // al

  v1 = *(_BYTE *)(this + 0xD); /*0x940cf0*/
  if ( v1 == 0x18 ) /*0x940cf5*/
    return 0xFFFFFFFF; /*0x940cf7*/
  if ( v1 == 0x19 ) /*0x940cff*/
    return sub_953130(*(_DWORD **)(this + 4)); /*0x940d13*/
  return *(__int16 *)(0xC * v1 + 0xAA1ED0); /*0x940cfc*/
}
