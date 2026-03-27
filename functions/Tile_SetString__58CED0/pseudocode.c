void __thiscall Tile_SetString(_DWORD *this, _DWORD *a2, char *a3)
{
  unsigned int *PropertyByCode; // eax

  PropertyByCode = Tile_GetPropertyByCode_(this, a2);
  if ( PropertyByCode )
    sub_58CA50(PropertyByCode, a3);
}
