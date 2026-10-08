// Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
void __thiscall Tile_SetFloat(Tile *this, UInt32 propertyCode, float value)
{
  _DWORD *PropertyByCode; // eax

  PropertyByCode = Tile::GetOrCreateValue(this, (_DWORD *)propertyCode);// Immediately call Tile_GetPropertyByCode_ on this. Tile_SetFloat tolerates a missing property, but not a null Tile object. /*0x58ceb5*/
  if ( PropertyByCode ) /*0x58cebc*/
    Tile::Value::SetFloat((int)PropertyByCode, value); /*0x58cec8*/
}
