double __cdecl sub_547700(float a1, float a2, int a3)
{
  int v3; // eax
  float v5; // [esp+8h] [ebp+8h]
  float v6; // [esp+8h] [ebp+8h]
  float v7; // [esp+8h] [ebp+8h]

  v3 = Double_To_SInt32(a2);
  v5 = Calc_LuckModifiedSkill(v3, a3);
  v6 = flt_B37068 - flt_B37070 * v5;
  v7 = v6 * a1 + (1.0 - a1) * flt_B37098;
  if ( v7 >= 0.0 )
    return v7;
  else
    return (float)0.0;
}
