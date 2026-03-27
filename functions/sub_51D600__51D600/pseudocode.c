char __userpurge sub_51D600@<al>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5,
        void *a6,
        int a7,
        TESForm *a8,
        UInt32 a9)
{
  PlayerCharacter *v9; // edi
  TESObjectREFR *v10; // esi
  char *v11; // eax
  char *v12; // edx
  char v13; // cl
  int v15; // eax
  int v16; // eax
  int v17; // eax
  TESObjectREFR *v18; // ebx
  TESObjectREFRVtbl *vtbl; // ecx
  Actor *v20; // esi
  char v21; // al
  int v22; // eax
  int v23; // eax
  char v24; // al
  void (__thiscall **p_Unk_8B)(PlayerCharacter *, void *); // ebx
  void *v26; // eax
  float v27; // [esp+8h] [ebp-F4h]
  float v28; // [esp+8h] [ebp-F4h]
  int v29; // [esp+1Ch] [ebp-E0h]
  char string[200]; // [esp+30h] [ebp-CCh] BYREF

  v9 = (PlayerCharacter *)OblivionDynamicCast(
                            a6,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
  v10 = (TESObjectREFR *)OblivionDynamicCast(
                           a5,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                           &Actor `RTTI Type Descriptor',
                           0);
  if ( !v10 || !v9 )
    return 0;
  if ( ((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))v10->vtbl[1].GetSleepState)(
         v10,
         1,
         a4,
         a3,
         a2)
    && v9 == TESDataHandler_g_PlayerRef )
  {
    if ( ((int (__thiscall *)(TESObjectREFR *))v10->vtbl[1].IsMobileObject)(v10)
      && *(_DWORD *)(((int (__thiscall *)(TESObjectREFR *))v10->vtbl[1].IsMobileObject)(v10) + 0x70) == 0xB )
    {
      v11 = (char *)sActivateCreatureCalmed;
      v12 = &string[-sActivateCreatureCalmed];
      do
      {
        v13 = *v11;
        v11[(_DWORD)v12] = *v11;
        ++v11;
      }
      while ( v13 );
      GameUI_QueueMessage(string, 0, 1u, flt_A30634);
    }
    else if ( InputGlobals::QueryControlState(OSGlobals->input, 6, 0) )
    {
      GameUI_QueueMessage((const char *)sCreaturesDontYield, 0, 1u, flt_A30634);
    }
    return 0;
  }
  if ( v10->vtbl->IsDead(v10, 0) )
  {
    if ( v9 == TESDataHandler_g_PlayerRef )
    {
      sub_57A8D0((char)a8, (char)v9, a2, a3, a4, a5, 0, 1, 0);
      return 1;
    }
    if ( a8
      && !OblivionDynamicCast(
            a8,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
            &TESNPC `RTTI Type Descriptor',
            0) )
    {
      a5->vtbl->RemoveItem(a5, a8, 0, a9, 0, 0, (TESObjectREFR *)v9, 0, 0, 1, 0);
      return 1;
    }
    return 1;
  }
  if ( v9 != TESDataHandler_g_PlayerRef )
  {
    TesObjectREF_GetDistance((TESObjectREFR *)v9, v10, 0);
    v27 = a4;
    v28 = COERCE_FLOAT(((int (__thiscall *)(PlayerCharacter *, int, _DWORD))v9->vtbl->super.GetActorValue)(v9, 0x21, LODWORD(v27)));
    v15 = ((int (__thiscall *)(PlayerCharacter *))v9->vtbl->super.GetDisposition)(v9);
    shouldActorFight(v15, (int)v10, 0, v28, 0, 0, 0, 0x64);
    if ( v16 > 0 )
    {
      ((void (__thiscall *)(LowProcess *, PlayerCharacter *, TESObjectREFR *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))v9->super.super.super.process->Unk_89)(
        v9->super.super.super.process,
        v9,
        v10,
        1,
        0,
        0,
        1,
        0,
        0,
        0,
        1);
      return 1;
    }
  }
  if ( *(_BYTE *)(a1 + 0x104) != 4 )
  {
    if ( sub_5E0380((Actor *)v9) )
    {
      if ( sub_5E0380((Actor *)v9)->members.type != 1 )
        ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int))v9->super.super.super.process->Unk_61)(
          v9->super.super.super.process,
          v9,
          1);
    }
    return 1;
  }
  v17 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v10->vtbl[2].super.Unk_0E)(
          v10,
          a4,
          a3,
          a2);
  v18 = (TESObjectREFR *)v17;
  if ( v17 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v17 + 0x198))(v17, 0) )
    {
      sub_5F0410(v18, (int)a8);
    }
    else
    {
      vtbl = v18[1].vtbl;
      if ( vtbl )
      {
        if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x61))(vtbl) )
        {
          if ( *(_BYTE *)((*((int (__thiscall **)(TESObjectREFRVtbl *))v18[1].vtbl->super.super.InitializeComponent
                           + 0x61))(v18[1].vtbl)
                        + 0x20) == 0x16 )
            sub_5EAE70(v18, (int)v18, (int)v9, v29);
        }
      }
    }
    if ( v9 == TESDataHandler_g_PlayerRef
      && !v18->vtbl->IsDead(v18, 0)
      && v18 != (TESObjectREFR *)TESDataHandler_g_PlayerRef
      && (*((int (__thiscall **)(TESObjectREFRVtbl *))v18[1].vtbl->super.super.InitializeComponent + 0xDB))(v18[1].vtbl) == 4 )
    {
      ActivateRef(v18, a2, a3, a4, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0, 0, 1);
      return 1;
    }
  }
  if ( v9->vtbl->super.GetMountedHorse((Actor *)v9) )
  {
    v20 = (Actor *)v9->vtbl->super.GetMountedHorse((Actor *)v9);
    sub_5E9A60(v20, a4);
    if ( !v21 )
      sub_5F80D0(v20);
    v9->vtbl->super.SetPackageDismount((Actor *)v9);
    return 1;
  }
  if ( ((int (__thiscall *)(TESObjectREFR *))v10->vtbl[2].super.Unk_0E)(v10) )
  {
    if ( *(_DWORD *)(((int (__thiscall *)(TESObjectREFR *))v10->vtbl[2].super.Unk_0E)(v10) + 0x58) )
    {
      v22 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v10->vtbl[2].super.Unk_0E)(
              v10,
              a4,
              a3,
              a2);
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v22 + 0x58) + 0x36C))(*(_DWORD *)(v22 + 0x58)) )
        return 1;
    }
  }
  if ( ((unsigned __int8 (__thiscall *)(PlayerCharacter *))v9->vtbl->super.Unk_97)(v9)
    || v9->vtbl->super.super.super.HasFatigue((TESObjectREFR *)v9)
    || v9->vtbl->super.super.super.GetKnockedState((TESObjectREFR *)v9) )
  {
    return 1;
  }
  if ( ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v10->vtbl[2].super.Unk_0E)(
         v10,
         a4,
         a3,
         a2) )
  {
    if ( (PlayerCharacter *)((int (__thiscall *)(TESObjectREFR *))v10->vtbl[2].super.Unk_0E)(v10) != v9 )
    {
      v23 = ((int (__thiscall *)(TESObjectREFR *))v10->vtbl[2].super.Unk_0E)(v10);
      a4 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)v23 + 0x384))(v23, 0);
    }
  }
  sub_5E9A60(v10, a4);
  if ( v24 )
    sub_5F8000((Actor *)v10);
  else
    sub_5F80D0((Actor *)v10);
  p_Unk_8B = (void (__thiscall **)(PlayerCharacter *, void *))&v9->vtbl->super.Unk_8B;
  v26 = OblivionDynamicCast(
          v10,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Actor `RTTI Type Descriptor',
          &Creature `RTTI Type Descriptor',
          0);
  (*p_Unk_8B)(v9, v26);
  return 1;
}
