void __thiscall sub_5E4B00(Actor *this)
{
  int v2; // edi
  int v3; // ebx
  int *v4; // ebp
  int v5; // edi
  int v6; // ebx
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // edi
  int v13; // ebx
  int v14; // ebx
  int v15; // edi
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // eax
  int *v19; // ebx
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int *v25; // ebx
  int v26; // eax
  int v27; // edi
  ExtraDataList *****ContainerExtraDataForRef; // ebp
  unsigned int i; // ebx
  unsigned int *EquippedInstance; // eax
  unsigned int *v31; // edi
  _DWORD *v32; // eax
  int v33; // edx
  _DWORD *v34; // [esp+10h] [ebp-4h]

  v2 = 0;
  v3 = (int)this->vtbl->super.super.GetBaseForm((TESObjectREFR *)this);
  if ( v3 )
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
      v2 = v3;
  }
  v4 = (int *)(v2 + 0x58);
  v5 = 0;
  v6 = (int)this->vtbl->super.super.GetBaseForm((TESObjectREFR *)this);
  if ( v6 )
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
      v5 = v6;
  }
  v7 = (_DWORD *)(v5 + 0x58);
  v8 = 0;
  v34 = (_DWORD *)(v5 + 0x58);
  if ( v5 != 0xFFFFFFA8 )
  {
    do
    {
      if ( *v7 )
        ++v8;
      v7 = (_DWORD *)v7[1];
    }
    while ( v7 );
  }
  v9 = v8;
  while ( v4 )
  {
    v10 = *v4;
    if ( *v4 )
    {
      v11 = v10 + 0x18;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v10 + 0x18) + 0x18))(v10 + 0x18) == 4
        || (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x18))(v11) == 1 )
      {
        MagicTarget_RemoveEffects();
      }
    }
    if ( BSSimpleList_Count(v34) == v9 )
    {
      v4 = (int *)v4[1];
    }
    else
    {
      v12 = 0;
      v13 = (int)this->vtbl->super.super.GetBaseForm((TESObjectREFR *)this);
      if ( v13 )
      {
        if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
          v12 = v13;
      }
      v4 = (int *)(v12 + 0x58);
      v14 = 0;
      v15 = (int)this->vtbl->super.super.GetBaseForm((TESObjectREFR *)this);
      if ( v15 )
      {
        if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
          v14 = v15;
      }
      v16 = (_DWORD *)(v14 + 0x58);
      v17 = 0;
      if ( v14 != 0xFFFFFFA8 )
      {
        do
        {
          if ( *v16 )
            ++v17;
          v16 = (_DWORD *)v16[1];
        }
        while ( v16 );
      }
      v9 = v17;
    }
  }
  if ( ((int (__thiscall *)(Actor *))this->vtbl->Unk_9A)(this) )
  {
    v18 = ((int (__thiscall *)(Actor *))this->vtbl->Unk_9A)(this);
    v19 = (int *)(v18 + 0x3C);
    if ( v18 != 0xFFFFFFC4 )
    {
      do
      {
        v20 = *v19;
        if ( *v19 )
        {
          v21 = v20 + 0x18;
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v20 + 0x18) + 0x18))(v20 + 0x18) == 4
            || (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 0x18))(v21) == 1 )
          {
            MagicTarget_RemoveEffects();
          }
        }
        v19 = (int *)v19[1];
      }
      while ( v19 );
    }
  }
  if ( Actor_IsNPC(this) )
  {
    v22 = (int)this->vtbl->super.super.GetBaseForm((TESObjectREFR *)this);
    if ( v22 )
    {
      if ( *(_DWORD *)(v22 + 0xE8) )
      {
        if ( Actor_IsNPC(this) && (v23 = (int)this->vtbl->super.super.GetBaseForm((TESObjectREFR *)this)) != 0 )
          v24 = *(_DWORD *)(v23 + 0xE8);
        else
          v24 = 0;
        v25 = (int *)(v24 + 0x30);
        if ( v24 != 0xFFFFFFD0 )
        {
          do
          {
            v26 = *v25;
            if ( *v25 )
            {
              v27 = v26 + 0x18;
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v26 + 0x18) + 0x18))(v26 + 0x18) == 4
                || (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 0x18))(v27) == 1 )
              {
                MagicTarget_RemoveEffects();
              }
            }
            v25 = (int *)v25[1];
          }
          while ( v25 );
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
    v31 = EquippedInstance;
    if ( EquippedInstance )
    {
      v32 = OblivionDynamicCast(
              (void *)EquippedInstance[2],
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESEnchantableForm `RTTI Type Descriptor',
              0);
      if ( v32 )
      {
        if ( v32[1] )
          MagicTarget_RemoveBoundObj(v31[2], 0);
      }
      ContainerEntryExtraData_DestroyDataTable(v31, v33);
      FormHeapFree((unsigned int)v31);
    }
  }
}
