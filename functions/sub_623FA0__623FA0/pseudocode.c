double __usercall sub_623FA0@<st0>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double result@<st0>)
{
  bool v5; // zf
  int v6; // ecx
  char *Name; // eax
  signed int v8; // eax

  v5 = *(_DWORD *)(a1 + 0x6C) == 7; /*0x623fa3*/
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58); /*0x623faa*/
  if ( v5 && (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x184))(v6) == a1 ) /*0x623fbb*/
  {
    if ( CombatController_GetEquippedWeaponForm((_DWORD *)a1) ) /*0x623fbf*/
    {
      if ( *(_DWORD *)(a1 + 0x70) != 0xD ) /*0x62400c*/
      {
        result = kTerrainLODQuadRayDirectionZ; /*0x62400e*/
        *(float *)(a1 + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x624014*/
      }
      *(_DWORD *)(a1 + 0x70) = 0xD; /*0x62401a*/
      sub_61D320(a1); /*0x624020*/
    }
    else
    {
      if ( unk_B3B908 ) /*0x623fc8*/
      {
        Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C)); /*0x623fd3*/
        Interface_ConsolePrint("%.20s cannot find any weapons or ammo!", Name); /*0x623fde*/
      }
      v8 = sub_6239D0(a1, a2, a3, result, 0, 0); /*0x623fec*/
      CombatController_SetCombatMode(a1, v8); /*0x623ff4*/
      sub_619920(a1, 0); /*0x623ffd*/
    }
  }
  return result; /*0x624002*/
}
