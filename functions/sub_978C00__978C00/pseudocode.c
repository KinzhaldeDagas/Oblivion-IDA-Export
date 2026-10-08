int __cdecl sub_978C00(float **a1, float **a2, float *a3, float a4, float *a5, float *a6)
{
  float *v7; // eax
  float *v8; // ecx
  float *v10; // edx
  float *v12; // [esp+8h] [ebp-40h]
  int v13; // [esp+24h] [ebp-24h] BYREF
  float v14; // [esp+28h] [ebp-20h]
  float v15; // [esp+2Ch] [ebp-1Ch]
  float v16; // [esp+30h] [ebp-18h]
  float v17; // [esp+34h] [ebp-14h]
  float v18; // [esp+38h] [ebp-10h]
  float v19; // [esp+3Ch] [ebp-Ch]
  float v20; // [esp+40h] [ebp-8h]
  float v21; // [esp+44h] [ebp-4h]
  int v22; // [esp+4Ch] [ebp+4h]
  int v23; // [esp+4Ch] [ebp+4h]
  float v24; // [esp+50h] [ebp+8h]

  v7 = *a2; /*0x978c0a*/
  v8 = a2[1]; /*0x978c0c*/
  v19 = *v8 - **a2; /*0x978c20*/
  v10 = a1[1]; /*0x978c24*/
  v20 = v8[1] - v7[1]; /*0x978c2f*/
  v12 = a2[2]; /*0x978c3c*/
  v21 = v8[2] - v7[2]; /*0x978c3d*/
  v16 = *v12 - *v7; /*0x978c45*/
  v17 = v12[1] - v7[1]; /*0x978c4f*/
  v18 = v12[2] - v7[2]; /*0x978c59*/
  *(float *)&v13 = v18 * v20 - v17 * v21; /*0x978c7d*/
  v14 = v21 * v16 - v18 * v19; /*0x978c97*/
  v15 = v19 * v17 - v16 * v20; /*0x978ca1*/
  v24 = v7[1] * v14 + *v7 * *(float *)&v13 + v7[2] * v15; /*0x978cc1*/
  v22 = sub_978770(*a1, v10, a2, (float *)&v13, v24, a3, a4, a5, a6); /*0x978d05*/
  v23 = sub_978770(*a1, a1[2], a2, (float *)&v13, v24, a3, a4, a5, a6) | v22; /*0x978d1c*/
  return v23 | sub_978770(a1[1], a1[2], a2, (float *)&v13, v24, a3, a4, a5, a6); /*0x978d4c*/
}
