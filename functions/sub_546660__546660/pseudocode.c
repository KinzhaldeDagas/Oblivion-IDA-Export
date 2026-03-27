double __cdecl sub_546660(int a1, int a2, float a3)
{
  double v3; // st7
  double v4; // st7
  double result; // st7
  float v6; // [esp+8h] [ebp+8h]
  float v7; // [esp+8h] [ebp+8h]
  float v8; // [esp+8h] [ebp+8h]
  float v9; // [esp+8h] [ebp+8h]

  v6 = (double)a2 * flt_B36968 + flt_B36960;
  v3 = v6;
  v7 = (double)a1 * flt_B36958 + flt_B36950;
  v4 = v3 + v7;
  v8 = flt_B36978 * a3 + flt_B36970;
  v9 = (float)Double_To_SInt32(v4 + v8);
  if ( flt_B369A0 <= (double)v9 )
  {
    result = flt_B369A8;
    if ( result < v9 )
      Double_To_SInt32(result);
  }
  else
  {
    result = flt_B369A0;
    Double_To_SInt32(result);
  }
  return result;
}
