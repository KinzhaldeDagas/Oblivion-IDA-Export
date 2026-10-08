// Adds one topic to PlayerCharacter.knownTopics. Duplicate suppression is by exact TESTopic pointer; successful new entries are pushed to the head, optional notification is suppressed when DialogMenu is active, and optional immediate sorting is case-insensitive by display name.
bool __thiscall PlayerCharacter::AddKnownTopic(
        PlayerCharacter *this,
        TESTopic *topic,
        bool sortImmediately,
        bool notifyPlayer)
{
  tListTopic *p_knownTopicFirst; // edi
  TESTopic **v6; // eax
  char *m_data; // eax
  char *v8; // esi
  BSStringT string; // [esp+14h] [ebp-14h] BYREF
  unsigned int v10; // [esp+24h] [ebp-4h]

  if ( !topic ) /*0x6696be*/
    return 0; /*0x6696c0*/
  p_knownTopicFirst = (tListTopic *)&this->knownTopicFirst; /*0x6696d7*/
  v6 = &this->knownTopicFirst; /*0x6696dd*/
  if ( this != (PlayerCharacter *)0xFFFFFA1C ) /*0x6696e1*/
  {
    do /*0x6696f2*/
    {
      if ( !*v6 ) /*0x6696e3*/
        break; /*0x6696e7*/
      if ( *v6 == topic ) /*0x6696eb*/
        return 0;                               // Known-topic duplicate test compares TESTopic pointer identity only. Same display text/editor ID in another TESTopic object is not treated as the same known topic. /*0x6696eb*/
      v6 = (TESTopic **)v6[1]; /*0x6696ed*/
    }
    while ( v6 ); /*0x6696f2*/
  }
  BSSimpleList_PushFront(p_knownTopicFirst, (int)topic);// A new known topic is pushed to the list head before any sorting. Batch AddKnownTopics defers sorting until its loop completes. /*0x6696f7*/
  if ( notifyPlayer && sub_578FE0() != 0x3F1 )  // When notifyPlayer is requested, suppress the 'New topic: <name>' message while DialogMenu (menu ID 0x3F1) is topmost; the topic is still learned.
  {
    string.m_data = 0;                          // The 'New topic' notification is skipped while menu ID 0x3F1 (DialogMenu) is topmost, but AddKnownTopic still inserts the topic. /*0x66970e*/
    string.m_dataLen = 0; /*0x669712*/
    string.m_bufLen = 0; /*0x669717*/
    m_data = topic->fullname.name.m_data; /*0x66971c*/
    v10 = 0; /*0x669721*/
    if ( !m_data ) /*0x669725*/
      m_data = EmptyString; /*0x669727*/
    BSStringT_Static_Format(&string, "%s: %s", *(const char **)MEMORY[0xB382E0], m_data);
    v8 = string.m_data; /*0x669748*/
    GameUI_QueueMessage(string.m_data, 0, 1u, flt_A31C80); /*0x669757*/
    v10 = 0xFFFFFFFF; /*0x66975d*/
    FormHeapFree((unsigned int)v8); /*0x669765*/
  }
  if ( sortImmediately )                        // When requested, sort the player's known-topic list case-insensitively by topic display name after insertion. /*0x669771*/
    SortTopicListByDisplayName(p_knownTopicFirst); /*0x669774*/
  return 1; /*0x6696c2*/
}
