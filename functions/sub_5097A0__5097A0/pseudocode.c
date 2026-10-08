double __usercall sub_5097A0@<st0>(double result@<st0>, int a2, int a3, TESObjectREFR *a4)
{
  TESObjectREFR *v4; // esi
  int v5; // eax
  int *v6; // eax
  int *v7; // edi
  ExtraScript *v8; // ebx
  int *v9; // eax
  const char *v10; // eax
  int v11; // esi
  const char *v12; // eax
  bool v13; // zf
  int v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  int ***ContainerExtraDataForRef; // ebx
  TESForm *v18; // esi
  int *EntryForItem; // eax
  int *v20; // edi
  int v21; // eax
  int *v22; // eax
  int *v23; // esi
  ExtraScript *v24; // eax
  int *v25; // ecx
  ScriptEventList *v26; // ebx
  const char *v27; // eax
  OblivionTESGlobalListNode *p_listGlobals; // edi
  TESGlobal *item; // esi
  UInt8 type; // al
  const char *v31; // eax
  int v32; // eax
  int v33; // edi
  int v34; // eax
  const char *v35; // eax
  unsigned __int64 v36; // st6
  const char *v37; // eax
  const char *(__thiscall *GetEditorName)(TESForm *); // eax
  const char *v39; // eax
  const char *v40; // [esp-4h] [ebp-4Ch]
  const char *v41; // [esp-4h] [ebp-4Ch]
  UInt32 v42; // [esp+0h] [ebp-48h]
  const char *v43; // [esp+0h] [ebp-48h]
  UInt32 v44; // [esp+0h] [ebp-48h]
  const char *v45; // [esp+0h] [ebp-48h]
  double v46; // [esp+0h] [ebp-48h]
  const char *v47; // [esp+0h] [ebp-48h]
  double v48; // [esp+0h] [ebp-48h]
  double v49; // [esp+0h] [ebp-48h]
  int v50; // [esp+4h] [ebp-44h]
  int v51; // [esp+4h] [ebp-44h]
  int v52; // [esp+4h] [ebp-44h]
  int v53; // [esp+4h] [ebp-44h]
  int v54; // [esp+4h] [ebp-44h]
  int v55; // [esp+4h] [ebp-44h]
  char v56; // [esp+33h] [ebp-15h]
  int *v57; // [esp+34h] [ebp-14h]
  TESForm *i; // [esp+34h] [ebp-14h]
  int *v59; // [esp+38h] [ebp-10h] BYREF
  int ***v60; // [esp+3Ch] [ebp-Ch]
  double v61; // [esp+40h] [ebp-8h] BYREF

  v4 = a4; /*0x5097ab*/
  v56 = 1; /*0x5097b1*/
  if ( !a4 ) /*0x5097b6*/
    goto LABEL_49; /*0x5097b6*/
  sub_4D7240(a4); /*0x5097be*/
  if ( v5 ) /*0x5097c5*/
  {
    sub_4D7240(a4); /*0x5097cd*/
    v7 = v6; /*0x5097d4*/
    v8 = sub_4D7250(a4); /*0x5097df*/
    v9 = v7 + 0x12; /*0x5097e1*/
    if ( v7[0x13] || *v9 ) /*0x5097e6*/
    {
      if ( v8 ) /*0x50980c*/
      {
        while ( v9 ) /*0x509814*/
        {
          v11 = *v9; /*0x50981a*/
          if ( !*v9 ) /*0x50981a*/
            break; /*0x50981a*/
          v57 = (int *)v9[1]; /*0x50982c*/
          if ( sub_4FA1B0(v8, *(_DWORD *)v11) ) /*0x509830*/
          {
            v42 = *(_DWORD *)v11; /*0x50983d*/
            v59 = 0; /*0x509840*/
            result = ScriptEventList::GetVariableValue((ScriptEventList *)v8, v42, 0); /*0x509848*/
            v61 = result; /*0x50984d*/
            sub_4F9FC0(&v59, &v61); /*0x50985b*/
            v12 = (const char *)(*(int (__thiscall **)(int *, _DWORD, int *))(*v7 + 0xD4))( /*0x509876*/
                                  v7,
                                  *(_DWORD *)(v11 + 0x18),
                                  v59);
            Interface_ConsolePrint("%s->%s = (%08X)", v12, v43, v50); /*0x50987e*/
            v9 = v57; /*0x509883*/
          }
          else
          {
            v13 = *(_BYTE *)(v11 + 0x10) == 0; /*0x50988c*/
            v44 = *(_DWORD *)v11; /*0x509895*/
            v59 = *(int **)(v11 + 0x18); /*0x509896*/
            if ( v13 ) /*0x50989c*/
            {
              result = ScriptEventList::GetVariableValue((ScriptEventList *)v8, v44, 0); /*0x5098d1*/
              v16 = (const char *)(*(int (__thiscall **)(int *, int *, _DWORD, _DWORD))(*v7 + 0xD4))( /*0x5098eb*/
                                    v7,
                                    v59,
                                    LODWORD(result),
                                    HIDWORD(*(unsigned __int64 *)&result));
              Interface_ConsolePrint("%s->%s = %0.4f", v16, v40, v46); /*0x5098f3*/
            }
            else
            {
              result = ScriptEventList::GetVariableValue((ScriptEventList *)v8, v44, 0); /*0x50989e*/
              v14 = Double_To_SInt32(result); /*0x5098a3*/
              v15 = (const char *)(*(int (__thiscall **)(int *, int *, int))(*v7 + 0xD4))(v7, v59, v14); /*0x5098b8*/
              Interface_ConsolePrint("%s->%s = %d", v15, v45, v51); /*0x5098c0*/
            }
            v9 = v57; /*0x5098c5*/
          }
        }
      }
      v4 = a4; /*0x509904*/
    }
    else
    {
      v10 = (const char *)(*(int (__thiscall **)(int *))(*v7 + 0xD4))(v7); /*0x5097f5*/
      Interface_ConsolePrint("No variables in script %s", v10); /*0x5097fd*/
    }
    v56 = 0; /*0x509907*/
  }
  if ( TESObjectREFR_GetContainer(v4) ) /*0x50990e*/
  {
    ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(v4); /*0x509922*/
    v60 = ContainerExtraDataForRef; /*0x509929*/
    v18 = 0; /*0x509932*/
    LODWORD(v61) = ContainerExtraData_GetCount(ContainerExtraDataForRef); /*0x509936*/
    for ( i = 0; (int)v18 < SLODWORD(v61); i = v18 ) /*0x50993e*/
    {
      EntryForItem = ContainerExtraData_GetEntryForItem((ExtraContainerChanges_Data *)ContainerExtraDataForRef, v18); /*0x509943*/
      v20 = EntryForItem; /*0x509948*/
      if ( EntryForItem ) /*0x50994c*/
      {
        sub_484F20(EntryForItem); /*0x509950*/
        if ( v21 ) /*0x509957*/
        {
          sub_484F20(v20); /*0x50995b*/
          v23 = v22; /*0x509962*/
          v24 = sub_484F50(v20); /*0x509964*/
          v25 = v23 + 0x12; /*0x50996d*/
          v26 = (ScriptEventList *)v24; /*0x509970*/
          if ( v23[0x13] || *v25 ) /*0x509978*/
          {
            if ( v24 ) /*0x509a4a*/
            {
              while ( v25 ) /*0x509a52*/
              {
                v32 = *v25; /*0x509a58*/
                if ( !*v25 ) /*0x509a58*/
                  break; /*0x509a58*/
                v13 = *(_BYTE *)(v32 + 0x10) == 0; /*0x509a62*/
                v33 = *(_DWORD *)(v32 + 0x18); /*0x509a69*/
                v59 = (int *)v25[1]; /*0x509a6c*/
                if ( v13 ) /*0x509a74*/
                {
                  *(double *)&v36 = ScriptEventList::GetVariableValue(v26, *(_DWORD *)v32, 0); /*0x509aa8*/
                  v37 = (const char *)(*(int (__thiscall **)(int *, int, _DWORD, _DWORD))(*v23 + 0xD4))( /*0x509abe*/
                                        v23,
                                        v33,
                                        v36,
                                        HIDWORD(v36));
                  Interface_ConsolePrint("%s->%s = %0.4f", v37, v41, v48); /*0x509ac6*/
                }
                else
                {
                  ScriptEventList::GetVariableValue(v26, *(_DWORD *)v32, 0); /*0x509a79*/
                  v34 = Double_To_SInt32(result); /*0x509a7e*/
                  v35 = (const char *)(*(int (__thiscall **)(int *, int, int))(*v23 + 0xD4))(v23, v33, v34); /*0x509a8f*/
                  Interface_ConsolePrint("%s->%s = %d", v35, v47, v54); /*0x509a97*/
                }
                v25 = v59; /*0x509a9c*/
              }
            }
          }
          else
          {
            v27 = (const char *)(*(int (__thiscall **)(int *))(*v23 + 0xD4))(v23); /*0x50998b*/
            Interface_ConsolePrint("No variables in script %s", v27); /*0x509993*/
          }
          ContainerExtraDataForRef = v60; /*0x50999b*/
          v18 = i; /*0x50999f*/
          v56 = 0; /*0x5099a3*/
        }
      }
      v18 = (TESForm *)((char *)v18 + 1); /*0x5099a8*/
    }
  }
  if ( v56 ) /*0x5099ba*/
  {
LABEL_49:
    p_listGlobals = &g_TESDataHandler->listGlobals; /*0x5099c6*/
    if ( g_TESDataHandler != (TESDataHandler *)0xFFFFFF8C && (g_TESDataHandler->listGlobals.next || p_listGlobals->item) ) /*0x5099d5*/
    {
      Interface_ConsolePrint("--- Global Variables -----------------------------"); /*0x5099e3*/
      do /*0x5099f0*/
      {
        item = p_listGlobals->item; /*0x5099f0*/
        if ( p_listGlobals->item ) /*0x5099f0*/
        {
          type = item->type; /*0x5099fa*/
          switch ( type ) /*0x5099ff*/
          {
            case 'f': /*0x5099ff*/
              GetEditorName = item->vtbl->GetEditorName; /*0x509af2*/
              *(float *)&v61 = item->data; /*0x509af8*/
              v39 = (const char *)((int (__thiscall *)(TESGlobal *, _DWORD, _DWORD))GetEditorName)( /*0x509b08*/
                                    item,
                                    COERCE_UNSIGNED_INT64(*(float *)&v61),
                                    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&v61)));
              Interface_ConsolePrint("%s = %0.4f", v39, v49); /*0x509b10*/
              break; /*0x509b10*/
            case 'l': /*0x5099ff*/
              *(float *)&v61 = item->data; /*0x509ada*/
              v55 = Double_To_SInt32(result); /*0x509ae7*/
              v31 = (const char *)((int (__thiscall *)(TESGlobal *, int))item->vtbl->GetEditorName)(item, v55); /*0x509ae8*/
              goto LABEL_36; /*0x509ae8*/
            case 's': /*0x5099ff*/
              *(float *)&v61 = item->data; /*0x509a18*/
              v52 = (__int16)Double_To_SInt32(result); /*0x509a28*/
              v31 = (const char *)((int (__thiscall *)(TESGlobal *, int))item->vtbl->GetEditorName)(item, v52); /*0x509a33*/
LABEL_36:
              Interface_ConsolePrint("%s = %d", v31, v53); /*0x509a35*/
              break;
          }
        }
        p_listGlobals = p_listGlobals->next; /*0x509b18*/
      }
      while ( p_listGlobals ); /*0x5099f0*/
    }
  }
  return result; /*0x509b23*/
}
