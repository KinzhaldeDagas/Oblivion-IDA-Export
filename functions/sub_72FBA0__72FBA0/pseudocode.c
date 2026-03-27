double __cdecl sub_72FBA0(float a1, float a2)
{
  float v3; // [esp+8h] [ebp+8h]
  float v4; // [esp+8h] [ebp+8h]
  float v5; // [esp+8h] [ebp+8h]

  v3 = 1.0 - a2 * dbl_A80548;
  v4 = v3 * v3;
  v5 = v4 * dbl_A80540;
  return (float)(a1 * (v5 + v5 * a1 * (a1 + a1 - dbl_A30E48) + 1.0));
}
