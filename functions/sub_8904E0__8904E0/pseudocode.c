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

  v6 = *a1 - *a2; /*0x8904ec*/
  v7 = fabs(v6); /*0x8904f6*/
  v4 = a3; /*0x890506*/
  result = 0; /*0x890557*/
  if ( a3 >= (double)v7 ) /*0x89050b*/
  {
    v8 = a1[1] - a2[1]; /*0x890513*/
    v9 = fabs(v8); /*0x89051d*/
    if ( v9 <= v4 ) /*0x89052c*/
    {
      v10 = a1[2] - a2[2]; /*0x890534*/
      v11 = fabs(v10); /*0x89053e*/
      if ( v11 <= v4 ) /*0x89054d*/
        return 1; /*0x89050b*/
    }
  }
  return result; /*0x890554*/
}
