double __usercall sub_621270@<st0>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double result@<st0>)
{
  int v5; // eax
  Actor *CurrentTarget; // eax
  bool IsSwimming; // bl

  if ( CombatController_GetCurrentTarget(a1) ) /*0x621273*/
  {
    if ( Actor_IsSwimming(*(Actor **)(a1 + 0x3C)) && !Actor_CanFightInWater(*(void **)(a1 + 0x3C)) ) /*0x62128f*/
    {
      CombatController_GetCurrentTarget(a1); /*0x62129a*/
      if ( *(_DWORD *)(a1 + 0x6C) == 7 /*0x6212b7*/
        && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x174))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) != a1 )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x178))( /*0x6212c9*/
          *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
          0);
      }
      CombatController_SetCombatMode(a1, 0xC); /*0x6212cf*/
      sub_619920(a1, 0); /*0x6212d8*/
      return sub_620E80(a1, a2, a3, result); /*0x6212e0*/
    }
    v5 = *(_DWORD *)(a1 + 0x6C); /*0x6212e5*/
    if ( v5 != 0xB && v5 != 0xA ) /*0x6212f4*/
    {
      CurrentTarget = (Actor *)CombatController_GetCurrentTarget(a1); /*0x6212fd*/
      IsSwimming = Actor_IsSwimming(CurrentTarget); /*0x621309*/
      if ( IsSwimming && !Actor_IsSwimming(*(Actor **)(a1 + 0x3C)) && sub_5E3400(*(Actor **)(a1 + 0x3C)) ) /*0x62131e*/
      {
        if ( (unsigned __int8)CombatMode_IsRangedWeaponMode(*(_DWORD *)(a1 + 0x70)) ) /*0x62132b*/
        {
          if ( *(_BYTE *)(a1 + 0x130) && !*(_DWORD *)(a1 + 0x7C) ) /*0x621340*/
          {
            if ( !*(_BYTE *)(a1 + 0x115) ) /*0x621346*/
            {
              sub_6160B0((Actor **)a1); /*0x621351*/
              sub_61FE90((float *)a1, result); /*0x62135a*/
              return result; /*0x62135a*/
            }
            goto LABEL_27; /*0x62134d*/
          }
        }
        else if ( !Actor_CanFightInWater(*(void **)(a1 + 0x3C)) ) /*0x621362*/
        {
          sub_6160B0((Actor **)a1); /*0x62136d*/
          sub_61FEF0((float *)a1, result); /*0x621374*/
        }
      }
      if ( sub_5E1E90(*(void **)(a1 + 0x3C)) ) /*0x62137c*/
      {
        if ( IsSwimming ) /*0x621387*/
          return result; /*0x621387*/
        goto LABEL_26; /*0x621387*/
      }
      if ( (!sub_5E3400(*(Actor **)(a1 + 0x3C)) || !Actor_CanFightInWater(*(void **)(a1 + 0x3C))) && IsSwimming ) /*0x6213a6*/
      {
LABEL_26:
        if ( !*(_BYTE *)(a1 + 0x115) ) /*0x6213af*/
        {
          sub_620E50((Actor **)a1, result); /*0x6213be*/
          return result; /*0x6213be*/
        }
LABEL_27:
        ActorMovement_BuildPathGridWaypointList((void *)a1); /*0x6213b1*/
      }
    }
  }
  return result; /*0x6212df*/
}
