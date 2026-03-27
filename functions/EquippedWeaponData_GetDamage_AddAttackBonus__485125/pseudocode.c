// positive sp value has been detected, the output may be wrong!
double __userpurge EquippedWeaponData_GetDamage_::AddAttackBonus@<st0>(int a1@<esi>, int a2, float a3)
{
  float v4; // [esp-18h] [ebp-18h]

  return (float)((double)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x284))(a1, 0x2A) + v4);
}
