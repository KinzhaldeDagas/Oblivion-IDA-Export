bool __cdecl sub_47D890(float *a1, float *a2, float a3)
{
  bool result; // al
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]
  float v7; // [esp+4h] [ebp+4h]
  float v8; // [esp+4h] [ebp+4h]

  v5 = *a1 - *a2; /*0x47d89c*/
  v6 = fabs(v5); /*0x47d8a6*/
  result = 0; /*0x47d8bf*/
  if ( a3 > (double)v6 ) /*0x47d8bb*/
  {
    v7 = a1[1] - a2[1]; /*0x47d8c8*/
    v8 = fabs(v7); /*0x47d8d2*/
    if ( v8 < (double)a3 ) /*0x47d8e1*/
      return 1; /*0x47d8bb*/
  }
  return result; /*0x47d8c1*/
}
