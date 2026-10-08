// Verified: returns currentTemplate if nonnull, otherwise mainTemplate; matches Fallout named0x827DB050.
OblivionTileTemplate *__thiscall Tile::BuildStorage::GetCurrentTemplate(OblivionTileBuildStorage *this)
{
  OblivionTileTemplate *result; // eax

  result = this->currentTemplate; /*0x588a60*/
  if ( !result ) /*0x588a65*/
    return this->mainTemplate; /*0x588a67*/
  return result; /*0x588a69*/
}
