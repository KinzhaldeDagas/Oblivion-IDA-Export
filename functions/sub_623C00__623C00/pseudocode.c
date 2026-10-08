double __usercall CombatController_UpdateMovementAndReachability@<st0>(
        int a1@<ecx>,
        int a2@<edi>,
        double a3@<st1>,
        int a4@<ebx>,
        double result@<st0>)
{
  TESObjectREFR *v6; // edi
  TESObjectREFR *CurrentTarget; // eax
  int v8; // eax
  bool IsTargetWithinRangedDistance; // bl
  unsigned int v10; // eax
  Actor *v11; // edi
  TESObjectREFR *v12; // eax
  TESObjectREFR *v13; // edi
  TESObjectREFR *v14; // eax
  int v15; // ecx
  char v16; // al
  char IsRangedWeaponMode; // cl
  char CanReachCurrentTarget; // al
  int *v19; // eax
  int v20; // eax
  int *EffectiveCombatStyle; // eax
  float *SafeFloatPointer; // eax
  int v23; // eax
  float maximumDistance; // [esp+4h] [ebp-24h]
  char v25; // [esp+8h] [ebp-20h]
  float v26; // [esp+8h] [ebp-20h]
  float surfaceDistance; // [esp+18h] [ebp-10h]
  float DesiredCombatDistance; // [esp+1Ch] [ebp-Ch]
  float outOptimalDistance; // [esp+20h] [ebp-8h] BYREF
  float outMaximumDistance; // [esp+24h] [ebp-4h] BYREF

  if ( *(_DWORD *)(a1 + 0x6C) || *(_DWORD *)(a1 + 0x70) == 8 ) /*0x623c14*/
    return result; /*0x623c14*/
  if ( *(float *)(a1 + 0x184) < 0.0 ) /*0x623c28*/
  {
    v6 = *(TESObjectREFR **)(a1 + 0x3C); /*0x623c2a*/
    CurrentTarget = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x623c2f*/
    *(float *)(a1 + 0x184) = TESObjectREFR_GetSurfaceDistance(v6, CurrentTarget, 0); /*0x623c3b*/
  }
  surfaceDistance = *(float *)(a1 + 0x184); /*0x623c4c*/
  DesiredCombatDistance = CombatController_GetDesiredCombatDistance((void *)a1); /*0x623c59*/
  outOptimalDistance = 0.0; /*0x623c64*/
  outMaximumDistance = 0.0; /*0x623c69*/
  CombatController_GetRangedDistanceBounds((void *)a1, &outOptimalDistance, &outMaximumDistance); /*0x623c6f*/
  v8 = *(_DWORD *)(a1 + 0x70); /*0x623c74*/
  if ( v8 == 2 || v8 == 4 ) /*0x623c7f*/
    DesiredCombatDistance = outOptimalDistance; /*0x623c85*/
  IsTargetWithinRangedDistance = CombatController_IsTargetWithinRangedDistance( /*0x623ca5*/
                                   (void *)a1,
                                   surfaceDistance,
                                   DesiredCombatDistance,
                                   0);
  if ( IsTargetWithinRangedDistance ) /*0x623ca9*/
  {
    v10 = *(_DWORD *)(a1 + 0x70); /*0x623cab*/
    if ( (v10 < 2 || v10 == 3) && !*(_BYTE *)(a1 + 0x158) ) /*0x623cbc*/
    {
      v11 = *(Actor **)(a1 + 0x3C); /*0x623cc5*/
      v12 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x623ccc*/
      if ( Actor_IsFacingReferenceWithinCombatAngle(v11, v12, 0) ) /*0x623cd3*/
      {
        v13 = *(TESObjectREFR **)(a1 + 0x3C); /*0x623ce6*/
        v25 = *(_BYTE *)(a1 + 0x158); /*0x623ce9*/
        v14 = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x623cec*/
        *(_BYTE *)(a1 + 0x174) = sub_617590(v13, v14, v25); /*0x623cfb*/
LABEL_14:
        v15 = a1; /*0x623d01*/
LABEL_15:
        sub_61D320(v15); /*0x623d06*/
        return result; /*0x623d09*/
      }
    }
  }
  if ( *(_BYTE *)(a1 + 0x49) || *(_DWORD *)(a1 + 0x74) == 1 ) /*0x623d20*/
  {
    sub_6191B0(a1, surfaceDistance, a3, result); /*0x623f8f*/
    return result; /*0x623f8f*/
  }
  ((void (__thiscall *)(int))loc_622820)(a1); /*0x623d28*/
  if ( v16 ) /*0x623d2f*/
    return result; /*0x623d2f*/
  IsRangedWeaponMode = CombatMode_IsRangedWeaponMode(*(_DWORD *)(a1 + 0x70)); /*0x623d3e*/
  if ( IsRangedWeaponMode && !*(_DWORD *)(a1 + 0x74) ) /*0x623d47*/
  {
    if ( outMaximumDistance >= (double)surfaceDistance ) /*0x623d5c*/
    {
      if ( *(_BYTE *)(a1 + 0x158) || *(_DWORD *)(a1 + 0x6C) == 2 ) /*0x623da5*/
        return result; /*0x623da5*/
LABEL_29:
      sub_61CE40(a1, a4, a2, result); /*0x623dab*/
      return result; /*0x623db3*/
    }
    *(_BYTE *)(a1 + 0x17E) = 1; /*0x623d5e*/
  }
  if ( DesiredCombatDistance >= (double)surfaceDistance ) /*0x623d74*/
  {
    if ( (PlayerCharacter *)CombatController_GetCurrentTarget(a1) == reference ) /*0x623e8e*/
      *(_BYTE *)(a1 + 0x4B) = 1; /*0x623e90*/
    if ( CombatController_GetCurrentTarget(a1) ) /*0x623e96*/
    {
      v20 = CombatController_GetCurrentTarget(a1); /*0x623ea1*/
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v20 + 0x350))(v20) ) /*0x623eb0*/
      {
        if ( *(_BYTE *)(a1 + 0x49) ) /*0x623eb6*/
        {
          if ( Actor_IsBlocking(*(_DWORD **)(a1 + 0x3C)) ) /*0x623ebf*/
            Actor_UpdateBlockingState(*(Actor **)(a1 + 0x3C), 0); /*0x623ecd*/
          if ( *(_DWORD *)(a1 + 0x74) == 1 ) /*0x623ed5*/
          {
            *(_DWORD *)(a1 + 0x78) = 1; /*0x623edc*/
            *(_DWORD *)(a1 + 0x74) = 3; /*0x623ee0*/
          }
        }
        return result; /*0x623eeb*/
      }
    }
    if ( (unsigned __int8)CombatMode_IsRangedWeaponMode(*(_DWORD *)(a1 + 0x70)) ) /*0x623ef0*/
    {
      if ( *(_BYTE *)(a1 + 0x116) ) /*0x623efc*/
        goto LABEL_26; /*0x623f03*/
      EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x623f15*/
      (*(void (__thiscall **)(int *))(*EffectiveCombatStyle + 0x158))(EffectiveCombatStyle); /*0x623f24*/
      outMaximumDistance = surfaceDistance; /*0x623f26*/
      if ( surfaceDistance > 0.0 && surfaceDistance < (double)outMaximumDistance ) /*0x623f46*/
      {
        SafeFloatPointer = GameSetting_GetSafeFloatPointer(unk_B372A8); /*0x623f4d*/
        v26 = outMaximumDistance; /*0x623f59*/
        result = *SafeFloatPointer; /*0x623f5f*/
        maximumDistance = *SafeFloatPointer; /*0x623f61*/
        v23 = CombatController_GetCurrentTarget(a1); /*0x623f64*/
        sub_61CAA0(a1, 1, v23, maximumDistance, v26); /*0x623f6c*/
        return result; /*0x623f77*/
      }
    }
    goto LABEL_29; /*0x623f46*/
  }
  if ( IsRangedWeaponMode ) /*0x623d7c*/
  {
    if ( *(_BYTE *)(a1 + 0x116) ) /*0x623d7e*/
    {
LABEL_26:
      ActorMovement_BuildPathGridWaypointList((void *)a1); /*0x623d87*/
      return result; /*0x623d8f*/
    }
    if ( !IsTargetWithinRangedDistance ) /*0x623dba*/
    {
      CanReachCurrentTarget = CombatController_CanReachCurrentTarget(a1); /*0x623dbe*/
      v15 = a1; /*0x623dc7*/
      if ( CanReachCurrentTarget ) /*0x623dca*/
        goto LABEL_15; /*0x623dca*/
      sub_61FE90((float *)a1, result); /*0x623dd3*/
      return result; /*0x623dd3*/
    }
LABEL_36:
    (*(void (__usercall **)(_DWORD@<ecx>, int, _DWORD, double@<st0>, double@<st1>))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) /*0x623df8*/
                                                                                                + 0x58)
                                                                                  + 0x2C4))(
      *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
      2,
      0,
      result,
      a3);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))( /*0x623e1c*/
      *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
      1,
      1);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))( /*0x623e32*/
      *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
      0x100,
      1);
    sub_619920(a1, 3); /*0x623e38*/
    return result; /*0x623e38*/
  }
  if ( IsTargetWithinRangedDistance && !sub_6163A0(a1) ) /*0x623dde*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x25C))(*(_DWORD *)(a1 + 0x3C)) ) /*0x623df2*/
      return result; /*0x623df6*/
    goto LABEL_36; /*0x623df6*/
  }
  if ( CombatController_CanReachCurrentTarget(a1) ) /*0x623e46*/
    goto LABEL_14; /*0x623e46*/
  v19 = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x623e56*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*v19 + 0x16C))(v19, 0x80) ) /*0x623e6a*/
    goto LABEL_14; /*0x623e6e*/
  sub_61FEF0((float *)a1, result); /*0x623e7c*/
  return result; /*0x623d05*/
}
