// Verified: BuildStorage0x14 layout: mainTemplate+0,embedded subtemplate list+4/+8,currentTemplate+0xC,ownsSubTemplates+0x10. Creates main template with name main and back-pointer. Fallout0x827DECA0 shares storage offsets but allocates smaller template.
OblivionTileBuildStorage *__thiscall Tile::BuildStorage::Initialize(OblivionTileBuildStorage *this)
{
  OblivionTileTemplate *v2; // eax
  OblivionTileTemplate *v3; // eax

  this->subTemplates.item = 0; /*0x58cd59*/
  this->subTemplates.next = 0; /*0x58cd5c*/
  v2 = (OblivionTileTemplate *)FormHeapAlloc(0x1Cu); /*0x58cd5f*/
  if ( v2 ) /*0x58cd71*/
    v3 = Tile::TileTemplate::Initialize(v2, "main", this); /*0x58cd7b*/
  else
    v3 = 0; /*0x58cd82*/
  this->mainTemplate = v3; /*0x58cd84*/
  this->currentTemplate = 0; /*0x58cd86*/
  this->ownsSubTemplates = 1; /*0x58cd89*/
  return this; /*0x58cd8f*/
}
