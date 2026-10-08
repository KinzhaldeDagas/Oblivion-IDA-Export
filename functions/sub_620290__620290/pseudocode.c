// Evaluates close-combat alternatives while mode +0x74 is 3: caches target surface distance, checks desired range and animation/action state, scores equipped-weapon, magic, and unarmed choices, then starts an action or changes combat mode. Its caller supplies one stack flag that is unused in this build; apparent EBX/EBP/EDI/x87 parameters were decompiler artifacts.
void __thiscall CombatController_EvaluateCloseCombatOptions(void *this, int unusedModeFlag)
{
  int v2; // ebx
  int v3; // edi
  bool v5; // c0
  bool v6; // c3
  int *v7; // edi
  TESObjectREFR *CurrentTarget; // eax
  char v9; // bl
  int v10; // edi
  double DesiredCombatDistance; // st7
  int v12; // ecx
  ActorAnimData *v13; // eax
  unsigned __int16 AnimGroupFromField8Value; // ax
  bool v15; // al
  int v16; // ecx
  ActorAnimData *v17; // eax
  _DWORD **v18; // eax
  _DWORD **v19; // eax
  _DWORD **v20; // eax
  _DWORD **v21; // eax
  int v22; // eax
  _DWORD *v23; // eax
  void **v24; // ebp
  bool v25; // bl
  int v26; // eax
  void *v27; // edi
  int v28; // ebp
  char v29; // al
  float v30; // edx
  int *EffectiveCombatStyle; // eax
  int *v32; // ecx
  int v33; // eax
  int *v34; // edi
  int v35; // ebp
  int *v36; // eax
  void *v37; // edi
  int *v38; // eax
  int v39; // eax
  int v40; // eax
  Concurrency::details::SchedulerBase *v41; // eax
  _DWORD **v42; // eax
  Concurrency::details::SchedulerBase *v43; // eax
  _DWORD **v44; // eax
  double v45; // st7
  double v46; // st6
  double v47; // st5
  bool v48; // zf
  double v49; // rt1
  double v50; // st5
  int v51; // edi
  double v52; // st7
  ActorAnimData *v53; // eax
  int v54; // eax
  int v55; // eax
  double v56; // st7
  bool v57; // c0
  double v58; // st6
  double v59; // st5
  int v60; // ebp
  double v61; // rtt
  double v62; // st6
  double v63; // st7
  int v64; // edi
  double v65; // st7
  double v66; // st6
  double v67; // st5
  double v68; // st7
  int v69; // ebx
  int v70; // eax
  float *v71; // ecx
  double v72; // st7
  double v73; // st6
  double (__thiscall **v74)(int, int, int, _DWORD); // edi
  int v75; // eax
  double v76; // st7
  int v77; // eax
  double v78; // st6
  int v79; // eax
  void *v80; // eax
  int v81; // eax
  void *v82; // ecx
  int *v83; // edi
  int *v84; // ebx
  int WeaponSkillLevel; // [esp+24h] [ebp-64h]
  int v86; // [esp+24h] [ebp-64h]
  int v87; // [esp+28h] [ebp-60h]
  int SchoolAV; // [esp+28h] [ebp-60h]
  SInt32 v89; // [esp+28h] [ebp-60h]
  char v90; // [esp+2Ch] [ebp-5Ch]
  char surfaceDistance; // [esp+30h] [ebp-58h]
  float surfaceDistancea; // [esp+30h] [ebp-58h]
  float maximumDistance; // [esp+34h] [ebp-54h]
  float maximumDistancea; // [esp+34h] [ebp-54h]
  int v95; // [esp+3Ch] [ebp-4Ch]
  char v96; // [esp+3Ch] [ebp-4Ch]
  int v97; // [esp+40h] [ebp-48h]
  char v98; // [esp+48h] [ebp-40h]
  char v99; // [esp+49h] [ebp-3Fh]
  char v100; // [esp+4Bh] [ebp-3Dh]
  float v101; // [esp+4Ch] [ebp-3Ch]
  float v102; // [esp+50h] [ebp-38h]
  char v103; // [esp+52h] [ebp-36h]
  float v104; // [esp+54h] [ebp-34h]
  double v105; // [esp+5Ch] [ebp-2Ch] BYREF
  char v106[8]; // [esp+64h] [ebp-24h]
  float v107; // [esp+6Ch] [ebp-1Ch]
  float targetKnockedDown; // [esp+70h] [ebp-18h]
  float targetAttacking; // [esp+74h] [ebp-14h]
  double targetStaggered; // [esp+78h] [ebp-10h]
  double v111; // [esp+80h] [ebp-8h]
  float v112; // [esp+94h] [ebp+Ch]

  if ( *((_DWORD *)this + 0x1D) != 3 ) /*0x62029a*/
    return; /*0x62029a*/
  if ( !CombatController_GetCurrentTarget((int)this) ) /*0x6202a0*/
    return; /*0x6202a0*/
  v97 = v3; /*0x6202af*/
  v5 = *((float *)this + 0x61) > 0.0; /*0x6202b0*/
  v6 = 0.0 == *((float *)this + 0x61); /*0x6202b0*/
  *((_DWORD *)this + 0x14) = 0xFF; /*0x6202b6*/
  if ( !v5 && !v6 ) /*0x6202bf*/
  {
    v7 = *((int **)this + 0xF); /*0x6202c4*/
    CurrentTarget = (TESObjectREFR *)CombatController_GetCurrentTarget((int)this); /*0x6202cb*/
    *((float *)this + 0x61) = TESObjectREFR_GetSurfaceDistance(v7, (TESObjectREFR *)v7, CurrentTarget, 0, v97); /*0x6202d7*/
  }
  v95 = v2; /*0x6202e6*/
  v9 = unusedModeFlag; /*0x6202e7*/
  targetAttacking = *((float *)this + 0x61); /*0x6202eb*/
  if ( (_BYTE)unusedModeFlag ) /*0x6202f1*/
  {
    v10 = *((_DWORD *)this + 0xF); /*0x6202f3*/
    targetStaggered = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)v10 + 0x26C))(v10, v95); /*0x620302*/
    DesiredCombatDistance = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v10 + 0xEC))(v10) * targetStaggered; /*0x620312*/
  }
  else
  {
    DesiredCombatDistance = CombatController_GetDesiredCombatDistance(this); /*0x62031a*/
  }
  v12 = *((_DWORD *)this + 0xF); /*0x62031f*/
  v107 = DesiredCombatDistance; /*0x620322*/
  v13 = (ActorAnimData *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v12 + 0x164))(v12, 3); /*0x620330*/
  AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v13, v95); /*0x620334*/
  v15 = AnimGroup_UsesAttackOrCastNoteTemplate(AnimGroupFromField8Value); /*0x62033a*/
  v16 = *((_DWORD *)this + 0xF); /*0x62033f*/
  LOBYTE(targetAttacking) = v15; /*0x620342*/
  v17 = (ActorAnimData *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x164))(v16); /*0x620353*/
  BYTE1(v101) = ActorAnimData_GetSlotActionState(v17, 3) == 2; /*0x620362*/
  HIBYTE(v101) = Actor_GetCurrentAction(*((_DWORD ***)this + 0xF)) == 3; /*0x620372*/
  if ( Actor_GetCurrentAction(*((_DWORD ***)this + 0xF)) == 7 /*0x620391*/
    || (LOBYTE(v101) = 0, Actor_GetCurrentAction(*((_DWORD ***)this + 0xF)) == 8) )
  {
    LOBYTE(v101) = 1; /*0x620393*/
  }
  v18 = (_DWORD **)CombatController_GetCurrentTarget((int)this); /*0x62039a*/
  LOBYTE(v107) = Actor_IsCurrentActionInRange2To5(v18); /*0x6203a8*/
  v19 = (_DWORD **)CombatController_GetCurrentTarget((int)this); /*0x6203ac*/
  BYTE4(targetStaggered) = Actor_GetCurrentAction(v19) == 3; /*0x6203c0*/
  v20 = (_DWORD **)CombatController_GetCurrentTarget((int)this); /*0x6203c4*/
  if ( Actor_GetCurrentAction(v20) == 7 /*0x6203eb*/
    || (v21 = (_DWORD **)CombatController_GetCurrentTarget((int)this), v106[4] = 0, Actor_GetCurrentAction(v21) == 8) )
  {
    v106[4] = 1; /*0x6203ed*/
  }
  v22 = CombatController_GetCurrentTarget((int)this); /*0x6203f4*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v22 + 0x334))(v22, 1); /*0x620405*/
  v23 = (_DWORD *)CombatController_GetCurrentTarget((int)this); /*0x62040d*/
  Actor_IsBlocking(v23); /*0x620414*/
  CombatController_GetEquippedWeaponForm(this); /*0x62041f*/
  if ( !CombatController_IsTargetWithinRangedDistance(this, targetAttacking, v107, 0) ) /*0x62043a*/
    return; /*0x620441*/
  v24 = (void **)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*((_DWORD *)this + 0xF) + 0x58) + 0xF8))( /*0x620462*/
                   *(_DWORD *)(*((_DWORD *)this + 0xF) + 0x58),
                   1);
  *(_DWORD *)v106 = v24; /*0x620464*/
  v25 = v9 && !CombatController_GetEquippedWeaponForm(this); /*0x620479*/
  if ( !LOBYTE(v112) && (CombatController_GetEquippedWeaponForm(this) || !*((_DWORD *)this + 0x1C)) || v25 ) /*0x620494*/
  {
    v26 = CombatController_GetCurrentTarget((int)this); /*0x620498*/
    v27 = *((void **)this + 0xF); /*0x6204a3*/
    v28 = *((_DWORD *)this + 0x1C); /*0x6204a6*/
    v29 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v26 + 0x19C))(v26, LODWORD(v105)); /*0x6204b2*/
    LOBYTE(v30) = v28 == 0; /*0x6204ba*/
    v96 = v29; /*0x6204bd*/
    maximumDistance = v30; /*0x6204c5*/
    v87 = (*(int (__thiscall **)(void *))(*(_DWORD *)v27 + 0x284))(v27); /*0x6204d3*/
    WeaponSkillLevel = CombatController_GetWeaponSkillLevel(this); /*0x6204db*/
    EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(v27); /*0x6204de*/
    CombatStyle_CalculateAttackScore( /*0x6204e4*/
      EffectiveCombatStyle,
      WeaponSkillLevel,
      v87,
      7,
      targetAttacking,
      maximumDistance,
      targetKnockedDown,
      v96);
    v24 = *(void ***)v106; /*0x6204ed*/
  }
  v32 = *((int **)this + 0x1F); /*0x6204f6*/
  v112 = 0.0; /*0x6204fb*/
  if ( v32 ) /*0x6204ff*/
  {
    if ( *((float *)this + 0x42) < *((float *)this + 0x11) - *((float *)this + 0x41) ) /*0x62051b*/
    {
      if ( CombatController_CanUseSpellAgainstCurrentTarget(this, v32, 0, 0) ) /*0x620524*/
      {
        v33 = CombatController_GetCurrentTarget((int)this); /*0x62052f*/
        v34 = *((int **)this + 0xF); /*0x620536*/
        v35 = *v34; /*0x620539*/
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v33 + 0x19C))(v33, 0, v97); /*0x620545*/
        v90 = (*(int (__thiscall **)(int *))(*v34 + 0x284))(v34); /*0x620562*/
        SchoolAV = EffectItemList_GetSchoolAV(); /*0x620576*/
        v86 = (*(int (__thiscall **)(int *))(v35 + 0x284))(v34); /*0x62057b*/
        v36 = Actor_GetEffectiveCombatStyle(v34); /*0x62057e*/
        v112 = CombatStyle_CalculateAttackScore( /*0x620589*/
                 v36,
                 v86,
                 SchoolAV,
                 v90,
                 COERCE_FLOAT(7),
                 *(float *)&targetStaggered,
                 0.0,
                 SLOBYTE(targetAttacking));
        v24 = *(void ***)v106; /*0x62058d*/
      }
    }
  }
  if ( !v103 && (PlayerCharacter *)CombatController_GetCurrentTarget((int)this) != reference ) /*0x6205a8*/
  {
    if ( *((_DWORD *)this + 0x1F) ) /*0x6205aa*/
    {
      if ( v112 > 0.0 ) /*0x6205d1*/
        v112 = fCostant_100 + v112; /*0x6205d5*/
    }
  }
  v37 = *((void **)this + 0xF); /*0x6205e3*/
  surfaceDistance = (*(int (__thiscall **)(void *))(*(_DWORD *)v37 + 0x284))(v37); /*0x6205fd*/
  v89 = (*(int (__thiscall **)(void *))(*(_DWORD *)v37 + 0x284))(v37); /*0x62060a*/
  v38 = Actor_GetEffectiveCombatStyle(v37); /*0x62060d*/
  v102 = sub_546D40(v38, v89, 0xF, surfaceDistance, COERCE_FLOAT(7)); /*0x620618*/
  if ( v100 ) /*0x620624*/
    *(float *)&unusedModeFlag = 0.0; /*0x620628*/
  v39 = CombatController_GetCurrentTarget((int)this); /*0x62062e*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v39 + 0x1A0))(v39) /*0x62069b*/
    || (v40 = CombatController_GetCurrentTarget((int)this),
        (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v40 + 0x19C))(v40))
    || (v41 = (Concurrency::details::SchedulerBase *)CombatController_GetCurrentTarget((int)this),
        Actor::GetDeadState(v41) == (struct Concurrency::details::ScheduleGroupBase *)3)
    || (v42 = (_DWORD **)CombatController_GetCurrentTarget((int)this), Actor::IsSleeping(v42))
    || (v43 = (Concurrency::details::SchedulerBase *)CombatController_GetCurrentTarget((int)this),
        Actor::GetDeadState(v43) == (struct Concurrency::details::ScheduleGroupBase *)5)
    || (v44 = (_DWORD **)CombatController_GetCurrentTarget((int)this), !Actor_IsWeaponOut(v44)) )
  {
    v45 = 0.0; /*0x6206a4*/
    v102 = 0.0; /*0x6206a6*/
  }
  else
  {
    v45 = 0.0; /*0x6206ac*/
  }
  v46 = v101; /*0x6206b2*/
  if ( !LOBYTE(targetKnockedDown) || (v47 = *(float *)&unusedModeFlag, *(float *)&unusedModeFlag >= v46) ) /*0x6206c5*/
  {
    v45 = 0.0; /*0x6206dd*/
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 0xF) + 0x58) + 0x2DC))(*(_DWORD *)(*((_DWORD *)this + 0xF) + 0x58)) ) /*0x6206e1*/
    {
LABEL_48:
      v48 = *((_BYTE *)this + 0x158) == 0; /*0x6206f8*/
      v101 = v45; /*0x6206ff*/
      *(float *)&unusedModeFlag = v45; /*0x620703*/
      if ( v48 ) /*0x620707*/
        v102 = v45; /*0x620709*/
      v46 = v101; /*0x62070d*/
      goto LABEL_60; /*0x620711*/
    }
    v46 = v101; /*0x6206e3*/
    v47 = *(float *)&unusedModeFlag; /*0x6206e7*/
  }
  if ( !*((_BYTE *)this + 0x158) ) /*0x6206eb*/
    goto LABEL_48; /*0x6206f2*/
  if ( v47 > v45 ) /*0x62071d*/
  {
    v49 = v47; /*0x620723*/
    v50 = v46; /*0x620723*/
    v46 = v49; /*0x620723*/
    if ( v50 > v45 ) /*0x62072c*/
    {
      LODWORD(v105) = Double_To_SInt32(v45); /*0x620759*/
      v51 = Double_To_SInt32(v45); /*0x620766*/
      if ( v51 ) /*0x62076a*/
      {
        if ( v46 <= v50 ) /*0x62077d*/
        {
          *(float *)&unusedModeFlag = (double)(Game_RandomLargeInteger(0) % v51) + *(float *)&unusedModeFlag; /*0x6207ce*/
          LODWORD(v105) = Game_RandomLargeInteger(0) % v51; /*0x6207e5*/
          v52 = v101 - (double)SLODWORD(v105); /*0x6207ed*/
        }
        else
        {
          v105 = v46; /*0x62077f*/
          *(float *)&unusedModeFlag = v46 - (double)(Game_RandomLargeInteger(0) % v51); /*0x620799*/
          LODWORD(v105) = Game_RandomLargeInteger(0) % v51; /*0x6207a8*/
          v52 = (double)SLODWORD(v105) + v101; /*0x6207b0*/
        }
        v101 = v52; /*0x6207f1*/
        v46 = *(float *)&unusedModeFlag; /*0x6207f9*/
        v50 = v101; /*0x6207ff*/
        v45 = 0.0; /*0x6207ff*/
      }
      if ( v50 >= v46 ) /*0x620808*/
        v46 = v50; /*0x62080a*/
    }
  }
