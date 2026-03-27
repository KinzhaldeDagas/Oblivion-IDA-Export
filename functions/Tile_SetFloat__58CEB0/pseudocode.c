void __thiscall Tile_SetFloat(Tile *this, _DWORD *a2, float a3)
{
  _DWORD *PropertyByCode; // eax

  PropertyByCode = Tile_GetPropertyByCode_(this, a2);
  if ( PropertyByCode )
    Tile_Property_SetFloatValue_((int)PropertyByCode, a3);
}
