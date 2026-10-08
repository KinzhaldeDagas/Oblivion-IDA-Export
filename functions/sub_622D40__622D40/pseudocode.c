double __usercall sub_622D40@<st0>(int a1@<ecx>, double result@<st0>)
{
  Actor *CurrentTarget; // eax
  double v4; // st5
  char v5; // al
  char v6; // al
  int v7; // eax
  float v8; // [esp+4h] [ebp-4h] BYREF

  if ( *(_DWORD *)(a1 + 0x6C) == 0xF ) /*0x622d48*/
  {
    if ( !CombatController_GetCurrentTarget(a1) /*0x622d78*/
      || (CurrentTarget = (Actor *)CombatController_GetCurrentTarget(a1), !Actor_IsSwimming(CurrentTarget))
      || Actor_IsSwimming(*(Actor **)(a1 + 0x3C))
      || Actor_CanFightInWater(*(void **)(a1 + 0x3C)) )
    {
      if ( *(_BYTE *)(a1 + 0x174) ) /*0x622d81*/
        goto LABEL_7; /*0x622d88*/
    }
    if ( !sub_6195B0((TESObjectREFR **)a1) ) /*0x622d97*/
    {
      v4 = *(float *)(a1 + 0xD8); /*0x622dad*/
      if ( v4 < *(float *)(a1 + 0x44) - *(float *)(a1 + 0xD4) ) /*0x622dba*/
      {
        ((void (__thiscall *)(int))loc_622820)(a1); /*0x622dbe*/
        if ( !v5 ) /*0x622dc5*/
        {
          if ( CombatController_CanReachCurrentTarget(a1) || (result = sub_6150E0((_DWORD *)a1, result, 0), v6) ) /*0x622ddd*/
          {
LABEL_7:
            sub_61D320(a1); /*0x622d8a*/
            return result; /*0x622d90*/
          }
          if ( !*(_DWORD *)(a1 + 0x80) ) /*0x622ddf*/
          {
            result = CombatController_SelectAttackSpellByMode( /*0x622df9*/
                       (_DWORD *)a1,
                       result,
                       v4,
                       &v8,
                       4,
                       *(unsigned __int8 *)(a1 + 0x17C));
            *(_DWORD *)(a1 + 0x80) = v7; /*0x622dfe*/
          }
          *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44); /*0x622e07*/
          *(float *)(a1 + 0xD8) = *(float *)&dword_A46C30; /*0x622e13*/
          *(float *)(a1 + 0xDC) = kTerrainLODQuadRayDirectionZ; /*0x622e1f*/
        }
      }
    }
  }
  return result; /*0x622d8c*/
}
