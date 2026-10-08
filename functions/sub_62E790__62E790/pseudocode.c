float *__cdecl sub_62E790(float *a1, float a2, float a3, float a4, float a5, float a6)
{
  double v7; // st7
  float v9; // [esp+4h] [ebp-20h]
  float v10; // [esp+8h] [ebp-1Ch]
  float v11; // [esp+Ch] [ebp-18h]
  float v12; // [esp+10h] [ebp-14h]
  float v13; // [esp+14h] [ebp-10h]
  float v14; // [esp+18h] [ebp-Ch]
  float v15; // [esp+1Ch] [ebp-8h]
  float v16; // [esp+20h] [ebp-4h]
  float v17; // [esp+28h] [ebp+4h]
  int v18; // [esp+28h] [ebp+4h]

  v10 = (double)Game_RandomLargeInteger(0) - dbl_A71DB8; /*0x62e7ab*/
  v9 = (double)Game_RandomLargeInteger(0) - dbl_A71DB8; /*0x62e7cb*/
  *a1 = v10; /*0x62e7d3*/
  a1[1] = v9; /*0x62e7d9*/
  a1[2] = 0.0; /*0x62e7de*/
  Vector3_NormalizeInPlace(a1); /*0x62e7e1*/
  v17 = (double)Game_RandomLargeInteger(0) / dbl_A3D5A8; /*0x62e800*/
  *(float *)&v18 = (a5 + a6) * v17; /*0x62e816*/
  if ( *(float *)&v18 >= (double)a6 ) /*0x62e825*/
    v7 = *(float *)&v18; /*0x62e833*/
  else
    v7 = a6; /*0x62e82d*/
  v11 = *a1 * v7; /*0x62e839*/
  v12 = a1[1] * v7; /*0x62e842*/
  v13 = v7 * a1[2]; /*0x62e849*/
  v14 = v11 + a2; /*0x62e855*/
  *a1 = v14; /*0x62e861*/
  v15 = a3 + v12; /*0x62e869*/
  a1[1] = v15; /*0x62e875*/
  v16 = a4 + v13; /*0x62e87c*/
  a1[2] = v16; /*0x62e884*/
  return a1; /*0x62e887*/
}
