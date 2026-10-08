// Verified: token 0x28 creates tile, calls virtual Init(newTile,currentParent,NULL,NULL), names it, records pointer in token +0x10, and descends. Token 0x2D ascends through Tile.parent +0x10. Returns FIRST created tile. No automatic wrapper tile and no duplicate-name/id check in this routine. Fallout analogue 0x827E2320 uses different token numbers.
Tile *__thiscall Tile::BuildAndNameTree(Tile *this, OblivionTileTemplate *tileTemplate)
{
  OblivionTileTemplateItemNode *head; // ebx
  OblivionTileTemplateItem *item; // edi
  int v5; // eax
  BSStringT *v6; // eax
  BSStringT *v7; // esi
  Tile *v9; // [esp+10h] [ebp-4h]

  head = tileTemplate->items.head; /*0x590336*/
  v9 = 0; /*0x590340*/
  if ( !head ) /*0x590348*/
    return v9; /*0x5903ba*/
  while ( 1 ) /*0x590350*/
  {
    item = head->item; /*0x590350*/
    head = head->next; /*0x59035b*/
    if ( item->command != OblivionTemplate_BeginTile ) /*0x59035d*/
    {
      if ( item->command == OblivionTemplate_EndTile ) /*0x5903a8*/
        this = *((Tile **)this + 4); /*0x5903aa*/
      goto LABEL_9; /*0x5903aa*/
    }
    v5 = Double_To_SInt32(item->number); /*0x590362*/
    v6 = (BSStringT *)sub_5902A0(this, v5); /*0x590369*/
    v7 = v6; /*0x59036e*/
    if ( !v6 ) /*0x590375*/
      break; /*0x590375*/
    (*((void (__thiscall **)(BSStringT *, Tile *, _DWORD, _DWORD))v6->m_data + 1))(v6, this, 0, 0); /*0x590383*/
    BSStringT_Set(v7 + 1, item->text.m_data, 0); /*0x59038e*/
    if ( !v9 ) /*0x590398*/
      v9 = (Tile *)v7; /*0x59039a*/
    item->argument.trait = (unsigned int)v7; /*0x59039e*/
    this = (Tile *)v7; /*0x5903a1*/
LABEL_9:
    if ( !head ) /*0x5903af*/
      return v9; /*0x5903af*/
  }
  PrintError("Unable to create tile. Aborting menu creation."); /*0x5903c2*/
  return 0; /*0x5903b5*/
}
