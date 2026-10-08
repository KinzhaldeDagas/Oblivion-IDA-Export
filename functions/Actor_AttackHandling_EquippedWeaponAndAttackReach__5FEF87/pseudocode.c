void __usercall Actor_AttackHandling_::EquippedWeaponAndAttackReach(_DWORD *a1@<edi>)
{
  int v1; // ecx
  int v2; // ebp
  int v3; // eax

  v1 = a1[0x16]; /*0x5fef87*/
  v2 = 0; /*0x5fef8a*/
  if ( v1 ) /*0x5fef8e*/
  {
    v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 0xEC))(v1, 1); /*0x5fef9a*/
    if ( v3 ) /*0x5fefa2*/
      v2 = *(_DWORD *)(v3 + 8); /*0x5fefa4*/
  }
  if ( v2 ) /*0x5fefad*/
    Calc_GetCombatDistance(*(float *)(v2 + 0x98)); /*0x5fefc1*/
  else
    (*(void (__thiscall **)(_DWORD *))(*a1 + 0x26C))(a1); /*0x5fefdb*/
  ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*a1 + 0xEC))(a1); /*0x5fefeb*/
  JUMPOUT(0x5FF001); /*0x5ff001*/
}
