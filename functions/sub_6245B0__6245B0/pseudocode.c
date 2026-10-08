int __userpurge sub_6245B0@<eax>(
        int a1@<ecx>,
        char a2@<bpl>,
        int a3@<edi>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st3>,
        double a8@<st2>,
        double a9@<st1>,
        double a10@<st0>,
        int a11,
        float a12)
{
  double v12; // st0
  int v14; // ecx
  int CurrentTarget; // eax
  _DWORD **v16; // ecx
  TESObjectREFR *v17; // eax
  TESObjectREFR *v18; // eax
  int result; // eax
  signed int v20; // edi
  bool v21; // zf
  double v22; // st7
  int v23; // eax
  ActorAnimData *v24; // eax
  unsigned __int16 AnimGroupFromField8Value; // ax
  int v26; // eax
  double refreshed; // st1
  double v28; // st0
  int v29; // eax
  int v30; // eax
  char v31; // bl
  int *EffectiveCombatStyle; // eax
  int v33; // ecx
  double v34; // st3
  int v35; // eax
  char v36; // al
  TESTopic *Topic; // eax
  int v38; // edi
  _DWORD *v39; // ebx
  void (__thiscall **v40)(_DWORD *, int); // edi
  int v41; // eax
  float Distance; // [esp+4h] [ebp-Ch]
  float v44; // [esp+Ch] [ebp-4h]

  v12 = kTerrainLODQuadRayDirectionZ; /*0x6245b0*/
  *(float *)(a1 + 0x184) = kTerrainLODQuadRayDirectionZ; /*0x6245bc*/
  if ( !byte_B14B74 ) /*0x6245c2*/
    return 0xD; /*0x6245c2*/
  v14 = *(_DWORD *)(a1 + 0x3C); /*0x6245cf*/
  if ( !v14 /*0x624604*/
    || !(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x154))(v14)
    || !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C))
    || !*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58) )
  {
    return 0xD; /*0x624608*/
  }
  CurrentTarget = CombatController_GetCurrentTarget(a1); /*0x624610*/
  v16 = *(_DWORD ***)(a1 + 0x3C); /*0x624617*/
  if ( !CurrentTarget ) /*0x62461a*/
    goto LABEL_12; /*0x62461a*/
  if ( (*(int (__thiscall **)(_DWORD *))(*v16[0x16] + 0x47C))(v16[0x16]) ) /*0x62462b*/
    return 0xD; /*0x6246cf*/
  if ( !(*(int (__usercall **)@<eax>(_DWORD@<ecx>, int, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>))(**(_DWORD **)(a1 + 0x3C) + 0x284))( /*0x624642*/
          *(_DWORD *)(a1 + 0x3C),
          4,
          a10,
          a9,
          a8,
          a7,
          a6,
          a5,
          a4) )
  {
    v44 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a1 + 0x3C) + 0x26C))(*(_DWORD *)(a1 + 0x3C)) /*0x624663*/
        * dbl_A3C770;
    v17 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x624667*/
    Distance = TesObjectREF_GetDistance((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), v17, 0); /*0x624675*/
    a10 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a1 + 0x3C) + 0x26C))(*(_DWORD *)(a1 + 0x3C)) + v44; /*0x62468e*/
    if ( a10 < Distance ) /*0x62469b*/
    {
      v18 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x62469f*/
      CombatController_RemoveTarget((float *)a1, v18); /*0x6246a7*/
      if ( !CombatController_GetCurrentTarget(a1) ) /*0x6246ae*/
      {
        v16 = *(_DWORD ***)(a1 + 0x3C); /*0x6246b7*/
LABEL_12:
        ((void (__thiscall *)(_DWORD **, _DWORD))(*v16)[0xD0])(v16, 0); /*0x6246ba*/
        return 0xD; /*0x6246c4*/
      }
      return *(_DWORD *)(a1 + 0x70); /*0x6246d9*/
    }
  }
  v20 = 0xB; /*0x6246e1*/
  if ( !*(_BYTE *)(a1 + 0x59) ) /*0x6246dc*/
  {
    CombatController_InitializeCombatState((void **)a1, a10); /*0x6246ea*/
    v21 = *(_DWORD *)(a1 + 0x6C) == 0xB; /*0x6246ef*/
    *(_BYTE *)(a1 + 0x59) = 1; /*0x6246f2*/
    if ( v21 ) /*0x6246f6*/
      ActorMovement_BuildPathGridWaypointList((void *)a1); /*0x6246fa*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 0x3C) + 0x198))( /*0x62470c*/
         *(_DWORD *)(a1 + 0x3C),
         0,
         a3) )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x340))(*(_DWORD *)(a1 + 0x3C), 0); /*0x62471f*/
    return 0xD; /*0x62472b*/
  }
  v22 = a12 + *(float *)(a1 + 0x44); /*0x624733*/
  *(float *)(a1 + 0x44) = v22; /*0x624738*/
  v23 = CombatController_GetCurrentTarget(a1); /*0x62473b*/
  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 0x198))(v23, 0) /*0x624766*/
    || (*(_DWORD *)(CombatController_GetCurrentTarget(a1) + 8) & 0x800) != 0 )
  {
    v39 = *(_DWORD **)(a1 + 0x3C); /*0x624c24*/
    v40 = (void (__thiscall **)(_DWORD *, int))(*v39 + 0x340); /*0x624c2b*/
    v41 = CombatController_GetCurrentTarget(a1); /*0x624c31*/
    (*v40)(v39, v41); /*0x624c3b*/
    return 0xD; /*0x624c3b*/
  }
  if ( *(_DWORD *)(a1 + 0x70) == 0xB ) /*0x62476f*/
    return 0xB; /*0x624779*/
  if ( (*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>))(**(_DWORD **)(a1 + 0x3C) + 0x164))( /*0x624787*/
         *(_DWORD *)(a1 + 0x3C),
         v22) )
  {
    v24 = (ActorAnimData *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>))(**(_DWORD **)(a1 + 0x3C) + 0x164))( /*0x62479a*/
                             *(_DWORD *)(a1 + 0x3C),
                             v22,
                             a9,
                             a8,
                             a7,
                             a6,
                             a5);
    AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v24, 3); /*0x62479e*/
    if ( AnimGroup_UsesPowerOrCastNoteTemplate(AnimGroupFromField8Value) ) /*0x6247a4*/
    {
      sub_61FC30(a1, COERCE_FLOAT(0xB)); /*0x6247b2*/
      return *(_DWORD *)(a1 + 0x70); /*0x6247c0*/
    }
  }
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C)) /*0x624816*/
    && (Actor_GetCurrentAction(*(_DWORD ***)(a1 + 0x3C)) == 7 || Actor_GetCurrentAction(*(_DWORD ***)(a1 + 0x3C)) == 8)
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x19C))(*(_DWORD *)(a1 + 0x3C))
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x1A0))(*(_DWORD *)(a1 + 0x3C)) )
  {
    return *(_DWORD *)(a1 + 0x70); /*0x624816*/
  }
  v26 = *(_DWORD *)(a1 + 0x70); /*0x624820*/
  if ( v26 == 7 || v26 == 0xC || *(_DWORD *)(a1 + 0x6C) == 8 ) /*0x624839*/
  {
    v38 = *(_DWORD *)(a1 + 0x3C); /*0x624bfc*/
    sub_620E80(a1, a8, a9, v22); /*0x624c01*/
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v38 + 0x334))(v38, 1) ) /*0x624c12*/
      return *(_DWORD *)(a1 + 0x70); /*0x624c21*/
    return 0xD; /*0x624c16*/
  }
  refreshed = CombatController_RefreshTacticalState(a1, (Actor *)0xB, v22, 0); /*0x624843*/
  if ( *(_BYTE *)(a1 + 0x1BD) ) /*0x624848*/
    return *(_DWORD *)(a1 + 0x70); /*0x624bf9*/
  CombatController_UpdateBlockingAllyTimer(a1); /*0x624857*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x19C))(*(_DWORD *)(a1 + 0x3C)) ) /*0x624867*/
  {
    if ( *(_DWORD *)(a1 + 0x70) != 0xD ) /*0x624871*/
    {
      v28 = kTerrainLODQuadRayDirectionZ; /*0x624873*/
      *(_DWORD *)(a1 + 0x70) = 0xD; /*0x624879*/
      *(float *)(a1 + 0x188) = v28; /*0x624880*/
    }
    if ( *(_DWORD *)(a1 + 0x6C) ) /*0x624886*/
    {
      sub_619920(a1, 0); /*0x624894*/
      return 0xD; /*0x6248a4*/
    }
    return 0xD; /*0x62488a*/
  }
  sub_61FC30(a1, COERCE_FLOAT(0xB)); /*0x6248a9*/
  if ( (*(unsigned __int8 (__usercall **)@<al>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))(**(_DWORD **)(a1 + 0x3C) + 0x25C))( /*0x6248b9*/
         *(_DWORD *)(a1 + 0x3C),
         v22,
         a9,
         a8,
         a7,
         a6,
         a5,
         refreshed,
         v12) )
  {
    v29 = *(_DWORD *)(a1 + 0x6C); /*0x6248bf*/
    if ( v29 != 0xF && v29 != 0xA && *(_DWORD *)(a1 + 0x70) != 0xD ) /*0x6248d0*/
      sub_620E50((Actor **)a1, v22); /*0x6248d4*/
  }
  if ( sub_5E6FE0(*(_DWORD **)(a1 + 0x3C)) ) /*0x6248dc*/
    return 0xD; /*0x624c3f*/
  if ( *(_DWORD *)(a1 + 0x6C) == 9 ) /*0x6248ed*/
  {
    sub_61D5D0(a1, v22); /*0x6248f1*/
    return 0xD; /*0x624901*/
  }
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x380))(*(_DWORD *)(a1 + 0x3C)) ) /*0x62490f*/
  {
    sub_619920(a1, 9); /*0x624919*/
    return *(_DWORD *)(a1 + 0x70); /*0x624927*/
  }
  v30 = *(_DWORD *)(a1 + 0x70); /*0x62492a*/
  if ( v30 == 6 ) /*0x624930*/
  {
    sub_615420(a1); /*0x624934*/
    return *(_DWORD *)(a1 + 0x70); /*0x624942*/
  }
  if ( v30 == 5 ) /*0x624948*/
  {
    sub_619640(a1, a8, a9, v22); /*0x62494c*/
    return *(_DWORD *)(a1 + 0x70); /*0x62495a*/
  }
  v31 = 0; /*0x62495d*/
  if ( v30 != 0xD /*0x62498a*/
    || *(_DWORD *)(a1 + 0x6C) == 7
    || (v20 = sub_6239D0(a1, a8, a9, v22, 0, 0),
        CombatController_SetCombatMode(a1, v20),
        CombatController_UpdateActiveMode(a1, a2, (unsigned int *)v20, v12, refreshed, a5, a6, a7, a8, a9, v22),
        v31 = 1,
        CombatController_CanReachCurrentTarget(a1)) )
  {
    if ( (PlayerCharacter *)CombatController_GetCurrentTarget(a1) == reference && *(_BYTE *)(a1 + 0x4B) ) /*0x6249f4*/
    {
      if ( ((unsigned __int8 (__usercall *)@<al>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>))reference->vtbl->super.IsYielding)( /*0x624a08*/
             reference,
             v22,
             a9,
             a8,
             a7,
             a6,
             a5,
             refreshed)
        && !*(_BYTE *)(a1 + 0x4C) )
      {
        v33 = *(_DWORD *)(a1 + 0x3C); /*0x624a0e*/
        *(_BYTE *)(a1 + 0x4C) = 1; /*0x624a11*/
        (*(void (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)v33 + 0x36C))(v33, reference); /*0x624a23*/
        return *(_DWORD *)(a1 + 0x70); /*0x624a2e*/
      }
      if ( !reference->vtbl->super.IsYielding((Actor *)reference) ) /*0x624a3f*/
      {
        if ( *(_BYTE *)(a1 + 0x4C) ) /*0x624a45*/
          *(_BYTE *)(a1 + 0x4C) = 0; /*0x624a4a*/
      }
    }
    if ( *(_DWORD *)(a1 + 0x70) == 0xA ) /*0x624a53*/
    {
      sub_619420(a1); /*0x624a55*/
      return *(_DWORD *)(a1 + 0x70); /*0x624a5a*/
    }
    else if ( *(_DWORD *)(a1 + 0x6C) == 0xD ) /*0x624a6a*/
    {
      sub_61DDC0(a1); /*0x624a6c*/
      return *(_DWORD *)(a1 + 0x70); /*0x624a71*/
    }
    else
    {
      v34 = sub_621270(a1, a8, a9, v22); /*0x624a7d*/
      if ( !v31 ) /*0x624a84*/
        CombatController_UpdateActiveMode(a1, a2, (unsigned int *)v20, v12, refreshed, a5, v34, a7, a8, a9, v22); /*0x624a88*/
      if ( *(_DWORD *)(a1 + 0x1A8) >= (int)MEMORY[0xB372F0].value /*0x624abd*/
        || (v35 = *(_DWORD *)(a1 + 0x6C), v35 == 0xB)
        || v35 == 0xC
        || v35 == 0xF
        || v35 == 0xA
        || (sub_6150E0((_DWORD *)a1, v22, 0), v36) )
      {
        switch ( *(_DWORD *)(a1 + 0x6C) ) /*0x624b11*/
        {
          case 0: /*0x624b11*/
            CombatController_UpdateMovementAndReachability(a1, v20, a9, v31, v22); /*0x624b1a*/
            result = *(_DWORD *)(a1 + 0x70); /*0x624b1f*/
            break; /*0x624b28*/
          case 1: /*0x624b11*/
            sub_621850(a1, v31, v20, v22); /*0x624b8c*/
            result = *(_DWORD *)(a1 + 0x70); /*0x624b91*/
            break; /*0x624b9a*/
          case 2: /*0x624b11*/
            sub_6214B0(a1, v22); /*0x624b79*/
            result = *(_DWORD *)(a1 + 0x70); /*0x624b7e*/
            break; /*0x624b87*/
          case 3: /*0x624b11*/
            sub_6218D0(a1, v22); /*0x624b9f*/
            result = *(_DWORD *)(a1 + 0x70); /*0x624ba4*/
            break; /*0x624bad*/
          case 4: /*0x624b11*/
            sub_623480(a1, v31, v22, a5, a8, a9); /*0x624bb2*/
            result = *(_DWORD *)(a1 + 0x70); /*0x624bb7*/
            break; /*0x624bc0*/
          case 6: /*0x624b11*/
            sub_61D410(a1); /*0x624bd8*/
            result = *(_DWORD *)(a1 + 0x70); /*0x624bdd*/
            break; /*0x624be6*/
          case 7: /*0x624b11*/
            sub_623FA0(a1, a8, a9, v22); /*0x624beb*/
            return *(_DWORD *)(a1 + 0x70); /*0x624beb*/
          case 0xA: /*0x624b11*/
            sub_622BD0(a1, v22); /*0x624b2d*/
            result = *(_DWORD *)(a1 + 0x70); /*0x624b32*/
            break; /*0x624b3b*/
          case 0xB: /*0x624b11*/
            sub_622E30(a1, a9, v22); /*0x624b40*/
            result = *(_DWORD *)(a1 + 0x70); /*0x624b45*/
            break; /*0x624b4e*/
          case 0xC: /*0x624b11*/
            sub_6231E0(a1, v22); /*0x624b53*/
            result = *(_DWORD *)(a1 + 0x70); /*0x624b58*/
            break; /*0x624b61*/
          case 0xE: /*0x624b11*/
          case 0x10: /*0x624b11*/
            sub_61CC00(a1, v20); /*0x624bc5*/
            result = *(_DWORD *)(a1 + 0x70); /*0x624bca*/
            break; /*0x624bd3*/
          case 0xF: /*0x624b11*/
            sub_622D40(a1, v22); /*0x624b66*/
            result = *(_DWORD *)(a1 + 0x70); /*0x624b6b*/
            break; /*0x624b74*/
          default:
            return *(_DWORD *)(a1 + 0x70);
        }
      }
      else
      {
        Topic = TESTopic::GetTopic(DialogueType_Detection, 2); /*0x624ac3*/
        *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0xE4) = reference; /*0x624ad6*/
        (*(void (__thiscall **)(_DWORD, _DWORD, TESTopic *, _DWORD, _DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) /*0x624af0*/
                                                                                              + 0x58)
                                                                                + 0x1A4))(
          *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
          *(_DWORD *)(a1 + 0x3C),
          Topic,
          0,
          0,
          1);
        sub_620E50((Actor **)a1, v22); /*0x624af4*/
        return *(_DWORD *)(a1 + 0x70); /*0x624af9*/
      }
    }
  }
  else if ( (unsigned __int8)CombatMode_IsRangedWeaponMode(v20) ) /*0x624994*/
  {
    sub_61FE90((float *)a1, v22); /*0x6249a2*/
    return *(_DWORD *)(a1 + 0x70); /*0x6249a7*/
  }
  else
  {
    EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x6249b6*/
    if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*EffectiveCombatStyle + 0x16C))(EffectiveCombatStyle, 0x80) ) /*0x6249ca*/
      sub_61FEF0((float *)a1, v22); /*0x6249d2*/
    return *(_DWORD *)(a1 + 0x70); /*0x6249d7*/
  }
  return result; /*0x6246cb*/
}
