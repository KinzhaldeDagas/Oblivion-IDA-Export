// positive sp value has been detected, the output may be wrong!
char __userpurge sub_613CE8@<al>(int a1@<ebx>, int a2@<edi>, int a3, int a4, int a5)
{
  int v5; // esi
  int CurrentTarget; // eax

  v5 = *(_DWORD *)(a2 + 4); /*0x613ce8*/
  if ( v5 /*0x613d31*/
    && (*(_DWORD *)(*(_DWORD *)(v5 + 0x1C) + 0x58) & 0x1180000) != 0
    && EffectItem_IsHostile(*(_DWORD **)(a2 + 4))
    && (*(_BYTE *)(*(_DWORD *)(v5 + 0x1C) + 0x58) & 6) == 6
    && (CurrentTarget = CombatController_GetCurrentTarget(a1),
        (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)CurrentTarget + 0x284))(CurrentTarget, *(_DWORD *)(v5 + 0x14)) < (int)MEMORY[0xB37270].value) )
  {
    return 0; /*0x613d4c*/
  }
  else
  {
    return sub_613D33(a1, a2, a3, a4, a5); /*0x613d32*/
  }
}
