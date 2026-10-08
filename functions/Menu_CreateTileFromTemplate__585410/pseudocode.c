// Verified 2026-10-07: case-insensitive search of Menu template list +8/+0xC; saves global build context0xB3B0A8, creates temporary storage, replaces owned default template with borrowed matched template, builds/connects, nulls mainTemplate before Destroy so borrowed template survives, then restores previous build context. Optional lastTile stored Menu+0x10. Fallout named RenderTemplate0x827E4270 corroborates role; Fallout names use interned-string comparison.
Tile *__thiscall Menu::RenderTemplate(Menu *this, Tile *parent, const char *name, Tile *lastTile)
{
  OblivionTileTemplate **p_templateHead; // edi
  OblivionTileTemplate *v5; // esi
  OblivionTileBuildStorage *v7; // ebp
  OblivionTileBuildStorage *v8; // eax
  OblivionTileBuildStorage *v9; // edi
  OblivionTileTemplate *mainTemplate; // ebx
  Tile *v11; // edi
  OblivionTileBuildStorage *v12; // esi

  if ( lastTile ) /*0x58543c*/
    this->members.templateContextTile = lastTile; /*0x58543e*/
  p_templateHead = &this->members.templateHead; /*0x585441*/
  if ( this == (Menu *)0xFFFFFFF8 ) /*0x585446*/
    return 0; /*0x585446*/
  do
  {
    v5 = *p_templateHead; /*0x585450*/
    if ( *p_templateHead )
    {
      if ( !(name && v5->name.m_data ? CRT_StricmpLocaleDispatch(v5->name.m_data, name) : 2 * (name == 0) - 1) )
        break; /*0x585479*/
    }
    p_templateHead = (OblivionTileTemplate **)p_templateHead[1]; /*0x58547b*/
  }
  while ( p_templateHead );
  if ( !v5 ) /*0x585484*/
    return 0; /*0x58551a*/
  v7 = g_TileBuildStorage; /*0x58548a*/
  v8 = (OblivionTileBuildStorage *)FormHeapAlloc(0x14u); /*0x585492*/
  v9 = 0; /*0x58549e*/
  if ( v8 ) /*0x5854a6*/
    v9 = Tile::BuildStorage::Initialize(v8); /*0x5854af*/
  g_TileBuildStorage = v9; /*0x5854b1*/
  mainTemplate = v9->mainTemplate; /*0x5854b7*/
  if ( v9->mainTemplate ) /*0x5854b7*/
  {
    Tile::TileTemplate::Destroy(mainTemplate); /*0x5854c7*/
    FormHeapFree((unsigned int)mainTemplate); /*0x5854cd*/
  }
  v9->mainTemplate = v5; /*0x5854da*/
  v11 = Tile::BuildAndNameTree(parent, v5); /*0x5854e1*/
  Tile::ConnectTraitsToTree(v11, v5); /*0x5854e6*/
  g_TileBuildStorage->mainTemplate = 0; /*0x5854f0*/
  v12 = g_TileBuildStorage; /*0x5854fe*/
  if ( g_TileBuildStorage ) /*0x5854f6*/
  {
    Tile::BuildStorage::Destroy(g_TileBuildStorage); /*0x585502*/
    FormHeapFree((unsigned int)v12); /*0x585508*/
  }
  g_TileBuildStorage = v7; /*0x585510*/
  return v11; /*0x58551c*/
}
