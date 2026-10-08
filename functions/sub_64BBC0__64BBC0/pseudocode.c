// 3DTheft release decode 2026-05-18: MiddleHighProcess StartCombatPackage returns success/failure as AL and owns active combat-controller/package setup. No observed Actor::EvaluatePackage call is required after this vfunc.
char __userpurge MiddleHighProcess_StartCombatPackage@<al>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        Actor *a5,
        float a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        float a13,
        int a14)
{
  int v14; // edi
  int v15; // ebp
  Actor *v16; // esi
  int ProcessLevel; // ebx
  int v18; // edx
  float v19; // eax
  int v20; // edx
  CombatController *v21; // eax
  int v22; // edx
  float v23; // eax
  int *SafeFloatPointer; // eax
  int v25; // ebx
  bool IsSwimming; // bl
  NiPoint3 *v28; // eax
  int (__thiscall *v29)(int); // eax
  float *v30; // eax
  char *v31; // ecx
  float v32; // ebx
  int v33; // eax
  double v34; // st7
  PlayerCharacter *v35; // ebx
  char v36; // al
  float *v37; // eax
  CombatController *v38; // eax
  _DWORD *v39; // eax
  int v40; // eax
  ActorVtbl *vtbl; // edx
  _DWORD *v42; // eax
  CombatController *v43; // eax
  float v44; // ebx
  int **v45; // edi
  int **v46; // eax
  int ***v47; // ebx
  float *v48; // eax
  float *v49; // edi
  char v50; // bl
  unsigned int v51; // edi
  int v52; // ecx
  int v53; // eax
  int v54; // eax
  float *v55; // [esp-Ch] [ebp-68h]
  float *v56; // [esp-4h] [ebp-60h]
  PlayerCharacter *v57; // [esp-4h] [ebp-60h]
  float v59[3]; // [esp+18h] [ebp-44h] BYREF
  int v60[11]; // [esp+24h] [ebp-38h] BYREF
  int v61; // [esp+58h] [ebp-4h]

  v14 = a1; /*0x64bbe7*/
  v15 = LODWORD(a6); /*0x64bbed*/
  if ( a6 == 0.0 ) /*0x64bbf3*/
    return 0; /*0x64bbf3*/
  v16 = a5; /*0x64bbf9*/
  ProcessLevel = Actor::GetProcessLevel(a5); /*0x64bc06*/
  if ( Actor::GetProcessLevel((Actor *)v15) != ProcessLevel && !v16->vtbl->super.super.GetNiNode((TESObjectREFR *)v16) ) /*0x64bc1b*/
    LowProcess_CreateCombatPackage(v14, v16, v15, a7, a8, a9, a10, a11, SLODWORD(a13), 0, 1); /*0x64bc49*/
  v18 = *(_DWORD *)v14; /*0x64bc52*/
  LOBYTE(a11) = a10; /*0x64bc54*/
  v19 = COERCE_FLOAT( /*0x64bc60*/
          (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(v18 + 0x184))(
            v14,
            a4,
            a3,
            a2));
  v20 = *(_DWORD *)v14; /*0x64bc62*/
  a6 = v19; /*0x64bc64*/
  (*(void (__thiscall **)(int))(v20 + 0x350))(v14); /*0x64bc70*/
  if ( Actor::GetDeadState((Concurrency::details::SchedulerBase *)v16) == (struct Concurrency::details::ScheduleGroupBase *)5 ) /*0x64bc7c*/
    return 0; /*0x64bc7c*/
  if ( Actor::GetDeadState((Concurrency::details::SchedulerBase *)v16) == (struct Concurrency::details::ScheduleGroupBase *)3 ) /*0x64bc8c*/
    return 0; /*0x64bc8c*/
  if ( ((int (__thiscall *)(Actor *))v16->vtbl->Unk_E2)(v16) ) /*0x64bc9c*/
    return 0; /*0x64bc9c*/
  if ( v16->vtbl->GetCombatController(v16) ) /*0x64bcb0*/
  {
    v21 = v16->vtbl->GetCombatController(v16); /*0x64bcc1*/
    if ( sub_613670(v21, v15) ) /*0x64bcc5*/
      return 0; /*0x64bccc*/
  }
  if ( v16->vtbl->GetCombatController(v16) /*0x64bd37*/
    || (_BYTE)a12
    || (v22 = *(_DWORD *)v14,
        *(float *)&a5 = 0.0,
        v23 = COERCE_FLOAT(
                (*(int (__usercall **)@<eax>(int@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))(v22 + 0xEC))(
                  v14,
                  1,
                  a4,
                  a3,
                  a2)),
        CombatSelection_EvaluateWeaponVsHandToHand(v14, a3, a4, v16, v23, (TESObjectREFR *)v15, (float *)&a5, 0, 1) != 7)
    || (SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0xD8]),
        *(float *)SafeFloatPointer >= (double)*(float *)&a5) )// Combat-package entry calls CombatSelection_EvaluateWeaponVsHandToHand; when it returns flee mode 7, its output score is compared with live fAICombatFleeScoreThreshold before normal combat admission.
  {
    if ( (PlayerCharacter *)v15 == reference && !(_BYTE)a12 ) /*0x64bdc3*/
    {
      if ( sub_660530(reference) >= stru_B36A78 ) /*0x64bdd0*/
        return 0; /*0x64bdd0*/
      ++reference->unk760[0x10]; /*0x64bddb*/
    }
    IsSwimming = Actor_IsSwimming((_DWORD *)v15); /*0x64bdeb*/
    if ( !Actor_CanFightInWater(v16) && IsSwimming ) /*0x64bdf8*/
      return 0; /*0x64bdf8*/
    if ( !sub_5E1E90(v16) ) /*0x64be07*/
      goto LABEL_36; /*0x64be07*/
    if ( IsSwimming ) /*0x64be0f*/
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 8))(v14) ) /*0x64be1c*/
      {
        v56 = (float *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v15 + 0x174))( /*0x64be35*/
                         v15,
                         a4,
                         a3,
                         a2);
        v28 = (NiPoint3 *)v16->vtbl->super.super.GetPos((TESObjectREFR *)v16); /*0x64be3e*/
        if ( !sub_689230((TESChildCELL *)v16, v28, v56) ) /*0x64be42*/
        {
          sub_67D760(v60); /*0x64be56*/
          v29 = *(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x174); /*0x64be5e*/
          v61 = 0; /*0x64be69*/
          v55 = (float *)v29(v15); /*0x64be75*/
          v30 = v16->vtbl->super.super.GetPos((TESObjectREFR *)v16); /*0x64be7e*/
          if ( ConnectedPointGraph_CanTraverseSegment((float *)v60, v30, v55, (TESObjectREFR *)v16, 0.0) /*0x64be93*/
            && !sub_67D650((int)v60, (TESObjectREFR *)v16) )
          {
            v61 = 0xFFFFFFFF; /*0x64bea0*/
            Shared_NoOpVirtual_60D0A0(v60); /*0x64bea8*/
            return 0; /*0x64bea8*/
          }
          v61 = 0xFFFFFFFF; /*0x64bec9*/
          Shared_NoOpVirtual_60D0A0(v60); /*0x64bed1*/
        }
      }
