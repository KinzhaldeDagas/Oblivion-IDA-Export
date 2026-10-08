// DialogMenu wrapper around LoadNextTopicList. Every native call site passes clearAll=false; processCurrentInfo is false only for the path that refreshes choices without committing the current INFO.
bool __thiscall DialogMenu::AdvanceTopicList(DialogMenu *this, bool processCurrentInfo, bool clearAll)
{
  MenuTopicManagerView *Singleton; // eax
  MenuTopicManagerView *v5; // edi

  Singleton = MenuTopicManager::GetSingleton(); /*0x59ea14*/
  v5 = Singleton; /*0x59ea20*/
  if ( *((_BYTE *)this + 0x96) ) /*0x59ea19*/
  {
    Singleton->currentTopicNode = 0; /*0x59ea28*/
    DialogMenu::RefreshActionAvailability(this, 1); /*0x59ea2e*/
  }
  *((_BYTE *)this + 0x88) = MenuTopicManager::LoadNextTopicList(v5, processCurrentInfo, clearAll); /*0x59ea46*/
  *((_BYTE *)this + 0x96) = 0; /*0x59ea4c*/
  return DialogMenu::LoadTopicsList(this); /*0x59ea58*/
}
