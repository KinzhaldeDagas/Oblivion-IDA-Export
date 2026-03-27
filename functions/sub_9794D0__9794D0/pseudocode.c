float *__thiscall sub_9794D0(
        float *this,
        float *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        signed int a8,
        int a9)
{
  int v9; // eax
  int v11; // ebx
  float *v12; // edi
  float *v13; // eax
  float *v14; // edx
  float *v15; // esi
  double v16; // st6
  double v17; // st7
  double v19; // st7
  double v20; // st6
  double v21; // st5
  float v22; // [esp+0h] [ebp-38h]
  float v23; // [esp+8h] [ebp-30h]
  float v24; // [esp+Ch] [ebp-2Ch]
  float v25; // [esp+10h] [ebp-28h]
  float v26; // [esp+14h] [ebp-24h]
  float v27; // [esp+14h] [ebp-24h]
  float v28; // [esp+18h] [ebp-20h]
  float v29; // [esp+18h] [ebp-20h]
  float v30; // [esp+1Ch] [ebp-1Ch]
  float v31; // [esp+1Ch] [ebp-1Ch]
  float v32; // [esp+20h] [ebp-18h]
  float v33; // [esp+24h] [ebp-14h]
  float v34; // [esp+28h] [ebp-10h]
  float v35; // [esp+2Ch] [ebp-Ch]
  float v36; // [esp+30h] [ebp-8h]
  float i; // [esp+34h] [ebp-4h]
  float v38; // [esp+40h] [ebp+8h]
  float v39; // [esp+40h] [ebp+8h]
  float v40; // [esp+40h] [ebp+8h]
  float v41; // [esp+40h] [ebp+8h]
  float v42; // [esp+40h] [ebp+8h]
  float v43; // [esp+44h] [ebp+Ch]

  v23 = 0.0;
  v24 = 0.0;
  v9 = a7;
  v25 = 0.0;
  v22 = 0.0;
  v32 = 0.0;
  v33 = 0.0;
  v34 = 0.0;
  v35 = 0.0;
  v36 = 0.0;
  for ( i = 0.0; a7 <= a8; i = v43 * (v16 * v16 + v14[2] * v14[2] + v15[2] * v15[2] + v12[2] * v12[2]) + i )
  {
    v11 = *(_DWORD *)(a9 + 4 * v9);
    v12 = (float *)(a4 + 0xC * *(unsigned __int16 *)(a3 + 2 * (3 * v11 + 1) + 2));
    v13 = (float *)(a6 + 0xC * v11);
    v14 = (float *)(a4 + 0xC * *(unsigned __int16 *)(a3 + 6 * v11));
    v43 = *(float *)(a5 + 4 * v11);
    v15 = (float *)(a4 + 0xC * *(unsigned __int16 *)(a3 + 6 * v11 + 2));
    v22 = v43 + v22;
    v26 = *v13 * v43;
    v28 = v43 * v13[1];
    v30 = v13[2] * v43;
    v23 = v26 + v23;
    v24 = v28 + v24;
    v25 = v30 + v25;
    v32 = (*v13 * *v13 + *v14 * *v14 + *v15 * *v15 + *v12 * *v12) * v43 + v32;
    v33 = (*v13 * v13[1] + v14[1] * *v14 + *v15 * v15[1] + *v12 * v12[1]) * v43 + v33;
    v34 = (*v13 * v13[2] + v14[2] * *v14 + *v15 * v15[2] + *v12 * v12[2]) * v43 + v34;
    v35 = (v13[1] * v13[1] + v14[1] * v14[1] + v15[1] * v15[1] + v12[1] * v12[1]) * v43 + v35;
    v36 = (v13[2] * v13[1] + v14[2] * v14[1] + v15[2] * v15[1] + v12[2] * v12[1]) * v43 + v36;
    v16 = v13[2];
    v9 = ++a7;
  }
  v38 = 1.0 / v22;
  v17 = v38;
  v39 = dbl_A3C770 * v38;
  v27 = v23 * v17;
  *(this + 1) = v27;
  v29 = v24 * v17;
  *(this + 2) = v29;
  v31 = v17 * v25;
  *(this + 3) = v31;
  v19 = v39;
  *a2 = v39 * v32 - *(this + 1) * *(this + 1);
  v40 = v39 * v33 - *(this + 2) * *(this + 1);
  v20 = v40;
  a2[1] = v40;
  v41 = v19 * v34 - *(this + 1) * *(this + 3);
  v21 = v41;
  a2[2] = v41;
  a2[4] = v19 * v35 - *(this + 2) * *(this + 2);
  v42 = v19 * v36 - *(this + 2) * *(this + 3);
  a2[5] = v42;
  a2[8] = v19 * i - *(this + 3) * *(this + 3);
  a2[3] = v20;
  a2[6] = v21;
  a2[7] = v42;
  return a2;
}