LABEL_36:
      v31 = *(char **)(v14 + 8); /*0x64bed6*/
      if ( v31 && TESPackage::IsTemporaryOverrideType(v31) ) /*0x64bedd*/
      {
        v32 = COERCE_FLOAT(ExtraDataList::GetExtraPackage(&v16->members.super.super.baseExtraList)); /*0x64beee*/
        a6 = v32; /*0x64bef0*/
      }
      else
      {
        v32 = a6; /*0x64bef6*/
      }
      (*(void (__usercall **)(int@<ecx>, float *, Actor *, _DWORD, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v14 + 0x70))( /*0x64bf09*/
        v14,
        v59,
        v16,
        0,
        a4,
        a3,
        a2);
      if ( v32 == 0.0 || (*(_DWORD *)(LODWORD(v32) + 0x1C) & 0x400000) == 0 || (_BYTE)a12 || LOBYTE(a13) ) /*0x64bf34*/
      {
        v40 = (int)v16->vtbl->GetCombatController(v16); /*0x64c09e*/
        vtbl = v16->vtbl; /*0x64c0a2*/
        if ( v40 ) /*0x64c0a6*/
        {
          v43 = vtbl->GetCombatController(v16); /*0x64c113*/
          if ( sub_613670(v43, v15) ) /*0x64c117*/
            return 1; /*0x64c342*/
        }
        else
        {
          vtbl->CleanupCurrentPackage(v16); /*0x64c0ae*/
          *(_DWORD *)(v14 + 0x48) = *(_DWORD *)(v14 + 0x44); /*0x64c0b3*/
          *(_DWORD *)(v14 + 0x44) = 0; /*0x64c0b8*/
          if ( Actor_IsGuardClass(v16) /*0x64c0fc*/
            || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v15 + 0x334))(v15, 1)
            && (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x330))(v15)
            && (v42 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x330))(v15), sub_613670(v42, (int)v16)) )
          {
            LOBYTE(a11) = 0; /*0x64c105*/
          }
        }
      }
      else
      {
        sub_566DB0((_DWORD *)LODWORD(v32)); /*0x64bf3c*/
        a13 = *(float *)&v33; /*0x64bf43*/
        v34 = (double)v33; /*0x64bf4a*/
        if ( v33 < 0 ) /*0x64bf51*/
          v34 = v34 + flt_A2FC78; /*0x64bf53*/
        a13 = v34; /*0x64bf59*/
        if ( a13 < 1.0 ) /*0x64bf6e*/
          a13 = flt_A57FB8; /*0x64bf76*/
        v35 = (PlayerCharacter *)OblivionDynamicCast( /*0x64bf98*/
                                   *(void **)(v14 + 0x2C),
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                   &Actor `RTTI Type Descriptor',
                                   0);
        v36 = *(_BYTE *)(LODWORD(a6) + 0x20); /*0x64bf9a*/
        if ( v36 == 1 || v36 == 2 || v36 == 7 ) /*0x64bfaa*/
        {
          if ( *(_BYTE *)(v14 + 0xD0) ) /*0x64bfac*/
          {
            v37 = v16->vtbl->super.super.GetPos((TESObjectREFR *)v16); /*0x64bfbf*/
            v59[0] = *v37; /*0x64bfc3*/
            v59[1] = v37[1]; /*0x64bfca*/
            v59[2] = v37[2]; /*0x64bfd1*/
          }
        }
        a4 = TESObjectREFR::GetDistanceToPoint((float *)v15, v59); /*0x64bfdc*/
        a3 = a13; /*0x64bfe1*/
        if ( a13 < a4 ) /*0x64bfef*/
        {
          if ( !v35 /*0x64c014*/
            || !v35->vtbl->super.GetCombatController((Actor *)v35)
            || (v38 = v35->vtbl->super.GetCombatController((Actor *)v35), !sub_613670(v38, v15)) )
          {
            if ( v35 != reference /*0x64c04c*/
              || !(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x330))(v15)
              || (v57 = reference,
                  v39 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x330))(v15),
                  !sub_613670(v39, (int)v57)) )
            {
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 0x8C))(v14, 1); /*0x64c061*/
              return 0; /*0x64c063*/
            }
          }
        }
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v14 + 0x8C))(v14, 0); /*0x64c074*/
        v16->vtbl->CleanupCurrentPackage(v16); /*0x64c080*/
        *(_DWORD *)(v14 + 0x48) = *(_DWORD *)(v14 + 0x44); /*0x64c085*/
        *(_DWORD *)(v14 + 0x44) = 0; /*0x64c088*/
      }
      (*(void (__usercall **)(int@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v14 + 0x14C))( /*0x64c133*/
        v14,
        a10,
        a4,
        a3,
        a2);
      if ( !unk_B333B8 ) /*0x64c135*/
      {
        v44 = COERCE_FLOAT(sub_67CF50((int ***)&qword_B3BB2C[0xA1], 0xC, v15)); /*0x64c14f*/
        v45 = 0; /*0x64c151*/
        a6 = v44; /*0x64c155*/
        if ( v44 == 0.0 ) /*0x64c159*/
          goto LABEL_81; /*0x64c159*/
        do /*0x64c237*/
        {
          v46 = *(int ***)LODWORD(v44); /*0x64c160*/
          if ( !*(_DWORD *)LODWORD(v44) ) /*0x64c160*/
            break; /*0x64c164*/
          v44 = *(float *)(LODWORD(v44) + 4); /*0x64c16a*/
          v45 = v46; /*0x64c16d*/
          a13 = v44; /*0x64c171*/
          if ( *(_BYTE *)(sub_67B6B0(v46, v15, 0) + 4) || (_BYTE)a10 ) /*0x64c193*/
          {
            sub_67CDB0(v45, v16, a10, 0xFFFFFFFF); /*0x64c230*/
          }
          else
          {
            v47 = (int ***)sub_67CF50((int ***)&qword_B3BB2C[0xA1], 0xC, (int)v16); /*0x64c1a6*/
            v45 = *v47; /*0x64c1a8*/
            if ( *v47 ) /*0x64c1a8*/
              sub_67CDB0(v45, (Actor *)v15, 1, 0xFFFFFFFF); /*0x64c1b5*/
            else
              v45 = 0; /*0x64c1bc*/
            BSSimpleList_Clear(v47); /*0x64c1c0*/
            FormHeapFree((unsigned int)v47); /*0x64c1c6*/
            v44 = a13; /*0x64c1cb*/
          }
        }
        while ( v44 != 0.0 ); /*0x64c237*/
        if ( !v45 ) /*0x64c23f*/
        {
LABEL_81:
          *(float *)&v48 = COERCE_FLOAT(FormHeapAlloc(0x24u)); /*0x64c243*/
          a13 = *(float *)&v48; /*0x64c24b*/
          v61 = 1; /*0x64c254*/
          if ( *(float *)&v48 == 0.0 ) /*0x64c25c*/
            v49 = 0; /*0x64c269*/
          else
            v49 = sub_67CBC0(v48);              // RadiantAI cut/beta review: active combat-package path constructs SpectatorPackage state via sub_67CBC0 at 0x64C260. /*0x64c265*/
          v61 = 0xFFFFFFFF; /*0x64c271*/
          *((_DWORD *)v49 + 3) = 0xC; /*0x64c279*/
          sub_67BF80(&qword_B3BB2C[0xA1], (int)v49); /*0x64c280*/
          v50 = a10; /*0x64c285*/
          sub_67CDB0((int **)v49, v16, a10, 0xFFFFFFFF);// MiddleHighProcess_StartCombatPackage builds package/list entries for combat target; sub_67CDB0 appends actor/target entries with priority/alert state. /*0x64c28f*/
          sub_67CDB0((int **)v49, (Actor *)v15, v50 == 0, 0xFFFFFFFF); /*0x64c29f*/
        }
        v51 = LODWORD(a6); /*0x64c2a4*/
        BSSimpleList_Clear((_DWORD *)LODWORD(a6)); /*0x64c2aa*/
        FormHeapFree(v51); /*0x64c2b0*/
        v14 = a1; /*0x64c2b5*/
      }
      v52 = 0; /*0x64c2c0*/
      if ( (_BYTE)a12 ) /*0x64c2c4*/
        v52 = 0xC8; /*0x64c2c6*/
      v53 = *(_DWORD *)(v14 + 8); /*0x64c2cb*/
      LOBYTE(a10) = 0; /*0x64c2d0*/
      if ( v53 ) /*0x64c2d5*/
      {
        if ( *(_BYTE *)(v53 + 0x20) == 4 /*0x64c2ef*/
          || (v54 = *(_DWORD *)(v53 + 0x1C), (v54 & 0x200000) != 0)
          || (v54 & 0x100000) != 0 )
        {
          LOBYTE(a10) = 1; /*0x64c2f1*/
        }
      }
      ((void (__thiscall *)(Actor *, int, int, int, int, int, int))v16->vtbl->Unk_CB)(v16, v15, a12, a11, a8, v52, a14); /*0x64c318*/
      if ( (PlayerCharacter *)v15 == reference ) /*0x64c322*/
        sub_65DF40(reference, (int)v16); /*0x64c325*/
      if ( (_BYTE)a10 ) /*0x64c32f*/
        (*(void (__thiscall **)(int, Actor *, _DWORD, _DWORD))(*(_DWORD *)v14 + 0x588))(v14, v16, 0, 0); /*0x64c340*/
      return 1; /*0x64c340*/
    }
    return 0; /*0x64bec2*/
  }
  if ( v16->vtbl->GetMountedHorse(v16) || ((int (__thiscall *)(Actor *))v16->vtbl->Unk_E2)(v16) ) /*0x64bd53*/
  {
    if ( Actor::GetCurrentPackage(v16) ) /*0x64bd5b*/
    {
      v25 = *(_DWORD *)(LODWORD(a6) + 0x18); /*0x64bd6a*/
      if ( !*(_DWORD *)(*(_DWORD *)(4 * v25 + 0xB152B0) + 4 * (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x180))(v14)) ) /*0x64bd82*/
        return 0; /*0x64bd82*/
    }
  }
  ((void (__thiscall *)(Actor *, int, int, int, _DWORD, _DWORD))v16->vtbl->Unk_C6)(v16, v15, 1, 1, 0, 0); /*0x64bd9b*/
  if ( (PlayerCharacter *)v15 == reference ) /*0x64bda5*/
    sub_65DF40(reference, (int)v16); /*0x64bda8*/
  return 1; /*0x64beaf*/
}
