TESForm::ModReferenceList *__userpurge MagicTarget_RemoveMagicItemType_@<eax>(int *this@<ecx>, double a2@<st0>, int a3)
{
  int v3; // eax
  void *v4; // eax
  Actor *v5; // ebx
  TESForm::ModReferenceList *result; // eax
  TESForm::ModReferenceList *next; // edi
  Data *data; // esi
  ActiveEffect **v9; // eax
  ActiveEffect **v10; // edi
  ActiveEffect *v11; // esi
  _DWORD *v12; // eax
  char v13; // bl

  v3 = *this;
  if ( a3 == 1 )
  {
    v4 = (void *)(*(int (**)(void))(v3 + 4))();
    v5 = (Actor *)OblivionDynamicCast(
                    v4,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0);
    if ( v5 )
    {
LABEL_3:
      result = &Actor_GetActorBaseForm(v5, 0)[3].member.modlist;
      if ( result )
      {
        while ( 1 )
        {
          next = result->next;
          if ( !next && !result->data )
            break;
          data = result->data;
          if ( result->data && (*(int (__thiscall **)(UInt32 *))(data->unkFile018 + 0x18))(&data->unkFile018) == 1 )
          {
            ((void (__thiscall *)(Actor *, Data *))v5->vtbl->Unk_B8)(v5, data);
            goto LABEL_3;
          }
          result = next;
          if ( !next )
            return result;
        }
      }
    }
  }
  else
  {
    v9 = (ActiveEffect **)(*(int (**)(void))(v3 + 8))();
    if ( v9 )
    {
      do
      {
        v10 = (ActiveEffect **)v9[1];
        if ( !v10 && !*v9 )
          break;
        v11 = *v9;
        if ( *v9 )
        {
          if ( !v11->members.bTerminated )
          {
            v12 = OblivionDynamicCast(
                    v11->members.item,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
                    &AlchemyItem `RTTI Type Descriptor',
                    0);
            if ( v12 )
              v13 = EffectItemList_AllEffectsHostile(v12 + 0xC);
            else
              v13 = 0;
            if ( (*(int (__thiscall **)(MagicItem *))(*(_DWORD *)v11->members.item + 0x18))(v11->members.item) == a3
              || v13 && a3 == 5 )
            {
              a2 = ActiveEffect_Base_Remove(v11, a3, a2, 0);
            }
          }
        }
        v9 = v10;
      }
      while ( v10 );
    }
  }
  return (TESForm::ModReferenceList *)MagicTarget_RemoveMagicItemType__::Done(a3);
}
