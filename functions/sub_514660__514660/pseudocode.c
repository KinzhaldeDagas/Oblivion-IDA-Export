// Signature anchor for StartCombat command entry: 83 EC 08 8B 4C 24 20 8B 54 24 1C 56 8B 74 24 18.
bool __usercall Cmd_StartCombat_Execute@<al>(
        int ebp0@<ebp>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a5,
        Script *a6,
        ScriptEventList *l,
        int a8,
        UInt32 *a3)
{
  bool result; // al
  TESObjectREFR *v10; // eax
  TESObjectREFR *v11; // esi
  bool v12; // al
  PlayerCharacter *v13; // ecx
  char *Name; // eax
  PlayerCharacter *v15; // eax
  char v16; // bl
  const char *value; // ebp
  int *v18; // eax
  int v19; // eax
  _DWORD *v20; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  _DWORD *v22; // edi
  _BYTE *v23; // ecx
  _DWORD *v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // [esp+24h] [ebp-1Ch]
  UInt16 v29[2]; // [esp+38h] [ebp-8h] BYREF
  int v30; // [esp+3Ch] [ebp-4h]

  *(_DWORD *)v29 = 0; /*0x51468f*/
  result = Script_ExtractArgs(a1, arg4, a3, a4, a5, a6, l, v29); /*0x514693*/
  if ( result ) /*0x51469d*/
  {
    if ( !a4 ) /*0x5146a7*/
      return 1; /*0x5146a7*/
    v10 = (TESObjectREFR *)OblivionDynamicCast( /*0x5146ba*/
                             a4,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
    v11 = v10; /*0x5146bf*/
    if ( !v10 /*0x51470d*/
      || v10->vtbl->IsDead(v10, 0)
      || !*(_DWORD *)v29
      || (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)v29 + 0x198))(*(_DWORD *)v29, 0)
      || !v11[1].vtbl
      || !*(_DWORD *)(*(_DWORD *)v29 + 0x58) )
    {
      return 1; /*0x514948*/
    }
    v12 = Actor_IsInDialogueProcedure(v11); /*0x514718*/
    v13 = reference; /*0x51471f*/
    if ( v12 ) /*0x514725*/
    {
      if ( *(PlayerCharacter **)v29 != v13 ) /*0x51472b*/
      {
        Name = TESObjectREFR_GetName(v11); /*0x51472f*/
        PrintError( /*0x51473a*/
          "  %s is in conversation so will not go into combat. Do not put startcombat in the dialogue results",
          Name);
        return 1; /*0x514749*/
      }
    }
    else if ( *(PlayerCharacter **)v29 != v13 ) /*0x51474e*/
    {
LABEL_15:
      v16 = 0; /*0x514776*/
      LOBYTE(v30) = 0; /*0x51477c*/
      if ( !Actor_IsGuardClass((Actor *)v11) )  // 3DTheft decode 2026-05-14: StartCombat command computes nonGuardFlag from Actor_IsGuardClass. Plugin passes nonGuardFlag=1 for spawned thief encounter actors. /*0x514780*/
      {
        v16 = 1; /*0x514789*/
        LOBYTE(v30) = 1; /*0x51478b*/
      }
      value = MEMORY[0xB37210].value; /*0x514797*/
      if ( ((int (__thiscall *)(TESObjectREFR *, int))v11->vtbl[1].IsMobileObject)(v11, ebp0) ) /*0x51479f*/
      {
        v18 = *(int **)(((int (__thiscall *)(TESObjectREFR *))v11->vtbl[1].IsMobileObject)(v11) + 0x40); /*0x5147b1*/
        if ( v18 ) /*0x5147b6*/
        {
          v19 = *v18; /*0x5147b8*/
          if ( v19 ) /*0x5147bc*/
            value = (const char *)(*(_DWORD *)(v19 + 4) + 0x14); /*0x5147c1*/
        }
      }
      if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v11->vtbl[1].GetSleepState)(v11, 1) /*0x5147f9*/
        || ((int (__thiscall *)(TESObjectREFR *))v11->vtbl[1].IsMobileObject)(v11)
        && (v27 = *(_DWORD *)v29,
            v20 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))v11->vtbl[1].IsMobileObject)(v11),
            !sub_613670(v20, v27)) )
      {
        vtbl = v11[1].vtbl; /*0x514802*/
        if ( vtbl ) /*0x514807*/
          (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, _DWORD, int, _DWORD, _DWORD, int, _DWORD, int, _DWORD, int))vtbl->super.super.InitializeComponent /*0x514826*/
           + 0x8A))(
            vtbl,
            v11,
            *(_DWORD *)v29,
            1,
            0,
            0,
            v30,
            0,
            1,
            0,
            1);                                 // 3DTheft decode 2026-05-14: StartCombat command calls actor process vfunc +0x228 with actor,target,1,0,0,nonGuardFlag,0,1,0,1. Plugin uses this ABI for catch-up combat.
      }
      if ( ((int (__thiscall *)(TESObjectREFR *))v11->vtbl[1].IsMobileObject)(v11) ) /*0x514832*/
      {
        v22 = *(_DWORD **)(((int (__thiscall *)(TESObjectREFR *))v11->vtbl[1].IsMobileObject)(v11) + 0x40); /*0x514844*/
        if ( BSSimpleList_Count(v22) == 1 ) /*0x514851*/
        {
          v23 = (_BYTE *)*v22; /*0x514853*/
          if ( *(_DWORD *)*v22 == *(_DWORD *)v29 && !v23[8] ) /*0x51485d*/
          {
            Shared_SetDwordAtOffset04(v23, (int)value); /*0x514864*/
            *(_BYTE *)(*v22 + 8) = 1; /*0x51486b*/
          }
        }
        else if ( v22 ) /*0x514873*/
        {
          while ( 1 ) /*0x514880*/
          {
            v24 = (_DWORD *)*v22; /*0x514880*/
            if ( *v22 ) /*0x514880*/
            {
              if ( *v24 == *(_DWORD *)v29 ) /*0x514888*/
                break; /*0x514888*/
            }
            v22 = (_DWORD *)v22[1]; /*0x51488a*/
            if ( !v22 ) /*0x51488f*/
              goto LABEL_38; /*0x51488f*/
          }
          if ( (const char *)v24[1] != value ) /*0x514896*/
          {
            Shared_SetDwordAtOffset04(v24, (int)value); /*0x514899*/
            v25 = ((int (__thiscall *)(TESObjectREFR *))v11->vtbl[1].IsMobileObject)(v11); /*0x5148a8*/
            BSSimpleList_SortViaArrayAndRebuild( /*0x5148b2*/
              *(EntryData **)(v25 + 0x40),
              (int (__cdecl *)(tListVoid *, tListVoid *))CombatTargetInfo_ComparePriorityDescending);
          }
        }
      }
