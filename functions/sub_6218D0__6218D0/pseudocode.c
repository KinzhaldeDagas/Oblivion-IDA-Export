double __usercall sub_6218D0@<st0>(int a1@<ecx>, double result@<st0>)
{
  TESObjectREFR *v4; // edi
  TESObjectREFR *CurrentTarget; // eax
  double v6; // st6
  bool v7; // al
  bool v8; // bl
  double v9; // st6
  char IsRangedWeaponMode; // al
  char CanReachCurrentTarget; // al
  int v12; // ecx
  int *EffectiveCombatStyle; // eax
  float surfaceDistance; // [esp+0h] [ebp-24h]
  float v15; // [esp+14h] [ebp-10h]
  float v16; // [esp+18h] [ebp-Ch]
  float v17; // [esp+18h] [ebp-Ch]
  char v18; // [esp+1Ch] [ebp-8h]
  float maximumDistance; // [esp+20h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 0x6C) == 3 ) /*0x6218da*/
  {
    v18 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C0))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)); /*0x6218f3*/
    if ( !sub_5E05B0(*(_DWORD **)(a1 + 0x3C)) ) /*0x6218fa*/
    {
      sub_619920(a1, 0); /*0x621907*/
      *(float *)(a1 + 0x54) = kTerrainLODQuadRayDirectionZ; /*0x621912*/
      *(_BYTE *)(a1 + 0x58) = 0; /*0x621915*/
      return result; /*0x62191d*/
    }
    if ( *(float *)(a1 + 0x184) < 0.0 ) /*0x62192b*/
    {
      v4 = *(TESObjectREFR **)(a1 + 0x3C); /*0x62192e*/
      CurrentTarget = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x621935*/
      *(float *)(a1 + 0x184) = TESObjectREFR_GetSurfaceDistance(v4, CurrentTarget, 0); /*0x621941*/
    }
    v15 = *(float *)(a1 + 0x184); /*0x621953*/
    maximumDistance = CombatController_GetDesiredCombatDistance((void *)a1); /*0x62195c*/
    v6 = v15; /*0x621967*/
    v7 = 1; /*0x621998*/
    if ( *(float *)(a1 + 0x54) > 0.0 ) /*0x62196e*/
    {
      v16 = v6 - *(float *)(a1 + 0x54); /*0x621975*/
      v17 = fabs(v16); /*0x62197f*/
      if ( v17 <= (double)*(float *)&dword_A46C30 ) /*0x621992*/
        v7 = 0; /*0x62196e*/
    }
    v8 = 0; /*0x62199b*/
    if ( !v7 ) /*0x62199f*/
    {
      if ( sub_5E05B0(*(_DWORD **)(a1 + 0x3C)) ) /*0x6219a6*/
      {
        if ( *(_BYTE *)(a1 + 0x58) ) /*0x6219af*/
        {
          v8 = *(float *)(a1 + 0xFC) < *(float *)(a1 + 0x44) - *(float *)(a1 + 0xF8); /*0x6219ef*/
        }
        else
        {
          v9 = *(float *)(a1 + 0x44); /*0x6219b4*/
          *(_BYTE *)(a1 + 0x58) = 1; /*0x6219b7*/
          *(float *)(a1 + 0xF8) = v9; /*0x6219bb*/
          *(float *)(a1 + 0xFC) = 1.0; /*0x6219c3*/
          *(float *)(a1 + 0x100) = kTerrainLODQuadRayDirectionZ; /*0x6219cf*/
        }
      }
      v6 = v15; /*0x6219f1*/
    }
    if ( (v18 & 2) != 0 ) /*0x6219fa*/
    {
      if ( g_GameSettingStringPointers_B36CD8[0x90] > v6 ) /*0x621a09*/
      {
        *(float *)(a1 + 0x54) = v6; /*0x621a0c*/
        CombatController_UpdateCombatModeState((void *)a1); /*0x621a15*/
        return result; /*0x621a15*/
      }
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))( /*0x621a2e*/
        *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
        2,
        0);
      sub_619920(a1, 0); /*0x621a34*/
      goto LABEL_24; /*0x621a34*/
    }
    if ( *(_BYTE *)(a1 + 0x58) || *(float *)(a1 + 0xFC) < *(float *)(a1 + 0x44) - *(float *)(a1 + 0xF8) ) /*0x621a52*/
    {
      if ( maximumDistance >= v6 ) /*0x621a67*/
      {
        sub_619920(a1, 0); /*0x621a6d*/
LABEL_24:
        *(float *)(a1 + 0x54) = kTerrainLODQuadRayDirectionZ; /*0x621a72*/
        *(_BYTE *)(a1 + 0x58) = 0; /*0x621a7c*/
        return result; /*0x621a84*/
      }
      surfaceDistance = v6; /*0x621a8c*/
      if ( CombatController_IsTargetWithinRangedDistance((void *)a1, surfaceDistance, maximumDistance, 0) && !v8 /*0x621aac*/
        || (IsRangedWeaponMode = CombatMode_IsRangedWeaponMode(*(_DWORD *)(a1 + 0x70))) != 0 && !*(_DWORD *)(a1 + 0x74) )
      {
        *(float *)(a1 + 0x54) = v15; /*0x621ab7*/
        return result; /*0x621abe*/
      }
      *(float *)(a1 + 0x54) = kTerrainLODQuadRayDirectionZ; /*0x621ac7*/
      *(_BYTE *)(a1 + 0x58) = 0; /*0x621aca*/
      if ( IsRangedWeaponMode ) /*0x621ad0*/
      {
        CanReachCurrentTarget = CombatController_CanReachCurrentTarget(a1); /*0x621ad2*/
        v12 = a1; /*0x621ad9*/
        if ( !CanReachCurrentTarget ) /*0x621adb*/
        {
          sub_6160B0((Actor **)a1); /*0x621add*/
          sub_61FE90((float *)a1, result); /*0x621ae9*/
          return result; /*0x621ae9*/
        }
      }
      else
      {
        if ( !CombatController_CanReachCurrentTarget(a1) ) /*0x621aee*/
        {
          EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x621afa*/
          if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*EffectiveCombatStyle + 0x16C))( /*0x621b0e*/
                 EffectiveCombatStyle,
                 0x80) )
          {
            sub_6160B0((Actor **)a1); /*0x621b16*/
            sub_61FEF0((float *)a1, result); /*0x621b22*/
            return result; /*0x621b22*/
          }
        }
        v12 = a1; /*0x621b27*/
      }
      sub_61D320(v12); /*0x621b2e*/
    }
  }
  return result; /*0x621919*/
}
