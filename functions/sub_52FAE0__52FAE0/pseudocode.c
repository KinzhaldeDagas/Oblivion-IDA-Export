// Re-sorts topic quest-entry lists after loading. A null quest sorts every TESTopic; a non-null quest sorts only topics whose quest-entry list contains that quest.
bool __cdecl SortTopicQuestInfoEntriesForQuest(TESQuest *questOrNull)
{
  int v1; // edi
  bool result; // al
  TESTopic *v3; // ecx
  QuestInfoEntry *p_questInfoEntries; // edx
  TESQuest **p_parentQuest; // esi

  v1 = g_TESDataHandler + 0x7C; /*0x52fae7*/
  result = 1; /*0x52faea*/
  if ( g_TESDataHandler != 0xFFFFFF84 ) /*0x52faec*/
  {
    do /*0x52fb2d*/
    {
      v3 = *(TESTopic **)v1; /*0x52faf4*/
      if ( !*(_DWORD *)v1 || !result ) /*0x52fafc*/
        break; /*0x52fafc*/
      if ( questOrNull ) /*0x52fb00*/
      {
        p_questInfoEntries = &v3->questInfoEntries; /*0x52fb02*/
        if ( v3 != (TESTopic *)0xFFFFFFD8 ) /*0x52fb07*/
        {
          do /*0x52fb1f*/
          {
            p_parentQuest = &p_questInfoEntries->data->parentQuest; /*0x52fb10*/
            if ( !p_questInfoEntries->data ) /*0x52fb10*/
              break; /*0x52fb14*/
            p_questInfoEntries = p_questInfoEntries->next; /*0x52fb18*/
            if ( *p_parentQuest == questOrNull ) /*0x52fb1b*/
              goto LABEL_10; /*0x52fb1b*/
          }
          while ( p_questInfoEntries ); /*0x52fb1f*/
        }
      }
      else
      {
LABEL_10:
        result = TESTopic::SortQuestInfoEntriesByPriority(v3); /*0x52fb23*/
      }
      v1 = *(_DWORD *)(v1 + 4); /*0x52fb28*/
    }
    while ( v1 ); /*0x52fb2d*/
  }
  return result; /*0x52fb31*/
}
