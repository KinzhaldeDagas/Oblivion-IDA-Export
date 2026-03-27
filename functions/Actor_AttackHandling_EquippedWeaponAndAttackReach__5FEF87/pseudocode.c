void __usercall Actor_AttackHandling_::EquippedWeaponAndAttackReach(_DWORD *a1@<edi>)
{
  int v1; // ecx
  int v2; // ebp
  int v3; // eax

  v1 = a1[0x16];
  v2 = 0;
  if ( v1 )
  {
    v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 0xEC))(v1, 1);
    if ( v3 )
      v2 = *(_DWORD *)(v3 + 8);
  }
  if ( v2 )
    Calc_GetCombatDistance(*(float *)(v2 + 0x98));
  else
    (*(void (__thiscall **)(_DWORD *))(*a1 + 0x26C))(a1);
  ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*a1 + 0xEC))(a1);
  JUMPOUT(0x5FF001);
}
