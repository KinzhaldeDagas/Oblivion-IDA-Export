double __cdecl sub_6D36B0(float a1, float a2, float a3, float a4, float a5)
{
  double v5; // st7
  double v6; // rt0
  double v7; // st4
  float v9; // [esp+10h] [ebp+10h]
  float v10; // [esp+10h] [ebp+10h]

  v5 = a4 - a2;
  v6 = dbl_A3D0C0;
  v9 = a3 + a5 - v5 * v6;
  v7 = v9 * a1;
  v10 = v5 * dbl_A30E48 - (a5 + v6 * a3);
  return (float)(a1 * (a3 + (v7 + v10) * a1) + a2);
}
