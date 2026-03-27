bool __cdecl sub_50AE10(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  Actor *v9; // edi
  Actor *v10; // eax
  Actor *v11; // esi
  LowProcess *process; // eax
  LowProcess *v13; // ebx
  BSExtraData *v14; // eax
  TESPackage *v15; // eax
  char v16; // [esp-8h] [ebp-1Ch]
  char v17; // [esp-4h] [ebp-18h]
  UInt16 v18[2]; // [esp+Ch] [ebp-8h] BYREF
  int v19; // [esp+10h] [ebp-4h] BYREF

  *(_DWORD *)v18 = 0;
  v19 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v18, &v19);
  if ( result )
  {
    v9 = (Actor *)OblivionDynamicCast(
                    a4,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                    &Character `RTTI Type Descriptor',
                    0);
    v10 = (Actor *)OblivionDynamicCast(
                     *(void **)v18,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Actor `RTTI Type Descriptor',
                     &Character `RTTI Type Descriptor',
                     0);
    v11 = v10;
    if ( v9 )
    {
      if ( v10 )
      {
        if ( (v9->members.super.super.super.flags & 0x800) == 0
          && (v10->members.super.super.super.flags & 0x800) == 0
          && v9->vtbl->super.super.GetSleepState((TESObjectREFR *)v9) != kSitSleep_Sleeping )
        {
          if ( ((unsigned __int8 (__thiscall *)(Actor *, _DWORD, _DWORD, int))v9->vtbl->Unk_BD)(
                 v9,
                 *(_DWORD *)v18,
                 0,
                 v19) )
          {
            if ( v11 != (Actor *)TESDataHandler_g_PlayerRef && v9 != v11 )
            {
              process = v11->members.super.process;
              if ( process->editorPackage )
              {
                if ( !sub_5660A0(process->editorPackage) )
                {
                  v13 = v11->members.super.process;
                  v17 = v13->GetUnk01C(v13);
                  v16 = v13->Unk_2F(v13);
                  v14 = (BSExtraData *)v13->GetUnk02C(v13);
                  sub_4268B0(
                    &v11->members.super.super.baseExtraList,
                    v13->editorPackage,
                    v13->editorPackProcedure,
                    v14,
                    v16,
                    v17);
                }
              }
              v15 = sub_5E0380(v9);
              Actor_AddPackage_(v11, v15, 0, 1);
              ((void (__thiscall *)(LowProcess *, _DWORD, int))v11->members.super.process->Unk_61)(
                v11->members.super.process,
                *(_DWORD *)v18,
                1);
            }
          }
        }
      }
    }
    return 1;
  }
  return result;
}
