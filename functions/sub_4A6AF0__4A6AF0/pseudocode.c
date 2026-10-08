char __cdecl sub_4A6AF0(float *a1, float *a2, float *a3, float *a4)
{
  double v5; // st6
  double v6; // st5
  double v7; // st5
  double v8; // st4
  double v10; // st4
  double v11; // st3
  double v12; // st3
  double v13; // st2
  double v14; // st6
  double v15; // st5
  float v16; // [esp+8h] [ebp-Ch]
  float v17; // [esp+8h] [ebp-Ch]
  float v18; // [esp+8h] [ebp-Ch]
  float v19; // [esp+Ch] [ebp-8h]
  float v20; // [esp+Ch] [ebp-8h]
  float v21; // [esp+Ch] [ebp-8h]
  float v22; // [esp+10h] [ebp-4h]
  float v23; // [esp+18h] [ebp+4h]
  float v24; // [esp+18h] [ebp+4h]
  float v25; // [esp+18h] [ebp+4h]
  float v26; // [esp+18h] [ebp+4h]
  float v27; // [esp+18h] [ebp+4h]
  float v28; // [esp+18h] [ebp+4h]

  if ( !a1 || !a2 || !a3 || !a4 ) /*0x4a6b13*/
    return 0; /*0x4a6b13*/
  v23 = *a2 - *a1; /*0x4a6b19*/
  v19 = *a3 - *a4; /*0x4a6b21*/
  v5 = v23; /*0x4a6b27*/
  if ( v23 >= 0.0 ) /*0x4a6b32*/
  {
    v24 = *a2; /*0x4a6b40*/
    v6 = *a1; /*0x4a6b44*/
  }
  else
  {
    v24 = *a1; /*0x4a6b36*/
    v6 = *a2; /*0x4a6b3a*/
  }
  v16 = v6; /*0x4a6b46*/
  v7 = v19; /*0x4a6b4a*/
  v8 = v24; /*0x4a6b52*/
  if ( v19 <= 0.0 ) /*0x4a6b59*/
  {
    if ( *a3 > v8 || v16 > (double)*a4 ) /*0x4a6b9b*/
      return 0; /*0x4a6b9b*/
  }
  else if ( *a4 > v8 || v16 > (double)*a3 ) /*0x4a6b73*/
  {
    return 0; /*0x4a6b73*/
  }
  v25 = a2[1] - a1[1]; /*0x4a6ba3*/
  v20 = a3[1] - a4[1]; /*0x4a6bad*/
  v10 = v25; /*0x4a6bb1*/
  if ( v25 >= 0.0 ) /*0x4a6bbc*/
  {
    v26 = a2[1]; /*0x4a6bcd*/
    v11 = a1[1]; /*0x4a6bd1*/
  }
  else
  {
    v26 = a1[1]; /*0x4a6bc1*/
    v11 = a2[1]; /*0x4a6bc5*/
  }
  v17 = v11; /*0x4a6bd4*/
  v12 = v20; /*0x4a6bd8*/
  v13 = v26; /*0x4a6be0*/
  if ( v20 <= 0.0 ) /*0x4a6be7*/
  {
    if ( a3[1] > v13 || v17 > (double)a4[1] ) /*0x4a6c31*/
      return 0; /*0x4a6c31*/
  }
  else if ( a4[1] > v13 || v17 > (double)a3[1] ) /*0x4a6c03*/
  {
    return 0; /*0x4a6c16*/
  }
  v21 = *a1 - *a3; /*0x4a6c37*/
  v27 = a1[1] - a3[1]; /*0x4a6c41*/
  v22 = v10 * v7 - v12 * v5; /*0x4a6c4f*/
  v18 = v5 * v27 - v10 * v21; /*0x4a6c69*/
  v28 = v21 * v12 - v7 * v27; /*0x4a6c73*/
  v14 = v22; /*0x4a6c81*/
  if ( v22 == 0.0 ) /*0x4a6c86*/
    return 1; /*0x4a6c93*/
  v15 = v28; /*0x4a6c98*/
  if ( v14 > 0.0 ) /*0x4a6ca3*/
  {
    if ( v28 >= 0.0 ) /*0x4a6ca8*/
    {
      if ( v15 <= v14 && v18 >= 0.0 ) /*0x4a6cc4*/
        return v14 >= v18; /*0x4a6ccd*/
      return 0; /*0x4a6ce2*/
    }
    return 0; /*0x4a6ca8*/
  }
  if ( v28 > 0.0 ) /*0x4a6ce6*/
    return 0; /*0x4a6ce6*/
  if ( v15 < v14 || v18 > 0.0 ) /*0x4a6d02*/
    return 0; /*0x4a6d02*/
  return v14 <= v18; /*0x4a6d0b*/
}
