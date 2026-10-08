// Verified: SDK ReadXML entry. Builds named tree under receiver via 0x590330, connects/evaluates traits via 0x58CF40, registers subtemplates with owning Menu, frees build storage, refreshes returned subtree via 0x58FBA0. Returns first created tile. Fallout analogue 0x827E2588; cache/cleanup differs.
Tile *__thiscall Tile::ReadFile(Tile *this, const char *path)
{
  double v2; // st5
  double v3; // st6
  double v4; // st7
  char v5; // al
  int v7; // ecx
  OblivionTileBuildStorage *v8; // eax
  OblivionTileBuildStorage *v9; // esi
  OblivionTileTemplate *currentTemplate; // eax
  Tile *v12; // ebp
  OblivionTileTemplate *mainTemplate; // eax
  Menu *ParentMenu; // edi
  OblivionTileTemplateList *p_subTemplates; // ebp
  bool v16; // zf
  char v17; // [esp+Fh] [ebp-9h]
  Tile *v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v5 = bDisableWarning_MESSAGES; /*0x590423*/
  v7 = *(_DWORD *)&MEMORY[0xB33E90][0xEF8]; /*0x590434*/
  unk_B3B0A0 = 0; /*0x59043c*/
  v17 = v5; /*0x590442*/
  v19 = v7; /*0x590446*/
  bDisableWarning_MESSAGES = 1; /*0x59044a*/
  v8 = Tile::ParseFile(path, 0, 0); /*0x590451*/
  v9 = v8; /*0x59045f*/
  if ( unk_B3B0A0 ) /*0x590459*/
    return 0; /*0x590465*/
  currentTemplate = v8->currentTemplate; /*0x59046e*/
  if ( !currentTemplate ) /*0x590473*/
    currentTemplate = v9->mainTemplate; /*0x590475*/
  v12 = Tile::BuildAndNameTree(this, currentTemplate); /*0x590486*/
  v18 = v12; /*0x590488*/
  if ( unk_B3B0A0 ) /*0x590480*/
    return 0; /*0x590480*/
  mainTemplate = v9->currentTemplate; /*0x590492*/
  if ( !mainTemplate ) /*0x590497*/
    mainTemplate = v9->mainTemplate; /*0x590499*/
  Tile::ConnectTraitsToTree(v12, mainTemplate); /*0x59049e*/
  if ( unk_B3B0A0 ) /*0x5904a3*/
    return 0; /*0x590546*/
  if ( unk_B3B0A1 ) /*0x5904af*/
  {
    PrintError("A tile descriptor was not terminated... Check XML file."); /*0x5904bc*/
    unk_B3B0A1 = 0; /*0x5904c4*/
  }
  ParentMenu = (Menu *)Tile_GetParentMenu(v12); /*0x5904d1*/
  if ( ParentMenu ) /*0x5904d5*/
  {
    p_subTemplates = &v9->subTemplates; /*0x5904d7*/
    if ( v9 != (OblivionTileBuildStorage *)0xFFFFFFFC ) /*0x5904dc*/
    {
      do /*0x590503*/
      {
        if ( !p_subTemplates->item ) /*0x5904e0*/
          break; /*0x5904e5*/
        Menu::AddTemplate(ParentMenu, p_subTemplates->item); /*0x5904ea*/
        ParentMenu->members.ownsTemplates = 1; /*0x5904ef*/
        v9->ownsSubTemplates = 0; /*0x5904f3*/
        if ( unk_B3B0A0 ) /*0x5904f6*/
          return 0; /*0x5904fc*/
        p_subTemplates = p_subTemplates->next; /*0x5904fe*/
      }
      while ( p_subTemplates ); /*0x590503*/
    }
    v12 = v18; /*0x590505*/
  }
  Tile::BuildStorage::Destroy(v9); /*0x59050b*/
  FormHeapFree((unsigned int)v9); /*0x590511*/
  sub_58FBA0((int)v12, v2, v3, v4, 0); /*0x59051c*/
  v16 = *(_DWORD *)&MEMORY[0xB33E90][0xEF8] == v19; /*0x590525*/
  bDisableWarning_MESSAGES = v17; /*0x590533*/
  if ( !v16 ) /*0x590538*/
  {
    if ( path ) /*0x59053c*/
      PrintError("Warnings were encountered in Tile::ReadFile for file '%s'.", path); /*0x590544*/
    else
      PrintError("Warnings were encountered in Tile::ReadFile for file NULL."); /*0x590558*/
  }
  sub_584670((char *)path, 0); /*0x590562*/
  unk_B3B0A0 = 0; /*0x59056f*/
  return v12; /*0x590463*/
}
