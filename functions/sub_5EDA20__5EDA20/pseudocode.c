void __thiscall sub_5EDA20(TESObjectREFR *this, char a2)
{
  int (*GetBaseForm)(void); // edx
  int v4; // edi
  int v5; // ebx
  int *v6; // ebp
  int v7; // ebx
  int v8; // eax
  int *v9; // ebp
  int v10; // ebx
  TESForm *v11; // eax
  TESForm *v12; // eax
  Data *data; // ebp
  char *j; // ebp
  int v15; // ebx
  unsigned int i; // ebp
  unsigned int *EquippedInstance; // eax
  int v18; // edx
  unsigned int *v19; // edi
  _DWORD *v20; // eax
  int v21; // ebx
  int v22; // ecx
  ExtraDataList *****ContainerExtraDataForRef; // [esp+14h] [ebp+4h]

  GetBaseForm = (int (*)(void))this->vtbl->GetBaseForm;
  if ( a2 )
  {
    if ( GetBaseForm() )
      ((int (__thiscall *)(TESObjectREFR *))this->vtbl->IsActor)(this);
    ContainerExtraDataForRef = (ExtraDataList *****)ContainerExtraData_GetContainerExtraDataForRef(this);
    for ( i = 0; i < 0xA; ++i )
    {
      EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerExtraDataForRef, dword_B1489C[i], 0);
      v19 = EquippedInstance;
      if ( EquippedInstance
        && (v20 = OblivionDynamicCast(
                    (void *)EquippedInstance[2],
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                    &TESEnchantableForm `RTTI Type Descriptor',
                    0)) != 0 )
      {
        v21 = v20[1];
      }
      else
      {
        v21 = 0;
      }
      if ( v21 )
      {
        if ( *v19 )
          v22 = *(_DWORD *)*v19;
        else
          v22 = 0;
        if ( sub_5E3DE0(this, (void *)v19[2], v22) )
          (*(void (__thiscall **)(char *, int, unsigned int, int))(*((_DWORD *)this + 0x17) + 8))(
            (char *)this + 0x5C,
            v21 + 0x18,
            v19[2],
            1);
      }
      if ( v19 )
      {
        ContainerEntryExtraData_DestroyDataTable(v19, v18);
        FormHeapFree((unsigned int)v19);
      }
    }
  }
  else
  {
    v4 = 0;
    v5 = GetBaseForm();
    if ( v5 )
    {
      if ( this->vtbl->IsActor(this) )
        v4 = v5;
    }
    v6 = (int *)(v4 + 0x58);
    if ( v4 != 0xFFFFFFA8 )
    {
      do
      {
        v7 = *v6;
        if ( *v6 )
        {
          (**((void (__thiscall ***)(char *, int, int))this + 0x17))((char *)this + 0x5C, v7, 1);
          (*(void (__thiscall **)(char *, int, char *, int))(*((_DWORD *)this + 0x17) + 4))(
            (char *)this + 0x5C,
            v7,
            (char *)this + 0x68,
            1);
        }
        v6 = (int *)v6[1];
      }
      while ( v6 );
    }
    if ( ((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.Unk_30)(this) )
    {
      v8 = ((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.Unk_30)(this);
      v9 = (int *)(v8 + 0x3C);
      if ( v8 != 0xFFFFFFC4 )
      {
        do
        {
          v10 = *v9;
          if ( *v9 )
          {
            (**((void (__thiscall ***)(char *, int, int))this + 0x17))((char *)this + 0x5C, v10, 1);
            (*(void (__thiscall **)(char *, int, char *, int))(*((_DWORD *)this + 0x17) + 4))(
              (char *)this + 0x5C,
              v10,
              (char *)this + 0x68,
              1);
          }
          v9 = (int *)v9[1];
        }
        while ( v9 );
      }
    }
    if ( Actor_IsNPC((Actor *)this) )
    {
      v11 = this->vtbl->GetBaseForm(this);
      if ( v11 )
      {
        if ( v11[9].member.modlist.data )
        {
          if ( Actor_IsNPC((Actor *)this) && (v12 = this->vtbl->GetBaseForm(this)) != 0 )
            data = v12[9].member.modlist.data;
          else
            data = 0;
          for ( j = &data->name[0x14]; j; j = *((char **)j + 1) )
          {
            v15 = *(_DWORD *)j;
            if ( *(_DWORD *)j )
            {
              (**((void (__thiscall ***)(char *, int, int))this + 0x17))((char *)this + 0x5C, v15, 1);
              (*(void (__thiscall **)(char *, int, char *, int))(*((_DWORD *)this + 0x17) + 4))(
                (char *)this + 0x5C,
                v15,
                (char *)this + 0x68,
                1);
            }
          }
        }
      }
    }
  }
}
