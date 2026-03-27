void __usercall sub_5EA380(_BYTE *a1@<ecx>, double a2@<st0>, double a3@<st1>)
{
  int v4; // esi
  int v5; // eax
  int v6; // edi
  int v7; // esi
  int v8; // edi
  int v9; // esi
  int (__thiscall *v10)(_BYTE *); // edx
  int v11; // edi
  int v12; // ebp
  int v13; // eax
  TESContainer_Data *data; // ebp
  TESContainer_Entry *p_list; // edi
  TESContainer_Data *v16; // eax
  TESForm *type; // esi
  _DWORD *v18; // eax
  unsigned int v19; // edi
  ExtraDataList *i; // esi
  _DWORD *v21; // eax
  char *ExtraScript; // eax
  char **EventList; // eax
  float *ContainerChanges; // eax
  int v25; // [esp+14h] [ebp-2Ch]
  TESContainer_Entry *next; // [esp+18h] [ebp-28h]
  TESForm *v27; // [esp+1Ch] [ebp-24h]
  TESContainer v28; // [esp+24h] [ebp-1Ch] BYREF
  unsigned int v29; // [esp+3Ch] [ebp-4h]

  v4 = (*(int (__usercall **)@<eax>(_BYTE *@<ecx>, double@<st0>))(*(_DWORD *)a1 + 0x128))(a1, a2);
  v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x170))(a1);
  v6 = v5;
  if ( !v4 )
  {
    if ( v5 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x190))(a1) )
        v4 = v6;
    }
  }
  v7 = *(_DWORD *)(v4 + 0x38);
  if ( v7 )
    goto LABEL_10;
  v8 = 0;
  v9 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x170))(a1);
  if ( v9 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x190))(a1) )
      v8 = v9;
  }
  v7 = *(_DWORD *)(v8 + 0x38);
  if ( v7 )
  {
LABEL_10:
    TESContainer_constr(&v28);
    v10 = *(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x170);
    v29 = 0;
    v11 = 0;
    v12 = v10(a1);
    if ( v12 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x190))(a1) )
        v11 = v12;
    }
    LOWORD(v13) = TESActorBaseData_GetLevel((TESActorBaseData *)(v11 + 0x24));
    TESLeveledList_CalcLeveledForm((_BYTE *)(v7 + 0x24), v13, (int)&v28);
    data = v28.list.data;
    p_list = &v28.list;
    next = &v28.list;
    while ( 1 )
    {
      v16 = p_list->data;
      if ( !p_list->data )
        break;
      if ( v16->type )
      {
        if ( v16->type->vtbl->Unk_29(v16->type) )
        {
          type = p_list->data->type;
          v27 = type;
          if ( type )
          {
            v18 = OblivionDynamicCast(
                    data->type,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESScriptableForm `RTTI Type Descriptor',
                    0);
            if ( v18 )
              v25 = v18[1];
            else
              v25 = 0;
            if ( v25 )
            {
              v19 = 0;
              for ( i = 0; v19 < data->count; ++v19 )
              {
                v21 = (_DWORD *)FormHeapAlloc(0x14u);
                LOBYTE(v29) = 1;
                if ( v21 )
                  i = (ExtraDataList *)ExtraDataList_constr(v21);
                else
                  i = 0;
                LOBYTE(v29) = 0;
                ExtraDataList_SetExtraCount(i, 1);
                if ( i )
                {
                  if ( !ExtraDataList_GetExtraScript(i) )
                  {
                    ExtraDataList_AddScript(i, v25);
                    ExtraScript = (char *)ExtraDataList_GetExtraScript(i);
                    EventList = Script_CreateEventList(ExtraScript);
                    ExtraDataList_SetScriptEventList(i, (int)EventList);
                  }
                }
              }
              (*(void (__thiscall **)(_BYTE *, TESForm *, ExtraDataList *, int))(*(_DWORD *)a1 + 0x114))(a1, v27, i, 1);
              p_list = next;
            }
            else
            {
              (*(void (__thiscall **)(_BYTE *, TESForm *, _DWORD, SInt32))(*(_DWORD *)a1 + 0x114))(
                a1,
                type,
                0,
                data->count);
            }
          }
        }
      }
      next = p_list->next;
      if ( !next )
        break;
      p_list = p_list->next;
    }
    v29 = 0xFFFFFFFF;
    TESContainer_destr(&v28);
  }
  ContainerChanges = (float *)ExtraDataList_GetContainerChanges((ExtraDataList *)(a1 + 0x44));
  if ( ContainerChanges )
    ExtraContainerChanges_RunScripts(ContainerChanges, a2, a3);
}
