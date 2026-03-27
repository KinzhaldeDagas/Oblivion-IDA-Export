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

  v7 = *a2;
  v8 = a2[1];
  v19 = *v8 - **a2;
  v10 = a1[1];
  v20 = v8[1] - v7[1];
  v12 = a2[2];
  v21 = v8[2] - v7[2];
  v16 = *v12 - *v7;
  v17 = v12[1] - v7[1];
  v18 = v12[2] - v7[2];
  *(float *)&v13 = v18 * v20 - v17 * v21;
  v14 = v21 * v16 - v18 * v19;
  v15 = v19 * v17 - v16 * v20;
  v24 = v7[1] * v14 + *v7 * *(float *)&v13 + v7[2] * v15;
  v22 = sub_978770(*a1, v10, a2, (float *)&v13, v24, a3, a4, a5, a6);
  v23 = sub_978770(*a1, a1[2], a2, (float *)&v13, v24, a3, a4, a5, a6) | v22;
  return v23 | sub_978770(a1[1], a1[2], a2, (float *)&v13, v24, a3, a4, a5, a6);
}
