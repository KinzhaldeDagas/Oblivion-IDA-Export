bool __cdecl sub_4A6AF0(float *a1, float *a2, float *a3, float *a4)
{
  double v5; // st6
  double v6; // st5
  double v7; // st5
  double v8; // st4
  double v10; // st4
  double v11; // st3
  double v12; // st3
  double v13; // st2
  double v14; // st6
  double v15; // st5
  float v16; // [esp+8h] [ebp-Ch]
  float v17; // [esp+8h] [ebp-Ch]
  float v18; // [esp+8h] [ebp-Ch]
  float v19; // [esp+Ch] [ebp-8h]
  float v20; // [esp+Ch] [ebp-8h]
  float v21; // [esp+Ch] [ebp-8h]
  float v22; // [esp+10h] [ebp-4h]
  float v23; // [esp+18h] [ebp+4h]
  float v24; // [esp+18h] [ebp+4h]
  float v25; // [esp+18h] [ebp+4h]
  float v26; // [esp+18h] [ebp+4h]
  float v27; // [esp+18h] [ebp+4h]
  float v28; // [esp+18h] [ebp+4h]

  if ( !a1 || !a2 || !a3 || !a4 )
    return 0;
  v23 = *a2 - *a1;
  v19 = *a3 - *a4;
  v5 = v23;
  if ( v23 >= 0.0 )
  {
    v24 = *a2;
    v6 = *a1;
  }
  else
  {
    v24 = *a1;
    v6 = *a2;
  }
  v16 = v6;
  v7 = v19;
  v8 = v24;
  if ( v19 <= 0.0 )
  {
    if ( *a3 > v8 || v16 > (double)*a4 )
      return 0;
  }
  else if ( *a4 > v8 || v16 > (double)*a3 )
  {
    return 0;
  }
  v25 = a2[1] - a1[1];
  v20 = a3[1] - a4[1];
  v10 = v25;
  if ( v25 >= 0.0 )
  {
    v26 = a2[1];
    v11 = a1[1];
  }
  else
  {
    v26 = a1[1];
    v11 = a2[1];
  }
  v17 = v11;
  v12 = v20;
  v13 = v26;
  if ( v20 <= 0.0 )
  {
    if ( a3[1] > v13 || v17 > (double)a4[1] )
      return 0;
  }
  else if ( a4[1] > v13 || v17 > (double)a3[1] )
  {
    return 0;
  }
  v21 = *a1 - *a3;
  v27 = a1[1] - a3[1];
  v22 = v10 * v7 - v12 * v5;
  v18 = v5 * v27 - v10 * v21;
  v28 = v21 * v12 - v7 * v27;
  v14 = v22;
  if ( v22 == 0.0 )
    return 1;
  v15 = v28;
  if ( v14 > 0.0 )
  {
    if ( v28 >= 0.0 )
    {
      if ( v15 <= v14 && v18 >= 0.0 )
        return v14 >= v18;
      return 0;
    }
    return 0;
  }
  if ( v28 > 0.0 )
    return 0;
  if ( v15 < v14 || v18 > 0.0 )
    return 0;
  return v14 <= v18;
}
