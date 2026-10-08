void __stdcall sub_45B7A0(void *a1, int a2)
{
  int *v2; // esi
  _DWORD *v3; // eax
  _WORD *v4; // ebp
  NiNode *v5; // edi
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

  v2 = (int *)OblivionDynamicCast( /*0x45b7c9*/
                a1,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                0);
  v3 = OblivionDynamicCast( /*0x45b7cb*/
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESQuest `RTTI Type Descriptor',
         0);
  if ( !v2 ) /*0x45b7d5*/
  {
    if ( v3 ) /*0x45b977*/
    {
      if ( v3[0x16] ) /*0x45b979*/
        (*(void (__thiscall **)(_DWORD *, int))(*v3 + 0x48))(v3, 0x8000000); /*0x45b98b*/
    }
    return; /*0x45b98b*/
  }
  v4 = (_WORD *)v2[0xF]; /*0x45b7dc*/
  v5 = 0; /*0x45b7df*/
  if ( v4 ) /*0x45b7e3*/
    v5 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v2[0xF]); /*0x45b7ef*/
  v6 = (char *)OblivionDynamicCast( /*0x45b801*/
                 v2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                 &Actor `RTTI Type Descriptor',
                 0);
  v16 = v6; /*0x45b813*/
  if ( (a2 & 0x2000000) != 0 ) /*0x45b817*/
  {
    if ( v6 ) /*0x45b81b*/
    {
      if ( !(*(int (__thiscall **)(char *))(*(_DWORD *)v6 + 0x164))(v6) ) /*0x45b82b*/
      {
LABEL_13:
        v6 = v16; /*0x45b863*/
        goto LABEL_14; /*0x45b863*/
      }
      v7 = *(_DWORD *)v16; /*0x45b831*/
    }
    else
    {
      if ( !v5 ) /*0x45b837*/
        goto LABEL_14; /*0x45b837*/
      if ( !NiNode_GetChildAtIndex(v5, 0) || !NiNode_GetChildAtIndex(v5, 0)->members.super.m_controller ) /*0x45b84f*/
        goto LABEL_13; /*0x45b853*/
      v7 = *v2; /*0x45b855*/
    }
    (*(void (__stdcall **)(int))(v7 + 0x48))(0x2000000); /*0x45b861*/
    goto LABEL_13; /*0x45b861*/
  }
LABEL_14:
  if ( (a2 & 8) != 0 && !v6 ) /*0x45b86e*/
  {
    sub_4D8F20(v2, v4); /*0x45b873*/
    v6 = v16; /*0x45b878*/
  }
  if ( (a2 & 0x20000000) != 0 ) /*0x45b882*/
  {
    if ( v6 ) /*0x45b88a*/
    {
      if ( v4 ) /*0x45b892*/
      {
        ContainerChanges = ExtraDataList_GetContainerChanges((ExtraDataList *)(v6 + 0x44)); /*0x45b89b*/
        if ( ContainerChanges ) /*0x45b8a2*/
        {
          objList = ContainerChanges->objList; /*0x45b8a8*/
          v10 = 0; /*0x45b8aa*/
          while ( objList ) /*0x45b8b2*/
          {
            data = objList->node.data; /*0x45b8b8*/
            if ( objList->node.data ) /*0x45b8b8*/
            {
              if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(data, 0) ) /*0x45b8c7*/
              {
                type = data->type; /*0x45b8d0*/
                if ( type ) /*0x45b8d5*/
                {
                  v13 = type->member.type; /*0x45b8d7*/
                  if ( v13 == kFormType_Clothing || v13 == kFormType_Armor ) /*0x45b8e2*/
                  {
                    v14 = (unsigned __int16 *)sub_4691B0((TESObjectARMO *)data->type); /*0x45b8ed*/
                    if ( !TESBipedModelForm_CoversSlot(v14, 7, 0) /*0x45b922*/
                      && !TESBipedModelForm_CoversSlot(v14, 6, 0)
                      && !TESBipedModelForm_CoversSlot(v14, 8, 0)
                      && !TESBipedModelForm_CoversSlot(v14, 0xD, 0) )
                    {
                      extendData = data->extendData; /*0x45b92d*/
                      do /*0x45b94b*/
                      {
                        if ( !extendData ) /*0x45b933*/
                          break; /*0x45b933*/
                        if ( extendData->node.data ) /*0x45b935*/
                        {
                          if ( ExtraDataList_GetLeveledItem((ExtraDataList *)extendData->node.data) ) /*0x45b93b*/
                            v10 = 1; /*0x45b944*/
                        }
                        extendData = (tListVoid *)extendData->node.next; /*0x45b948*/
                      }
                      while ( !v10 ); /*0x45b94b*/
                    }
                  }
                }
              }
            }
            objList = (tListEntryData *)objList->node.next; /*0x45b94f*/
            if ( v10 ) /*0x45b952*/
            {
              (*(void (__thiscall **)(char *, int))(*(_DWORD *)v16 + 0x48))(v16, 0x20000000); /*0x45b96c*/
              return; /*0x45b958*/
            }
          }
        }
      }
    }
  }
}
