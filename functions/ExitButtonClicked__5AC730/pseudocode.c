// LevelUpMenu exit path: commits the selected attributes/player level-up, restores music, marks the menu complete, and closes it.
double __usercall LevelUpMenu_ExitAndCommit@<st0>(int a1@<edi>, double a2@<st1>, double result@<st0>)
{
  char *sound; // esi
  Tile *OpenMenuTile; // eax
  Tile *v6; // edi
  int ParentMenu; // eax
  _DWORD *v8; // esi

  sound = (char *)MEMORY[0xB33398]->sound; /*0x5ac736*/
  if ( sound ) /*0x5ac73c*/
  {
    if ( SoundManager_OpenMusicFile(sound, 0xFFFF, 0, 0) ) /*0x5ac749*/
      SoundManager_PlayMusic((int)sound, a1); /*0x5ac754*/
  }
  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x403); /*0x5ac75e*/
  v6 = OpenMenuTile; /*0x5ac763*/
  if ( OpenMenuTile ) /*0x5ac76a*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5ac76e*/
    v8 = (_DWORD *)ParentMenu; /*0x5ac773*/
    if ( ParentMenu ) /*0x5ac777*/
    {
      LevelUpMenu_CommitSelectedAttributes(ParentMenu, result); /*0x5ac77b*/
      result = fConstant_2; /*0x5ac780*/
      Tile_SetFloat(v6, (_DWORD *)0x1772, fConstant_2); /*0x5ac791*/
      Menu::StartFadeOut(v8, a2); /*0x5ac79a*/
    }
  }
  return result; /*0x5ac796*/
}
