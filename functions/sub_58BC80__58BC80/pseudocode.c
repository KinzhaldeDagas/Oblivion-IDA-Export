// Verified: walks BuildStorage subTemplates and compares BSStringT names case-insensitively; returns match or NULL. Called by AddPair when entering named template. Fallout named analogue0x827DBEF8.
OblivionTileTemplate *__thiscall Tile::BuildStorage::GetSubTemplateByName(
        OblivionTileBuildStorage *this,
        const char *name)
{
  OblivionTileTemplateList *p_subTemplates; // esi
  const char *m_data; // eax
  int v4; // eax

  p_subTemplates = &this->subTemplates; /*0x58bc81*/
  if ( this != (OblivionTileBuildStorage *)0xFFFFFFFC ) /*0x58bc87*/
  {
    while ( p_subTemplates->item ) /*0x58bc94*/
    {
      if ( name && (m_data = p_subTemplates->item->name.m_data) != 0 ) /*0x58bc9e*/
        v4 = CRT_StricmpLocaleDispatch(m_data, name); /*0x58bca2*/
      else
        v4 = 2 * (name == 0) - 1; /*0x58bcb3*/
      if ( !v4 ) /*0x58bcb9*/
        return p_subTemplates->item; /*0x58bcc9*/
      p_subTemplates = p_subTemplates->next; /*0x58bcbb*/
      if ( !p_subTemplates ) /*0x58bcc0*/
        return 0; /*0x58bcc0*/
    }
  }
  return 0; /*0x58bcc2*/
}
