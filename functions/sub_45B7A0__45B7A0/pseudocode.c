void __stdcall sub_45B7A0(void *a1, int a2)
{
  int *v2; // esi
  _DWORD *v3; // eax
  _WORD *v4; // ebp
  int v5; // edi
  char *v6; // eax
  int v7; // edx
  ExtraContainerChanges_Data *ContainerChanges; // eax
  tListEntryData *objList; // ebp
  char v10; // bl
  EntryData *data; // edi
  TESForm *type; // eax
  TESForm::FormType v13; // cl
  unsigned __int16 *v14; // esi
  tListVoid *extendData; // esi
  char *v16; // [esp+Ch] [ebp+4h]

  v2 = (int *)OblivionDynamicCast(
                a1,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                0);
  v3 = OblivionDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESQuest `RTTI Type Descriptor',
         0);
  if ( !v2 )
  {
    if ( v3 )
    {
      if ( v3[0x16] )
        (*(void (__thiscall **)(_DWORD *, int))(*v3 + 0x48))(v3, 0x8000000);
    }
    return;
  }
  v4 = (_WORD *)v2[0xF];
  v5 = 0;
  if ( v4 )
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v2[0xF]);
  v6 = (char *)OblivionDynamicCast(
                 v2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                 &Actor `RTTI Type Descriptor',
                 0);
  v16 = v6;
  if ( (a2 & 0x2000000) != 0 )
  {
    if ( v6 )
    {
      if ( !(*(int (__thiscall **)(char *))(*(_DWORD *)v6 + 0x164))(v6) )
      {
LABEL_13:
        v6 = v16;
        goto LABEL_14;
      }
      v7 = *(_DWORD *)v16;
    }
    else
    {
      if ( !v5 )
        goto LABEL_14;
      if ( !sub_405790(v5, 0) || !*(_DWORD *)(sub_405790(v5, 0) + 0xC) )
        goto LABEL_13;
      v7 = *v2;
    }
    (*(void (__stdcall **)(int))(v7 + 0x48))(0x2000000);
    goto LABEL_13;
  }
LABEL_14:
  if ( (a2 & 8) != 0 && !v6 )
  {
    sub_4D8F20(v2, v4);
    v6 = v16;
  }
  if ( (a2 & 0x20000000) != 0 )
  {
    if ( v6 )
    {
      if ( v4 )
      {
        ContainerChanges = ExtraDataList_GetContainerChanges((ExtraDataList *)(v6 + 0x44));
        if ( ContainerChanges )
        {
          objList = ContainerChanges->objList;
          v10 = 0;
          while ( objList )
          {
            data = objList->node.data;
            if ( objList->node.data )
            {
              if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(data, 0) )
              {
                type = data->type;
                if ( type )
                {
                  v13 = type->member.type;
                  if ( v13 == kFormType_Clothing || v13 == kFormType_Armor )
                  {
                    v14 = (unsigned __int16 *)sub_4691B0((TESObjectARMO *)data->type);
                    if ( !TESBipedModelForm_CoversSlot(v14, 7, 0)
                      && !TESBipedModelForm_CoversSlot(v14, 6, 0)
                      && !TESBipedModelForm_CoversSlot(v14, 8, 0)
                      && !TESBipedModelForm_CoversSlot(v14, 0xD, 0) )
                    {
                      extendData = data->extendData;
                      do
                      {
                        if ( !extendData )
                          break;
                        if ( extendData->node.data )
                        {
                          if ( sub_41E850((ExtraDataList *)extendData->node.data) )
                            v10 = 1;
                        }
                        extendData = (tListVoid *)extendData->node.next;
                      }
                      while ( !v10 );
                    }
                  }
                }
              }
            }
            objList = (tListEntryData *)objList->node.next;
            if ( v10 )
            {
              (*(void (__thiscall **)(char *, int))(*(_DWORD *)v16 + 0x48))(v16, 0x20000000);
              return;
            }
          }
        }
      }
    }
  }
}
