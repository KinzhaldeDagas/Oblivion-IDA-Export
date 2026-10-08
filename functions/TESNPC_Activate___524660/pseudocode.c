// [Controller decode 2026-07-09] Non-player QueryControlState consumer: Block control 6 held submits player yield request.
//
// [Controller decode 2026-07-09] Non-player QueryControlState consumer: Block control 6 held submits player's yield request.
char __userpurge TESNPC_Activate_CheckYieldControl@<al>(
        TESNPC *a1@<ecx>,
        int a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double Distance@<st0>,
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
  _DWORD *v16; // eax
  int v17; // esi
  _DWORD *v19; // ebp
  PlayerCharacter *v20; // eax
  int v21; // esi
  _DWORD *v22; // eax
  const char *value; // edx
  PlayerCharacter *v24; // ecx
  LowProcess *process; // ecx
  PlayerCharacterVtbl *vtbl; // ebx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  PlayerCharacter *v30; // ecx
  bool v31; // zf
  const char *v32; // eax
  unsigned __int8 (__thiscall *v33)(int, int); // edx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  TESPackage *v38; // eax
  float *v39; // eax
  TESPackage *v40; // ecx
  BSExtraData *v41; // eax
  TESPackage *CurrentPackage; // eax
  char *v43; // eax
  LowProcess *v44; // ecx
  float *v45; // eax
  TESTopic *v46; // ebx
  TESPackage *v48; // eax
  void *v49; // eax
  char *m_data; // eax
  _DWORD *v51; // eax
  char *v52; // eax
  const char *v54; // ecx
  char *v55; // eax
  char *v56; // eax
  char *v57; // ecx
  char *Name; // eax
  float v59; // [esp+4Ch] [ebp-238h]
  float v60; // [esp+4Ch] [ebp-238h]
  float v61; // [esp+4Ch] [ebp-238h]
  float v62; // [esp+4Ch] [ebp-238h]
  float v63; // [esp+58h] [ebp-22Ch]
  float duration; // [esp+5Ch] [ebp-228h]
  float durationa; // [esp+5Ch] [ebp-228h]
  char durationb; // [esp+5Ch] [ebp-228h]
  const char *durationc; // [esp+5Ch] [ebp-228h]
  float durationd; // [esp+5Ch] [ebp-228h]
  float *duratione; // [esp+5Ch] [ebp-228h]
  float durationf; // [esp+5Ch] [ebp-228h]
  const char *durationg; // [esp+5Ch] [ebp-228h]
  float durationh; // [esp+5Ch] [ebp-228h]
  float *v74; // [esp+60h] [ebp-224h]
  int v75; // [esp+60h] [ebp-224h]
  char v76; // [esp+60h] [ebp-224h]
  int v77; // [esp+60h] [ebp-224h]
  TESPackage *v82; // [esp+78h] [ebp-20Ch]
  int v83; // [esp+7Ch] [ebp-208h]
  float v84; // [esp+80h] [ebp-204h] BYREF
  float v85[2]; // [esp+84h] [ebp-200h] BYREF
  char string[200]; // [esp+8Ch] [ebp-1F8h] BYREF
  char v87[300]; // [esp+154h] [ebp-130h] BYREF

  v15 = (PlayerCharacter *)OblivionDynamicCast( /*0x5246b7*/
                             a12,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  v16 = OblivionDynamicCast( /*0x5246b9*/
          a11,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
          &Actor `RTTI Type Descriptor',
          0);
  v17 = (int)v16; /*0x5246be*/
  if ( !v16 ) /*0x5246c5*/
    return 0; /*0x5246c9*/
  v19 = (_DWORD *)v16[0x16]; /*0x5246cf*/
  if ( !v19 /*0x52470c*/
    || (*(int (__thiscall **)(_DWORD))(*v19 + 0x3D0))(v16[0x16])
    && !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v17 + 0x198))(v17, 0)
    || (*(int (__thiscall **)(_DWORD *))(*v19 + 0x47C))(v19) )
  {
    return 0; /*0x524710*/
  }
  v82 = v15->super.super.super.process->GetCurrentPackage(v15->super.super.super.process); /*0x524723*/
  v83 = (*(int (__thiscall **)(_DWORD *))(*v19 + 0x184))(v19); /*0x524734*/
  v20 = reference; /*0x524738*/
  if ( (PlayerCharacter *)v17 == reference /*0x524774*/
    && (v20->isMovingToNewSpace
     || v20->super.super.super.process->GetCurrentPackage(v20->super.super.super.process)
     && reference->super.super.super.process->GetCurrentPackage(reference->super.super.super.process)->members.type == kPackageType_MountHorse) )
  {
    if ( Actor_IsGuardClass((Actor *)v17) && sub_5E6BA0((Actor *)v17) ) /*0x524787*/
    {
      v21 = *v19; /*0x524794*/
      TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x52479c*/
      __asm { fsub    qword ptr ds:0A2F928h } /*0x5247a1*/
      __asm { fstp    [esp+228h+var_214] }
      __asm
      {
        fld     [esp+228h+var_214]
        fstp    [esp+228h+duration]
      }
      (*(void (__thiscall **)(_DWORD *, _DWORD))(v21 + 0x1C))(v19, LODWORD(duration)); /*0x5247b8*/
    }
    return 0; /*0x5247ba*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v17 + 0x198))(v17, 0) /*0x5247db*/
    || Actor::GetDeadState((Actor *)v17) == 6 )
  {
    if ( Actor::GetDeadState((Actor *)v17) == 3 || Actor::GetDeadState((Actor *)v17) == 6 ) /*0x5247f7*/
    {
      value = stru_B38B18.value; /*0x52531d*/
      goto LABEL_163; /*0x52531d*/
    }
    if ( sub_5E6CD0((TESObjectREFR *)v17, 0) ) /*0x524801*/
    {
      v22 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x330))(v17); /*0x524814*/
      if ( !v22 || !sub_613670(v22, (int)reference) || Actor_IsBlocking(reference) ) /*0x524832*/
      {
        value = stru_B38B20.value; /*0x52483b*/
LABEL_163:
        durationg = value; /*0x525323*/
        Name = TESObjectREFR_GetName((TESObjectREFR *)v17); /*0x525326*/
        _sprintf(v87, "%s %s", Name, durationg); /*0x525339*/
        v57 = v87; /*0x52533e*/
LABEL_164:
        __asm { fld     dword ptr ds:0A30634h } /*0x525345*/
        __asm { fstp    [esp+228h+duration]; duration }
        GameUI_QueueMessage(v57, 0, 1u, durationh); /*0x525356*/
        return 0; /*0x525356*/
      }
    }
  }
  v24 = reference; /*0x524846*/
  if ( (PlayerCharacter *)v17 == reference ) /*0x52484e*/
  {
    sub_65D660(); /*0x524850*/
    v24 = reference; /*0x524855*/
  }
  if ( v15 != v24 ) /*0x52485d*/
  {
    process = v15->super.super.super.process; /*0x52485f*/
    if ( process ) /*0x524864*/
      process->SetUnk01C(process, 1); /*0x524870*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v17 + 0x198))(v17, 0) /*0x5248c1*/
    && Actor::IsSleeping((Actor *)v17)
    && v15 == reference
    && sub_5E04C0(v15)
    && dword_B361CC[0x40] != 1
    && !sub_5E04C0((void *)v17) )
  {
    if ( dword_B361CC[0x40] == 2 ) /*0x5248d5*/
    {
      vtbl = v15->vtbl; /*0x5248e0*/
      v27 = (*(int (__thiscall **)(_DWORD *))(*v19 + 0x37C))(v19); /*0x5248e4*/
      v28 = (*(int (__thiscall **)(_DWORD *, int))(*v19 + 0x380))(v19, v27); /*0x5248f2*/
      v29 = (*(int (__thiscall **)(_DWORD *, int))(*v19 + 0x378))(v19, v28); /*0x524900*/
      ((void (__thiscall *)(PlayerCharacter *, int, int))vtbl->super.Unk_C0)(v15, v17, v29); /*0x52490c*/
      dword_B361CC[0x40] = 0; /*0x52490e*/
      return 1; /*0x524918*/
    }
    else
    {
      v30 = reference; /*0x52491f*/
      dword_B361CC[0x41] = v17; /*0x524925*/
      v31 = !Actor_IsSneaking(v30); /*0x52493c*/
      v32 = stru_B38D70.value; /*0x52493e*/
      if ( v31 ) /*0x524945*/
        v32 = stru_B394B8.value; /*0x524947*/
      ShowUIMessageBox( /*0x524956*/
        (char *)stru_B394B0.value,
        a3,
        a4,
        Distance,
        (char *)stru_B394A8.value,
        (int)sub_521B60,
        1,
        (char *)stru_B394B0.value,
        (char)v32);
      return 1; /*0x52495e*/
    }
  }
  v33 = *(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v17 + 0x334); /*0x524967*/
  dword_B361CC[0x40] = 0; /*0x524971*/
  if ( v33(v17, 1) && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 0x19C))(v17) /*0x5249cd*/
    || v15 == reference
    && (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x18C))(v17)
    && (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x18C))(v17) != 9
    && (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x18C))(v17) != 4 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x330))(v17) && v15 == reference ) /*0x5251c5*/
    {
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x330))(v17) + 0x70) == 0xB ) /*0x5251db*/
      {
        m_data = a1->member.super.fullName.name.m_data; /*0x5251e1*/
        if ( !m_data ) /*0x5251ef*/
          m_data = EmptyString; /*0x5251f1*/
        _sprintf(string, "%s %s", m_data, MEMORY[0xB372F8].value); /*0x525202*/
        __asm { fld     dword ptr ds:0A30634h } /*0x525207*/
        __asm { fstp    [esp+228h+duration] }
        GameUI_QueueMessage(string, 0, 1u, durationf); /*0x52521c*/
        return 0; /*0x52521c*/
      }
      v51 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x330))(v17); /*0x52522c*/
      if ( sub_613670(v51, (int)v15) ) /*0x525230*/
      {
        if ( InputGlobals::QueryControlState(MEMORY[0xB33398]->input, 6, 0) ) /*0x525249*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)v17 + 0x370))(v17, v15) ) /*0x525261*/
          {
            if ( unk_B3B908 ) /*0x525267*/
            {
              v52 = TESObjectREFR_GetName((TESObjectREFR *)v17); /*0x525272*/
              Interface_ConsolePrint("%.20s accepts the player's request to yield!", v52); /*0x52527d*/
            }
            (*(void (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)v17 + 0x36C))(v17, v15); /*0x525290*/
            if ( Actor_IsGuardClass((Actor *)v17) ) /*0x525294*/
            {
              v15->vtbl->super.Unk_94((Actor *)v15); /*0x5252a7*/
              __asm /*0x5252a9*/
              {
                fcomp   dword ptr ds:0A2FAA8h
                fnstsw  ax
              }
              if ( (_AX & 0x4100) == 0 ) /*0x5252b4*/
                (*(void (__thiscall **)(int, PlayerCharacter *, _DWORD, _DWORD))(*(_DWORD *)v17 + 0x2F4))( /*0x5252c5*/
                  v17,
                  v15,
                  0,
                  0);
            }
            v54 = MEMORY[0xB38DD0].value; /*0x5252c7*/
          }
          else
          {
            if ( unk_B3B908 ) /*0x5252cf*/
            {
              v55 = TESObjectREFR_GetName((TESObjectREFR *)v17); /*0x5252da*/
              Interface_ConsolePrint("%.20s rejects the player's request to yield!", v55); /*0x5252e5*/
            }
            v54 = MEMORY[0xB38DD8].value; /*0x5252ed*/
          }
          v56 = a1->member.super.fullName.name.m_data; /*0x5252f7*/
          if ( !v56 ) /*0x5252ff*/
            v56 = EmptyString; /*0x525301*/
          _sprintf(string, "%s %s", v56, v54); /*0x525312*/
          v57 = string; /*0x525317*/
          goto LABEL_164; /*0x52531b*/
        }
      }
    }
    return 1; /*0x525250*/
  }
  if ( Actor::GetDeadState((Actor *)v17) == 4 ) /*0x5249dd*/
    return 0; /*0x52535e*/
  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v17 + 0x198))(v17, 0) ) /*0x5249ef*/
  {
    if ( v15 == reference ) /*0x525141*/
    {
      sub_57A8D0((char)v15, a3, a4, Distance, a11, 0, 1, 0); /*0x525147*/
    }
    else
    {
      if ( !a14 ) /*0x52514e*/
      {
        ((void (__thiscall *)(PlayerCharacter *, int))v15->vtbl->super.Unk_BE)(v15, v17); /*0x5251a2*/
        return 1; /*0x5251a6*/
      }
      if ( !OblivionDynamicCast( /*0x52515f*/
              a14,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESNPC `RTTI Type Descriptor',
              0) )
      {
        a11->vtbl->RemoveItem(a11, a14, 0, a15, 0, 0, (TESObjectREFR *)v15, 0, 0, 1, 0); /*0x52518e*/
        return 1; /*0x525192*/
      }
    }
    return 1; /*0x525147*/
  }
  if ( Actor::GetDeadState((Actor *)v17) != 5 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 0x1A0))(v17) ) /*0x524a13*/
  {
    if ( v15 == reference ) /*0x524a23*/
      goto LABEL_168; /*0x524a23*/
    Distance = TesObjectREF_GetDistance((TESObjectREFR *)v15, (TESObjectREFR *)v17, 0); /*0x524a32*/
    __asm { fstp    [esp+238h+var_238] } /*0x524a40*/
    v60 = COERCE_FLOAT( /*0x524a49*/
            ((int (__thiscall *)(PlayerCharacter *, int, _DWORD))v15->vtbl->super.GetActorValue)(
              v15,
              0x21,
              LODWORD(v59)));
    v34 = ((int (__thiscall *)(PlayerCharacter *))v15->vtbl->super.GetDisposition)(v15); /*0x524a57*/
    shouldActorFight(v34, v17, 0, v60, 0, 0, 0, 0x64); /*0x524a5a*/
    if ( v35 <= 0 ) /*0x524a64*/
    {
LABEL_168:
      if ( !Actor_IsGuardClass((Actor *)v17) ) /*0x524a96*/
      {
        Distance = TesObjectREF_GetDistance((TESObjectREFR *)v17, (TESObjectREFR *)v15, 0); /*0x524aac*/
        __asm { fstp    [esp+238h+var_238] } /*0x524aba*/
        v62 = COERCE_FLOAT((*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 0x284))(v17, 0x21, LODWORD(v61))); /*0x524ac3*/
        v36 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x224))(v17); /*0x524ad1*/
        shouldActorFight(v36, (int)v15, 0, v62, 0, 0, 0, 0x64); /*0x524ad4*/
        if ( v37 > 0 /*0x524b08*/
          && !Actor_IsSneaking(v15)
          && (*(unsigned __int8 (__thiscall **)(_DWORD, int, PlayerCharacter *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(v17 + 0x58) + 0x228))(
               *(_DWORD *)(v17 + 0x58),
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
          return 1; /*0x524b0c*/
        }
      }
    }
    else if ( ((unsigned __int8 (__thiscall *)(LowProcess *, PlayerCharacter *, int, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))v15->super.super.super.process->Unk_89)( /*0x524a83*/
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
      return 1; /*0x524a8f*/
    }
  }
  if ( v15 == reference ) /*0x524b19*/
    goto LABEL_169; /*0x524b19*/
  if ( (PlayerCharacter *)v17 != reference
    || (v38 = Actor::GetCurrentPackage((Actor *)v15), !TESPackage::IsTemporaryOverrideType(v38))
    && Actor::GetCurrentPackage((Actor *)v15)->members.type
    && Actor::GetCurrentPackage((Actor *)v15)->members.type != kPackageType_Ambush )
  {
    if ( a14 /*0x524b6e*/
      && !OblivionDynamicCast(
            a14,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
            &TESNPC `RTTI Type Descriptor',
            0) )
    {
      (*(void (__thiscall **)(int, TESForm *, _DWORD, UInt32, int, _DWORD, PlayerCharacter *, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)v17 + 0x100))( /*0x524b9c*/
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
        0);
      ((void (__thiscall *)(PlayerCharacter *, int, TESForm *, UInt32))v15->vtbl->super.Unk_8F)(v15, v17, a14, a15); /*0x524bab*/
      return 1; /*0x524baf*/
    }
    if ( Actor::GetCurrentPackage((Actor *)v15)->members.type == kPackageType_Escort ) /*0x524bc3*/
    {
      ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int))v15->super.super.super.process->Unk_61)( /*0x524bd2*/
        v15->super.super.super.process,
        v15,
        2);
      return 1; /*0x524bd6*/
    }
    if ( Actor::GetCurrentPackage((Actor *)v15) ) /*0x524bdd*/
    {
      if ( Actor::GetCurrentPackage((Actor *)v15)->members.type != kPackageType_Follow ) /*0x524bf1*/
        ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int))v15->super.super.super.process->Unk_61)( /*0x524c01*/
          v15->super.super.super.process,
          v15,
          1);
    }
    if ( (PlayerCharacter *)v17 != reference )
    {
      if ( (PlayerCharacter *)v17 != v15 ) /*0x524c11*/
      {
        if ( Actor::GetCurrentPackage((Actor *)v17) ) /*0x524c15*/
        {
          if ( Actor::GetCurrentPackage((Actor *)v17)->members.type != kPackageType_Follow /*0x524c35*/
            && Actor::GetCurrentPackage((Actor *)v17)->members.type != kPackageType_Escort )
          {
            (*(void (__thiscall **)(_DWORD *, int, int))(*v19 + 0x188))(v19, v17, 1); /*0x524c45*/
          }
        }
      }
      v74 = (float *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v17 + 0x174))(v17, a2); /*0x524c55*/
      v39 = v15->vtbl->super.super.super.GetPos((TESObjectREFR *)v15); /*0x524c63*/
      sub_4121A0(v39, v85, v74); /*0x524c67*/
      Vector3_CalculateHeadingRadiansXY(v85); /*0x524c71*/
      __asm { fstp    [esp+224h+var_210] } /*0x524c76*/
      if ( (PlayerCharacter *)v17 != v15 && !(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x18C))(v17) ) /*0x524c8b*/
      {
        __asm { fld     [esp+220h+var_210] } /*0x524c91*/
        __asm { fstp    [esp+228h+duration]; float }
        sub_685530((Actor *)v17, durationa, 1); /*0x524c9c*/
      }
      if ( Actor_IsInDialogueProcedure(v15) || !Actor_IsNPC((Actor *)v15) || !Actor_IsNPC((Actor *)v17) ) /*0x524cc4*/
      {
        v15->super.super.super.process->Unk_61(v15->super.super.super.process, (UInt32)v15); /*0x524dd0*/
        return 1; /*0x524dd4*/
      }
      v75 = v83 == 0xFFFFFFD4 || *(_DWORD *)(v83 + 0x30) ? 1 : 2;
      v15->super.super.super.process->Unk_61(v15->super.super.super.process, (UInt32)v15); /*0x524cf3*/
      if ( ((unsigned __int8 (__thiscall *)(PlayerCharacter *, int, _DWORD, _DWORD))v15->vtbl->super.Unk_BD)( /*0x524d04*/
             v15,
             v17,
             0,
             0) )
      {
        ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int, int))v15->super.super.super.process->Unk_61)( /*0x524d1b*/
          v15->super.super.super.process,
          v15,
          2,
          v75);
        if ( v15 != (PlayerCharacter *)v17 ) /*0x524d1f*/
        {
          v40 = (TESPackage *)v19[2]; /*0x524d25*/
          if ( v40 ) /*0x524d2a*/
          {
            if ( !TESPackage_IsRuntimePackage(v40) ) /*0x524d2c*/
            {
              v76 = (*(int (__thiscall **)(_DWORD *))(*v19 + 0x390))(v19); /*0x524d47*/
              durationb = (*(int (__thiscall **)(_DWORD *))(*v19 + 0xC0))(v19); /*0x524d55*/
              v41 = (BSExtraData *)(*(int (__thiscall **)(_DWORD *))(*v19 + 0xCC))(v19); /*0x524d5c*/
              sub_4268B0((ExtraDataList *)(v17 + 0x44), (TESPackage *)v19[2], v19[1], v41, durationb, v76); /*0x524d6a*/
            }
          }
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*v19 + 0x178))(v19, 0); /*0x524d7c*/
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v17 + 0x58) + 0x49C))(*(_DWORD *)(v17 + 0x58)); /*0x524d89*/
          CurrentPackage = Actor::GetCurrentPackage((Actor *)v15); /*0x524d91*/
          Actor_AddPackage_((Actor *)v17, CurrentPackage, 0, 1); /*0x524d99*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v17 + 0x17C))(v17, 0); /*0x524daa*/
        }
        (*(void (__thiscall **)(_DWORD *, int))(*v19 + 0x188))(v19, v17); /*0x524db9*/
        return 1; /*0x524dbd*/
      }
    }
    return 1; /*0x524e9e*/
  }
  if ( v15 == reference ) /*0x524ddf*/
  {
LABEL_169:
    if ( ((*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 0x19C))(v17) && !Actor::IsEssential((Actor *)v17) /*0x524e22*/
       || Actor_IsSneaking(reference))
      && !Actor_IsGhost((Actor *)v17)
      && !InterfaceManager_IsMenuMode() )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 0x19C))(v17) /*0x524e46*/
        || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v17 + 0x58) + 0xAC))(*(_DWORD *)(v17 + 0x58)) )
      {
        sub_57A8D0((char)v15, a3, a4, Distance, a11, 0, 0, 1); /*0x524e94*/
        return 1; /*0x524e94*/
      }
      durationc = stru_B38B28.value; /*0x524e51*/
      v43 = TESObjectREFR_GetName((TESObjectREFR *)v17); /*0x524e54*/
      _sprintf(v87, "%s %s", v43, durationc); /*0x524e67*/
      __asm { fld     dword ptr ds:0A30634h } /*0x524e6c*/
      __asm { fstp    [esp+228h+duration] }
      GameUI_QueueMessage(v87, 0, 1u, durationd); /*0x524e84*/
      return 0; /*0x524e84*/
    }
  }
  if ( Actor_IsNPC((Actor *)v15) ) /*0x524ea5*/
  {
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x18C))(v17) ) /*0x524ee2*/
    {
      duratione = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x174))(v17); /*0x524ef6*/
      v45 = v15->vtbl->super.super.super.GetPos((TESObjectREFR *)v15); /*0x524f04*/
      sub_4121A0(v45, &v84, duratione); /*0x524f08*/
      Distance = Vector3_CalculateHeadingRadiansXY(&v84); /*0x524f12*/
      __asm /*0x524f17*/
      {
        fstp    [esp+228h+var_214]
        fld     [esp+228h+var_214]
      }
      __asm { fstp    [esp+22Ch+var_22C]; float }
      sub_685530((Actor *)v17, v63, 1); /*0x524f29*/
    }
    v46 = 0; /*0x524f31*/
    if ( v15 == reference ) /*0x524f39*/
    {
      Actor_ResetAttackStateAndBowVisuals((Actor *)v15); /*0x524f41*/
      Actor_ResetAttackStateAndBowVisuals((Actor *)v17); /*0x524f48*/
      if ( (PlayerCharacter *)sub_5EAE10((TESObjectREFR *)v17) == reference ) /*0x524f5a*/
      {
        if ( v83 ) /*0x524f62*/
        {
          if ( !*(_BYTE *)(v83 + 0x20) ) /*0x524f64*/
          {
            if ( v83 == 0xFFFFFFD4 || *(_DWORD *)(v83 + 0x30) ) /*0x524f70*/
              (*(void (__thiscall **)(_DWORD *, int, int))(*v19 + 0x188))(v19, v17, 1); /*0x524f88*/
            else
              (*(void (__thiscall **)(_DWORD *, PlayerCharacter *, int))(*v19 + 0x188))(v19, v15, 2); /*0x524f78*/
          }
        }
      }
      sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x524f92*/
      sub_6AE860((int)MEMORY[0xB33398]->sound, (int)v15, a3, a4, Distance, 0, 0.0, a2); /*0x524fa4*/
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v17 + 0x234))(v17, 1, v77); /*0x524fb5*/
      MagicCaster_InitializeCasting___((char *)(v17 + 0x5C)); /*0x524fba*/
      sub_5F01B0((TESObjectREFR *)v17, a4, Distance); /*0x524fc1*/
      sub_5F01B0((TESObjectREFR *)v15, a4, Distance); /*0x524fc8*/
      reference->vtbl->super.Unk_94((Actor *)reference); /*0x524fdb*/
      __asm /*0x524fdd*/
      {
        fcomp   dword ptr ds:0A2FAA8h
        fnstsw  ax
      }
      if ( (_AX & 0x4100) == 0 && Actor_IsGuardClass((Actor *)v17) ) /*0x524fec*/
        unk_B3BB18 = 1; /*0x524ff5*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v19 + 0x36C))(v19) == 9 ) /*0x52500e*/
      {
        (*(void (__thiscall **)(int, PlayerCharacter *, _DWORD))(*(_DWORD *)v17 + 0x2F4))(v17, reference, 0); /*0x525042*/
        ((void (__thiscall *)(TESObjectREFR *, int))a11->vtbl->super.Unk_26)(a11, 1); /*0x525052*/
      }
      else
      {
        Interface::CreateDialogMenu((TESObjectREFR *)v17, 0); /*0x525011*/
        ((void (__thiscall *)(TESPackage *, int))v82->__vftable->super.Unk_26)(v82, 1); /*0x525027*/
      }
      return 1; /*0x525029*/
    }
    else
    {
      if ( GetOpenedMenuCode() == 0x3F1 ) /*0x525065*/
        return 1; /*0x525065*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(v17 + 0x58) + 0x2E0))( /*0x52507b*/
              *(_DWORD *)(v17 + 0x58),
              v17) )
        return 0; /*0x52507b*/
      sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x525089*/
      sub_6AE860((int)MEMORY[0xB33398]->sound, (int)v15, a3, a4, Distance, 0, 0.0, a2); /*0x52509b*/
      Actor_ResetAttackStateAndBowVisuals((Actor *)v15); /*0x5250a2*/
      Actor_ResetAttackStateAndBowVisuals((Actor *)v17); /*0x5250a9*/
      v48 = Actor::GetCurrentPackage((Actor *)v15); /*0x5250be*/
      v49 = OblivionDynamicCast( /*0x5250c4*/
              v48,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
              &DialoguePackage `RTTI Type Descriptor',
              0);
      if ( v49 ) /*0x5250ce*/
        v46 = *((TESTopic **)v49 + 0x10); /*0x5250d0*/
      if ( v82 == (TESPackage *)0xFFFFFFD4 || v82->members.time.duration ) /*0x5250de*/
        ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int))v15->super.super.super.process->Unk_61)( /*0x5250f6*/
          v15->super.super.super.process,
          v15,
          1);
      else
        ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int))v15->super.super.super.process->Unk_61)( /*0x5250e6*/
          v15->super.super.super.process,
          v15,
          2);
      ((void (__thiscall *)(PlayerCharacter *, int))v15->vtbl->super.Unk_8D)(v15, 1); /*0x525104*/
      MagicCaster_InitializeCasting___((char *)(v17 + 0x5C)); /*0x525109*/
      sub_5F01B0((TESObjectREFR *)v17, a4, Distance); /*0x525110*/
      sub_5F01B0((TESObjectREFR *)v15, a4, Distance); /*0x525117*/
      Interface::CreateDialogMenu((TESObjectREFR *)v15, v46); /*0x52511e*/
      ((void (__thiscall *)(PlayerCharacter *, int))v15->vtbl->super.super.super.super.Unk_26)(v15, 1); /*0x525132*/
      return 1; /*0x525134*/
    }
  }
  else
  {
    v44 = v15->super.super.super.process; /*0x524eae*/
    if ( v44 ) /*0x524eb3*/
      ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))v44->Unk_89)( /*0x524ecf*/
        v44,
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
    return 1; /*0x524ed1*/
  }
}