LABEL_60:
  v104 = v46; /*0x620810*/
  if ( LOBYTE(targetKnockedDown) && !v99 || *((_DWORD *)this + 0x1B) == 4 || v98 ) /*0x62082a*/
    v102 = v45; /*0x62082c*/
  if ( !(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xF) + 0x164))(*((_DWORD *)this + 0xF)) /*0x620856*/
    || (v53 = (ActorAnimData *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xF) + 0x164))(*((_DWORD *)this + 0xF)),
        !ActorAnimData_HasAnimKey(v53, 0x1Bu)) )
  {
    v102 = 0.0; /*0x620861*/
  }
  if ( !v24 /*0x620893*/
    && (v54 = CombatController_GetCurrentTarget((int)this),
        (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v54 + 0x58) + 0x138))(*(_DWORD *)(v54 + 0x58)))
    || (v55 = CombatController_GetCurrentTarget((int)this),
        (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v55 + 0x58) + 0x13C))(*(_DWORD *)(v55 + 0x58))) )
  {
    v56 = 0.0; /*0x620899*/
    v102 = 0.0; /*0x62089b*/
  }
  else
  {
    v56 = 0.0; /*0x6208a1*/
  }
  if ( v24 ) /*0x6208a5*/
  {
    if ( v56 < v102 ) /*0x6208b0*/
    {
      v57 = ContainerEntryExtraData_GetHealth(v24, 0) > 0.0; /*0x6208bf*/
      v56 = 0.0; /*0x6208c3*/
      if ( !v57 ) /*0x6208c8*/
        v102 = 0.0; /*0x6208ca*/
    }
  }
  v58 = v102 + v104; /*0x6208d2*/
  v111 = v58; /*0x6208d6*/
  v59 = fCostant_100 - v58; /*0x6208e0*/
  if ( g_GameSettingStringPointers_B36CD8[0x114] >= v59 ) /*0x6208ef*/
    v59 = g_GameSettingStringPointers_B36CD8[0x114]; /*0x6208f5*/
  v60 = 1; /*0x6208f7*/
  *(float *)&v105 = v59; /*0x6208fc*/
  if ( *((_DWORD *)this + 0x1B) == 1 ) /*0x620903*/
    *(float *)&v105 = v56; /*0x620907*/
  if ( LOBYTE(targetKnockedDown) ) /*0x62090f*/
  {
    if ( !v99 ) /*0x620916*/
      *(float *)&v105 = v56; /*0x62091a*/
  }
  if ( *((_DWORD *)this + 0x1E) == 2 ) /*0x620928*/
  {
    v61 = v58; /*0x62092a*/
    v62 = v56; /*0x62092a*/
    v63 = v61; /*0x62092a*/
    *(float *)&v105 = v62; /*0x62092c*/
  }
  else
  {
    v63 = v58; /*0x620932*/
  }
  v64 = Double_To_SInt32(v63 + *(float *)&v105); /*0x62093f*/
  if ( v64 <= 0 ) /*0x620941*/
    v64 = 0x64; /*0x620943*/
  *(float *)&v105 = (float)(Game_RandomLargeInteger(0) % v64); /*0x62095d*/
  v65 = *(float *)&v105; /*0x620961*/
  v66 = v104; /*0x620965*/
  if ( v104 <= (double)*(float *)&v105 || (v67 = v101, *(float *)&unusedModeFlag > (double)v101) ) /*0x620985*/
  {
    if ( v66 <= v65 /*0x620af5*/
      || (v78 = *(float *)&unusedModeFlag, v101 >= (double)*(float *)&unusedModeFlag)
      || LOBYTE(targetKnockedDown) )
    {
      if ( v102 <= 0.0 || v65 >= v111 ) /*0x620b99*/
      {
        if ( *((_DWORD *)this + 0x1E) != 2 ) /*0x620bbc*/
        {
          *((_DWORD *)this + 0x1E) = *((_DWORD *)this + 0x1D); /*0x620bc1*/
          v82 = *((void **)this + 0xF); /*0x620bc4*/
          *((_DWORD *)this + 0x1D) = 2; /*0x620bc7*/
          v83 = Actor_GetEffectiveCombatStyle(v82); /*0x620bd2*/
          v84 = Actor_GetEffectiveCombatStyle(*((void **)this + 0xF)); /*0x620bdb*/
          maximumDistancea = ((double (__thiscall *)(int *))*(_DWORD *)(*v83 + 0x140))(v83); /*0x620bf2*/
          surfaceDistancea = ((double (__thiscall *)(int *))*(_DWORD *)(*v84 + 0x13C))(v84); /*0x620bf8*/
          *(float *)&unusedModeFlag = RandomFloatBetween(surfaceDistancea, maximumDistancea); /*0x620c00*/
          *((float *)this + 0x38) = *((float *)this + 0x11); /*0x620c0a*/
          *((float *)this + 0x39) = *(float *)&unusedModeFlag; /*0x620c14*/
          *((float *)this + 0x3A) = kTerrainLODQuadRayDirectionZ; /*0x620c20*/
        }
      }
      else
      {
        Actor_UpdateBlockingState(*((Actor **)this + 0xF), 1); /*0x620b9f*/
        v81 = *((_DWORD *)this + 0x1D); /*0x620ba4*/
        *((_DWORD *)this + 0x1D) = 1; /*0x620ba7*/
        *((_DWORD *)this + 0x1E) = v81; /*0x620bad*/
      }
    }
    else
    {
      if ( *((_BYTE *)this + 0x49) ) /*0x620afb*/
      {
        Actor_UpdateBlockingState(*((Actor **)this + 0xF), 0); /*0x620b08*/
        if ( *((_DWORD *)this + 0x1D) == 1 ) /*0x620b10*/
        {
          *((_DWORD *)this + 0x1E) = 1; /*0x620b12*/
          *((_DWORD *)this + 0x1D) = 3; /*0x620b15*/
        }
      }
      v79 = CombatController_GetCurrentTarget((int)this); /*0x620b1e*/
      if ( v79 ) /*0x620b25*/
        v80 = (void *)(v79 + 0x68); /*0x620b27*/
      else
        v80 = 0; /*0x620b2c*/
      if ( CombatController_TryUseMagicItem((int)this, v101, v78, v65, *((int **)this + 0x1F), v80) ) /*0x620b35*/
      {
        unusedModeFlag = *((int *)this + 0x11); /*0x620b4a*/
        *(float *)&targetStaggered = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x184]); /*0x620b56*/
        *((float *)this + 0x41) = *(float *)&unusedModeFlag; /*0x620b60*/
        *((float *)this + 0x42) = *(float *)&targetStaggered; /*0x620b6a*/
        *((float *)this + 0x43) = kTerrainLODQuadRayDirectionZ; /*0x620b76*/
      }
    }
  }
  else
  {
    if ( *((_BYTE *)this + 0x49) ) /*0x62098b*/
    {
      Actor_UpdateBlockingState(*((Actor **)this + 0xF), 0); /*0x62099a*/
      if ( *((_DWORD *)this + 0x1D) == 1 ) /*0x6209a2*/
      {
        *((_DWORD *)this + 0x1E) = 1; /*0x6209a4*/
        *((_DWORD *)this + 0x1D) = 3; /*0x6209a7*/
      }
    }
    v68 = targetAttacking; /*0x6209d8*/
    LOBYTE(unusedModeFlag) = 0; /*0x6209dc*/
    LOBYTE(v105) = 0; /*0x6209e5*/
    v69 = sub_61F8F0( /*0x6209ef*/
            (int)this,
            1,
            v67,
            SLOBYTE(targetKnockedDown),
            targetAttacking,
            v107,
            *(int *)&v106[4],
            SLODWORD(targetStaggered),
            v106[0],
            (bool *)&unusedModeFlag,
            &v105);
    if ( v69 != 0xFF && !*((_BYTE *)this + 0x159) ) /*0x6209fd*/
    {
      v70 = CombatController_GetCurrentTarget((int)this); /*0x620a0c*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v70 + 0x154))(v70) ) /*0x620a1b*/
      {
        CombatController_ApplySelectedPoisonToWeapon((int)this, 1, v67, v66, v68); /*0x620a27*/
        v71 = &g_GameSettingStringPointers_B36CD8[0x9A]; /*0x620a31*/
        if ( !(_BYTE)unusedModeFlag ) /*0x620a36*/
          v71 = &g_GameSettingStringPointers_B36CD8[0x98]; /*0x620a38*/
        targetAttacking = *(float *)GameSetting_GetSafeFloatPointer((int *)v71); /*0x620a46*/
        LODWORD(targetStaggered) = Game_RandomLargeInteger(0); /*0x620a4f*/
        v72 = (double)SLODWORD(targetStaggered) / dbl_A3D5A8; /*0x620a5a*/
        v73 = targetAttacking; /*0x620a60*/
        if ( targetAttacking >= v72 ) /*0x620a6b*/
        {
          v60 = *((_DWORD *)this + 0xF); /*0x620a6d*/
          v74 = (double (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v60 + 0x308); /*0x620a73*/
          if ( (_BYTE)unusedModeFlag ) /*0x620a82*/
          {
            v75 = CombatController_GetCurrentTarget((int)this); /*0x620a86*/
            v76 = (*v74)(v60, v75, 0xA, 0); /*0x620a90*/
            CombatController_TryStartAttackAction((int)this, v69, v60, v73, v76, v69, SLOBYTE(v105)); /*0x620a9a*/
            return; /*0x620aa6*/
          }
          v77 = CombatController_GetCurrentTarget((int)this); /*0x620aab*/
          v72 = (*v74)(v60, v77, 0, 0); /*0x620ab5*/
        }
        CombatController_TryStartAttackAction((int)this, v69, v60, v73, v72, v69, SLOBYTE(v105)); /*0x620abf*/
      }
    }
  }
}
