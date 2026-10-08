void __thiscall sub_5E4DD0(Actor *this)
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

  v2 = 0; /*0x5e4ddd*/
  v3 = this->vtbl->super.super.GetBaseForm(this); /*0x5e4de1*/
  if ( v3 ) /*0x5e4de5*/
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e4df1*/
      v2 = v3; /*0x5e4df7*/
  }
  p_modlist = &v2[3].member.modlist; /*0x5e4df9*/
  if ( v2 != (TESForm *)0xFFFFFFA8 ) /*0x5e4dfe*/
  {
    do /*0x5e4e33*/
    {
      data = p_modlist->data; /*0x5e4e00*/
      if ( p_modlist->data ) /*0x5e4e00*/
      {
        p_unkFile018 = (char *)&data->unkFile018; /*0x5e4e06*/
        if ( (*(int (__thiscall **)(UInt32 *))(data->unkFile018 + 0x18))(&data->unkFile018) == 4 /*0x5e4e23*/
          || (*(int (__thiscall **)(char *))(*(_DWORD *)p_unkFile018 + 0x18))(p_unkFile018) == 1 )
        {
          MagicItem_LoadVFXModels(p_unkFile018, 0); /*0x5e4e29*/
        }
      }
      p_modlist = p_modlist->next; /*0x5e4e2e*/
    }
    while ( p_modlist ); /*0x5e4e33*/
  }
  if ( ((int (__thiscall *)(Actor *))this->vtbl->Unk_9A)(this) ) /*0x5e4e3f*/
  {
    v7 = ((int (__thiscall *)(Actor *))this->vtbl->Unk_9A)(this); /*0x5e4e4f*/
    v8 = (int *)(v7 + 0x3C); /*0x5e4e53*/
    if ( v7 != 0xFFFFFFC4 ) /*0x5e4e56*/
    {
      do /*0x5e4e8b*/
      {
        v9 = *v8; /*0x5e4e58*/
        if ( *v8 ) /*0x5e4e58*/
        {
          v10 = (char *)(v9 + 0x18); /*0x5e4e5e*/
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v9 + 0x18) + 0x18))(v9 + 0x18) == 4 /*0x5e4e7b*/
            || (*(int (__thiscall **)(char *))(*(_DWORD *)v10 + 0x18))(v10) == 1 )
          {
            MagicItem_LoadVFXModels(v10, 0); /*0x5e4e81*/
          }
        }
        v8 = (int *)v8[1]; /*0x5e4e86*/
      }
      while ( v8 ); /*0x5e4e8b*/
    }
  }
  if ( Actor_IsNPC(this) ) /*0x5e4e8f*/
  {
    v11 = this->vtbl->super.super.GetBaseForm(this); /*0x5e4ea2*/
    if ( v11 ) /*0x5e4ea6*/
    {
      if ( v11[9].member.modlist.data ) /*0x5e4ea8*/
      {
        if ( Actor_IsNPC(this) && (v12 = this->vtbl->super.super.GetBaseForm(this)) != 0 ) /*0x5e4eca*/
          v13 = v12[9].member.modlist.data; /*0x5e4ecc*/
        else
          v13 = 0; /*0x5e4ed4*/
        v14 = &v13->name[0x14]; /*0x5e4ed6*/
        if ( v13 != (Data *)0xFFFFFFD0 ) /*0x5e4edb*/
        {
          do /*0x5e4f13*/
          {
            v15 = *(_DWORD *)v14; /*0x5e4ee0*/
            if ( *(_DWORD *)v14 ) /*0x5e4ee0*/
            {
              v16 = (char *)(v15 + 0x18); /*0x5e4ee6*/
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v15 + 0x18) + 0x18))(v15 + 0x18) == 4 /*0x5e4f03*/
                || (*(int (__thiscall **)(char *))(*(_DWORD *)v16 + 0x18))(v16) == 1 )
              {
                MagicItem_LoadVFXModels(v16, 0); /*0x5e4f09*/
              }
            }
            v14 = *((char **)v14 + 1); /*0x5e4f0e*/
          }
          while ( v14 ); /*0x5e4f13*/
        }
      }
    }
  }
  if ( this->vtbl->super.super.GetBaseForm(this) ) /*0x5e4f1f*/
    ((int (__thiscall *)(Actor *))this->vtbl->super.super.IsActor)(this); /*0x5e4f31*/
  ContainerExtraDataForRef = (ExtraDataList *****)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)this); /*0x5e4f48*/
  for ( i = 0; i < 0xA; ++i ) /*0x5e4f4a*/
  {
    EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerExtraDataForRef, dword_B1489C[i], 0); /*0x5e4f5b*/
    v21 = EquippedInstance; /*0x5e4f60*/
    if ( EquippedInstance /*0x5e4f82*/
      && (v22 = OblivionDynamicCast(
                  (void *)EquippedInstance[2],
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESEnchantableForm `RTTI Type Descriptor',
                  0)) != 0 )
    {
      v23 = v22[1]; /*0x5e4f84*/
    }
    else
    {
      v23 = 0; /*0x5e4f89*/
    }
    if ( v23 ) /*0x5e4f8d*/
      MagicItem_LoadVFXModels((char *)(v23 + 0x18), 0); /*0x5e4f94*/
    if ( v21 ) /*0x5e4f9b*/
    {
      ContainerEntryExtraData_DestroyDataTable(v21, v20); /*0x5e4f9f*/
      FormHeapFree((unsigned int)v21); /*0x5e4fa5*/
    }
  }
}
