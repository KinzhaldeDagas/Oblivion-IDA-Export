// Verified: inserts supplied template in Menu embedded list at+8. Called by ReadFile ownership-transfer loop0x5904EA. Fallout named analogue0x827E3DC8.
void __thiscall Menu::AddTemplate(Menu *this, OblivionTileTemplate *tileTemplate)
{
  if ( tileTemplate ) /*0x584966*/
    BSSimpleList_PushFront(&this->members.templateHead, (int)tileTemplate); /*0x58496f*/
}
