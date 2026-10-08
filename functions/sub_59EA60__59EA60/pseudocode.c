// Player-dialogue entry wrapper. It initializes the GREETING/head MenuTopic, temporarily masks any Goodbye closePending result while rendering the initial choice list, then restores that flag. LoadTopicsList restores the manager cursor to the head, so the caller can still play the GREETING.
bool __thiscall DialogMenu::InitializeTopics(DialogMenu *this, TESTopic *forcedTopic)
{
  UnkBohBoh *Singleton; // eax
  bool v4; // bl
  bool result; // al

  Singleton = (UnkBohBoh *)MenuTopicManager::GetSingleton(); /*0x59ea64*/
  v4 = MenuTopicManager::Initialize((MenuTopicManagerView *)Singleton, *((TESObjectREFR **)this + 0x18), forcedTopic); /*0x59ea7b*/
  *((_BYTE *)this + 0x88) = 0;                  // Temporarily clear DialogMenu.closePending so an initial Goodbye GREETING does not close during the first choice-list build. /*0x59ea7d*/
  result = DialogMenu::LoadTopicsList(this);    // Render choices starting after the GREETING; this call finishes by restoring MenuTopicManager.currentTopicNode to the head. /*0x59ea84*/
  *((_BYTE *)this + 0x88) = v4;                 // Restore Initialize's closePending result. For a Goodbye GREETING it remains set while the head responses play and is consumed by the post-response list reload/close path. /*0x59ea89*/
  return result; /*0x59ea8f*/
}
