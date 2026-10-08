// Six-argument cdecl combat-choice evaluator. skipFleeAndYieldEvaluation nonzero skips the entire flee/yield block; allowYieldEvaluation gates only the yield portion when that block runs. These are control flags, not allowYield/hasYieldIdle. Any additional throwing-weapon scoring multipliers are external emulation policy, not observed here.
int __cdecl CombatSelection_EvaluateWeaponVsHandToHand(
        Actor *actor,
        EntryData *equippedEntry,
        TESObjectREFR *target,
        float *outScore,
        bool skipFleeAndYieldEvaluation,
        bool allowYieldEvaluation)
{
  SInt32 v6; // edi
  double v7; // st5
  double v8; // st6
  double v9; // st7
  int *EffectiveCombatStyle; // eax
  CombatController *v12; // eax
  TESObjectREFR *v13; // edi
  CombatController *v14; // edi
  Actor *CurrentTarget; // eax
  LowProcess *process; // ecx
  char v17; // al
  EntryData *v18; // ebx
  _DWORD *v19; // ebp
  int v20; // eax
  double (__thiscall ***v21)(_DWORD, _DWORD); // edi
  CombatController *v22; // edi
  bool v23; // bl
  unsigned __int16 AnimGroup; // ax
  int v25; // edi
  ActorAnimData *v26; // eax
  AVCode WeaponSkillAV; // ebx
  EntryData *v28; // eax
  char v29; // al
  int v31; // ebp
  int v32; // eax
  double v33; // st7
  int v34; // eax
  bool v35; // dl
  EntryData *BaseCalcAVi; // eax
  ActorVtbl *vtbl; // edx
  int *v38; // eax
  TESObjectREFR *v39; // edi
  int *v40; // eax
  int v41; // eax
  float v42; // [esp+24h] [ebp-3Ch]
  float v43; // [esp+28h] [ebp-38h]
  int v44; // [esp+2Ch] [ebp-34h]
  int v45; // [esp+30h] [ebp-30h]
  SInt32 v46; // [esp+30h] [ebp-30h]
  SInt32 v47; // [esp+34h] [ebp-2Ch]
  char v48; // [esp+44h] [ebp-1Ch]
  bool IsSwimming; // [esp+45h] [ebp-1Bh]
  char v50; // [esp+46h] [ebp-1Ah]
  char v51; // [esp+47h] [ebp-19h]
  float v52; // [esp+48h] [ebp-18h]
  int v53; // [esp+4Ch] [ebp-14h]
  EntryData *v54; // [esp+50h] [ebp-10h]
  double Charge; // [esp+58h] [ebp-8h] BYREF
  char actora; // [esp+64h] [ebp+4h]

  v9 = kTerrainLODQuadRayDirectionZ; /*0x621b43*/
  v52 = kTerrainLODQuadRayDirectionZ; /*0x621b4b*/
  v47 = v6; /*0x621b54*/
  v53 = 0xD; /*0x621b57*/
  EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(actor); /*0x621b5f*/
  v50 = (*(int (__thiscall **)(int *, int))(*EffectiveCombatStyle + 0x16C))(EffectiveCombatStyle, 0x40); /*0x621b74*/
  IsSwimming = Actor_IsSwimming(actor); /*0x621b7f*/
  v12 = actor->vtbl->GetCombatController(actor); /*0x621b8b*/
  v13 = target; /*0x621b8f*/
  if ( v12 ) /*0x621b93*/
  {
    v14 = actor->vtbl->GetCombatController(actor); /*0x621ba1*/
    if ( !CombatController_GetCurrentTarget((int)v14) /*0x621bcf*/
      || (CurrentTarget = (Actor *)CombatController_GetCurrentTarget((int)v14), !Actor_IsSwimming(CurrentTarget))
      || Actor_IsSwimming(*((Actor **)v14 + 0xF))
      || Actor_CanFightInWater(*((void **)v14 + 0xF)) )
    {
      actora = *((_BYTE *)v14 + 0x174); /*0x621be4*/
    }
    else
    {
      actora = 0; /*0x621bd8*/
    }
  }
  else
  {
    process = actor->members.super.process; /*0x621bea*/
    if ( process ) /*0x621bef*/
      v17 = ((int (__thiscall *)(LowProcess *, Actor *, TESObjectREFR *))process->Unk_70)(process, actor, target); /*0x621bfb*/
    else
      v17 = Actor_LineOfSight(actor, v9, 0, target, 1, 0, 0); /*0x621c0a*/
    actora = sub_617590((TESChildCELL *)actor, v13, v17); /*0x621c1a*/
  }
  v18 = equippedEntry; /*0x621c1e*/
  if ( *(float *)&equippedEntry == 0.0 ) /*0x621c24*/
  {
    v18 = actor->members.super.process->GetEquippedWeaponData(actor->members.super.process, 1); /*0x621c3b*/
    v54 = v18; /*0x621c3d*/
  }
  else
  {
    v54 = equippedEntry; /*0x621c26*/
  }
  if ( !v18 ) /*0x621c43*/
  {
    v19 = 0; /*0x621d00*/
    goto LABEL_17; /*0x621d02*/
  }
  v19 = OblivionDynamicCast( /*0x621c60*/
          v18->type,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESObjectWEAP `RTTI Type Descriptor',
          0);
  if ( !v19 ) /*0x621c67*/
  {
LABEL_17:
    if ( !actor->vtbl->GetCombatController(actor) ) /*0x621c73*/
      goto LABEL_23; /*0x621c73*/
    v18 = 0; /*0x621c81*/
    v54 = 0; /*0x621c85*/
    v19 = *((_DWORD **)actor->vtbl->GetCombatController(actor) + 0x2A); /*0x621c8b*/
    if ( !v19 ) /*0x621c93*/
      goto LABEL_23; /*0x621c93*/
  }
  if ( *((_BYTE *)v19 + 0x90) == 4 ) /*0x621c9c*/
  {
    v20 = v19[0x19]; /*0x621c9e*/
    if ( v20 ) /*0x621ca3*/
    {
      v21 = (double (__thiscall ***)(_DWORD, _DWORD))(v20 + 0x24); /*0x621ca7*/
      Charge = EquippedEntryData_GetCharge(v18); /*0x621caf*/
      v9 = (**v21)(v21, 0); /*0x621cbb*/
      if ( v9 > Charge ) /*0x621cc6*/
      {
        v18 = 0; /*0x621cc8*/
        v54 = 0; /*0x621cca*/
        v19 = 0; /*0x621cce*/
      }
    }
  }
LABEL_23:
  v22 = actor->vtbl->GetCombatController(actor); /*0x621cd0*/
  v51 = sub_612A30((TESObjectREFR *)actor, (int)v18); /*0x621cee*/
  if ( v22 ) /*0x621cf2*/
  {
    v48 = *((_BYTE *)v22 + 0x1BC); /*0x621cfa*/
  }
  else
  {
    v23 = 0; /*0x621d0f*/
    AnimGroup = Actor_LoadAnimGroup_(actor, 0x11u, 0, 1u); /*0x621d11*/
    v25 = AnimGroup; /*0x621d16*/
    if ( AnimGroup ) /*0x621d1c*/
    {
      v26 = actor->vtbl->super.super.GetAnimData(actor); /*0x621d28*/
      if ( v26 ) /*0x621d2c*/
        v23 = ActorAnimData_FindAnimMapEntry((_DWORD *)v26->animsMap, v25, &Charge) != 0; /*0x621d45*/
    }
    v22 = 0; /*0x621d47*/
    v48 = v23; /*0x621d4b*/
  }
  WeaponSkillAV = 0xFFFFFFFF; /*0x621d51*/
  if ( sub_5E1CF0(actor) ) /*0x621d54*/
  {
    if ( v19 ) /*0x621d63*/
    {
      if ( v51 ) /*0x621d6e*/
      {
        if ( *(float *)&equippedEntry == 0.0 ) /*0x621d79*/
        {
          if ( v54 ) /*0x621d90*/
          {
            if ( actor->vtbl->GetCombatController(actor) /*0x621dc3*/
              && actor->members.super.process->GetEquippedWeaponData(actor->members.super.process, 1) )
            {
              v28 = actor->members.super.process->GetEquippedWeaponData(actor->members.super.process, 1); /*0x621dd6*/
              v9 = sub_612A90(actor, (void **)&v28->extendData); /*0x621dda*/
            }
            else
            {
              v9 = ((double (__thiscall *)(LowProcess *))actor->members.super.process->GetUnk0F8)(actor->members.super.process); /*0x621def*/
            }
          }
          else
          {
            v9 = sub_612560(actor, (char *)v19, 1.0, 0); /*0x621d9c*/
          }
        }
        else
        {
          v9 = sub_612A90(actor, (void **)&equippedEntry->extendData); /*0x621d81*/
        }
        v29 = *((_BYTE *)v19 + 0x90); /*0x621df1*/
        v52 = v9; /*0x621df7*/
        if ( v29 == 5 || v29 == 4 ) /*0x621e01*/
        {
          v53 = 2; /*0x621e12*/
          if ( IsSwimming ) /*0x621e1a*/
          {
            v9 = 0.0; /*0x621e1c*/
            v53 = 0xD; /*0x621e1e*/
            v52 = 0.0; /*0x621e26*/
          }
        }
        else
        {
          v53 = 1; /*0x621e03*/
        }
        WeaponSkillAV = TESObjectWEAP_GetWeaponSkillAV((TESObjectWEAP *)v19);// Sidecar decode: combat selection obtains candidate weapon native skill AV before comparing weapon skill against hand-to-hand. /*0x621e31*/
      }
    }
  }
  if ( !v22 ) /*0x621e35*/
    goto LABEL_54; /*0x621e35*/
  sub_621270((int)v22, v7, v8, v9); /*0x621e39*/
  if ( *((_DWORD *)v22 + 0x1C) == 0xC ) /*0x621e42*/
    return 0xC; /*0x621e50*/
  if ( *((_DWORD *)v22 + 0x1B) == 0xB ) /*0x621e55*/
  {
LABEL_54:
    v31 = v53; /*0x621e74*/
    if ( !actora ) /*0x621e78*/
      goto LABEL_55; /*0x621e78*/
LABEL_56:
    *(float *)&equippedEntry = 0.0; /*0x621e89*/
    if ( v22 ) /*0x621e91*/
    {
      CombatController_SelectAttackSpellByMode( /*0x621ea4*/
        v22,
        0.0,
        v7,
        (float *)&equippedEntry,
        3,
        *((unsigned __int8 *)v22 + 0x17C));
      v33 = *(float *)&equippedEntry; /*0x621eab*/
      *((_DWORD *)v22 + 0x1F) = v32; /*0x621eaf*/
      if ( v52 < v33 && v33 > 0.0 ) /*0x621ec8*/
      {
        if ( v32 ) /*0x621ecc*/
        {
          if ( !v54 ) /*0x621ed3*/
          {
            v52 = v33; /*0x621ed7*/
            v31 = 3; /*0x621ede*/
            WeaponSkillAV = EffectItemList_GetSchoolAV(); /*0x621ee8*/
          }
        }
      }
    }
    *(float *)&equippedEntry = COERCE_FLOAT(((int (__thiscall *)(Actor *))actor->vtbl->Unk_D3)(actor)); /*0x621efe*/
    v43 = (float)(int)equippedEntry; /*0x621f07*/
    *(float *)&equippedEntry = sub_546C60(v43, 0, COERCE_FLOAT(1)); /*0x621f0f*/
    if ( v52 < (double)*(float *)&equippedEntry ) /*0x621f25*/
    {
      if ( v48 ) /*0x621f2c*/
      {                                         // Sidecar hook boundary: player weapon-vs-hand-to-hand comparison must use effective exclusive Blade/Spear sidecar skill without writing synthetic AVs.
        if ( WeaponSkillAV == 0xFFFFFFFF /*0x621f52*/
          || (WeaponSkillAV = actor->vtbl->GetActorValue(actor, WeaponSkillAV),
              actor->vtbl->GetActorValue(actor, kActorVal_HandToHand) > WeaponSkillAV) )
        {
          v31 = 0; /*0x621f58*/
          v52 = *(float *)&equippedEntry; /*0x621f5a*/
        }
      }
    }
    goto LABEL_67; /*0x621f5a*/
  }
  v31 = v53; /*0x621e5c*/
  if ( actora ) /*0x621e60*/
    goto LABEL_56; /*0x621e60*/
  if ( v53 == 1 ) /*0x621e65*/
    v52 = 0.0; /*0x621e69*/
LABEL_55:
  if ( Actor_IsCreature(actor) ) /*0x621e7c*/
    goto LABEL_56; /*0x621e83*/
LABEL_67:
  if ( v22 ) /*0x621f60*/
  {
    if ( !IsSwimming ) /*0x621f67*/
    {
      v45 = *((unsigned __int8 *)v22 + 0x17C); /*0x621f72*/
      *(float *)&equippedEntry = 0.0; /*0x621f73*/
      CombatController_SelectAttackSpellByMode(v22, 0.0, v7, (float *)&equippedEntry, 4, v45); /*0x621f80*/
      *((_DWORD *)v22 + 0x20) = v34; /*0x621f8c*/
      if ( v50 ) /*0x621f92*/
        v35 = 1; /*0x621f94*/
      else
        v35 = v54 == 0; /*0x621f9d*/
      if ( v52 < (double)*(float *)&equippedEntry ) /*0x621faf*/
      {
        if ( v34 ) /*0x621fb3*/
        {
          if ( v35 ) /*0x621fb7*/
          {
            v52 = *(float *)&equippedEntry; /*0x621fbb*/
            v31 = 4; /*0x621fc2*/
            EffectItemList_GetSchoolAV(); /*0x621fc7*/
          }
        }
      }
    }
  }
  if ( v50 ) /*0x621fd5*/
  {
    if ( (v31 == 2 /*0x622004*/
       || !actor->vtbl->GetCombatController(actor)
       || *((_DWORD *)actor->vtbl->GetCombatController(actor) + 0x20))
      && v31 == 3 )
    {
      v31 = 4; /*0x622008*/
      if ( v22 ) /*0x62200d*/
        EffectItemList_GetSchoolAV(); /*0x62201a*/
    }
  }
  if ( !skipFleeAndYieldEvaluation ) /*0x622024*/
  {
    v46 = actor->vtbl->GetActorValue(actor, kActorVal_Confidence);// Combat choice reads actor Confidence, current/base Health, calls AI_CalculateFleeScore, and selects mode 7 only when score beats the current choice and fAICombatFleeScoreThreshold and combat style does not set FleeingDisabled (0x20). /*0x622038*/
    BaseCalcAVi = (EntryData *)Actor_GetBaseCalcAVi((int *)actor, WeaponSkillAV, (int)v22, (int)actor, 8); /*0x62203d*/
    vtbl = actor->vtbl; /*0x622042*/
    equippedEntry = BaseCalcAVi; /*0x622044*/
    *(float *)&v44 = (float)(int)BaseCalcAVi; /*0x622053*/
    v42 = ((double (__thiscall *)(Actor *))vtbl->GetAV_F)(actor); /*0x62205d*/
    AI_CalculateFleeScore(v42, COERCE_FLOAT(8), v44); /*0x622060*/
    if ( ((unsigned __int8 (__thiscall *)(Actor *, SInt32))actor->vtbl->Unk_97)(actor, v46) ) /*0x622076*/
      *(float *)&equippedEntry = 0.0; /*0x62207e*/
    if ( v52 < (double)*(float *)&equippedEntry /*0x6220a0*/
      && g_GameSettingStringPointers_B36CD8[0xD8] < (double)*(float *)&equippedEntry )
    {
      v38 = Actor_GetEffectiveCombatStyle(actor); /*0x6220a4*/
      if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*v38 + 0x16C))(v38, 0x20) ) /*0x6220b5*/
      {
        v31 = 7; /*0x6220bf*/
        v52 = *(float *)&equippedEntry; /*0x6220c4*/
      }
    }
    if ( allowYieldEvaluation ) /*0x6220d1*/
    {
      v39 = target; /*0x6220d7*/
      if ( target == (TESObjectREFR *)reference ) /*0x6220e1*/
      {
        v40 = Actor_GetEffectiveCombatStyle(actor); /*0x6220e5*/
        if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*v40 + 0x16C))(v40, 8) ) /*0x6220f6*/
        {
          actor->vtbl->GetDisposition(actor, (Actor *)v39, v47); /*0x622107*/
          v41 = ((int (__thiscall *)(Actor *))actor->vtbl->GetActorValue)(actor); /*0x622116*/
          *(float *)&equippedEntry = sub_546D10(*(float *)&equippedEntry, v41, 0x21); /*0x622126*/
          if ( v52 < (double)*(float *)&equippedEntry ) /*0x62213c*/
          {
            if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, Actor *))v39->vtbl[2].super.Unk_08)(v39, actor) ) /*0x622149*/
            {
              v31 = 5; /*0x622153*/
              v52 = *(float *)&equippedEntry; /*0x622158*/
            }
          }
        }
      }
    }
  }
  if ( outScore ) /*0x622162*/
    *outScore = v52; /*0x622168*/
  return v31; /*0x621e46*/
}
