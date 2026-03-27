bool __cdecl sub_5475D0(int a1, int a2, float a3, int a4)
{
  double v4; // st7
  double v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+20h] [ebp+10h]
  float v8; // [esp+20h] [ebp+10h]
  float v9; // [esp+20h] [ebp+10h]

  v6 = Calc_LuckModifiedSkill(a1, a2);
  *(float *)&v6 = Calc_FatigueFactor(a3) * v6;
  v7 = (double)a4 * flt_B36F98 + flt_B36F90;
  v4 = v7;
  v8 = flt_B36F88 * *(float *)&v6 + flt_B36F80;
  v9 = v4 / v8;
  if ( flt_B36FA0 <= (double)v9 )
    v9 = flt_B36FA0;
  return (double)(GetRandomLargeInteger_(0) % 0x64) / fCostant_100 <= v9;
}
