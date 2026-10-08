float *__cdecl sub_977C60(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  double v6; // st7
  double v7; // st5
  double v8; // st4
  double v9; // st7
  float v10; // [esp+0h] [ebp-24h]
  float v11; // [esp+0h] [ebp-24h]
  float v12; // [esp+4h] [ebp-20h]
  float v13; // [esp+8h] [ebp-1Ch]
  float v14; // [esp+Ch] [ebp-18h]
  float v15; // [esp+10h] [ebp-14h]
  float v16; // [esp+14h] [ebp-10h]
  float v17; // [esp+18h] [ebp-Ch]
  float v18; // [esp+1Ch] [ebp-8h]
  float v19; // [esp+20h] [ebp-4h]
  float v20; // [esp+28h] [ebp+4h]
  float v21; // [esp+28h] [ebp+4h]
  float v22; // [esp+28h] [ebp+4h]
  float v23; // [esp+28h] [ebp+4h]
  float v24; // [esp+2Ch] [ebp+8h]
  float v25; // [esp+30h] [ebp+Ch]
  float v26; // [esp+34h] [ebp+10h]

  v10 = *a1 - *a3; /*0x977c6f*/
  v12 = a1[1] - a3[1]; /*0x977c78*/
  v13 = a1[2] - a3[2]; /*0x977c86*/
  v14 = *a2 - *a3; /*0x977c8e*/
  v15 = a2[1] - a3[1]; /*0x977c98*/
  v16 = a2[2] - a3[2]; /*0x977ca6*/
  v17 = *a4 - *a3; /*0x977cae*/
  v18 = a4[1] - a3[1]; /*0x977cb8*/
  v19 = a4[2] - a3[2]; /*0x977cc2*/
  v24 = v13 * v13 + v10 * v10 + v12 * v12; /*0x977ceb*/
  v20 = v14 * v10 + v15 * v12 + v16 * v13; /*0x977d0b*/
  v25 = v14 * v14 + v15 * v15 + v16 * v16; /*0x977d29*/
  v26 = v13 * v19 + v12 * v18 + v10 * v17; /*0x977d53*/
  v11 = v19 * v16 + v15 * v18 + v14 * v17; /*0x977d6b*/
  v6 = v20; /*0x977d6e*/
  v21 = 1.0 / (v25 * v24 - v20 * v20); /*0x977d92*/
  v7 = v21; /*0x977daf*/
  v22 = (v25 * v26 - v11 * v6) * v21; /*0x977db1*/
  *a5 = v22; /*0x977db9*/
  v8 = v24 * v11 - v6 * v26; /*0x977dc7*/
  v9 = v22; /*0x977dc7*/
  v23 = v7 * v8; /*0x977dcb*/
  a5[1] = v23; /*0x977dd3*/
  a5[2] = 1.0 - v9 - v23; /*0x977ddc*/
  return a5; /*0x977ddf*/
}
