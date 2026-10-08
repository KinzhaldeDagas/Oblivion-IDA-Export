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

  v4 = (*(int (__usercall **)@<eax>(_BYTE *@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x128))(a1, a2, a3); /*0x5ea3b3*/
  v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x170))(a1); /*0x5ea3bf*/
  v6 = v5; /*0x5ea3c3*/
  if ( !v4 ) /*0x5ea3c5*/
  {
    if ( v5 ) /*0x5ea3c9*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x5ea3d5*/
        v4 = v6; /*0x5ea3db*/
    }
  }
  v7 = *(_DWORD *)(v4 + 0x38); /*0x5ea3dd*/
  if ( v7 ) /*0x5ea3e2*/
    goto LABEL_10; /*0x5ea3e2*/
  v8 = 0; /*0x5ea3ee*/
  v9 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x170))(a1); /*0x5ea3f2*/
  if ( v9 ) /*0x5ea3f6*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x5ea402*/
      v8 = v9; /*0x5ea408*/
  }
  v7 = *(_DWORD *)(v8 + 0x38); /*0x5ea40a*/
  if ( v7 ) /*0x5ea40f*/
  {
LABEL_10:
    TESContainer_constr(&v28); /*0x5ea419*/
    v10 = *(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x170); /*0x5ea420*/
    v29 = 0; /*0x5ea428*/
    v11 = 0; /*0x5ea430*/
    v12 = v10(a1); /*0x5ea434*/
    if ( v12 ) /*0x5ea438*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x5ea444*/
        v11 = v12; /*0x5ea44a*/
    }
    LOWORD(v13) = TESActorBaseData_GetLevel((TESActorBaseData *)(v11 + 0x24)); /*0x5ea456*/
    TESLeveledList_CalcLeveledForm((_BYTE *)(v7 + 0x24), v13, (int)&v28); /*0x5ea45f*/
    data = v28.list.data; /*0x5ea464*/
    p_list = &v28.list; /*0x5ea468*/
    next = &v28.list; /*0x5ea46c*/
    while ( 1 ) /*0x5ea476*/
    {
      v16 = p_list->data; /*0x5ea476*/
      if ( !p_list->data ) /*0x5ea476*/
        break; /*0x5ea476*/
      if ( v16->type ) /*0x5ea480*/
      {
        if ( v16->type->vtbl->Unk_29(v16->type) ) /*0x5ea497*/
        {
          type = p_list->data->type; /*0x5ea4a3*/
          v27 = type; /*0x5ea4a8*/
          if ( type ) /*0x5ea4ac*/
          {
            v18 = OblivionDynamicCast( /*0x5ea4c4*/
                    data->type,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESScriptableForm `RTTI Type Descriptor',
                    0);
            if ( v18 ) /*0x5ea4ce*/
              v25 = v18[1]; /*0x5ea4d3*/
            else
              v25 = 0; /*0x5ea4d9*/
            if ( v25 ) /*0x5ea4e6*/
            {
              v19 = 0; /*0x5ea4ec*/
              for ( i = 0; v19 < data->count; ++v19 ) /*0x5ea4f0*/
              {
                v21 = (_DWORD *)FormHeapAlloc(0x14u); /*0x5ea4f7*/
                LOBYTE(v29) = 1; /*0x5ea505*/
                if ( v21 ) /*0x5ea50a*/
                  i = (ExtraDataList *)ExtraDataList_constr(v21); /*0x5ea513*/
                else
                  i = 0; /*0x5ea517*/
                LOBYTE(v29) = 0; /*0x5ea51d*/
                ExtraDataList_SetExtraCount(i, 1); /*0x5ea522*/
                if ( i ) /*0x5ea529*/
                {
                  if ( !ExtraDataList_GetExtraScript(i) ) /*0x5ea52d*/
                  {
                    ExtraDataList_AddScript(i, v25); /*0x5ea53d*/
                    ExtraScript = (char *)ExtraDataList_GetExtraScript(i); /*0x5ea544*/
                    EventList = Script_CreateEventList(ExtraScript); /*0x5ea54b*/
                    ExtraDataList_SetScriptEventList(i, (int)EventList); /*0x5ea553*/
                  }
                }
              }
              (*(void (__thiscall **)(_BYTE *, TESForm *, ExtraDataList *, int))(*(_DWORD *)a1 + 0x114))(a1, v27, i, 1); /*0x5ea572*/
              p_list = next; /*0x5ea574*/
            }
            else
            {
              (*(void (__thiscall **)(_BYTE *, TESForm *, _DWORD, SInt32))(*(_DWORD *)a1 + 0x114))( /*0x5ea58b*/
                a1,
                type,
                0,
                data->count);
            }
          }
        }
      }
      next = p_list->next; /*0x5ea592*/
      if ( !next ) /*0x5ea596*/
        break; /*0x5ea596*/
      p_list = p_list->next; /*0x5ea472*/
    }
    v29 = 0xFFFFFFFF; /*0x5ea5a0*/
    TESContainer_destr(&v28); /*0x5ea5a8*/
  }
  ContainerChanges = (float *)ExtraDataList_GetContainerChanges((ExtraDataList *)(a1 + 0x44)); /*0x5ea5b0*/
  if ( ContainerChanges ) /*0x5ea5b7*/
    ExtraContainerChanges_RunScripts(ContainerChanges, a2, a3); /*0x5ea5bb*/
}
