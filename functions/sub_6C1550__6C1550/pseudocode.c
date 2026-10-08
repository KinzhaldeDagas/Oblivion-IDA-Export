float *__cdecl sub_6C1550(float *a1, float a2, float a3, float a4, float a5)
{
  float *result; // eax
  double v6; // st6
  double v7; // st7
  double v8; // st5
  float v9; // [esp+0h] [ebp-Ch]
  float v10; // [esp+4h] [ebp-8h]
  float v11; // [esp+8h] [ebp-4h]
  float v12; // [esp+10h] [ebp+4h]
  float v13; // [esp+10h] [ebp+4h]
  float v14; // [esp+10h] [ebp+4h]
  float v15; // [esp+10h] [ebp+4h]
  float v16; // [esp+14h] [ebp+8h]
  float v17; // [esp+18h] [ebp+Ch]
  float v18; // [esp+18h] [ebp+Ch]
  float v19; // [esp+18h] [ebp+Ch]
  float v20; // [esp+1Ch] [ebp+10h]

  result = a1; /*0x6c1553*/
  v9 = a1[1] - a2; /*0x6c155e*/
  v11 = a3 - a1[1]; /*0x6c1568*/
  v16 = a1[4] + 1.0; /*0x6c1575*/
  v10 = 1.0 - a1[4]; /*0x6c157e*/
  v17 = (1.0 - a1[2]) * dbl_A2FAA0; /*0x6c158d*/
  v12 = a1[3] + 1.0; /*0x6c1596*/
  v6 = v17; /*0x6c15a6*/
  v18 = v12 * v17; /*0x6c15a8*/
  v13 = 1.0 - result[3]; /*0x6c15b3*/
  v14 = v6 * v13; /*0x6c15bb*/
  v7 = a4; /*0x6c15bf*/
  v20 = dbl_A3D0C0 / (a4 + a5); /*0x6c15d7*/
  v8 = v18; /*0x6c15db*/
  v19 = v18 * v10 * v11 + v14 * v16 * v9; /*0x6c1600*/
  result[5] = v7 * v20 * v19; /*0x6c1616*/
  v15 = v8 * v16 * v9 + v11 * (v10 * v14); /*0x6c162c*/
  result[6] = v15 * (a5 * v20); /*0x6c163a*/
  return result; /*0x6c163d*/
}
