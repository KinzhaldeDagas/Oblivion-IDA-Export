char __usercall sub_50E600@<al>(
        double a1@<st2>,
        double a2@<st1>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        double *a10)
{
  OblivionTESFormListNode *p_questList; // edi
  int item; // ebx
  int *p_modlist; // esi
  char v14; // [esp+8h] [ebp-4h]

  v14 = sub_4F9FA0(); /*0x50e609*/
  sub_4F9F90(0); /*0x50e60d*/
  p_questList = &g_TESDataHandler->questList; /*0x50e61b*/
  if ( g_TESDataHandler != (TESDataHandler *)0xFFFFFF7C ) /*0x50e621*/
  {
    do /*0x50e65f*/
    {
      if ( !p_questList->next && !p_questList->item ) /*0x50e62b*/
        break; /*0x50e62e*/
      item = (int)p_questList->item; /*0x50e630*/
      p_modlist = (int *)&p_questList->item[2].member.modlist; /*0x50e632*/
      if ( p_questList->item != (TESForm *)0xFFFFFFC0 ) /*0x50e637*/
      {
        do /*0x50e658*/
        {
          if ( !p_modlist[1] && !*p_modlist ) /*0x50e646*/
            break; /*0x50e649*/
          sub_52B080(*p_modlist, a1, a2, a3, item); /*0x50e64e*/
          p_modlist = (int *)p_modlist[1]; /*0x50e653*/
        }
        while ( p_modlist ); /*0x50e658*/
      }
      p_questList = p_questList->next; /*0x50e65a*/
    }
    while ( p_questList ); /*0x50e65f*/
  }
  sub_4F9F90(v14); /*0x50e668*/
  if ( MEMORY[0xB361AC] ) /*0x50e670*/
    Interface_ConsolePrint("All Quest Stages Completed.", *a10); /*0x50e68b*/
  return 1; /*0x50e696*/
}
