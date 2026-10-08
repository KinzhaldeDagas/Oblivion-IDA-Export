bool __cdecl CombatStyle_RollAttackChance(_DWORD *a1, float a2, char a3, char a4, char a5)
{
  double v6; // st7
  float v7; // [esp+0h] [ebp-14h]
  float v8; // [esp+4h] [ebp-10h]
  double v9; // [esp+Ch] [ebp-8h]
  float v10; // [esp+28h] [ebp+14h]
  float v11; // [esp+28h] [ebp+14h]

  if ( a5 ) /*0x546938*/
    return 0; /*0x54693a*/
  v8 = (float)(*(char (__thiscall **)(_DWORD *))(*a1 + 0x11C))(a1); /*0x54695c*/
  v6 = 0.0; /*0x546960*/
  if ( v8 == 0.0 ) /*0x546971*/
    return 0; /*0x546975*/
  if ( v8 >= fCostant_100 ) /*0x546989*/
    return 1; /*0x54698d*/
  if ( a3 ) /*0x546999*/
  {
    v7 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*a1 + 0x120))(a1); /*0x5469a9*/
    v6 = 0.0; /*0x5469ad*/
  }
  else
  {
    v7 = 0.0; /*0x5469b1*/
  }
  if ( a4 ) /*0x5469ba*/
    v6 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*a1 + 0x124))(a1); /*0x5469c8*/
  v10 = v6; /*0x5469cc*/
  v9 = sub_4AA1B0(a1) * (1.0 - a2); /*0x5469e1*/
  *(float *)&v9 = sub_4AA170(a1) + v9; /*0x5469f0*/
  v11 = v10 + v7 + *(float *)&v9 + v8; /*0x546a1c*/
  return v11 >= (double)(Game_RandomLargeInteger(0) % 0x64); /*0x54693c*/
}
