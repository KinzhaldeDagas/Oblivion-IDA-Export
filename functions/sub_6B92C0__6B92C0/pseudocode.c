// OFE verified lifecycle call 6B9335 -> ClearData; 6B938C -> FillTopicList. RunForRumors behavior is keyed by MenuTopic.isInfoGeneral, not custom topic EditorID. Results continue through original native code.
bool __thiscall MenuTopicManager::LoadNextTopicList(MenuTopicManagerView *this, bool processCurrentInfo, bool clearAll)
{
  MenuTopicNode *currentTopicNode; // eax
  OblivionTopicInfo *info; // edi
  bool skipInfoGeneralResult; // bl
  MenuTopicView *item; // ecx
  MenuTopicView *v8; // ecx
  MenuTopicView *v9; // eax
  tListTopic *p_knownTopicFirst; // eax
  bool hasLinkedTopics; // [esp+Eh] [ebp-2h]
  char currentIsInfoGeneral; // [esp+Fh] [ebp-1h]

  currentTopicNode = this->currentTopicNode; /*0x6b92c5*/
  info = 0; /*0x6b92c8*/
  skipInfoGeneralResult = 0; /*0x6b92ca*/
  hasLinkedTopics = 0; /*0x6b92ce*/
  currentIsInfoGeneral = 0; /*0x6b92d3*/
  if ( this->currentTopicNode ) /*0x6b92c5*/
  {
    item = currentTopicNode->item; /*0x6b92da*/
    if ( currentTopicNode->item ) /*0x6b92da*/
    {
      if ( item->isInfoGeneralTopic ) /*0x6b92e0*/
        skipInfoGeneralResult = (item->info->flags & 0x40) == 0; /*0x6b92f4*/
    }
  }
  if ( processCurrentInfo ) /*0x6b92fb*/
  {
    if ( !currentTopicNode ) /*0x6b92ff*/
      goto LABEL_13; /*0x6b92ff*/
    v8 = currentTopicNode->item; /*0x6b9301*/
    if ( currentTopicNode->item ) /*0x6b9301*/
    {
      info = v8->info; /*0x6b9307*/
      hasLinkedTopics = v8->hasLinkedTopics; /*0x6b930d*/
    }
  }
  if ( currentTopicNode ) /*0x6b9313*/
  {
    v9 = currentTopicNode->item; /*0x6b9315*/
    if ( v9 ) /*0x6b9319*/
    {
      if ( v9->isInfoGeneralTopic ) /*0x6b931b*/
        currentIsInfoGeneral = 1; /*0x6b9321*/
    }
  }
LABEL_13:
  MenuTopicManager::ClearData(this, clearAll); /*0x6b9326*/
  if ( info ) /*0x6b933c*/
  {
    TESTopicInfo::AddTopicList(info);           // Commit INFO.addedTopics before testing RunForRumors or Goodbye. Added topics enter PlayerCharacter.knownTopics even when INFOGENERAL without RunForRumors skips RunResult and normal continuation. /*0x6b9340*/
    if ( !skipInfoGeneralResult ) /*0x6b9347*/
    {
      if ( (info->flags & 1) != 0 ) /*0x6b934d*/
        return 1;                               // Oblivion's player-menu close test here uses INFO flag Goodbye (bit 0x01), then returns to the caller's close path. Fallout additionally classifies stock D4/GOODBYE topic as natural goodbye in DialogMenu::SetGoodbyeState (x4y6:0x8252E850); no D4 topic-ID test occurs in this Oblivion decision. /*0x6b934d*/
      TESTopicInfo::RunResult(info, this->speaker);// Oblivion's ordinary player-dialogue result call is reached after the current response list is exhausted. Fallout's manager has separate ProcessCurrentTopic/TIRS_BEGIN at selection time (x4y6:0x825E75A8) and a later TIRS_END call in DialogMenu::LoadNextScreen (x4y6:0x82530700). Oblivion RunResult has no phase argument; do not import those Fallout timing phases. /*0x6b9355*/
      if ( (info->flags & 1) != 0 ) /*0x6b935e*/
        return 1; /*0x6b9362*/
    }
  }
  if ( !hasLinkedTopics || currentIsInfoGeneral )// After INFOGENERAL completion, always rebuild from PlayerCharacter.knownTopics, regardless of INFOGENERAL's linkedTo list. Ordinary selected topics with hasLinkedTopics instead use that INFO's linkedTo list. /*0x6b9375*/
    p_knownTopicFirst = (tListTopic *)&reference->knownTopicFirst; /*0x6b9384*/
  else
    p_knownTopicFirst = &info->links->linkedTo; /*0x6b937a*/
  MenuTopicManager::FillTopicList(this, p_knownTopicFirst); /*0x6b938c*/
  this->currentTopicNode = (MenuTopicNode *)&this->firstTopic; /*0x6b9396*/
  if ( this != (MenuTopicManagerView *)0xFFFFFFFC ) /*0x6b9398*/
    this->currentTopicNode = this->nextTopicNode; /*0x6b939d*/
  return 0; /*0x6b9360*/
}
