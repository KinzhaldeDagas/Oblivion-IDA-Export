void __thiscall sub_6645C0(Actor *this)
{
  TESForm *ActorBaseForm; // eax
  int *p_modlist; // ebx
  int *v4; // esi
  int *v5; // edi
  int *v6; // eax
  int *v7; // esi
  _DWORD *v8; // edi
  int v9; // esi
  int SchoolAV; // eax

  ActorBaseForm = Actor_GetActorBaseForm(this, 0);
  if ( ActorBaseForm )
  {
    p_modlist = (int *)&ActorBaseForm[3].member.modlist;
    if ( ActorBaseForm != (TESForm *)0xFFFFFFA8 )
    {
      sub_4167E0();
      v4 = p_modlist;
      v5 = 0;
      do
      {
        v6 = (int *)v4[1];
        if ( !v6 && !*v4 )
          break;
        if ( (*(_BYTE *)(*v4 + 0x40) & 4) != 0 )
        {
          if ( v5 )
          {
            BSSimpleList_Remove(v5, *v4);
            v4 = (int *)v5[1];
          }
          else if ( v6 )
          {
            v4[1] = v6[1];
            *v4 = *v6;
            FormHeapFree((unsigned int)v6);
          }
          else
          {
            *v4 = 0;
          }
        }
        else
        {
          v5 = v4;
          v4 = (int *)v4[1];
        }
      }
      while ( v4 );
      v7 = p_modlist;
      do
      {
        if ( !v7[1] && !*v7 )
          break;
        PlayerCharacter_SetKnownEffect(*v7);
        v7 = (int *)v7[1];
      }
      while ( v7 );
      v8 = (_DWORD *)(TESDataHandler + 0x2C);
      if ( TESDataHandler != 0xFFFFFFD4 )
      {
        do
        {
          if ( !v8[1] && !*v8 )
            break;
          v9 = *v8;
          if ( (*(_BYTE *)(*v8 + 0x40) & 4) != 0
            && !(*(int (__thiscall **)(int))(*(_DWORD *)(v9 + 0x18) + 0x18))(v9 + 0x18) )
          {
            SchoolAV = EffectItemList_GetSchoolAV();
            if ( this->vtbl->GetActorValue(this, (AVCode)SchoolAV) >= iPCStartSpellSkillLevel )
              ((void (__thiscall *)(Actor *, int))this->vtbl->Unk_B7)(this, v9);
          }
          v8 = (_DWORD *)v8[1];
        }
        while ( v8 );
      }
    }
  }
}
