void __thiscall sub_5E4FC0(Actor *this)
{
  TESForm *v2; // esi
  TESForm *v3; // edi
  TESForm::ModReferenceList *p_modlist; // edi
  Data *data; // eax
  char *p_unkFile018; // esi
  int v7; // eax
  int *v8; // edi
  int v9; // eax
  char *v10; // esi
  TESForm *v11; // eax
  TESForm *v12; // eax
  Data *v13; // eax
  char *v14; // edi
  int v15; // eax
  char *v16; // esi
  ExtraDataList *****ContainerExtraDataForRef; // ebx
  unsigned int i; // edi
  unsigned int *EquippedInstance; // eax
  int v20; // edx
  unsigned int *v21; // esi
  _DWORD *v22; // eax
  int v23; // eax

  v2 = 0; /*0x5e4fcd*/
  v3 = this->vtbl->super.super.GetBaseForm(this); /*0x5e4fd1*/
  if ( v3 ) /*0x5e4fd5*/
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e4fe1*/
      v2 = v3; /*0x5e4fe7*/
  }
  p_modlist = &v2[3].member.modlist; /*0x5e4fe9*/
  if ( v2 != (TESForm *)0xFFFFFFA8 ) /*0x5e4fee*/
  {
    do /*0x5e5023*/
    {
      data = p_modlist->data; /*0x5e4ff0*/
      if ( p_modlist->data ) /*0x5e4ff0*/
      {
        p_unkFile018 = (char *)&data->unkFile018; /*0x5e4ff6*/
        if ( (*(int (__thiscall **)(UInt32 *))(data->unkFile018 + 0x18))(&data->unkFile018) == 4 /*0x5e5013*/
          || (*(int (__thiscall **)(char *))(*(_DWORD *)p_unkFile018 + 0x18))(p_unkFile018) == 1 )
        {
          MagicItem_UnloadVFXModels(p_unkFile018, 1); /*0x5e5019*/
        }
      }
      p_modlist = p_modlist->next; /*0x5e501e*/
    }
    while ( p_modlist ); /*0x5e5023*/
  }
  if ( ((int (__thiscall *)(Actor *))this->vtbl->Unk_9A)(this) ) /*0x5e502f*/
  {
    v7 = ((int (__thiscall *)(Actor *))this->vtbl->Unk_9A)(this); /*0x5e503f*/
    v8 = (int *)(v7 + 0x3C); /*0x5e5043*/
    if ( v7 != 0xFFFFFFC4 ) /*0x5e5046*/
    {
      do /*0x5e507b*/
      {
        v9 = *v8; /*0x5e5048*/
        if ( *v8 ) /*0x5e5048*/
        {
          v10 = (char *)(v9 + 0x18); /*0x5e504e*/
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v9 + 0x18) + 0x18))(v9 + 0x18) == 4 /*0x5e506b*/
            || (*(int (__thiscall **)(char *))(*(_DWORD *)v10 + 0x18))(v10) == 1 )
          {
            MagicItem_UnloadVFXModels(v10, 1); /*0x5e5071*/
          }
        }
        v8 = (int *)v8[1]; /*0x5e5076*/
      }
      while ( v8 ); /*0x5e507b*/
    }
  }
  if ( Actor_IsNPC(this) ) /*0x5e507f*/
  {
    v11 = this->vtbl->super.super.GetBaseForm(this); /*0x5e5092*/
    if ( v11 ) /*0x5e5096*/
    {
      if ( v11[9].member.modlist.data ) /*0x5e5098*/
      {
        if ( Actor_IsNPC(this) && (v12 = this->vtbl->super.super.GetBaseForm(this)) != 0 ) /*0x5e50ba*/
          v13 = v12[9].member.modlist.data; /*0x5e50bc*/
        else
          v13 = 0; /*0x5e50c4*/
        v14 = &v13->name[0x14]; /*0x5e50c6*/
        if ( v13 != (Data *)0xFFFFFFD0 ) /*0x5e50cb*/
        {
          do /*0x5e5103*/
          {
            v15 = *(_DWORD *)v14; /*0x5e50d0*/
            if ( *(_DWORD *)v14 ) /*0x5e50d0*/
            {
              v16 = (char *)(v15 + 0x18); /*0x5e50d6*/
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v15 + 0x18) + 0x18))(v15 + 0x18) == 4 /*0x5e50f3*/
                || (*(int (__thiscall **)(char *))(*(_DWORD *)v16 + 0x18))(v16) == 1 )
              {
                MagicItem_UnloadVFXModels(v16, 1); /*0x5e50f9*/
              }
            }
            v14 = *((char **)v14 + 1); /*0x5e50fe*/
          }
          while ( v14 ); /*0x5e5103*/
        }
      }
    }
  }
  if ( this->vtbl->super.super.GetBaseForm(this) ) /*0x5e510f*/
    ((int (__thiscall *)(Actor *))this->vtbl->super.super.IsActor)(this); /*0x5e5121*/
  ContainerExtraDataForRef = (ExtraDataList *****)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)this); /*0x5e5138*/
  for ( i = 0; i < 0xA; ++i ) /*0x5e513a*/
  {
    EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerExtraDataForRef, dword_B1489C[i], 0); /*0x5e514b*/
    v21 = EquippedInstance; /*0x5e5150*/
    if ( EquippedInstance /*0x5e5172*/
      && (v22 = OblivionDynamicCast(
                  (void *)EquippedInstance[2],
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESEnchantableForm `RTTI Type Descriptor',
                  0)) != 0 )
    {
      v23 = v22[1]; /*0x5e5174*/
    }
    else
    {
      v23 = 0; /*0x5e5179*/
    }
    if ( v23 ) /*0x5e517d*/
      MagicItem_UnloadVFXModels((char *)(v23 + 0x18), 1); /*0x5e5184*/
    if ( v21 ) /*0x5e518b*/
    {
      ContainerEntryExtraData_DestroyDataTable(v21, v20); /*0x5e518f*/
      FormHeapFree((unsigned int)v21); /*0x5e5195*/
    }
  }
}
