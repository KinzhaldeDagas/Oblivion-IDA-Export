char sub_509D10()
{
  OblivionTESFormListNode *p_questList; // edi
  TESForm *item; // esi
  void **v2; // ebp
  int v3; // eax
  const char *v4; // eax
  const char *v6; // [esp-10h] [ebp-14h]
  int v7; // [esp-Ch] [ebp-10h]

  p_questList = &g_TESDataHandler->questList; /*0x509d17*/
  if ( g_TESDataHandler != (TESDataHandler *)0xFFFFFF7C ) /*0x509d1d*/
  {
    do /*0x509d5f*/
    {
      item = p_questList->item; /*0x509d21*/
      if ( !p_questList->item ) /*0x509d21*/
        break; /*0x509d25*/
      p_questList = p_questList->next; /*0x509d2b*/
      v2 = (void **)"On"; /*0x509d2e*/
      if ( (item[2].member.refID & 1) == 0 ) /*0x509d33*/
        v2 = &aOff; /*0x509d35*/
      LOBYTE(v3) = TESQuest::GetCurrentStage((TESQuest *)item); /*0x509d3c*/
      v4 = (const char *)((int (__thiscall *)(TESForm *, void **, int))item->vtbl->GetEditorName)(item, v2, v3); /*0x509d4d*/
      Interface_ConsolePrint("%s (%s) -- Stage %d", v4, v6, v7); /*0x509d55*/
    }
    while ( p_questList ); /*0x509d5f*/
  }
  return 1; /*0x509d65*/
}
