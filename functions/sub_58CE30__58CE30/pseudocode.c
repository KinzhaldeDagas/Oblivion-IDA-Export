// Verified: allocates0x1C template, Initialize(name,storage), appends to embedded subtemplate list, returns template. Used by AddPair when name lookup fails. Fallout named analogue0x827DED28 allocates0x14 template.
OblivionTileTemplate *__thiscall Tile::BuildStorage::NewSubTemplate(OblivionTileBuildStorage *this, const char *name)
{
  OblivionTileTemplate *v3; // eax
  OblivionTileTemplate *v4; // esi

  v3 = (OblivionTileTemplate *)FormHeapAlloc(0x1Cu); /*0x58ce57*/
  v4 = 0; /*0x58ce63*/
  if ( v3 ) /*0x58ce6b*/
    v4 = Tile::TileTemplate::Initialize(v3, name, this); /*0x58ce7a*/
  BSSimpleList_PushBack(&this->subTemplates.item, (int)v4); /*0x58ce88*/
  return v4; /*0x58ce8f*/
}
