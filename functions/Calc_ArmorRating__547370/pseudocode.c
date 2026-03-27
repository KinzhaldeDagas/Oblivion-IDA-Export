double __cdecl Calc_ArmorRating(unsigned __int16 a1, float a2, float a3, float a4)
{
  int v4; // eax
  double v5; // st6
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st5
  double v10; // st7
  signed int v12; // [esp-4h] [ebp-4h]
  float v13; // [esp+4h] [ebp+4h]
  float v14; // [esp+4h] [ebp+4h]
  float v15; // [esp+4h] [ebp+4h]
  float v16; // [esp+4h] [ebp+4h]
  float v17; // [esp+4h] [ebp+4h]
  float v18; // [esp+4h] [ebp+4h]
  float v20; // [esp+8h] [ebp+8h]
  float v21; // [esp+Ch] [ebp+Ch]
  float v22; // [esp+Ch] [ebp+Ch]

  v12 = Double_To_SInt32(a3);
  v4 = Double_To_SInt32(a2);
  v21 = Calc_LuckModifiedSkill(v4, v12);
  v5 = fArmorRatingBase;
  v20 = fArmorRatingMax - v5;
  v13 = (v5 + v21 / fCostant_100 * v20) * (double)a1;
  v6 = v13;
  v7 = v13;
  v14 = (float)Double_To_SInt32(v13);
  v8 = v14;
  if ( v7 - v14 < 0.0 )
    v8 = v8 - 1.0;
  v15 = v8;
  if ( v15 <= 1.0 )
  {
    v10 = 1.0;
  }
  else
  {
    v16 = v6;
    v9 = v16;
    v17 = (float)Double_To_SInt32(1.0);
    if ( v9 - v17 < 0.0 )
      v17 = v17 - 1.0;
    v10 = v17;
  }
  v18 = v10;
  v22 = fArmorRatingConditionMult * a4 + fArmorRatingConditionBase;
  return (float)(v22 * v18);
}
