char __cdecl sub_50E5A0(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  OblivionTESFormListNode *p_questList; // esi

  p_questList = &g_TESDataHandler->questList; /*0x50e5a7*/
  if ( g_TESDataHandler != (TESDataHandler *)0xFFFFFF7C ) /*0x50e5ad*/
  {
    do /*0x50e5c9*/
    {
      if ( !p_questList->next && !p_questList->item ) /*0x50e5b6*/
        break; /*0x50e5b9*/
      TESQuest::SetRunning((TESQuest *)p_questList->item, 1); /*0x50e5bf*/
      p_questList = p_questList->next; /*0x50e5c4*/
    }
    while ( p_questList ); /*0x50e5c9*/
  }
  if ( MEMORY[0xB361AC] ) /*0x50e5cb*/
    Interface_ConsolePrint("All Quests Enabled.", *a7); /*0x50e5e6*/
  return 1; /*0x50e5d2*/
}
