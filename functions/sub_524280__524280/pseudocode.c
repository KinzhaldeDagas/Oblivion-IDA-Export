void __userpurge sub_524280(
        int ecx0@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a1,
        char *a6)
{
  int v8; // esi
  EntryData *EquippedInstance; // eax
  int v10; // edx
  EntryData *v11; // ebx
  TESForm *type; // edi
  int v13; // edx
  EntryData *v14; // eax
  void *v15; // eax
  _DWORD *v16; // ecx
  EntryData *v17; // eax
  void *v18; // esi
  char HasWorn; // al
  void *v20; // eax
  CHAR *v21; // eax
  CHAR *NameForForm; // [esp-10h] [ebp-28h]
  _DWORD **v24; // [esp+Ch] [ebp-Ch]
  EntryData *v25; // [esp+10h] [ebp-8h]
  ExtraDataList *****ContainerExtraDataForRef; // [esp+14h] [ebp-4h]
  TESObjectREFR *a1a; // [esp+1Ch] [ebp+4h]
  int v28; // [esp+20h] [ebp+8h]

  ContainerExtraDataForRef = (ExtraDataList *****)ContainerExtraData_GetContainerExtraDataForRef(a1);
  a1a = 0;
  v25 = 0;
  v24 = (_DWORD **)OblivionDynamicCast(
                     a1,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
  if ( a1 )
  {
    if ( a6 )
    {
      v8 = 0;
      v28 = 0;
      do
      {
        EquippedInstance = (EntryData *)ContainerExtraData_GetEquippedInstance(ContainerExtraDataForRef, v8, 0);
        v11 = EquippedInstance;
        if ( EquippedInstance )
        {
          type = EquippedInstance->type;
          if ( type )
          {
            switch ( v8 )
            {
              case 0:
              case 1:
                v15 = OblivionDynamicCast(
                        type,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                        &TESBipedModelForm `RTTI Type Descriptor',
                        0);
                if ( v15 )
                  sub_4691D0((int)v15, a2, a3, a4, a6, *(_DWORD *)(ecx0 + 0x28) & 1, 0xFFFFFFFF);
                break;
              case 2:
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
              case 8:
              case 0xF:
                goto LABEL_26;
              case 9:
                sub_478CA0(a6, (char)a6, a2, a3, a4, (int)EquippedInstance->type);
                break;
              case 0xC:
                sub_478D70(a6, (char)a6, a2, a3, a4, (int)EquippedInstance->type);
                break;
              case 0xD:
                if ( v24 && (v16 = v24[0x16]) != 0 && (*(int (__thiscall **)(_DWORD *))(*v16 + 8))(v16) < 2 )
                {
                  v17 = (EntryData *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v24[0x16] + 0xF8))(v24[0x16], 0);
                  v25 = v17;
                }
                else
                {
                  v17 = v25;
                }
                if ( !v17 || (unsigned __int8)ContainerEntryExtraData_HasWorn(v17, 0) )
                {
LABEL_26:
                  v18 = OblivionDynamicCast(
                          type,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                          &TESBipedModelForm `RTTI Type Descriptor',
                          0);
                  HasWorn = ContainerEntryExtraData_HasWorn(v11, 1);
                  if ( v18 )
                  {
                    sub_4691D0((int)v18, a2, a3, a4, a6, *(_DWORD *)(ecx0 + 0x28) & 1, (HasWorn != 0) + 6);
                  }
                  else
                  {
                    NameForForm = TESFullName_GetNameForForm(type);
                    PrintError("Bad part '%s' in TESNPC::InitWorn.", NameForForm);
                  }
                }
                break;
              case 0xE:
                if ( v24 && (*(int (__thiscall **)(_DWORD *))(*v24[0x16] + 8))(v24[0x16]) < 2 )
                {
                  v14 = (EntryData *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v24[0x16] + 0xF0))(v24[0x16], 0);
                  a1a = (TESObjectREFR *)v14;
                }
                else
                {
                  v14 = (EntryData *)a1a;
                }
                if ( !v14 || (unsigned __int8)ContainerEntryExtraData_HasWorn(v14, 0) )
                  sub_478DF0(a6, (char)a6, a2, a3, a4, (int)type);
                break;
              default:
                v20 = OblivionDynamicCast(
                        type,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESFullName `RTTI Type Descriptor',
                        0);
                if ( !v20 || (v21 = *((CHAR **)v20 + 1)) == 0 )
                  v21 = EmptyString;
                PrintError(
                  "Need to add support for BipedObject '%s' object name '%s' in TESNPC::InitWorn.",
                  *(_DWORD *)(4 * v8 + 0xB06588),
                  v21);
                break;
            }
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)v11, v13);
            FormHeapFree((unsigned int)v11);
            v8 = v28;
          }
          else
          {
            ContainerEntryExtraData_DestroyDataTable((unsigned int *)EquippedInstance, v10);
            FormHeapFree((unsigned int)v11);
          }
        }
        v28 = ++v8;
      }
      while ( v8 < 0x10 );
    }
  }
}
