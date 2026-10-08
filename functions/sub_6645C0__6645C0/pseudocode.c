void __thiscall sub_6645C0(Actor *this)
{
  TESForm *ActorBaseForm; // eax
  int *p_modlist; // ebx
  int *v4; // esi
  int *v5; // edi
  int *v6; // eax
  int *v7; // esi
  OblivionTESFormListNode *p_spellList; // edi
  TESForm *item; // esi
  AVCode SchoolAV; // eax

  ActorBaseForm = Actor_GetActorBaseForm(this, 0); /*0x6645c5*/
  if ( ActorBaseForm ) /*0x6645cc*/
  {
    p_modlist = (int *)&ActorBaseForm[3].member.modlist; /*0x6645d3*/
    if ( ActorBaseForm != (TESForm *)0xFFFFFFA8 ) /*0x6645d8*/
    {
      sub_4167E0(); /*0x6645e0*/
      v4 = p_modlist; /*0x6645e5*/
      v5 = 0; /*0x6645e7*/
      do /*0x66463b*/
      {
        v6 = (int *)v4[1]; /*0x6645f0*/
        if ( !v6 && !*v4 ) /*0x6645f7*/
          break; /*0x6645f9*/
        if ( (*(_BYTE *)(*v4 + 0x40) & 4) != 0 ) /*0x664601*/
        {
          if ( v5 ) /*0x664605*/
          {
            BSSimpleList_Remove(v5, *v4); /*0x66460a*/
            v4 = (int *)v5[1]; /*0x66460f*/
          }
          else if ( v6 ) /*0x664616*/
          {
            v4[1] = v6[1]; /*0x66461b*/
            *v4 = *v6; /*0x664621*/
            FormHeapFree((unsigned int)v6); /*0x664623*/
          }
          else
          {
            *v4 = 0; /*0x66462d*/
          }
        }
        else
        {
          v5 = v4; /*0x664635*/
          v4 = (int *)v4[1]; /*0x664637*/
        }
      }
      while ( v4 ); /*0x66463b*/
      v7 = p_modlist; /*0x66463d*/
      do /*0x66465a*/
      {
        if ( !v7[1] && !*v7 ) /*0x664646*/
          break; /*0x664649*/
        PlayerCharacter_SetKnownEffect(*v7); /*0x664650*/
        v7 = (int *)v7[1]; /*0x664655*/
      }
      while ( v7 ); /*0x66465a*/
      p_spellList = &g_TESDataHandler->spellList; /*0x664662*/
      if ( g_TESDataHandler != (TESDataHandler *)0xFFFFFFD4 ) /*0x664665*/
      {
        do /*0x6646ba*/
        {
          if ( !p_spellList->next && !p_spellList->item ) /*0x66466d*/
            break; /*0x664670*/
          item = p_spellList->item; /*0x664672*/
          if ( ((int)p_spellList->item[2].member.modlist.data & 4) != 0 /*0x664683*/
            && !((int (__thiscall *)(TESForm *))item[1].vtbl->Unk_06)(&item[1]) )
          {
            SchoolAV = EffectItemList_GetSchoolAV(); /*0x66468c*/
            if ( this->vtbl->GetActorValue(this, SchoolAV) >= SLODWORD(MEMORY[0xB37A58][6]) ) /*0x6646a5*/
              ((void (__thiscall *)(Actor *, TESForm *))this->vtbl->Unk_B7)(this, item); /*0x6646b3*/
          }
          p_spellList = p_spellList->next; /*0x6646b5*/
        }
        while ( p_spellList ); /*0x6646ba*/
      }
    }
  }
}
