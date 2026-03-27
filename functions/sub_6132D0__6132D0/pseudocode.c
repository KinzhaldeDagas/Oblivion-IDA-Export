double __cdecl sub_6132D0(float a1, float a2, float a3, float a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st7
  double v7; // st7
  long double v8; // st7
  float v10; // [esp+8h] [ebp+4h]
  float v11; // [esp+8h] [ebp+4h]
  float v12; // [esp+8h] [ebp+4h]
  float v13; // [esp+8h] [ebp+4h]
  float v16; // [esp+10h] [ebp+Ch]
  float v17; // [esp+10h] [ebp+Ch]
  float v18; // [esp+10h] [ebp+Ch]
  float v19; // [esp+14h] [ebp+10h]
  float v20; // [esp+14h] [ebp+10h]
  float v21; // [esp+14h] [ebp+10h]

  v19 = a1 * a4 * a1 / (a3 * (a3 + a3));
  v4 = a1 * a1;
  v10 = a2 * a2 + v4;
  v5 = a2 * (dbl_A3F400 * v19) - v4;
  v6 = v19;
  v20 = v5;
  v16 = v6 * v6;
  v17 = v20 * v20 - v16 * (v10 * dbl_A3C800);
  if ( v17 < 0.0 )
    return (float)(flt_B3F9A4 * dbl_A3C770);
  v18 = sqrt(v17);
  v7 = v10 + v10;
  v11 = (v18 - v20) / v7;
  v21 = (-v20 - v18) / v7;
  v8 = v11;
  if ( v21 >= (double)v11 )
    v11 = v21;
  if ( v11 < 0.0 || v11 > 1.0 )
  {
    return (float)(flt_B3F9A4 * dbl_A3C770);
  }
  else
  {
    v12 = sqrt(v8);
    v13 = sub_612820(v12);
    return (float)(sub_537770(a2) * v13);
  }
}
