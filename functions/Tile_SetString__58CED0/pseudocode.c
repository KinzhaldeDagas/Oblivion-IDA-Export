void __thiscall Tile_SetString(_DWORD *this, _DWORD *a2, char *a3)
{
  unsigned int *PropertyByCode; // eax

  PropertyByCode = Tile::GetOrCreateValue(this, a2); /*0x58ced5*/
  if ( PropertyByCode ) /*0x58cedc*/
    sub_58CA50(PropertyByCode, a3); /*0x58cee5*/
}
