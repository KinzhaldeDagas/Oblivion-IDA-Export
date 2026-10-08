double __usercall sub_621850@<st0>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, double result@<st0>)
{
  _DWORD **CurrentTarget; // eax

  if ( *(_DWORD *)(a1 + 0x6C) == 1 ) /*0x621857*/
  {
    if ( *(float *)(a1 + 0xD8) >= *(float *)(a1 + 0x44) - *(float *)(a1 + 0xD4) ) /*0x62186f*/
    {
      if ( CombatController_GetCurrentTarget(a1) /*0x621895*/
        && (CurrentTarget = (_DWORD **)CombatController_GetCurrentTarget(a1),
            Actor_IsCurrentActionInRange2To5(CurrentTarget))
        || *(_BYTE *)(a1 + 0x15A) )
      {
        if ( *(_DWORD *)(a1 + 0x74) == 2 ) /*0x6218a6*/
        {
          *(_DWORD *)(a1 + 0x78) = 2; /*0x6218aa*/
          *(_DWORD *)(a1 + 0x74) = 3; /*0x6218ad*/
          CombatController_UpdateCombatModeState((void *)a1); /*0x6218b4*/
        }
        sub_61CE40(a1, a2, a3, result); /*0x6218bc*/
      }
    }
    else
    {
      sub_619920(a1, 0); /*0x621873*/
    }
  }
  return result; /*0x621878*/
}
