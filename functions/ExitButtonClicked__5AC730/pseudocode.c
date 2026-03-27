void __usercall ExitButtonClicked(int a1@<edi>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  const char *sound; // esi
  Tile *OpenMenuTile; // eax
  Tile *v7; // edi
  int ParentMenu; // eax
  _DWORD *v9; // esi

  sound = (const char *)OSGlobals->sound;
  if ( sound )
  {
    if ( SoundManager_OpenMusicFile(sound, 0xFFFF, 0, 0) )
      SoundManager_PlayMusic((int)sound, a1);
  }
  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x403);
  v7 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    v9 = (_DWORD *)ParentMenu;
    if ( ParentMenu )
    {
      sub_5AC6A0(ParentMenu, a2, a3, a4);
      Tile_SetFloat(v7, (_DWORD *)0x1772, fConstant_2);
      sub_584740(v9, a2, a3);
    }
  }
}
