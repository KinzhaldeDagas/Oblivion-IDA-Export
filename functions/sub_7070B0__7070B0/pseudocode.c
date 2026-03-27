double __cdecl sub_7070B0(float a1, float a2)
{
  double result; // st7
  long double v3; // st6
  double v4; // st7
  double v5; // st4
  double v6; // st4
  double v7; // st3
  double v8; // st3
  bool v9; // c0
  double v10; // st7
  double v11; // st7
  double v12; // st4
  float v13; // [esp+0h] [ebp-4h]
  float v14; // [esp+Ch] [ebp+8h]
  float v15; // [esp+Ch] [ebp+8h]
  float v16; // [esp+Ch] [ebp+8h]
  float v17; // [esp+Ch] [ebp+8h]
  float v18; // [esp+Ch] [ebp+8h]
  float v19; // [esp+Ch] [ebp+8h]
  float v20; // [esp+Ch] [ebp+8h]
  float v21; // [esp+Ch] [ebp+8h]
  float v22; // [esp+Ch] [ebp+8h]
  float v23; // [esp+Ch] [ebp+8h]
  float v24; // [esp+Ch] [ebp+8h]
  float v25; // [esp+Ch] [ebp+8h]
  float v26; // [esp+Ch] [ebp+8h]
  float v28; // [esp+Ch] [ebp+8h]

  result = 0.0;
  v3 = a2;
  if ( a2 != 0.0 || 0.0 != a1 )
  {
    v4 = a1;
    v13 = 0.0;
    v14 = fabs(a1);
    v5 = v14;
    v15 = fabs(v3);
    if ( v15 >= v5 )
    {
      v28 = v4 / v3;
      v6 = v28;
      if ( v28 != 0.0 )
        goto LABEL_7;
      v11 = 0.0;
      if ( v3 <= 0.0 )
        return flt_B3F9A4;
      return (float)v11;
    }
    else
    {
      v16 = v3 / v4;
      v6 = v16;
      if ( v16 > 0.0 )
      {
        v7 = flt_B3F99C;
LABEL_6:
        v13 = v7;
LABEL_7:
        v17 = v6 * v6;
        v8 = v17;
        v18 = dbl_A7DED8 * v17;
        v19 = v18 - dbl_A7DED0;
        v20 = v19 * v8;
        v21 = v20 + dbl_A7DEC8;
        v22 = v21 * v8;
        v23 = v22 - dbl_A7DEC0;
        v24 = v8 * v23;
        v25 = v24 + dbl_A7DEB8;
        v26 = v6 * v25;
        if ( v13 != 0.0 )
          v26 = v13 - v26;
        v12 = flt_B3F9A4;
        if ( v4 < 0.0 )
        {
          if ( v3 < 0.0 )
            v26 = v26 - flt_B3F9A4;
          v12 = flt_B3F9A4;
        }
        if ( a1 <= 0.0 || v3 >= 0.0 )
          return v26;
        return (float)(v12 + v26);
      }
      if ( v6 < 0.0 )
      {
        v7 = -flt_B3F99C;
        goto LABEL_6;
      }
      v9 = v4 > 0.0;
      v10 = flt_B3F99C;
      if ( !v9 )
        return (float)-v10;
      return (float)v10;
    }
  }
  return result;
}
