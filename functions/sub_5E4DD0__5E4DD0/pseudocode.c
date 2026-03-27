void __thiscall sub_5E4DD0(Actor *this)
{
  int v2; // esi
  int v3; // edi
  int *v4; // edi
  int v5; // eax
  char *v6; // esi
  int v7; // eax
  int *v8; // edi
  int v9; // eax
  char *v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int *v14; // edi
  int v15; // eax
  char *v16; // esi
  ExtraDataList *****ContainerExtraDataForRef; // ebx
  unsigned int i; // edi
  unsigned int *EquippedInstance; // eax
  int v20; // edx
  unsigned int *v21; // esi
  _DWORD *v22; // eax
  int v23; // eax

  v2 = 0;
  v3 = (int)this->vtbl->super.super.GetBaseForm((TESObjectREFR *)this);
  if ( v3 )
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
      v2 = v3;
  }
  v4 = (int *)(v2 + 0x58);
  if ( v2 != 0xFFFFFFA8 )
  {
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        v6 = (char *)(v5 + 0x18);
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v5 + 0x18) + 0x18))(v5 + 0x18) == 4
          || (*(int (__thiscall **)(char *))(*(_DWORD *)v6 + 0x18))(v6) == 1 )
        {
          sub_41A610(v6, 0);
        }
      }
      v4 = (int *)v4[1];
    }
    while ( v4 );
  }
  if ( ((int (__thiscall *)(Actor *))this->vtbl->Unk_9A)(this) )
  {
    v7 = ((int (__thiscall *)(Actor *))this->vtbl->Unk_9A)(this);
    v8 = (int *)(v7 + 0x3C);
    if ( v7 != 0xFFFFFFC4 )
    {
      do
      {
        v9 = *v8;
        if ( *v8 )
        {
          v10 = (char *)(v9 + 0x18);
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v9 + 0x18) + 0x18))(v9 + 0x18) == 4
            || (*(int (__thiscall **)(char *))(*(_DWORD *)v10 + 0x18))(v10) == 1 )
          {
            sub_41A610(v10, 0);
          }
        }
        v8 = (int *)v8[1];
      }
      while ( v8 );
    }
  }
  if ( Actor_IsNPC(this) )
  {
    v11 = (int)this->vtbl->super.super.GetBaseForm((TESObjectREFR *)this);
    if ( v11 )
    {
      if ( *(_DWORD *)(v11 + 0xE8) )
      {
        if ( Actor_IsNPC(this) && (v12 = (int)this->vtbl->super.super.GetBaseForm((TESObjectREFR *)this)) != 0 )
          v13 = *(_DWORD *)(v12 + 0xE8);
        else
          v13 = 0;
        v14 = (int *)(v13 + 0x30);
        if ( v13 != 0xFFFFFFD0 )
        {
          do
          {
            v15 = *v14;
            if ( *v14 )
            {
              v16 = (char *)(v15 + 0x18);
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v15 + 0x18) + 0x18))(v15 + 0x18) == 4
                || (*(int (__thiscall **)(char *))(*(_DWORD *)v16 + 0x18))(v16) == 1 )
              {
                sub_41A610(v16, 0);
              }
            }
            v14 = (int *)v14[1];
          }
          while ( v14 );
        }
      }
    }
  }
  if ( this->vtbl->super.super.GetBaseForm((TESObjectREFR *)this) )
    ((int (__thiscall *)(Actor *))this->vtbl->super.super.IsActor)(this);
  ContainerExtraDataForRef = (ExtraDataList *****)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)this);
  for ( i = 0; i < 0xA; ++i )
  {
    EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerExtraDataForRef, dword_B1489C[i], 0);
    v21 = EquippedInstance;
    if ( EquippedInstance
      && (v22 = OblivionDynamicCast(
                  (void *)EquippedInstance[2],
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESEnchantableForm `RTTI Type Descriptor',
                  0)) != 0 )
    {
      v23 = v22[1];
    }
    else
    {
      v23 = 0;
    }
    if ( v23 )
      sub_41A610((char *)(v23 + 0x18), 0);
    if ( v21 )
    {
      ContainerEntryExtraData_DestroyDataTable(v21, v20);
      FormHeapFree((unsigned int)v21);
    }
  }
}
