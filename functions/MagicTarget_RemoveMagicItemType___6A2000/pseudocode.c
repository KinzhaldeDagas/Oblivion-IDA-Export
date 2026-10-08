void __userpurge MagicTarget_RemoveMagicItemType_(int *this@<ecx>, double a2@<st0>, int a3)
{
  int v3; // eax
  void *v4; // eax
  Actor *v5; // ebx
  TESForm::ModReferenceList *p_modlist; // eax
  TESForm::ModReferenceList *next; // edi
  Data *data; // esi
  ActiveEffect **v9; // eax
  ActiveEffect **v10; // edi
  ActiveEffect *v11; // esi
  _DWORD *v12; // eax
  char v13; // bl

  v3 = *this; /*0x6a2000*/
  if ( a3 == 1 ) /*0x6a200d*/
  {
    v4 = (void *)(*(int (__usercall **)@<eax>(double@<st0>))(v3 + 4))(a2); /*0x6a2020*/
    v5 = (Actor *)OblivionDynamicCast( /*0x6a2028*/
                    v4,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0);
    if ( v5 ) /*0x6a202f*/
    {
LABEL_3:
      p_modlist = &Actor_GetActorBaseForm(v5, 0)[3].member.modlist; /*0x6a2035*/
      if ( p_modlist ) /*0x6a2041*/
      {
        while ( 1 ) /*0x6a2047*/
        {
          next = p_modlist->next; /*0x6a2047*/
          if ( !next && !p_modlist->data ) /*0x6a204e*/
            break; /*0x6a204e*/
          data = p_modlist->data; /*0x6a2056*/
          if ( p_modlist->data && (*(int (__thiscall **)(UInt32 *))(data->unkFile018 + 0x18))(&data->unkFile018) == 1 ) /*0x6a206a*/
          {
            ((void (__thiscall *)(Actor *, Data *))v5->vtbl->Unk_B8)(v5, data); /*0x6a2084*/
            goto LABEL_3; /*0x6a2086*/
          }
          p_modlist = next; /*0x6a206e*/
          if ( !next ) /*0x6a2070*/
            return; /*0x6a2070*/
        }
      }
    }
  }
  else
  {
    v9 = (ActiveEffect **)(*(int (__usercall **)@<eax>(double@<st0>))(v3 + 8))(a2); /*0x6a208b*/
    if ( v9 ) /*0x6a208f*/
    {
      do /*0x6a20f8*/
      {
        v10 = (ActiveEffect **)v9[1]; /*0x6a2091*/
        if ( !v10 && !*v9 ) /*0x6a2098*/
          break; /*0x6a209a*/
        v11 = *v9; /*0x6a209c*/
        if ( *v9 ) /*0x6a209c*/
        {
          if ( !v11->members.bTerminated ) /*0x6a20a2*/
          {
            v12 = OblivionDynamicCast( /*0x6a20ba*/
                    v11->members.item,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
                    &AlchemyItem `RTTI Type Descriptor',
                    0);
            if ( v12 ) /*0x6a20c4*/
              v13 = EffectItemList_AllEffectsHostile(v12 + 0xC); /*0x6a20ce*/
            else
              v13 = 0; /*0x6a20d2*/
            if ( (*(int (__thiscall **)(MagicItem *))(*(_DWORD *)v11->members.item + 0x18))(v11->members.item) == a3 /*0x6a20e9*/
              || v13 && a3 == 5 )
            {
              a2 = ActiveEffect_Base_Remove(v11, a3, a2, 0); /*0x6a20ef*/
            }
          }
        }
        v9 = v10; /*0x6a20f6*/
      }
      while ( v10 ); /*0x6a20f8*/
    }
  }
  MagicTarget_RemoveMagicItemType__::Done(a3); /*0x6a20f9*/
}
