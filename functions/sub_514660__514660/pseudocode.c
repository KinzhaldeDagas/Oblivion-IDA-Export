bool __usercall sub_514660@<al>(
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
  int v17; // ebp
  int *v18; // eax
  int v19; // eax
  _DWORD *v20; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  _DWORD *v22; // edi
  int v23; // ecx
  _DWORD *v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // [esp+24h] [ebp-1Ch]
  UInt16 v29[2]; // [esp+38h] [ebp-8h] BYREF
  int v30; // [esp+3Ch] [ebp-4h]

  *(_DWORD *)v29 = 0;
  result = Script_ExtractArgs(a1, arg4, a3, a4, a5, a6, l, v29);
  if ( result )
  {
    if ( !a4 )
      return 1;
    v10 = (TESObjectREFR *)OblivionDynamicCast(
                             a4,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
    v11 = v10;
    if ( !v10
      || v10->vtbl->IsDead(v10, 0)
      || !*(_DWORD *)v29
      || (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)v29 + 0x198))(*(_DWORD *)v29, 0)
      || !v11[1].vtbl
      || !*(_DWORD *)(*(_DWORD *)v29 + 0x58) )
    {
      return 1;
    }
    v12 = sub_5E6B40(v11);
    v13 = TESDataHandler_g_PlayerRef;
    if ( v12 )
    {
      if ( *(PlayerCharacter **)v29 != v13 )
      {
        Name = TESObjectREFR_GetName(v11);
        PrintError(
          "  %s is in conversation so will not go into combat. Do not put startcombat in the dialogue results",
          Name);
        return 1;
      }
    }
    else if ( *(PlayerCharacter **)v29 != v13 )
    {
LABEL_15:
      v16 = 0;
      LOBYTE(v30) = 0;
      if ( !sub_5E6C60((Actor *)v11) )
      {
        v16 = 1;
        LOBYTE(v30) = 1;
      }
      v17 = iCombatHighPriorityModifier;
      if ( ((int (__thiscall *)(TESObjectREFR *, int))v11->vtbl[1].IsMobileObject)(v11, ebp0) )
      {
        v18 = *(int **)(((int (__thiscall *)(TESObjectREFR *))v11->vtbl[1].IsMobileObject)(v11) + 0x40);
        if ( v18 )
        {
          v19 = *v18;
          if ( v19 )
            v17 = *(_DWORD *)(v19 + 4) + 0x14;
        }
      }
      if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v11->vtbl[1].GetSleepState)(v11, 1)
        || ((int (__thiscall *)(TESObjectREFR *))v11->vtbl[1].IsMobileObject)(v11)
        && (v27 = *(_DWORD *)v29,
            v20 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))v11->vtbl[1].IsMobileObject)(v11),
            !sub_613670(v20, v27)) )
      {
        vtbl = v11[1].vtbl;
        if ( vtbl )
          (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, _DWORD, int, _DWORD, _DWORD, int, _DWORD, int, _DWORD, int))vtbl->super.super.InitializeComponent
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
            1);
      }
      if ( ((int (__thiscall *)(TESObjectREFR *))v11->vtbl[1].IsMobileObject)(v11) )
      {
        v22 = *(_DWORD **)(((int (__thiscall *)(TESObjectREFR *))v11->vtbl[1].IsMobileObject)(v11) + 0x40);
        if ( BSSimpleList_Count(v22) == 1 )
        {
          v23 = *v22;
          if ( *(_DWORD *)*v22 == *(_DWORD *)v29 && !*(_BYTE *)(v23 + 8) )
          {
            sub_60D020((_DWORD *)v23, v17);
            *(_BYTE *)(*v22 + 8) = 1;
          }
        }
        else if ( v22 )
        {
          while ( 1 )
          {
            v24 = (_DWORD *)*v22;
            if ( *v22 )
            {
              if ( *v24 == *(_DWORD *)v29 )
                break;
            }
            v22 = (_DWORD *)v22[1];
            if ( !v22 )
              goto LABEL_38;
          }
          if ( v24[1] != v17 )
          {
            sub_60D020(v24, v17);
            v25 = ((int (__thiscall *)(TESObjectREFR *))v11->vtbl[1].IsMobileObject)(v11);
            sub_5B27A0(*(EntryData **)(v25 + 0x40), (int (__cdecl *)(int, _DWORD))sub_614190);
          }
        }
      }
LABEL_38:
      if ( !v16 )
      {
        if ( *(PlayerCharacter **)v29 == TESDataHandler_g_PlayerRef )
          LOBYTE(TESDataHandler_g_PlayerRef->unk738) = 1;
        (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, _DWORD))v11[1].vtbl->super.super.InitializeComponent
         + 0x8B))(
          v11[1].vtbl,
          v11,
          *(_DWORD *)v29);
      }
      if ( ((int (__thiscall *)(TESObjectREFR *))v11->vtbl[1].IsMobileObject)(v11) )
      {
        sub_5E91E0(v11, 0x1D, 0x4C4D4843, 1);
        if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))v11[1].vtbl->super.super.InitializeComponent + 0x14))(v11[1].vtbl) )
          sub_5E91E0(v11, 0x1D, 0x49564E49, 1);
        if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))v11[1].vtbl->super.super.InitializeComponent + 0x14))(v11[1].vtbl) )
        {
          v26 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v11[1].vtbl->super.super.InitializeComponent + 0x14))(v11[1].vtbl);
          MagicCaster_CastMagicItem(&v11[1].member, v26, (int)&v11[1].member.super.modlist, 0);
        }
      }
      return 1;
    }
    if ( PlayerCharacter::IsSleeping_(v13) )
    {
      v15 = TESDataHandler_g_PlayerRef;
      v15->HoursToSleep = 0;
      v15->isSleeping = 1;
      sub_674E10(&ActorProcessManager_ptr, (TESForm *)v11);
    }
    goto LABEL_15;
  }
  return result;
}
