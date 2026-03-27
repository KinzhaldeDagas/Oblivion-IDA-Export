TESPackage *__userpurge sub_569020@<eax>(int *a1@<ecx>, double a2@<st1>, double a3@<st0>, TESObjectREFR *a4)
{
  int v6; // edi
  char *v7; // esi
  char v8; // al
  int v9; // eax
  int v10; // eax
  char v11; // al
  char v12; // bl
  char v13; // al
  char v14; // bl
  int v15; // esi
  TargetData *v16; // ecx
  _BYTE *form; // eax
  char *Name; // eax
  void *v20; // eax
  char *v21; // eax
  const char *v22; // [esp-4h] [ebp-154h]
  float v23; // [esp+0h] [ebp-150h]
  const char *v24; // [esp+0h] [ebp-150h]
  char v25; // [esp+15h] [ebp-13Bh]
  char v26; // [esp+16h] [ebp-13Ah]
  char v27; // [esp+17h] [ebp-139h]
  TESPackage *v28; // [esp+18h] [ebp-138h]
  int *v29; // [esp+1Ch] [ebp-134h]
  char Format[300]; // [esp+20h] [ebp-130h] BYREF

  v29 = a1;
  v28 = 0;
  if ( a4 )
    v28 = sub_5E0380((Actor *)a4);
  if ( a1[1] || *a1 )
  {
    while ( 1 )
    {
      v6 = *v29;
      if ( !*v29 )
        return v28;
      if ( (!sub_5660E0((_DWORD *)*v29) && !sub_565DF0((_DWORD *)v6)
         || sub_565DF0((_DWORD *)v6) && !sub_4200C0(&a4->member.baseExtraList, v6))
        && ((*(_DWORD *)(v6 + 0x1C) & 4) == 0 || v28 != (TESPackage *)v6 || !sub_567280((int)a4)) )
      {
        v7 = (char *)(v6 + 0x2C);
        if ( v6 != 0xFFFFFFD4 )
        {
          v25 = 0;
          v26 = 0;
          v27 = 0;
          if ( *(_DWORD *)(v6 + 0x30) + *(char *)(v6 + 0x2F) > 0x18 )
          {
            v25 = sub_567C00((char *)v6, 1);
            TimeGlobals_GetGameDay(&TimeGlobals);
            v9 = v8 - 1;
            if ( v9 < 0 )
              v9 = 0x1E;
            if ( *(char *)(v6 + 0x2E) == v9 )
              v26 = 1;
            v10 = TimeGlobals_GetGameMonth(&TimeGlobals) - 1;
            if ( v10 < 0 )
              v10 = 0xC;
            if ( *v7 == v10 )
              v27 = 1;
          }
          if ( *v7 == (char)0xFF || (v11 = *v7, v11 == TimeGlobals_GetGameMonth(&TimeGlobals)) || v27 )
          {
            v12 = *(_BYTE *)(v6 + 0x2E);
            if ( !v12 || (TimeGlobals_GetGameDay(&TimeGlobals), v12 == v13) || v26 )
            {
              if ( *(_BYTE *)(v6 + 0x2D) == 0xFF || sub_567C00((char *)v6, 0) || v25 )
              {
                v14 = *(_BYTE *)(v6 + 0x2F);
                if ( v14 == (char)0xFF
                  || (v15 = *(_DWORD *)(v6 + 0x30),
                      TimeGlobals_GetGameHour(&TimeGlobals),
                      v23 = a3,
                      sub_568EB0(v14, v15, v23)) )
                {
                  v16 = *(TargetData **)(v6 + 0x28);
                  form = 0;
                  if ( v16 )
                    form = sub_569E60(v16).form;
                  if ( sub_56A950((unsigned __int8 **)(v6 + 0x34), (int)a4, form) )
                    break;
                }
              }
            }
          }
        }
      }
      v29 = (int *)v29[1];
      if ( !v29 )
        return v28;
    }
    if ( sub_579440() == a4 )
    {
      v24 = (const char *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)v6 + 0xD4))(
                            v6,
                            a3,
                            a2);
      v22 = *(const char **)(4 * *(char *)(v6 + 0x20) + 0xB12988);
      Name = TESObjectREFR_GetName(a4);
      _sprintf(Format, "%s Picked Package %s (%s)", Name, v22, v24);
      Interface_ConsolePrint(Format);
    }
    if ( *(_DWORD *)(v6 + 0x18) == 0xFFFFFFFF )
      sub_5672A0((TESPackage *)v6);
    if ( v28 )
    {
      if ( v28 == (TESPackage *)v6 )
        return (TESPackage *)v6;
      if ( v28->members.type == 1 )
      {
        v20 = (void *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a4[1].vtbl->super.super.InitializeComponent + 0x33))(a4[1].vtbl);
        v21 = (char *)OblivionDynamicCast(
                        v20,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                        &Actor `RTTI Type Descriptor',
                        0);
        if ( v21 )
          sub_424D00((ExtraDataList *)(v21 + 0x44), (int)a4);
      }
      Script_AddEventToExtraScript(v28, &a4->member.baseExtraList, 0x800);
    }
    if ( (TESPackage *)v6 != v28 )
      Script_AddEventToExtraScript(v6, &a4->member.baseExtraList, 0x200);
    return (TESPackage *)v6;
  }
  return v28;
}
