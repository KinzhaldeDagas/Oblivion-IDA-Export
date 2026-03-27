double __stdcall sub_4ACE30(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9)
{
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st3
  double v13; // st6
  bool v14; // c0
  double v15; // st6
  double v17; // st6
  float v20; // [esp+18h] [ebp+10h]
  float v21; // [esp+18h] [ebp+10h]
  float v22; // [esp+18h] [ebp+10h]
  float v23; // [esp+18h] [ebp+10h]
  float v24; // [esp+18h] [ebp+10h]
  float v25; // [esp+18h] [ebp+10h]
  float v26; // [esp+18h] [ebp+10h]
  float v27; // [esp+18h] [ebp+10h]
  float v28; // [esp+18h] [ebp+10h]

  v9 = a7;
  v10 = a5;
  v11 = a3;
  if ( LOBYTE(a4) && v10 + v9 <= v11 )
  {
    if ( a6 <= 0.0 || (v12 = a8 - a9, 0.0 == v12) )
    {
      v13 = 0.0;
      v22 = flt_A41AC8;
    }
    else
    {
      v20 = v12;
      v21 = fabs(v20);
      v22 = 1.0 / a6 * v21;
      v13 = 0.0;
      if ( flt_A41AC8 > (double)v22 )
        v22 = flt_A41AC8;
    }
    v23 = v22 * a2;
    v24 = a1 - v23;
    v14 = v24 < v13;
    v15 = v24;
    if ( v14 )
      return (float)0.0;
    return (float)v15;
  }
  if ( v11 >= v10 )
  {
    v17 = v11 - v10;
    if ( v17 >= v9 )
    {
      if ( a6 <= v17 - v9 )
      {
        return a9;
      }
      else
      {
        v26 = a8 - a9;
        v27 = fabs(v26);
        v28 = a1 - a2 / a6 * v27;
        return (float)Min_Float(a9, v28);
      }
    }
    else
    {
      return a8;
    }
  }
  else
  {
    v25 = a2 / v10 * a8 + a1;
    v15 = v25;
    if ( v25 <= (double)a8 )
      return (float)v15;
    return a8;
  }
}
