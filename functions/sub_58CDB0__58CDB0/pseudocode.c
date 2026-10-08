// Verified: destroys main template unconditionally; subtemplate objects only when ownsSubTemplates is true; always frees subtemplate list links. ReadFile transfers subtemplate ownership to Menu before destroying storage. No savegame serialization in this teardown path.
void __thiscall Tile::BuildStorage::Destroy(OblivionTileBuildStorage *this)
{
  OblivionTileTemplate *mainTemplate; // edi
  bool v3; // zf
  OblivionTileTemplateList *p_subTemplates; // edi
  OblivionTileTemplate *item; // ebp
  OblivionTileTemplateList *next; // edi

  mainTemplate = this->mainTemplate; /*0x58cdb4*/
  if ( this->mainTemplate ) /*0x58cdb4*/
  {
    Tile::TileTemplate::Destroy(this->mainTemplate); /*0x58cdbc*/
    FormHeapFree((unsigned int)mainTemplate); /*0x58cdc2*/
  }
  v3 = this->ownsSubTemplates == 0; /*0x58cdca*/
  this->currentTemplate = 0; /*0x58cdce*/
  if ( !v3 ) /*0x58cdd5*/
  {
    p_subTemplates = &this->subTemplates; /*0x58cdd7*/
    if ( this != (OblivionTileBuildStorage *)0xFFFFFFFC ) /*0x58cddc*/
    {
      do /*0x58cdfb*/
      {
        item = p_subTemplates->item; /*0x58cde0*/
        if ( p_subTemplates->item ) /*0x58cde0*/
        {
          Tile::TileTemplate::Destroy(p_subTemplates->item); /*0x58cde8*/
          FormHeapFree((unsigned int)item); /*0x58cdee*/
        }
        p_subTemplates = p_subTemplates->next; /*0x58cdf6*/
      }
      while ( p_subTemplates ); /*0x58cdfb*/
    }
  }
  if ( this->subTemplates.next ) /*0x58cdfe*/
  {
    do /*0x58ce18*/
    {
      next = this->subTemplates.next->next; /*0x58ce07*/
      FormHeapFree((unsigned int)this->subTemplates.next); /*0x58ce0b*/
      this->subTemplates.next = next; /*0x58ce15*/
    }
    while ( next ); /*0x58ce18*/
  }
  this->subTemplates.item = 0; /*0x58ce1b*/
}
