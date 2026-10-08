double __cdecl sub_974C80(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  double v5; // st7
  double v6; // st6
  double v7; // st4
  double v8; // st4
  double v9; // st7
  float v11; // [esp+0h] [ebp-10h]
  float v12; // [esp+4h] [ebp-Ch]
  float v13; // [esp+4h] [ebp-Ch]
  float v14; // [esp+8h] [ebp-8h]
  float v15; // [esp+8h] [ebp-8h]
  float v16; // [esp+Ch] [ebp-4h]
  float v17; // [esp+Ch] [ebp-4h]
  float v18; // [esp+14h] [ebp+4h]
  float v19; // [esp+14h] [ebp+4h]
  float v20; // [esp+14h] [ebp+4h]
  float v21; // [esp+14h] [ebp+4h]
  float v22; // [esp+14h] [ebp+4h]
  float v23; // [esp+14h] [ebp+4h]

  v11 = 0.0; /*0x974c8d*/
  v12 = *a1 - *a2; /*0x974c94*/
  v14 = a1[1] - a2[1]; /*0x974c9e*/
  v16 = a1[2] - a2[2]; /*0x974ca8*/
  v5 = v14; /*0x974cac*/
  v6 = v12; /*0x974cb0*/
  v13 = a2[4] * v14 + a2[3] * v12 + a2[5] * v16; /*0x974ccb*/
  v7 = v13; /*0x974ccf*/
  if ( -a2[0xC] <= v13 ) /*0x974cdf*/
  {
    if ( a2[0xC] < v7 ) /*0x974d0c*/
    {
      v19 = v7 - a2[0xC]; /*0x974d11*/
      v11 = v19 * v19 + dbl_A2FC68; /*0x974d21*/
      v13 = a2[0xC]; /*0x974d27*/
    }
  }
  else
  {
    v18 = v7 + a2[0xC]; /*0x974ce4*/
    v11 = v18 * v18 + dbl_A2FC68; /*0x974cf4*/
    v13 = -a2[0xC]; /*0x974cfc*/
  }
  v15 = a2[7] * v5 + a2[6] * v6 + a2[8] * v16; /*0x974d42*/
  v8 = v15; /*0x974d46*/
  if ( -a2[0xD] <= v15 ) /*0x974d56*/
  {
    if ( a2[0xD] < v8 ) /*0x974d80*/
    {
      v21 = v8 - a2[0xD]; /*0x974d85*/
      v11 = v21 * v21 + v11; /*0x974d92*/
      v15 = a2[0xD]; /*0x974d98*/
    }
  }
  else
  {
    v20 = v8 + a2[0xD]; /*0x974d5b*/
    v11 = v20 * v20 + v11; /*0x974d68*/
    v15 = -a2[0xD]; /*0x974d70*/
  }
  v17 = v16 * a2[0xB] + v6 * a2[9] + v5 * a2[0xA]; /*0x974db5*/
  v9 = v17; /*0x974db9*/
  if ( -a2[0xE] <= v17 ) /*0x974dc9*/
  {
    if ( a2[0xE] < v9 ) /*0x974df3*/
    {
      v23 = v9 - a2[0xE]; /*0x974df8*/
      v11 = v23 * v23 + v11; /*0x974e05*/
      v17 = a2[0xE]; /*0x974e0b*/
    }
  }
  else
  {
    v22 = v9 + a2[0xE]; /*0x974dce*/
    v11 = v22 * v22 + v11; /*0x974ddb*/
    v17 = -a2[0xE]; /*0x974de3*/
  }
  *a3 = v13; /*0x974e1f*/
  *a4 = v15; /*0x974e29*/
  *a5 = v17; /*0x974e2f*/
  return v11; /*0x974e34*/
}
