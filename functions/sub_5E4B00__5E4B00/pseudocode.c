void __usercall sub_5E4B00(Actor *this@<ecx>, double a2@<st0>)
{
  TESForm *v3; // edi
  TESForm *v4; // ebx
  TESForm::ModReferenceList *p_modlist; // ebp
  TESForm *v6; // edi
  TESForm *v7; // ebx
  TESForm::ModReferenceList *v8; // eax
  int v9; // ecx
  int v10; // ebx
  Data *data; // eax
  UInt32 *p_unkFile018; // edi
  TESForm *v13; // edi
  TESForm *v14; // ebx
  TESForm *v15; // ebx
  TESForm *v16; // edi
  TESForm::ModReferenceList *v17; // eax
  int v18; // ecx
  int v19; // eax
  int *v20; // ebx
  int v21; // eax
  int v22; // edi
  TESForm *v23; // eax
  TESForm *v24; // eax
  Data *v25; // eax
  char *v26; // ebx
  int v27; // eax
  int v28; // edi
  ExtraDataList *****ContainerExtraDataForRef; // ebp
  unsigned int i; // ebx
  unsigned int *EquippedInstance; // eax
  unsigned int *v32; // edi
  _DWORD *v33; // eax
  int v34; // edx
  TESForm::ModReferenceList *v35; // [esp+10h] [ebp-4h]

  v3 = 0; /*0x5e4b0f*/
  v4 = this->vtbl->super.super.GetBaseForm(this); /*0x5e4b13*/
  if ( v4 ) /*0x5e4b17*/
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e4b23*/
      v3 = v4; /*0x5e4b29*/
  }
  p_modlist = &v3[3].member.modlist; /*0x5e4b33*/
  v6 = 0; /*0x5e4b38*/
  v7 = this->vtbl->super.super.GetBaseForm(this); /*0x5e4b3c*/
  if ( v7 ) /*0x5e4b40*/
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e4b4c*/
      v6 = v7; /*0x5e4b52*/
  }
  v8 = &v6[3].member.modlist; /*0x5e4b54*/
  v9 = 0; /*0x5e4b57*/
  v35 = &v6[3].member.modlist; /*0x5e4b5b*/
  if ( v6 != (TESForm *)0xFFFFFFA8 ) /*0x5e4b5f*/
  {
    do /*0x5e4b6e*/
    {
      if ( v8->data ) /*0x5e4b61*/
        ++v9; /*0x5e4b66*/
      v8 = v8->next; /*0x5e4b69*/
    }
    while ( v8 ); /*0x5e4b6e*/
  }
  v10 = v9; /*0x5e4b72*/
  while ( p_modlist ) /*0x5e4b74*/
  {
    data = p_modlist->data; /*0x5e4b80*/
    if ( p_modlist->data ) /*0x5e4b80*/
    {
      p_unkFile018 = &data->unkFile018; /*0x5e4b87*/
      if ( (*(int (__thiscall **)(UInt32 *))(data->unkFile018 + 0x18))(&data->unkFile018) == 4 /*0x5e4ba4*/
        || (*(int (__thiscall **)(UInt32 *))(*p_unkFile018 + 0x18))(p_unkFile018) == 1 )
      {
        MagicTarget_RemoveEffects(); /*0x5e4bae*/
      }
    }
    if ( BSSimpleList_Count(v35) == v10 ) /*0x5e4bbe*/
    {
      p_modlist = p_modlist->next; /*0x5e4c2b*/
    }
    else
    {
      v13 = 0; /*0x5e4bca*/
      v14 = this->vtbl->super.super.GetBaseForm(this); /*0x5e4bce*/
      if ( v14 ) /*0x5e4bd2*/
      {
        if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e4bde*/
          v13 = v14; /*0x5e4be4*/
      }
      p_modlist = &v13[3].member.modlist; /*0x5e4bf0*/
      v15 = 0; /*0x5e4bf3*/
      v16 = this->vtbl->super.super.GetBaseForm(this); /*0x5e4bf7*/
      if ( v16 ) /*0x5e4bfb*/
      {
        if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e4c07*/
          v15 = v16; /*0x5e4c0d*/
      }
      v17 = &v15[3].member.modlist; /*0x5e4c0f*/
      v18 = 0; /*0x5e4c12*/
      if ( v15 != (TESForm *)0xFFFFFFA8 ) /*0x5e4c16*/
      {
        do /*0x5e4c25*/
        {
          if ( v17->data ) /*0x5e4c18*/
            ++v18; /*0x5e4c1d*/
          v17 = v17->next; /*0x5e4c20*/
        }
        while ( v17 ); /*0x5e4c25*/
      }
      v10 = v18; /*0x5e4c27*/
    }
  }
  if ( ((int (__thiscall *)(Actor *))this->vtbl->Unk_9A)(this) ) /*0x5e4c40*/
  {
    v19 = ((int (__thiscall *)(Actor *))this->vtbl->Unk_9A)(this); /*0x5e4c50*/
    v20 = (int *)(v19 + 0x3C); /*0x5e4c54*/
    if ( v19 != 0xFFFFFFC4 ) /*0x5e4c57*/
    {
      do /*0x5e4c97*/
      {
        v21 = *v20; /*0x5e4c60*/
        if ( *v20 ) /*0x5e4c60*/
        {
          v22 = v21 + 0x18; /*0x5e4c66*/
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v21 + 0x18) + 0x18))(v21 + 0x18) == 4 /*0x5e4c83*/
            || (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 0x18))(v22) == 1 )
          {
            MagicTarget_RemoveEffects(); /*0x5e4c8d*/
          }
        }
        v20 = (int *)v20[1]; /*0x5e4c92*/
      }
      while ( v20 ); /*0x5e4c97*/
    }
  }
  if ( Actor_IsNPC(this) ) /*0x5e4c9b*/
  {
    v23 = this->vtbl->super.super.GetBaseForm(this); /*0x5e4cb2*/
    if ( v23 ) /*0x5e4cb6*/
    {
      if ( v23[9].member.modlist.data ) /*0x5e4cb8*/
      {
        if ( Actor_IsNPC(this) && (v24 = this->vtbl->super.super.GetBaseForm(this)) != 0 ) /*0x5e4cda*/
          v25 = v24[9].member.modlist.data; /*0x5e4cdc*/
        else
          v25 = 0; /*0x5e4ce4*/
        v26 = &v25->name[0x14]; /*0x5e4ce6*/
        if ( v25 != (Data *)0xFFFFFFD0 ) /*0x5e4ceb*/
        {
          do /*0x5e4d27*/
          {
            v27 = *(_DWORD *)v26; /*0x5e4cf0*/
            if ( *(_DWORD *)v26 ) /*0x5e4cf0*/
            {
              v28 = v27 + 0x18; /*0x5e4cf6*/
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v27 + 0x18) + 0x18))(v27 + 0x18) == 4 /*0x5e4d13*/
                || (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 0x18))(v28) == 1 )
              {
                MagicTarget_RemoveEffects(); /*0x5e4d1d*/
              }
            }
            v26 = *((char **)v26 + 1); /*0x5e4d22*/
          }
          while ( v26 ); /*0x5e4d27*/
        }
      }
    }
  }
  if ( this->vtbl->super.super.GetBaseForm(this) ) /*0x5e4d33*/
    ((int (__thiscall *)(Actor *))this->vtbl->super.super.IsActor)(this); /*0x5e4d45*/
  ContainerExtraDataForRef = (ExtraDataList *****)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)this); /*0x5e4d5c*/
  for ( i = 0; i < 0xA; ++i ) /*0x5e4d5e*/
  {
    EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerExtraDataForRef, dword_B1489C[i], 0); /*0x5e4d6b*/
    v32 = EquippedInstance; /*0x5e4d70*/
    if ( EquippedInstance ) /*0x5e4d74*/
    {
      v33 = OblivionDynamicCast( /*0x5e4d88*/
              (void *)EquippedInstance[2],
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESEnchantableForm `RTTI Type Descriptor',
              0);
      if ( v33 ) /*0x5e4d92*/
      {
        if ( v33[1] ) /*0x5e4d94*/
          a2 = MagicTarget_RemoveBoundObj( /*0x5e4da3*/
                 (int)&this->members.magicTarget,
                 (char)ContainerExtraDataForRef,
                 a2,
                 (TESBoundObject *)v32[2],
                 0);
      }
      ContainerEntryExtraData_DestroyDataTable(v32, v34); /*0x5e4daa*/
      FormHeapFree((unsigned int)v32); /*0x5e4db0*/
    }
  }
}
