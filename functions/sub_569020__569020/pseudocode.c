// 3DTheft: central TESAIForm package chooser. It resolves procedureArrayIndex only when -1, so runtime packages assigned directly should resolve their procedure row before assignment.
TESPackage *__userpurge sub_569020@<eax>(int *a1@<ecx>, double a2@<st1>, double a3@<st0>, TESObjectREFR *a4)
{
  int v5; // edi
  char *v6; // esi
  char v7; // al
  int v8; // eax
  int v9; // eax
  char v10; // al
  char v11; // bl
  char v12; // al
  char v13; // bl
  int v14; // esi
  TargetData *v15; // ecx
  TESObjectREFR *form; // eax
  char *Name; // eax
  void *v19; // eax
  char *v20; // eax
  const char *v21; // [esp-4h] [ebp-154h]
  float v22; // [esp+0h] [ebp-150h]
  const char *v23; // [esp+0h] [ebp-150h]
  char v24; // [esp+15h] [ebp-13Bh]
  char v25; // [esp+16h] [ebp-13Ah]
  char v26; // [esp+17h] [ebp-139h]
  TESPackage *v27; // [esp+18h] [ebp-138h]
  int *v28; // [esp+1Ch] [ebp-134h]
  char Format[300]; // [esp+20h] [ebp-130h] BYREF

  v28 = a1; /*0x569043*/
  v27 = 0; /*0x569047*/
  if ( a4 ) /*0x56904f*/
    v27 = Actor::GetCurrentPackage((Actor *)a4); /*0x569058*/
  if ( a1[1] || *a1 ) /*0x569062*/
  {
    while ( 1 ) /*0x569074*/
    {
      v5 = *v28; /*0x569074*/
      if ( !*v28 ) /*0x569078*/
        return v27; /*0x569078*/
      if ( (!sub_5660E0((_DWORD *)*v28) && !sub_565DF0((_DWORD *)v5) /*0x5690c8*/
         || sub_565DF0((_DWORD *)v5) && !ExtraDataList_HasRunOncePackage(&a4->member.baseExtraList, v5))
        && ((*(_DWORD *)(v5 + 0x1C) & 4) == 0 || v27 != (TESPackage *)v5 || !sub_567280((int)a4)) )
      {
        v6 = (char *)(v5 + 0x2C); /*0x5690d5*/
        if ( v5 != 0xFFFFFFD4 ) /*0x5690da*/
        {
          v24 = 0; /*0x5690e7*/
          v25 = 0; /*0x5690ef*/
          v26 = 0; /*0x5690f4*/
          if ( *(_DWORD *)(v5 + 0x30) + *(char *)(v5 + 0x2F) > 0x18 ) /*0x5690f9*/
          {
            v24 = sub_567C00((char *)v5, 1); /*0x569109*/
            TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x56910d*/
            v8 = v7 - 1; /*0x569115*/
            if ( v8 < 0 ) /*0x569118*/
              v8 = 0x1E; /*0x56911a*/
            if ( *(char *)(v5 + 0x2E) == v8 ) /*0x569125*/
              v25 = 1; /*0x569127*/
            v9 = TimeGlobals_GetGameMonth(&MEMORY[0xB332E0]) - 1; /*0x569136*/
            if ( v9 < 0 ) /*0x569139*/
              v9 = 0xC; /*0x56913b*/
            if ( *v6 == v9 ) /*0x569145*/
              v26 = 1; /*0x569147*/
          }
          if ( *v6 == (char)0xFF || (v10 = *v6, v10 == TimeGlobals_GetGameMonth(&MEMORY[0xB332E0])) || v26 ) /*0x569168*/
          {
            v11 = *(_BYTE *)(v5 + 0x2E); /*0x56916a*/
            if ( !v11 || (TimeGlobals_GetGameDay(&MEMORY[0xB332E0]), v11 == v12) || v25 ) /*0x569184*/
            {
              if ( *(_BYTE *)(v5 + 0x2D) == 0xFF || sub_567C00((char *)v5, 0) || v24 ) /*0x56919d*/
              {
                v13 = *(_BYTE *)(v5 + 0x2F); /*0x56919f*/
                if ( v13 == (char)0xFF /*0x5691bd*/
                  || (v14 = *(_DWORD *)(v5 + 0x30),
                      TimeGlobals_GetGameHour(&MEMORY[0xB332E0]),
                      v22 = a3,
                      sub_568EB0(v13, v14, v22)) )
                {
                  v15 = *(TargetData **)(v5 + 0x28); /*0x5691c9*/
                  form = 0; /*0x5691cc*/
                  if ( v15 ) /*0x5691d0*/
                    form = sub_569E60(v15).form; /*0x5691d2*/
                  if ( ConditionList_EvaluateForActor((unsigned __int8 **)(v5 + 0x34), (Actor *)a4, form) ) /*0x5691dc*/
                    break; /*0x5691dc*/
                }
              }
            }
          }
        }
      }
      v28 = (int *)v28[1]; /*0x5691ee*/
      if ( !v28 ) /*0x5691f2*/
        return v27; /*0x5691f2*/
    }
    if ( sub_579440() == a4 ) /*0x56921e*/
    {
      v23 = (const char *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)v5 + 0xD4))( /*0x569237*/
                            v5,
                            a3,
                            a2);
      v21 = *(const char **)(4 * *(char *)(v5 + 0x20) + 0xB12988); /*0x569238*/
      Name = TESObjectREFR_GetName(a4); /*0x56923b*/
      _sprintf(Format, "%s Picked Package %s (%s)", Name, v21, v23); /*0x56924b*/
      Interface_ConsolePrint(Format); /*0x569255*/
    }
    if ( *(_DWORD *)(v5 + 0x18) == 0xFFFFFFFF ) /*0x569261*/
      sub_5672A0((TESPackage *)v5); /*0x569265*/
    if ( v27 ) /*0x569270*/
    {
      if ( v27 == (TESPackage *)v5 ) /*0x569274*/
        return (TESPackage *)v5; /*0x5692d5*/
      if ( v27->members.type == 1 ) /*0x56927a*/
      {
        v19 = (void *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a4[1].vtbl->super.super.InitializeComponent + 0x33))(a4[1].vtbl); /*0x569295*/
        v20 = (char *)OblivionDynamicCast( /*0x569298*/
                        v19,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                        &Actor `RTTI Type Descriptor',
                        0);
        if ( v20 ) /*0x5692a2*/
          sub_424D00((ExtraDataList *)(v20 + 0x44), (int)a4); /*0x5692a8*/
      }
      Script_AddEventToExtraScript(v27, &a4->member.baseExtraList, 0x800); /*0x5692b7*/
    }
    if ( (TESPackage *)v5 != v27 ) /*0x5692c1*/
      Script_AddEventToExtraScript(v5, &a4->member.baseExtraList, 0x200); /*0x5692cd*/
    return (TESPackage *)v5; /*0x5692cd*/
  }
  return v27; /*0x5691fc*/
}
