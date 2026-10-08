// [Controller decode 2026-07-09] Non-player QueryControlState consumer: Block control 6 held for alternate activation/yield message.
char __userpurge Activation_CheckBlockControl@<al>(
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
  const char *value; // eax
  int v12; // edx
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

  v9 = (PlayerCharacter *)OblivionDynamicCast( /*0x51d654*/
                            a6,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
  v10 = (TESObjectREFR *)OblivionDynamicCast( /*0x51d65b*/
                           a5,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                           &Actor `RTTI Type Descriptor',
                           0);
  if ( !v10 || !v9 ) /*0x51d666*/
    return 0; /*0x51d666*/
  if ( ((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))v10->vtbl[1].GetSleepState)( /*0x51d684*/
         v10,
         1,
         a4,
         a3,
         a2)
    && v9 == reference )
  {
    if ( ((int (__thiscall *)(TESObjectREFR *))v10->vtbl[1].IsMobileObject)(v10) /*0x51d6aa*/
      && *(_DWORD *)(((int (__thiscall *)(TESObjectREFR *))v10->vtbl[1].IsMobileObject)(v10) + 0x70) == 0xB )
    {
      value = MEMORY[0xB37300].value; /*0x51d6ac*/
      v12 = string - MEMORY[0xB37300].value; /*0x51d6b5*/
      do /*0x51d6c1*/
      {
        v13 = *value; /*0x51d6b7*/
        value[v12] = *value; /*0x51d6b9*/
        ++value; /*0x51d6bc*/
      }
      while ( v13 ); /*0x51d6c1*/
      GameUI_QueueMessage(string, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x51d6d6*/
    }
    else if ( InputGlobals::QueryControlState(MEMORY[0xB33398]->input, 6, 0) ) /*0x51d708*/
    {
      GameUI_QueueMessage(MEMORY[0xB38DC8].value, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x51d726*/
    }
    return 0; /*0x51d6f8*/
  }
  if ( v10->vtbl->IsDead(v10, 0) ) /*0x51d734*/
  {
    if ( v9 == reference ) /*0x51d740*/
    {
      sub_57A8D0((char)v9, a2, a3, a4, a5, 0, 1, 0); /*0x51d749*/
      return 1; /*0x51d753*/
    }
    if ( a8 /*0x51d76c*/
      && !OblivionDynamicCast(
            a8,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
            &TESNPC `RTTI Type Descriptor',
            0) )
    {
      a5->vtbl->RemoveItem(a5, a8, 0, a9, 0, 0, (TESObjectREFR *)v9, 0, 0, 1, 0); /*0x51d79e*/
      return 1; /*0x51d7a2*/
    }
    return 1; /*0x51d776*/
  }
  if ( v9 != reference ) /*0x51d7ad*/
  {
    TesObjectREF_GetDistance((TESObjectREFR *)v9, v10, 0); /*0x51d7bc*/
    v27 = a4; /*0x51d7ca*/
    v28 = COERCE_FLOAT(((int (__thiscall *)(PlayerCharacter *, int, _DWORD))v9->vtbl->super.GetActorValue)(v9, 0x21, LODWORD(v27))); /*0x51d7d3*/
    v15 = ((int (__thiscall *)(PlayerCharacter *))v9->vtbl->super.GetDisposition)(v9); /*0x51d7e1*/
    shouldActorFight(v15, (int)v10, 0, v28, 0, 0, 0, 0x64); /*0x51d7e4*/
    if ( v16 > 0 ) /*0x51d7ee*/
    {
      ((void (__thiscall *)(LowProcess *, PlayerCharacter *, TESObjectREFR *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))v9->super.super.super.process->Unk_89)( /*0x51d80d*/
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
      return 1; /*0x51d811*/
    }
  }
  if ( *(_BYTE *)(a1 + 0x104) != 4 ) /*0x51d821*/
  {
    if ( Actor::GetCurrentPackage((Actor *)v9) ) /*0x51da1a*/
    {
      if ( Actor::GetCurrentPackage((Actor *)v9)->members.type != kPackageType_Follow ) /*0x51da2e*/
        ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int))v9->super.super.super.process->Unk_61)( /*0x51da3e*/
          v9->super.super.super.process,
          v9,
          1);
    }
    return 1; /*0x51da3e*/
  }
  v17 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v10->vtbl[2].super.Unk_0E)( /*0x51d831*/
          v10,
          a4,
          a3,
          a2);
  v18 = (TESObjectREFR *)v17; /*0x51d833*/
  if ( v17 ) /*0x51d837*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v17 + 0x198))(v17, 0) ) /*0x51d849*/
    {
      sub_5F0410(v18, (int)a8); /*0x51d851*/
    }
    else
    {
      vtbl = v18[1].vtbl; /*0x51d858*/
      if ( vtbl ) /*0x51d85d*/
      {
        if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x61))(vtbl) ) /*0x51d867*/
        {
          if ( *(_BYTE *)((*((int (__thiscall **)(TESObjectREFRVtbl *))v18[1].vtbl->super.super.InitializeComponent /*0x51d87e*/
                           + 0x61))(v18[1].vtbl)
                        + 0x20) == 0x16 )
            sub_5EAE70((Actor *)v18, (int)v18, (int)v9, v29); /*0x51d882*/
        }
      }
    }
    if ( v9 == reference /*0x51d8b9*/
      && !v18->vtbl->IsDead(v18, 0)
      && v18 != (TESObjectREFR *)reference
      && (*((int (__thiscall **)(TESObjectREFRVtbl *))v18[1].vtbl->super.super.InitializeComponent + 0xDB))(v18[1].vtbl) == 4 )
    {
      ActivateRef(v18, a2, a3, a4, (TESObjectREFR *)reference, 0, 0, 1); /*0x51d8ca*/
      return 1; /*0x51d8d1*/
    }
  }
  if ( v9->vtbl->super.GetMountedHorse((Actor *)v9) ) /*0x51d8e0*/
  {
    v20 = (Actor *)v9->vtbl->super.GetMountedHorse((Actor *)v9); /*0x51d8f2*/
    sub_5E9A60(v20, a4); /*0x51d8f6*/
    if ( !v21 ) /*0x51d8fd*/
      sub_5F80D0(v20); /*0x51d901*/
    v9->vtbl->super.SetPackageDismount((Actor *)v9); /*0x51d910*/
    return 1; /*0x51d914*/
  }
  if ( ((int (__thiscall *)(TESObjectREFR *))v10->vtbl[2].super.Unk_0E)(v10) ) /*0x51d923*/
  {
    if ( *(_DWORD *)(((int (__thiscall *)(TESObjectREFR *))v10->vtbl[2].super.Unk_0E)(v10) + 0x58) ) /*0x51d935*/
    {
      v22 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v10->vtbl[2].super.Unk_0E)( /*0x51d945*/
              v10,
              a4,
              a3,
              a2);
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v22 + 0x58) + 0x36C))(*(_DWORD *)(v22 + 0x58)) ) /*0x51d952*/
        return 1; /*0x51d952*/
    }
  }
  if ( ((unsigned __int8 (__thiscall *)(PlayerCharacter *))v9->vtbl->super.Unk_97)(v9) /*0x51d98e*/
    || v9->vtbl->super.super.super.HasFatigue((TESObjectREFR *)v9)
    || v9->vtbl->super.super.super.GetKnockedState((TESObjectREFR *)v9) )
  {
    return 1; /*0x51da40*/
  }
  if ( ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v10->vtbl[2].super.Unk_0E)( /*0x51d9a2*/
         v10,
         a4,
         a3,
         a2) )
  {
    if ( (PlayerCharacter *)((int (__thiscall *)(TESObjectREFR *))v10->vtbl[2].super.Unk_0E)(v10) != v9 ) /*0x51d9b6*/
    {
      v23 = ((int (__thiscall *)(TESObjectREFR *))v10->vtbl[2].super.Unk_0E)(v10); /*0x51d9c2*/
      a4 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)v23 + 0x384))(v23, 0); /*0x51d9d0*/
    }
  }
  sub_5E9A60(v10, a4); /*0x51d9d4*/
  if ( v24 ) /*0x51d9dd*/
    sub_5F8000((Actor *)v10); /*0x51d9e6*/
  else
    sub_5F80D0((Actor *)v10); /*0x51d9df*/
  p_Unk_8B = (void (__thiscall **)(PlayerCharacter *, void *))&v9->vtbl->super.Unk_8B; /*0x51d9fc*/
  v26 = OblivionDynamicCast( /*0x51da02*/
          v10,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Actor `RTTI Type Descriptor',
          &Creature `RTTI Type Descriptor',
          0);
  (*p_Unk_8B)(v9, v26); /*0x51da0f*/
  return 1; /*0x51d6e0*/
}
