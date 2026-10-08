bool __cdecl sub_95DCA0(float a1, float *a2, float *a3, float *a4, float *a5)
{
  double v6; // st7
  float v8; // [esp+0h] [ebp-Ch]
  float v9; // [esp+4h] [ebp-8h]
  float v10; // [esp+8h] [ebp-4h]
  float v11; // [esp+14h] [ebp+8h]
  float v12; // [esp+14h] [ebp+8h]
  int v13; // [esp+14h] [ebp+8h]
  int v14; // [esp+1Ch] [ebp+10h]

  v11 = a4[2] * a2[2] + a4[1] * a2[1] + a4[3] * a2[3]; /*0x95dcc1*/
  v12 = v11 - a2[4]; /*0x95dccc*/
  *(float *)&v14 = -a4[4]; /*0x95dcd5*/
  v6 = v12; /*0x95dcd9*/
  if ( *(float *)&v14 <= (double)v12 ) /*0x95dce8*/
    return 1; /*0x95dcec*/
  v8 = *a5 - *a3; /*0x95dd00*/
  v9 = a5[1] - a3[1]; /*0x95dd09*/
  v10 = a5[2] - a3[2]; /*0x95dd13*/
  *(float *)&v13 = a2[2] * v9 + v8 * a2[1] + a2[3] * v10; /*0x95dd2f*/
  return *(float *)&v13 > 0.0 && *(float *)&v14 <= v6 + *(float *)&v13 * a1; /*0x95dcf0*/
}
