double __usercall Actor_GetBaseEncumberance@<st0>(int a1@<ecx>, double a2@<st0>)
{
  float v3; // [esp+4h] [ebp-4h]

  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x288))(a1, 0);
  v3 = a2;
  return Calc_ActorBaseEncumbrance(v3);
}
