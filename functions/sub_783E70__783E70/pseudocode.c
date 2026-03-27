_DWORD *__stdcall sub_783E70(_DWORD *a1, float *a2, float *a3, float *a4, float *a5, float a6)
{
  float v7; // [esp+4h] [ebp-28h]
  float v8; // [esp+Ch] [ebp-20h]
  float v9; // [esp+10h] [ebp-1Ch]
  float v10; // [esp+14h] [ebp-18h]
  float v11; // [esp+14h] [ebp-18h]
  float v12; // [esp+18h] [ebp-14h]
  float v13; // [esp+18h] [ebp-14h]
  float v14; // [esp+1Ch] [ebp-10h]
  float v15; // [esp+20h] [ebp-Ch]
  float v16; // [esp+24h] [ebp-8h]
  float v17; // [esp+28h] [ebp-4h]
  float v18; // [esp+34h] [ebp+8h]
  float v19; // [esp+34h] [ebp+8h]

  v10 = *a2 + (*a3 - *a2) * a6;
  v12 = (a3[1] - a2[1]) * a6 + a2[1];
  v8 = (*a4 - *a3) * a6 + *a3;
  v9 = (a4[1] - a3[1]) * a6 + a3[1];
  v14 = (*a5 - *a4) * a6 + *a4;
  v15 = (a5[1] - a4[1]) * a6 + a4[1];
  v16 = (v8 - v10) * a6 + v10;
  v17 = (v9 - v12) * a6 + v12;
  v11 = v8 + (v14 - v8) * a6;
  v13 = v9 + (v15 - v9) * a6;
  v18 = (v13 - v17) * a6 + v17;
  v7 = v18;
  v19 = a6 * (v11 - v16) + v16;
  sub_78E5A0(a1, v19, v7);
  return a1;
}
