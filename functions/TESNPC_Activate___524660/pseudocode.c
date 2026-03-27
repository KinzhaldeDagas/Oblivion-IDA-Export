char __userpurge TESNPC::Activate_____@<al>(
        TESNPC *a1@<ecx>,
        int a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        double st4_0@<st3>,
        double st3_0@<st4>,
        double a8@<st5>,
        double st1_0@<st6>,
        double a10@<st7>,
        TESObjectREFR *a11,
        void *a12,
        int a13,
        TESForm *a14,
        UInt32 a15)
{
  PlayerCharacter *v15; // edi
  Actor *v16; // eax
  Actor *v17; // esi
  _DWORD *v19; // ebp
  PlayerCharacter *v20; // eax
  int v21; // esi
  CombatController *v22; // eax
  int v23; // edx
  PlayerCharacter *v24; // ecx
  LowProcess *process; // ecx
  PlayerCharacterVtbl *vtbl; // ebx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  PlayerCharacter *v30; // ecx
  bool v31; // zf
  int v32; // eax
  bool (__thiscall *IsInCombat)(Actor *, bool); // edx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  char *v38; // eax
  float *v39; // eax
  double v40; // st7
  TESPackage *v41; // ecx
  BSExtraData *v42; // eax
  TESPackage *v43; // eax
  char *v44; // eax
  LowProcess *v45; // ecx
  float *v46; // eax
  int v47; // ebx
  TESPackage *v48; // eax
  _DWORD *v49; // eax
  char *m_data; // eax
  CombatController *v51; // eax
  char *v52; // eax
  const char *v53; // ecx
  char *v54; // eax
  char *v55; // eax
  char *v56; // ecx
  char *Name; // eax
  float v58; // [esp+4Ch] [ebp-238h]
  float v59; // [esp+4Ch] [ebp-238h]
  float v60; // [esp+4Ch] [ebp-238h]
  float v61; // [esp+4Ch] [ebp-238h]
  char duration; // [esp+5Ch] [ebp-228h]
  const char *durationa; // [esp+5Ch] [ebp-228h]
  float *durationb; // [esp+5Ch] [ebp-228h]
  const char *durationc; // [esp+5Ch] [ebp-228h]
  float *v67; // [esp+60h] [ebp-224h]
  int v68; // [esp+60h] [ebp-224h]
  char v69; // [esp+60h] [ebp-224h]
  int v70; // [esp+60h] [ebp-224h]
  float v72; // [esp+70h] [ebp-214h]
  float v73; // [esp+70h] [ebp-214h]
  float v74; // [esp+74h] [ebp-210h]
  _DWORD *v75; // [esp+78h] [ebp-20Ch]
  int v76; // [esp+7Ch] [ebp-208h]
  float v77; // [esp+80h] [ebp-204h] BYREF
  float v78[2]; // [esp+84h] [ebp-200h] BYREF
  char string[200]; // [esp+8Ch] [ebp-1F8h] BYREF
  char v80[300]; // [esp+154h] [ebp-130h] BYREF

  v15 = (PlayerCharacter *)OblivionDynamicCast(
                             a12,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  v16 = (Actor *)OblivionDynamicCast(
                   a11,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
  v17 = v16;
  if ( !v16 )
    return 0;
  v19 = &v16->members.super.process->__vftable;
  if ( !v19
    || (*(int (__thiscall **)(LowProcess *))(*v19 + 0x3D0))(v16->members.super.process)
    && !v17->vtbl->super.super.IsDead((TESObjectREFR *)v17, 0)
    || (*(int (__thiscall **)(_DWORD *))(*v19 + 0x47C))(v19) )
  {
    return 0;
  }
  v75 = (_DWORD *)((int (__usercall *)@<eax>(LowProcess *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>))v15->super.super.super.process->GetCurrentPackage)(
                    v15->super.super.super.process,
                    a5,
                    a4,
                    a3,
                    st4_0,
                    st3_0,
                    a8,
                    st1_0);
  v76 = (*(int (__thiscall **)(_DWORD *))(*v19 + 0x184))(v19);
  v20 = TESDataHandler_g_PlayerRef;
  if ( v17 == (Actor *)TESDataHandler_g_PlayerRef
    && (v20->isMovingToNewSpace
     || v20->super.super.super.process->GetCurrentPackage(v20->super.super.super.process)
     && TESDataHandler_g_PlayerRef->super.super.super.process->GetCurrentPackage(TESDataHandler_g_PlayerRef->super.super.super.process)->members.type == 0x16) )
  {
    if ( sub_5E6C60(v17) )
    {
      if ( sub_5E6BA0(v17) )
      {
        v21 = *v19;
        TimeGlobals_GetGameHour(&TimeGlobals);
        v72 = a5 - dbl_A2F928;
        (*(void (__thiscall **)(_DWORD *, _DWORD))(v21 + 0x1C))(v19, LODWORD(v72));
      }
    }
    return 0;
  }
  if ( !v17->vtbl->super.super.IsDead((TESObjectREFR *)v17, 0)
    || Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v17) == (struct Concurrency::details::ScheduleGroupBase *)6 )
  {
    if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v17) == (struct Concurrency::details::ScheduleGroupBase *)3
      || Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v17) == (struct Concurrency::details::ScheduleGroupBase *)6 )
    {
      v23 = dword_B38B18;
      goto LABEL_163;
    }
    if ( sub_5E6CD0((TESObjectREFR *)v17, 0) )
    {
      v22 = v17->vtbl->GetCombatController(v17);
      if ( !v22 || !sub_613670(v22, (int)TESDataHandler_g_PlayerRef) || Actor_IsBlocking(TESDataHandler_g_PlayerRef) )
      {
        v23 = dword_B38B20;
LABEL_163:
        durationc = (const char *)v23;
        Name = TESObjectREFR_GetName((TESObjectREFR *)v17);
        _sprintf(v80, "%s %s", Name, durationc);
        v56 = v80;
LABEL_164:
        GameUI_QueueMessage(v56, 0, 1u, flt_A30634);
        return 0;
      }
    }
  }
  v24 = TESDataHandler_g_PlayerRef;
  if ( v17 == (Actor *)TESDataHandler_g_PlayerRef )
  {
    sub_65D660();
    v24 = TESDataHandler_g_PlayerRef;
  }
  if ( v15 != v24 )
  {
    process = v15->super.super.super.process;
    if ( process )
      process->SetUnk01C(process, 1);
  }
  if ( !((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>))v17->vtbl->super.super.IsDead)(
          v17,
          0,
          a5,
          a4,
          a3,
          st4_0,
          st3_0,
          a8,
          st1_0)
    && sub_5E0F30(v17)
    && v15 == TESDataHandler_g_PlayerRef
    && sub_5E04C0(v15)
    && dword_B362CC != 1
    && !sub_5E04C0(v17) )
  {
    if ( dword_B362CC == 2 )
    {
      vtbl = v15->vtbl;
      v27 = (*(int (__thiscall **)(_DWORD *))(*v19 + 0x37C))(v19);
      v28 = (*(int (__thiscall **)(_DWORD *, int))(*v19 + 0x380))(v19, v27);
      v29 = (*(int (__thiscall **)(_DWORD *, int))(*v19 + 0x378))(v19, v28);
      ((void (__thiscall *)(PlayerCharacter *, Actor *, int))vtbl->super.Unk_C0)(v15, v17, v29);
      dword_B362CC = 0;
      return 1;
    }
    else
    {
      v30 = TESDataHandler_g_PlayerRef;
      dword_B362D0 = (int)v17;
      v31 = !Actor_IsSneaking(v30);
      v32 = dword_B38D70;
      if ( v31 )
        v32 = dword_B394B8;
      ShowUIMessageBox(
        dword_B394B0,
        (char)v19,
        a3,
        a4,
        a5,
        (const char *)dword_B394A8,
        (int)sub_521B60,
        1,
        (const char *)dword_B394B0,
        v32);
      return 1;
    }
  }
  IsInCombat = v17->vtbl->IsInCombat;
  dword_B362CC = 0;
  if ( IsInCombat(v17, 1) && !v17->vtbl->super.super.GetKnockedState((TESObjectREFR *)v17)
    || v15 == TESDataHandler_g_PlayerRef
    && v17->vtbl->super.super.GetSleepState((TESObjectREFR *)v17)
    && v17->vtbl->super.super.GetSleepState((TESObjectREFR *)v17) != kSitSleep_Sleeping
    && v17->vtbl->super.super.GetSleepState((TESObjectREFR *)v17) != kSitSleep_Sitting )
  {
    if ( v17->vtbl->GetCombatController(v17) && v15 == TESDataHandler_g_PlayerRef )
    {
      if ( *((_DWORD *)v17->vtbl->GetCombatController(v17) + 0x1C) == 0xB )
      {
        m_data = a1->member.super.fullName.name.m_data;
        if ( !m_data )
          m_data = EmptyString;
        _sprintf(string, "%s %s", m_data, (const char *)sActivateNPCCalmed);
        GameUI_QueueMessage(string, 0, 1u, flt_A30634);
        return 0;
      }
      v51 = v17->vtbl->GetCombatController(v17);
      if ( sub_613670(v51, (int)v15) )
      {
        if ( InputGlobals::QueryControlState(OSGlobals->input, 6, 0) )
        {
          if ( ((unsigned __int8 (__thiscall *)(Actor *, PlayerCharacter *))v17->vtbl->Yeld)(v17, v15) )
          {
            if ( byte_B3B908 )
            {
              v52 = TESObjectREFR_GetName((TESObjectREFR *)v17);
              Interface_ConsolePrint("%.20s accepts the player's request to yield!", v52);
            }
            ((void (__thiscall *)(Actor *, PlayerCharacter *))v17->vtbl->Unk_DB)(v17, v15);
            if ( sub_5E6C60(v17) )
            {
              v15->vtbl->super.Unk_94((Actor *)v15);
              if ( a10 > *(float *)&SrcStr )
                ((void (__thiscall *)(Actor *, PlayerCharacter *, _DWORD, _DWORD))v17->vtbl->Unk_BD)(v17, v15, 0, 0);
            }
            v53 = (const char *)sYieldAccepted;
          }
          else
          {
            if ( byte_B3B908 )
            {
              v54 = TESObjectREFR_GetName((TESObjectREFR *)v17);
              Interface_ConsolePrint("%.20s rejects the player's request to yield!", v54);
            }
            v53 = (const char *)sYieldRejected;
          }
          v55 = a1->member.super.fullName.name.m_data;
          if ( !v55 )
            v55 = EmptyString;
          _sprintf(string, "%s %s", v55, v53);
          v56 = string;
          goto LABEL_164;
        }
      }
    }
    return 1;
  }
  if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v17) == (struct Concurrency::details::ScheduleGroupBase *)4 )
    return 0;
  if ( v17->vtbl->super.super.IsDead((TESObjectREFR *)v17, 0) )
  {
    if ( v15 == TESDataHandler_g_PlayerRef )
    {
      sub_57A8D0((char)v19, (char)v15, a3, a4, a5, a11, 0, 1, 0);
    }
    else
    {
      if ( !a14 )
      {
        ((void (__thiscall *)(PlayerCharacter *, Actor *))v15->vtbl->super.Unk_BE)(v15, v17);
        return 1;
      }
      if ( !OblivionDynamicCast(
              a14,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESNPC `RTTI Type Descriptor',
              0) )
      {
        a11->vtbl->RemoveItem(a11, a14, 0, a15, 0, 0, (TESObjectREFR *)v15, 0, 0, 1, 0);
        return 1;
      }
    }
    return 1;
  }
  if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v17) != (struct Concurrency::details::ScheduleGroupBase *)5
    && !v17->vtbl->super.super.HasFatigue((TESObjectREFR *)v17) )
  {
    if ( v15 == TESDataHandler_g_PlayerRef
      || (TesObjectREF_GetDistance((TESObjectREFR *)v15, (TESObjectREFR *)v17, 0),
          v58 = a5,
          v59 = COERCE_FLOAT(
                  ((int (__thiscall *)(PlayerCharacter *, int, _DWORD))v15->vtbl->super.GetActorValue)(
                    v15,
                    0x21,
                    LODWORD(v58))),
          v34 = ((int (__thiscall *)(PlayerCharacter *))v15->vtbl->super.GetDisposition)(v15),
          shouldActorFight(v34, (int)v17, 0, v59, 0, 0, 0, 0x64),
          v35 <= 0) )
    {
      if ( !sub_5E6C60(v17) )
      {
        TesObjectREF_GetDistance((TESObjectREFR *)v17, (TESObjectREFR *)v15, 0);
        v60 = a5;
        v61 = COERCE_FLOAT(((int (__thiscall *)(Actor *, int, _DWORD))v17->vtbl->GetActorValue)(v17, 0x21, LODWORD(v60)));
        v36 = ((int (__thiscall *)(Actor *))v17->vtbl->GetDisposition)(v17);
        shouldActorFight(v36, (int)v15, 0, v61, 0, 0, 0, 0x64);
        if ( v37 > 0
          && !Actor_IsSneaking(v15)
          && ((unsigned __int8 (__thiscall *)(LowProcess *, Actor *, PlayerCharacter *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))v17->members.super.process->Unk_89)(
               v17->members.super.process,
               v17,
               v15,
               1,
               0,
               0,
               1,
               0,
               0,
               0,
               1) )
        {
          return 1;
        }
      }
    }
    else if ( ((unsigned __int8 (__thiscall *)(LowProcess *, PlayerCharacter *, Actor *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))v15->super.super.super.process->Unk_89)(
                v15->super.super.super.process,
                v15,
                v17,
                1,
                0,
                0,
                1,
                0,
                0,
                0,
                1) )
    {
      return 1;
    }
  }
  if ( v15 == TESDataHandler_g_PlayerRef )
    goto LABEL_168;
  if ( v17 != (Actor *)TESDataHandler_g_PlayerRef
    || (v38 = (char *)sub_5E0380((Actor *)v15), !sub_567770(v38))
    && sub_5E0380((Actor *)v15)->members.type
    && sub_5E0380((Actor *)v15)->members.type != 9 )
  {
    if ( a14
      && !OblivionDynamicCast(
            a14,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
            &TESNPC `RTTI Type Descriptor',
            0) )
    {
      ((void (__usercall *)(Actor *@<ecx>, TESForm *, _DWORD, UInt32, int, _DWORD, PlayerCharacter *, _DWORD, _DWORD, int, _DWORD, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>))v17->vtbl->super.super.RemoveItem)(
        v17,
        a14,
        0,
        a15,
        1,
        0,
        v15,
        0,
        0,
        1,
        0,
        a5,
        a4,
        a3,
        st4_0,
        st3_0,
        a8,
        st1_0);
      ((void (__thiscall *)(PlayerCharacter *, Actor *, TESForm *, UInt32))v15->vtbl->super.Unk_8F)(v15, v17, a14, a15);
      return 1;
    }
    if ( sub_5E0380((Actor *)v15)->members.type == 2 )
    {
      ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int))v15->super.super.super.process->Unk_61)(
        v15->super.super.super.process,
        v15,
        2);
      return 1;
    }
    if ( sub_5E0380((Actor *)v15) )
    {
      if ( sub_5E0380((Actor *)v15)->members.type != 1 )
        ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int))v15->super.super.super.process->Unk_61)(
          v15->super.super.super.process,
          v15,
          1);
    }
    if ( v17 != (Actor *)TESDataHandler_g_PlayerRef )
    {
      if ( v17 != (Actor *)v15 )
      {
        if ( sub_5E0380(v17) )
        {
          if ( sub_5E0380(v17)->members.type != 1 && sub_5E0380(v17)->members.type != 2 )
            (*(void (__thiscall **)(_DWORD *, Actor *, int))(*v19 + 0x188))(v19, v17, 1);
        }
      }
      v67 = (float *)((int (__usercall *)@<eax>(Actor *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>))v17->vtbl->super.super.GetPos)(
                       v17,
                       a2,
                       a5,
                       a4,
                       a3,
                       st4_0,
                       st3_0,
                       a8,
                       st1_0);
      v39 = v15->vtbl->super.super.super.GetPos((TESObjectREFR *)v15);
      sub_4121A0(v39, v78, v67);
      v40 = sub_683CB0(v78);
      v74 = v40;
      if ( v17 != (Actor *)v15 && v17->vtbl->super.super.GetSleepState((TESObjectREFR *)v17) == kSitSleep_None )
      {
        v40 = v74;
        sub_685530(v17, v74, 1);
      }
      if ( sub_5E6B40(v15) || !Actor_IsNPC((Actor *)v15) || !Actor_IsNPC(v17) )
      {
        v15->super.super.super.process->Unk_61(v15->super.super.super.process, (UInt32)v15);
        return 1;
      }
      v68 = v76 == 0xFFFFFFD4 || *(_DWORD *)(v76 + 0x30) ? 1 : 2;
      v15->super.super.super.process->Unk_61(v15->super.super.super.process, (UInt32)v15);
      if ( ((unsigned __int8 (__thiscall *)(PlayerCharacter *, Actor *, _DWORD, _DWORD))v15->vtbl->super.Unk_BD)(
             v15,
             v17,
             0,
             0) )
      {
        ((void (__usercall *)(LowProcess *@<ecx>, PlayerCharacter *, int, int, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>))v15->super.super.super.process->Unk_61)(
          v15->super.super.super.process,
          v15,
          2,
          v68,
          v40,
          a4,
          a3,
          st4_0,
          st3_0,
          a8,
          st1_0);
        if ( v15 != (PlayerCharacter *)v17 )
        {
          v41 = (TESPackage *)v19[2];
          if ( v41 )
          {
            if ( !sub_5660A0(v41) )
            {
              v69 = (*(int (__thiscall **)(_DWORD *))(*v19 + 0x390))(v19);
              duration = (*(int (__thiscall **)(_DWORD *))(*v19 + 0xC0))(v19);
              v42 = (BSExtraData *)(*(int (__thiscall **)(_DWORD *))(*v19 + 0xCC))(v19);
              sub_4268B0(&v17->members.super.super.baseExtraList, (TESPackage *)v19[2], v19[1], v42, duration, v69);
            }
          }
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*v19 + 0x178))(v19, 0);
          v17->members.super.process->Unk_126(v17->members.super.process);
          v43 = sub_5E0380((Actor *)v15);
          Actor_AddPackage_(v17, v43, 0, 1);
          ((void (__thiscall *)(Actor *, _DWORD))v17->vtbl->super.super.Unk_5F)(v17, 0);
        }
        (*(void (__thiscall **)(_DWORD *, Actor *))(*v19 + 0x188))(v19, v17);
        return 1;
      }
    }
    return 1;
  }
  if ( v15 == TESDataHandler_g_PlayerRef )
  {
LABEL_168:
    if ( (v17->vtbl->super.super.GetKnockedState((TESObjectREFR *)v17) && !Actor::IsEssential(v17)
       || Actor_IsSneaking(TESDataHandler_g_PlayerRef))
      && !Actor_IsGhost(v17)
      && !InterfaceManager_IsMenuMode() )
    {
      if ( v17->vtbl->super.super.GetKnockedState((TESObjectREFR *)v17)
        || !v17->members.super.process->Unk_2B(v17->members.super.process) )
      {
        sub_57A8D0((char)v19, (char)v15, a3, a4, a5, a11, 0, 0, 1);
        return 1;
      }
      durationa = (const char *)dword_B38B28;
      v44 = TESObjectREFR_GetName((TESObjectREFR *)v17);
      _sprintf(v80, "%s %s", v44, durationa);
      GameUI_QueueMessage(v80, 0, 1u, flt_A30634);
      return 0;
    }
  }
  if ( Actor_IsNPC((Actor *)v15) )
  {
    if ( !((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>))v17->vtbl->super.super.GetSleepState)(
            v17,
            a5,
            a4,
            a3,
            st4_0,
            st3_0,
            a8,
            st1_0) )
    {
      durationb = v17->vtbl->super.super.GetPos((TESObjectREFR *)v17);
      v46 = v15->vtbl->super.super.super.GetPos((TESObjectREFR *)v15);
      sub_4121A0(v46, &v77, durationb);
      v73 = sub_683CB0(&v77);
      a5 = v73;
      sub_685530(v17, v73, 1);
    }
    v47 = 0;
    if ( v15 == TESDataHandler_g_PlayerRef )
    {
      sub_5F8460((TESObjectREFR *)v15);
      sub_5F8460((TESObjectREFR *)v17);
      if ( (PlayerCharacter *)sub_5EAE10((TESObjectREFR *)v17) == TESDataHandler_g_PlayerRef )
      {
        if ( v76 )
        {
          if ( !*(_BYTE *)(v76 + 0x20) )
          {
            if ( v76 == 0xFFFFFFD4 || *(_DWORD *)(v76 + 0x30) )
              (*(void (__thiscall **)(_DWORD *, Actor *, int))(*v19 + 0x188))(v19, v17, 1);
            else
              (*(void (__thiscall **)(_DWORD *, PlayerCharacter *, int))(*v19 + 0x188))(v19, v15, 2);
          }
        }
      }
      sub_6AC3D0((_DWORD *)OSGlobals->sound);
      sub_6AE860((int)OSGlobals->sound, (int)v15, a3, a4, a5, 0, 0.0, a2);
      ((void (__thiscall *)(Actor *, int, int))v17->vtbl->Unk_8D)(v17, 1, v70);
      MagicCaster_InitializeCasting___(&v17->members.magicCaster);
      sub_5F01B0((TESObjectREFR *)v17, a3, a4);
      sub_5F01B0((TESObjectREFR *)v15, a3, a4);
      if ( ((double (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.Unk_94)(TESDataHandler_g_PlayerRef) > *(float *)&SrcStr )
      {
        if ( sub_5E6C60(v17) )
          byte_B3BB18 = 1;
      }
      if ( (*(int (__thiscall **)(_DWORD *))(*v19 + 0x36C))(v19) == 9 )
      {
        ((void (__thiscall *)(Actor *, PlayerCharacter *, _DWORD))v17->vtbl->Unk_BD)(v17, TESDataHandler_g_PlayerRef, 0);
        ((void (__thiscall *)(TESObjectREFR *, int))a11->vtbl->super.Unk_26)(a11, 1);
      }
      else
      {
        sub_57AB00(v17, 0);
        (*(void (__thiscall **)(_DWORD *, int))(*v75 + 0x98))(v75, 1);
      }
      return 1;
    }
    else
    {
      if ( GetOpenedMenuCode((char)v19, a3, a4, a5) == 0x3F1 )
        return 1;
      if ( !((unsigned __int8 (__thiscall *)(LowProcess *, Actor *))v17->members.super.process->Unk_B7)(
              v17->members.super.process,
              v17) )
        return 0;
      sub_6AC3D0((_DWORD *)OSGlobals->sound);
      sub_6AE860((int)OSGlobals->sound, (int)v15, a3, a4, a5, 0, 0.0, a2);
      sub_5F8460((TESObjectREFR *)v15);
      sub_5F8460((TESObjectREFR *)v17);
      v48 = sub_5E0380((Actor *)v15);
      v49 = OblivionDynamicCast(
              v48,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
              &DialoguePackage `RTTI Type Descriptor',
              0);
      if ( v49 )
        v47 = v49[0x10];
      if ( v75 == (_DWORD *)0xFFFFFFD4 || v75[0xC] )
        ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int))v15->super.super.super.process->Unk_61)(
          v15->super.super.super.process,
          v15,
          1);
      else
        ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int))v15->super.super.super.process->Unk_61)(
          v15->super.super.super.process,
          v15,
          2);
      ((void (__thiscall *)(PlayerCharacter *, int))v15->vtbl->super.Unk_8D)(v15, 1);
      MagicCaster_InitializeCasting___(&v17->members.magicCaster);
      sub_5F01B0((TESObjectREFR *)v17, a3, a4);
      sub_5F01B0((TESObjectREFR *)v15, a3, a4);
      sub_57AB00(v15, v47);
      ((void (__thiscall *)(PlayerCharacter *, int))v15->vtbl->super.super.super.super.Unk_26)(v15, 1);
      return 1;
    }
  }
  else
  {
    v45 = v15->super.super.super.process;
    if ( v45 )
      ((void (__thiscall *)(LowProcess *, PlayerCharacter *, Actor *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))v45->Unk_89)(
        v45,
        v15,
        v17,
        0,
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
