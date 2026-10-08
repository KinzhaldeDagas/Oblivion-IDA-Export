void __userpurge sub_61EAE0(int a1@<ecx>, int a2@<ebx>, TESObjectREFR *a3)
{
  Actor *CurrentTarget; // eax

  if ( a3 == (TESObjectREFR *)CombatController_GetCurrentTarget(a1) /*0x61eb1d*/
    && (!CombatController_GetCurrentTarget(a1)
     || (CurrentTarget = (Actor *)CombatController_GetCurrentTarget(a1), !Actor_IsSwimming(CurrentTarget))
     || Actor_IsSwimming(*(Actor **)(a1 + 0x3C))
     || Actor_CanFightInWater(*(void **)(a1 + 0x3C))) )
  {
    sub_619D40(a1, a2, a3, *(_BYTE *)(a1 + 0x174) == 0, 1); /*0x61eb54*/
  }
  else
  {
    sub_619D40(a1, a2, a3, 1, 1); /*0x61eb68*/
  }
}
