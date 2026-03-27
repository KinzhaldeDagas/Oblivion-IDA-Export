BOOL __cdecl sub_8904E0(float *a1, float *a2, float a3)
{
  double v4; // st7
  BOOL result; // eax
  float v6; // [esp+4h] [ebp+4h]
  float v7; // [esp+4h] [ebp+4h]
  float v8; // [esp+4h] [ebp+4h]
  float v9; // [esp+4h] [ebp+4h]
  float v10; // [esp+4h] [ebp+4h]
  float v11; // [esp+4h] [ebp+4h]

  v6 = *a1 - *a2;
  v7 = fabs(v6);
  v4 = a3;
  result = 0;
  if ( a3 >= (double)v7 )
  {
    v8 = a1[1] - a2[1];
    v9 = fabs(v8);
    if ( v9 <= v4 )
    {
      v10 = a1[2] - a2[2];
      v11 = fabs(v10);
      if ( v11 <= v4 )
        return 1;
    }
  }
  return result;
}
