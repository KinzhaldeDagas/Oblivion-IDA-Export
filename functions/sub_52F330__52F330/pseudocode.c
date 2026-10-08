// Stable descending sort of TESTopic.questInfoEntries by TESQuest.priority (+0x3D). Higher-priority running quests are scanned first by SelectInfoForSpeaker; equal priorities preserve their prior insertion order.
bool __thiscall TESTopic::SortQuestInfoEntriesByPriority(TESTopic *this)
{
  QuestInfoEntry *p_questInfoEntries; // ebp
  QuestInfoEntry *v2; // eax
  int v3; // edx
  QuestInfoEntry *i; // eax
  QuestInfoData *data; // edi
  QuestInfoEntry *next; // esi
  QuestInfoData *v7; // edx
  signed int priority; // ebx
  signed int v9; // ecx
  int v11; // [esp+4h] [ebp-4h]

  p_questInfoEntries = &this->questInfoEntries; /*0x52f332*/
  v2 = &this->questInfoEntries; /*0x52f335*/
  v3 = 0; /*0x52f337*/
  if ( this != (TESTopic *)0xFFFFFFD8 ) /*0x52f33b*/
  {
    do /*0x52f34d*/
    {
      if ( v2->data ) /*0x52f340*/
        ++v3; /*0x52f345*/
      v2 = v2->next; /*0x52f348*/
    }
    while ( v2 ); /*0x52f34d*/
  }
  if ( v3 - 1 > 0 ) /*0x52f354*/
  {
    v11 = v3 - 1; /*0x52f358*/
    do /*0x52f3ab*/
    {
      for ( i = p_questInfoEntries; i; i = i->next ) /*0x52f364*/
      {
        data = i->data; /*0x52f366*/
        if ( !i->data ) /*0x52f366*/
          break; /*0x52f36a*/
        next = i->next; /*0x52f36c*/
        if ( next ) /*0x52f371*/
        {
          v7 = next->data; /*0x52f373*/
          if ( next->data ) /*0x52f373*/
          {
            if ( data->parentQuest ) /*0x52f379*/
              priority = data->parentQuest->priority; /*0x52f37f*/
            else
              priority = 0xFFFFFFFF; /*0x52f385*/
            if ( v7->parentQuest ) /*0x52f388*/
              v9 = v7->parentQuest->priority; /*0x52f38e*/
            else
              v9 = 0xFFFFFFFF; /*0x52f394*/
            if ( v9 > priority )                // Swap adjacent quest buckets only when the following quest has strictly greater priority, making the descending sort stable for equal-priority quests. /*0x52f399*/
            {
              i->data = v7; /*0x52f39b*/
              next->data = data; /*0x52f39d*/
            }
          }
        }
      }
      --v11; /*0x52f3a6*/
    }
    while ( v11 ); /*0x52f3ab*/
  }
  return 1; /*0x52f3b2*/
}
