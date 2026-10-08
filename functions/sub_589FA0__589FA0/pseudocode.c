// Verified: 0x18-byte parsed item fields command+0,number+4,BSStringT text+8,contextual argument+0x10,line+0x14. BuildAndNameTree writes createdTile into argument for tile-begin; ConnectTraits reads trait there for property/action commands. sourceLine comes from ParseFile newline counter. Remaining command-dependent interpretations Unknown.
OblivionTileTemplateItem *__thiscall Tile::TileTemplateItem::Initialize(
        OblivionTileTemplateItem *this,
        unsigned int command,
        float number,
        const char *text,
        unsigned int argument,
        unsigned int sourceLine)
{
  BSStringT *p_text; // ecx

  p_text = &this->text; /*0x589fc8*/
  p_text->m_data = 0; /*0x589fcd*/
  p_text->m_dataLen = 0; /*0x589fcf*/
  p_text->m_bufLen = 0; /*0x589fd3*/
  this->number = number; /*0x589fdf*/
  this->command = command; /*0x589fec*/
  BSStringT_Set(p_text, text, 0); /*0x589fee*/
  this->argument.trait = argument; /*0x589ffb*/
  this->sourceLine = sourceLine; /*0x589ffe*/
  return this; /*0x58a003*/
}
