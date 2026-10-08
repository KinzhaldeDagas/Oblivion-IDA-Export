// Verified: invokes TileTemplate::Clear, list destructor, then releases template name buffer. Caller frees template object separately.
void __thiscall Tile::TileTemplate::Destroy(OblivionTileTemplate *this)
{
  Tile::TileTemplate::Clear(this); /*0x5852f0*/
  NiTList<Tile::TileTemplateItem *>::~NiTList<Tile::TileTemplateItem *>((NiTPointerList__BSImageSpaceShader *)&this->items); /*0x5852fd*/
  FormHeapFree((unsigned int)this->name.m_data); /*0x585305*/
  this->name.m_data = 0; /*0x58530d*/
  this->name.m_bufLen = 0; /*0x585313*/
  this->name.m_dataLen = 0; /*0x585319*/
}
