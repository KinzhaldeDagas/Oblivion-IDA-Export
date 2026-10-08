// Verified: walks typed template item list, frees item BSStringT buffer and each item; removes list nodes and decrements count. Mirrors role of Fallout TileTemplate::Clear, but no pooling established here.
void __thiscall Tile::TileTemplate::Clear(OblivionTileTemplate *this)
{
  OblivionTileTemplateItemList *p_items; // esi
  OblivionTileTemplateItemNode *head; // eax
  OblivionTileTemplateItemNode *next; // ecx
  bool v5; // zf
  unsigned int item; // edi

  if ( this->items.count ) /*0x58bc26*/
  {
    p_items = &this->items; /*0x58bc2d*/
    do /*0x58bc76*/
    {
      head = this->items.head; /*0x58bc30*/
      next = head->next; /*0x58bc33*/
      v5 = head->next == 0; /*0x58bc35*/
      this->items.head = head->next; /*0x58bc37*/
      if ( v5 ) /*0x58bc3a*/
        this->items.tail = 0; /*0x58bc41*/
      else
        next->previous = 0; /*0x58bc3c*/
      item = (unsigned int)head->item; /*0x58bc46*/
      (*((void (__thiscall **)(OblivionTileTemplateItemList *, OblivionTileTemplateItemNode *))p_items->vtable + 2))( /*0x58bc4f*/
        &this->items,
        head);
      --this->items.count; /*0x58bc51*/
      if ( item ) /*0x58bc57*/
      {
        FormHeapFree(*(_DWORD *)(item + 8)); /*0x58bc5d*/
        *(_DWORD *)(item + 8) = 0; /*0x58bc63*/
        *(_WORD *)(item + 0xE) = 0; /*0x58bc66*/
        *(_WORD *)(item + 0xC) = 0; /*0x58bc6a*/
        FormHeapFree(item); /*0x58bc6e*/
      }
    }
    while ( this->items.count ); /*0x58bc76*/
  }
}
