OblivionTileTraitEntry *__thiscall Tile::TraitEntry::Initialize(
        OblivionTileTraitEntry *this,
        unsigned int id,
        BSStringT name)
{
  BSStringT *p_name; // ecx

  p_name = &this->name; /*0x589f4b*/
  p_name->m_data = 0; /*0x589f52*/
  p_name->m_dataLen = 0; /*0x589f54*/
  p_name->m_bufLen = 0; /*0x589f58*/
  this->id = id; /*0x589f6b*/
  BSStringT_Set(p_name, name.m_data, 0); /*0x589f6d*/
  FormHeapFree((unsigned int)name.m_data); /*0x589f73*/
  return this; /*0x589f7d*/
}
