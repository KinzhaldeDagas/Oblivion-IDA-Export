// External dialog-menu refresh callback: if menu 0x3F1 and its MenuTopicManager are live, processes the current info, rebuilds the topic list, then refreshes topic/service tile availability. It is not the per-response speech-completion callback.
void __cdecl DialogMenu::CommitCurrentTopicAndRefresh()
{
  _DWORD *OpenMenuTile; // esi
  MenuTopicManagerView *Singleton; // eax
  DialogMenu *ParentMenu; // eax
  DialogMenu *v3; // esi

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F1); /*0x59f97e*/
  Singleton = MenuTopicManager::GetSingleton(); /*0x59f980*/
  if ( OpenMenuTile ) /*0x59f987*/
  {
    if ( Singleton ) /*0x59f98b*/
    {
      ParentMenu = (DialogMenu *)Tile_GetParentMenu(OpenMenuTile); /*0x59f98f*/
      v3 = ParentMenu; /*0x59f994*/
      if ( ParentMenu ) /*0x59f998*/
      {
        DialogMenu::AdvanceTopicList(ParentMenu, 1, 0); /*0x59f9a0*/
        DialogMenu::RefreshActionAvailability(v3, 1); /*0x59f9a9*/
      }
    }
  }
}
