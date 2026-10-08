char sub_507740()
{
  OblivionTESFormListNode *p_spellList; // esi
  int v1; // edi
  int v2; // ecx
  OblivionTESFormListNode *v3; // eax

  p_spellList = &g_TESDataHandler->spellList; /*0x507748*/
  v1 = 0; /*0x50774b*/
  if ( g_TESDataHandler != (TESDataHandler *)0xFFFFFFD4 ) /*0x50774f*/
  {
    do /*0x5077c8*/
    {
      v2 = 0; /*0x507751*/
      v3 = p_spellList; /*0x507755*/
      if ( !p_spellList ) /*0x507757*/
        break; /*0x507757*/
      do /*0x50776d*/
      {
        if ( v3->item ) /*0x507760*/
          ++v2; /*0x507765*/
        v3 = v3->next; /*0x507768*/
      }
      while ( v3 ); /*0x50776d*/
      if ( !v2 ) /*0x507771*/
        break; /*0x507771*/
      if ( p_spellList->item ) /*0x507773*/
      {
        if ( !((int (__thiscall *)(TESForm *))p_spellList->item[1].vtbl->Unk_06)(&p_spellList->item[1]) /*0x5077a7*/
          || ((int (__thiscall *)(TESForm *))p_spellList->item[1].vtbl->Unk_06)(&p_spellList->item[1]) == 2
          || ((int (__thiscall *)(TESForm *))p_spellList->item[1].vtbl->Unk_06)(&p_spellList->item[1]) == 3 )
        {
          if ( ((unsigned __int8 (__thiscall *)(PlayerCharacter *, TESForm *))reference->vtbl->super.Unk_B7)( /*0x5077ba*/
                 reference,
                 p_spellList->item) )
          {
            ++v1; /*0x5077c0*/
          }
        }
      }
      p_spellList = p_spellList->next; /*0x5077c3*/
    }
    while ( p_spellList ); /*0x5077c8*/
  }
  Interface_ConsolePrint("%d spells added to Player Character", v1); /*0x5077d0*/
  return 1; /*0x5077d8*/
}
