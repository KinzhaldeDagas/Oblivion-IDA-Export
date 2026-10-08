double __usercall sub_622BD0@<st0>(int a1@<ecx>, double result@<st0>)
{
  double v4; // st6
  TESObjectREFR *v5; // edi
  TESObjectREFR *CurrentTarget; // eax
  double v7; // st5
  double v8; // st6
  double v9; // st5
  int v10; // eax
  double v11; // st5
  char v12; // al
  char v13; // al
  int v14; // eax
  float outOptimalDistance; // [esp+4h] [ebp-Ch] BYREF
  float outMaximumDistance; // [esp+8h] [ebp-8h] BYREF
  float v17; // [esp+Ch] [ebp-4h] BYREF

  if ( *(_DWORD *)(a1 + 0x6C) == 0xA ) /*0x622bda*/
  {
    v4 = 0.0; /*0x622be0*/
    if ( *(float *)(a1 + 0x184) < 0.0 ) /*0x622bed*/
    {
      v5 = *(TESObjectREFR **)(a1 + 0x3C); /*0x622bf2*/
      CurrentTarget = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x622bf7*/
      *(float *)(a1 + 0x184) = TESObjectREFR_GetSurfaceDistance(v5, CurrentTarget, 0); /*0x622c03*/
      v4 = 0.0; /*0x622c09*/
    }
    v7 = *(float *)(a1 + 0x184); /*0x622c0f*/
    v17 = *(float *)(a1 + 0x184); /*0x622c19*/
    outOptimalDistance = v4; /*0x622c23*/
    outMaximumDistance = v4; /*0x622c29*/
    CombatController_GetRangedDistanceBounds((void *)a1, &outOptimalDistance, &outMaximumDistance); /*0x622c2d*/
    if ( *(_BYTE *)(a1 + 0x49) || *(_DWORD *)(a1 + 0x74) == 1 ) /*0x622c40*/
    {
      sub_6191B0(a1, v7, v4, result); /*0x622d3b*/
    }
    else
    {
      v8 = v17; /*0x622c46*/
      v9 = outOptimalDistance; /*0x622c4a*/
      if ( outOptimalDistance >= (double)v17 || outMaximumDistance < v8 ) /*0x622c62*/
      {
        if ( v9 >= v8 ) /*0x622c78*/
        {
          result = sub_621270(a1, v9, v8, result); /*0x622c7c*/
          v10 = *(_DWORD *)(a1 + 0x6C); /*0x622c81*/
          if ( v10 != 0xA && v10 != 0xB ) /*0x622c8c*/
            sub_619920(a1, 0); /*0x622c92*/
        }
      }
      else
      {
        CombatController_UpdateCombatModeState((void *)a1); /*0x622c6a*/
      }
      if ( !sub_6195B0((TESObjectREFR **)a1) ) /*0x622c99*/
      {
        v11 = *(float *)(a1 + 0xD8); /*0x622caf*/
        if ( v11 < *(float *)(a1 + 0x44) - *(float *)(a1 + 0xD4) ) /*0x622cbc*/
        {
          ((void (__thiscall *)(int))loc_622820)(a1); /*0x622cc0*/
          if ( !v12 ) /*0x622cc7*/
          {
            if ( CombatController_CanReachCurrentTarget(a1) || (result = sub_6150E0((_DWORD *)a1, result, 0), v13) ) /*0x622cdf*/
            {
              sub_61D320(a1); /*0x622d06*/
            }
            else
            {
              *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44); /*0x622ce4*/
              *(float *)(a1 + 0xD8) = *(float *)&dword_A46C30; /*0x622cf0*/
              *(float *)(a1 + 0xDC) = kTerrainLODQuadRayDirectionZ; /*0x622cfc*/
            }
            if ( !*(_DWORD *)(a1 + 0x80) ) /*0x622d0b*/
            {
              result = CombatController_SelectAttackSpellByMode( /*0x622d25*/
                         (_DWORD *)a1,
                         result,
                         v11,
                         &v17,
                         4,
                         *(unsigned __int8 *)(a1 + 0x17C));
              *(_DWORD *)(a1 + 0x80) = v14; /*0x622d2a*/
            }
          }
        }
      }
    }
  }
  return result; /*0x622d30*/
}
