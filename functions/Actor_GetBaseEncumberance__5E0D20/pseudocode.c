double __usercall Actor_GetBaseEncumberance@<st0>(int a1@<ecx>, double a2@<st0>)
{
  float v3; // [esp+4h] [ebp-4h]

  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x288))(a1, 0); /*0x5e0d2a*/
  v3 = a2; /*0x5e0d2d*/
  return Calc_ActorBaseEncumbrance(v3); /*0x5e0d38*/
}
