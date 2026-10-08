// Verified descriptive name: resolves parent xscroll trait 0xFF5, then pulses resolved target user5 (0xFB3) with sentinel, selected tile xscroll value, then zero. Navigation resolution has scroll side effects; not a pure lookup.
void __thiscall Tile::RequestNavigationScroll(Tile *this)
{
  Tile *v2; // ecx
  Tile *v3; // eax
  Tile *v4; // esi
  OblivionTileValueView *v5; // eax
  OblivionTileValueView *v6; // eax
  OblivionTileValueView *v7; // eax
  unsigned int v8; // [esp+Ch] [ebp-8h] BYREF
  float value; // [esp+10h] [ebp-4h]

  v2 = *((Tile **)this + 4); /*0x58e7db*/
  v8 = 0; /*0x58e7e4*/
  v3 = Tile::ResolveNavigationTrait(v2, 0xFF5u, &v8); /*0x58e7ec*/
  v4 = v3; /*0x58e7f1*/
  if ( v3 ) /*0x58e7f5*/
  {
    v5 = Tile::GetOrCreateValue(v3, 0xFB3u); /*0x58e7fe*/
    if ( v5 ) /*0x58e805*/
      Tile::Value::SetFloat(v5, flt_A6906C); /*0x58e813*/
    value = Tile_GetFloat(this, 0xFF5); /*0x58e824*/
    v6 = Tile::GetOrCreateValue(v4, 0xFB3u); /*0x58e82f*/
    if ( v6 ) /*0x58e836*/
      Tile::Value::SetFloat(v6, value); /*0x58e842*/
    v7 = Tile::GetOrCreateValue(v4, 0xFB3u); /*0x58e84e*/
    if ( v7 ) /*0x58e855*/
      Tile::Value::SetFloat(v7, 0.0); /*0x58e85f*/
  }
}
