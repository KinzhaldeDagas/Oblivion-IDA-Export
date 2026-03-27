double __cdecl Calc_ArmorSpellEffectiveness(signed int a1, signed int a2, signed int a3, signed int a4)
{
  int MasterySkill; // eax
  double v6; // st7
  signed int v7; // ecx
  signed int v8; // edx
  double v9; // st6
  double v10; // st5
  signed int v11; // eax
  double v12; // rt2
  double v13; // st5
  double v14; // st6
  float v15; // [esp+0h] [ebp-4h]
  float v16; // [esp+0h] [ebp-4h]
  float v17; // [esp+Ch] [ebp+8h]

  v15 = (double)(a4 + a2) / fCostant_100;
  if ( v15 <= (double)*(float *)&SrcStr )
    return 1.0;
  MasterySkill = ActorValue_GetMasterySkill(2);
  v6 = 0.0;
  v7 = a1;
  v8 = MasterySkill;
  if ( a1 < MasterySkill )
  {
    if ( a1 >= 0x64 )
      v7 = 0x64;
    v10 = fCostant_100;
    v9 = (double)a2 / v10 * (double)(2 * (0x32 - v7));
  }
  else
  {
    v9 = 0.0;
    v10 = fCostant_100;
  }
  v11 = a3;
  v12 = v10;
  v13 = v9;
  v14 = v12;
  if ( a3 < v8 )
  {
    if ( a3 >= 0x64 )
      v11 = 0x64;
    v6 = (double)(2 * (0x32 - v11)) * ((double)a4 / v14);
  }
  v17 = v6;
  v16 = v13;
  return (float)(1.0 - (fMagicArmorPenaltyMax - fMagicArmorPenaltyMin) * (v17 + v16) / v14 - fMagicArmorPenaltyMin);
}
