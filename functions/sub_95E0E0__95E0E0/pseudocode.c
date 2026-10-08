bool __cdecl sub_95E0E0(float a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  double v8; // st6
  double v9; // st5
  double v11; // st4
  bool v12; // c0
  bool v13; // c3
  double v14; // st6
  float v15; // [esp+0h] [ebp-Ch]
  float v16; // [esp+4h] [ebp-8h]
  float v17; // [esp+8h] [ebp-4h]
  float v18; // [esp+14h] [ebp+8h]
  float v19; // [esp+14h] [ebp+8h]
  float v20; // [esp+14h] [ebp+8h]
  float v21; // [esp+14h] [ebp+8h]
  float v22; // [esp+14h] [ebp+8h]
  float v23; // [esp+14h] [ebp+8h]
  int v24; // [esp+14h] [ebp+8h]
  float v25; // [esp+14h] [ebp+8h]

  v18 = a4[1] * a2[2] + *a4 * a2[1] + a4[2] * a2[3]; /*0x95e100*/
  v19 = v18 - a2[4]; /*0x95e10b*/
  v8 = v19; /*0x95e111*/
  if ( v19 >= 0.0 ) /*0x95e11c*/
    return 1; /*0x95e11c*/
  v20 = a5[1] * a2[2] + *a5 * a2[1] + a5[2] * a2[3]; /*0x95e137*/
  v21 = v20 - a2[4]; /*0x95e142*/
  v9 = v21; /*0x95e146*/
  if ( v21 >= 0.0 ) /*0x95e151*/
    return 1; /*0x95e15e*/
  v22 = a6[1] * a2[2] + *a6 * a2[1] + a6[2] * a2[3]; /*0x95e178*/
  v23 = v22 - a2[4]; /*0x95e183*/
  v11 = v23; /*0x95e187*/
  if ( v23 >= 0.0 ) /*0x95e192*/
    return 1; /*0x95e19a*/
  v15 = *a7 - *a3; /*0x95e1ae*/
  v16 = a7[1] - a3[1]; /*0x95e1b7*/
  v17 = a7[2] - a3[2]; /*0x95e1c1*/
  *(float *)&v24 = a2[2] * v16 + a2[1] * v15 + a2[3] * v17; /*0x95e1dd*/
  if ( *(float *)&v24 <= 0.0 ) /*0x95e1ee*/
    return 0; /*0x95e1f2*/
  v25 = *(float *)&v24 * -a1; /*0x95e208*/
  v12 = v25 < v8; /*0x95e210*/
  v13 = v25 == v8; /*0x95e210*/
  v14 = v25; /*0x95e214*/
  return v12 || v13 || v9 >= v14 || v14 <= v11; /*0x95e235*/
}
