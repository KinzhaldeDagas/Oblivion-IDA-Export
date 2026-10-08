bool __cdecl sub_47D810(float *a1, float *a2, float a3)
{
  double v4; // st7
  bool result; // al
  float v6; // [esp+4h] [ebp+4h]
  float v7; // [esp+4h] [ebp+4h]
  float v8; // [esp+4h] [ebp+4h]
  float v9; // [esp+4h] [ebp+4h]
  float v10; // [esp+4h] [ebp+4h]
  float v11; // [esp+4h] [ebp+4h]

  v6 = *a1 - *a2; /*0x47d81c*/
  v7 = fabs(v6); /*0x47d826*/
  v4 = a3; /*0x47d836*/
  result = 0; /*0x47d83f*/
  if ( a3 > (double)v7 ) /*0x47d83b*/
  {
    v8 = a1[1] - a2[1]; /*0x47d848*/
    v9 = fabs(v8); /*0x47d852*/
    if ( v9 < v4 ) /*0x47d861*/
    {
      v10 = a1[2] - a2[2]; /*0x47d869*/
      v11 = fabs(v10); /*0x47d873*/
      if ( v11 < v4 ) /*0x47d882*/
        return 1; /*0x47d83b*/
    }
  }
  return result; /*0x47d841*/
}
