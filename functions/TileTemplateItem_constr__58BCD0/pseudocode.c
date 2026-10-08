// Verified 2026-10-07: this is TileTemplate initialization, not TileTemplateItem (old name corrected). Constructor initializes BSStringT name+0, storage+8, NiTList vtable+0xC/head+0x10/tail+0x14/count+0x18. Allocation0x1C at BuildStorage constructor corroborates size. Fallout template is0x14 due NiFixedString and different list layout.
OblivionTileTemplate *__thiscall Tile::TileTemplate::Initialize(
        OblivionTileTemplate *this,
        const char *name,
        OblivionTileBuildStorage *storage)
{
  this->name.m_data = 0; /*0x58bcfa*/
  this->name.m_dataLen = 0; /*0x58bcfc*/
  this->name.m_bufLen = 0; /*0x58bd00*/
  this->items.count = 0; /*0x58bd08*/
  this->items.head = 0; /*0x58bd0b*/
  this->items.tail = 0; /*0x58bd0e*/
  this->items.vtable = &NiTList<Tile::TileTemplateItem *>::`vftable'; /*0x58bd11*/
  BSStringT_Set(&this->name, name, 0); /*0x58bd23*/
  this->storage = storage; /*0x58bd2c*/
  return this; /*0x58bd31*/
}
