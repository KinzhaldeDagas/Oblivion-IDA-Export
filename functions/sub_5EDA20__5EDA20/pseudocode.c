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

  GetBaseForm = (int (*)(void))this->vtbl->GetBaseForm; /*0x5eda2c*/
  if ( a2 ) /*0x5eda33*/
  {
    if ( GetBaseForm() ) /*0x5edb74*/
      ((int (__thiscall *)(TESObjectREFR *))this->vtbl->IsActor)(this); /*0x5edb86*/
    ContainerExtraDataForRef = (ExtraDataList *****)ContainerExtraData_GetContainerExtraDataForRef(this); /*0x5edb9d*/
    for ( i = 0; i < 0xA; ++i ) /*0x5edba1*/
    {
      EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerExtraDataForRef, dword_B1489C[i], 0); /*0x5edbb0*/
      v19 = EquippedInstance; /*0x5edbb5*/
      if ( EquippedInstance /*0x5edbd7*/
        && (v20 = OblivionDynamicCast(
                    (void *)EquippedInstance[2],
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                    &TESEnchantableForm `RTTI Type Descriptor',
                    0)) != 0 )
      {
        v21 = v20[1]; /*0x5edbd9*/
      }
      else
      {
        v21 = 0; /*0x5edbde*/
      }
      if ( v21 ) /*0x5edbe2*/
      {
        if ( *v19 ) /*0x5edbe4*/
          v22 = *(_DWORD *)*v19; /*0x5edbea*/
        else
          v22 = 0; /*0x5edbee*/
        if ( sub_5E3DE0(this, (void *)v19[2], v22) ) /*0x5edbf7*/
          (*(void (__thiscall **)(char *, int, unsigned int, int))(*((_DWORD *)this + 0x17) + 8))( /*0x5edc13*/
            (char *)this + 0x5C,
            v21 + 0x18,
            v19[2],
            1);
      }
      if ( v19 ) /*0x5edc17*/
      {
        ContainerEntryExtraData_DestroyDataTable(v19, v18); /*0x5edc1b*/
        FormHeapFree((unsigned int)v19); /*0x5edc21*/
      }
    }
  }
  else
  {
    v4 = 0; /*0x5eda39*/
    v5 = GetBaseForm(); /*0x5eda3d*/
    if ( v5 ) /*0x5eda41*/
    {
      if ( this->vtbl->IsActor(this) ) /*0x5eda4d*/
        v4 = v5; /*0x5eda53*/
    }
    v6 = (int *)(v4 + 0x58); /*0x5eda55*/
    if ( v4 != 0xFFFFFFA8 ) /*0x5eda5a*/
    {
      do /*0x5eda8b*/
      {
        v7 = *v6; /*0x5eda60*/
        if ( *v6 ) /*0x5eda60*/
        {
          (**((void (__thiscall ***)(char *, int, int))this + 0x17))((char *)this + 0x5C, v7, 1); /*0x5eda74*/
          (*(void (__thiscall **)(char *, int, char *, int))(*((_DWORD *)this + 0x17) + 4))( /*0x5eda84*/
            (char *)this + 0x5C,
            v7,
            (char *)this + 0x68,
            1);
        }
        v6 = (int *)v6[1]; /*0x5eda86*/
      }
      while ( v6 ); /*0x5eda8b*/
    }
    if ( ((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.Unk_30)(this) ) /*0x5eda97*/
    {
      v8 = ((int (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.Unk_30)(this); /*0x5edaa7*/
      v9 = (int *)(v8 + 0x3C); /*0x5edaab*/
      if ( v8 != 0xFFFFFFC4 ) /*0x5edaae*/
      {
        do /*0x5edadb*/
        {
          v10 = *v9; /*0x5edab0*/
          if ( *v9 ) /*0x5edab0*/
          {
            (**((void (__thiscall ***)(char *, int, int))this + 0x17))((char *)this + 0x5C, v10, 1); /*0x5edac4*/
            (*(void (__thiscall **)(char *, int, char *, int))(*((_DWORD *)this + 0x17) + 4))( /*0x5edad4*/
              (char *)this + 0x5C,
              v10,
              (char *)this + 0x68,
              1);
          }
          v9 = (int *)v9[1]; /*0x5edad6*/
        }
        while ( v9 ); /*0x5edadb*/
      }
    }
    if ( Actor_IsNPC((Actor *)this) ) /*0x5edadf*/
    {
      v11 = this->vtbl->GetBaseForm(this); /*0x5edaf6*/
      if ( v11 ) /*0x5edafa*/
      {
        if ( v11[9].member.modlist.data ) /*0x5edb00*/
        {
          if ( Actor_IsNPC((Actor *)this) && (v12 = this->vtbl->GetBaseForm(this)) != 0 ) /*0x5edb26*/
            data = v12[9].member.modlist.data; /*0x5edb28*/
          else
            data = 0; /*0x5edb30*/
          for ( j = &data->name[0x14]; j; j = *((char **)j + 1) ) /*0x5edb35*/
          {
            v15 = *(_DWORD *)j; /*0x5edb40*/
            if ( *(_DWORD *)j ) /*0x5edb40*/
            {
              (**((void (__thiscall ***)(char *, int, int))this + 0x17))((char *)this + 0x5C, v15, 1); /*0x5edb54*/
              (*(void (__thiscall **)(char *, int, char *, int))(*((_DWORD *)this + 0x17) + 4))( /*0x5edb64*/
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
