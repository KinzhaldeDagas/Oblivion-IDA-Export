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
  TESPackage *CurrentPackage; // eax
  char v16; // [esp-8h] [ebp-1Ch]
  char v17; // [esp-4h] [ebp-18h]
  UInt16 v18[2]; // [esp+Ch] [ebp-8h] BYREF
  int v19; // [esp+10h] [ebp-4h] BYREF

  *(_DWORD *)v18 = 0; /*0x50ae41*/
  v19 = 0; /*0x50ae49*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v18, &v19); /*0x50ae51*/
  if ( result ) /*0x50ae5b*/
  {
    v9 = (Actor *)OblivionDynamicCast( /*0x50ae8a*/
                    a4,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                    &Character `RTTI Type Descriptor',
                    0);
    v10 = (Actor *)OblivionDynamicCast( /*0x50ae8c*/
                     *(void **)v18,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&Actor `RTTI Type Descriptor',
                     &Character `RTTI Type Descriptor',
                     0);
    v11 = v10; /*0x50ae96*/
    if ( v9 ) /*0x50ae98*/
    {
      if ( v10 ) /*0x50aea0*/
      {
        if ( (v9->members.super.super.super.flags & 0x800) == 0 /*0x50aed2*/
          && (v10->members.super.super.super.flags & 0x800) == 0
          && v9->vtbl->super.super.GetSleepState((TESObjectREFR *)v9) != kSitSleep_Sleeping )
        {
          if ( ((unsigned __int8 (__thiscall *)(Actor *, _DWORD, _DWORD, int))v9->vtbl->Unk_BD)( /*0x50aeee*/
                 v9,
                 *(_DWORD *)v18,
                 0,
                 v19) )
          {
            if ( v11 != (Actor *)reference && v9 != v11 ) /*0x50af02*/
            {
              process = v11->members.super.process; /*0x50af04*/
              if ( process->editorPackage ) /*0x50af07*/
              {
                if ( !TESPackage_IsRuntimePackage(process->editorPackage) ) /*0x50af10*/
                {
                  v13 = v11->members.super.process; /*0x50af1a*/
                  v17 = v13->GetUnk01C(v13); /*0x50af2b*/
                  v16 = v13->Unk_2F(v13); /*0x50af38*/
                  v14 = (BSExtraData *)v13->GetUnk02C(v13); /*0x50af41*/
                  sub_4268B0( /*0x50af4f*/
                    &v11->members.super.super.baseExtraList,
                    v13->editorPackage,
                    v13->editorPackProcedure,
                    v14,
                    v16,
                    v17);
                }
              }
              CurrentPackage = Actor::GetCurrentPackage(v9); /*0x50af5b*/
              Actor_AddPackage_(v11, CurrentPackage, 0, 1); /*0x50af63*/
              ((void (__thiscall *)(LowProcess *, _DWORD, int))v11->members.super.process->Unk_61)( /*0x50af7c*/
                v11->members.super.process,
                *(_DWORD *)v18,
                1);
            }
          }
        }
      }
    }
    return 1; /*0x50af7f*/
  }
  return result; /*0x50ae5d*/
}
