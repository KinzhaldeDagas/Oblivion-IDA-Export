bool __cdecl sub_47D890(float *a1, float *a2, float a3)
{
  bool result; // al
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]
  float v7; // [esp+4h] [ebp+4h]
  float v8; // [esp+4h] [ebp+4h]

  v5 = *a1 - *a2;
  v6 = fabs(v5);
  result = 0;
  if ( a3 > (double)v6 )
  {
    v7 = a1[1] - a2[1];
    v8 = fabs(v7);
    if ( v8 < (double)a3 )
      return 1;
  }
  return result;
}