LABEL_38:
      if ( !v16 ) /*0x5148bb*/
      {
        if ( *(PlayerCharacter **)v29 == reference ) /*0x5148c6*/
          LOBYTE(reference->unk738) = 1; /*0x5148c8*/
        (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, _DWORD))v11[1].vtbl->super.super.InitializeComponent /*0x5148e0*/
         + 0x8B))(
          v11[1].vtbl,
          v11,
          *(_DWORD *)v29);                      // Guard-only followup after StartCombat package creation: process vfunc +0x22C called with actor,target. Non-guard encounter actors do not need this path.
      }
      if ( ((int (__thiscall *)(TESObjectREFR *))v11->vtbl[1].IsMobileObject)(v11) ) /*0x5148ec*/
      {
        sub_5E91E0((Actor *)v11, 0x1D, 0x4C4D4843, 1); /*0x5148fd*/
        if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))v11[1].vtbl->super.super.InitializeComponent + 0x14))(v11[1].vtbl) ) /*0x51490a*/
          sub_5E91E0((Actor *)v11, 0x1D, 0x49564E49, 1); /*0x51491b*/
        if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))v11[1].vtbl->super.super.InitializeComponent + 0x14))(v11[1].vtbl) ) /*0x514928*/
        {
          v26 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v11[1].vtbl->super.super.InitializeComponent + 0x14))(v11[1].vtbl); /*0x51493c*/
          MagicCaster_CastMagicItem(&v11[1].member, v26, (int)&v11[1].member.super.modlist, 0); /*0x514942*/
        }
      }
      return 1; /*0x514942*/
    }
    if ( PlayerCharacter::IsSleeping_(v13) ) /*0x514750*/
    {
      v15 = reference; /*0x514759*/
      v15->HoursToSleep = 0; /*0x514764*/
      v15->isSleeping = 1; /*0x51476a*/
      sub_674E10((int *)&qword_B3BB2C[0x75], (TESForm *)v11); /*0x514771*/
    }
    goto LABEL_15; /*0x514771*/
  }
  return result; /*0x51469f*/
}
