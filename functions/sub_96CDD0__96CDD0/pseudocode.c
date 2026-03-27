BOOL __cdecl sub_96CDD0(float a1, int a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  float v7; // edx
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st7
  double v14; // st7
  double v15; // st6
  double v16; // st5
  int v17; // esi
  float v18; // ecx
  float v19; // edx
  double v20; // st7
  float v22; // [esp+4h] [ebp-48h]
  float v23; // [esp+4h] [ebp-48h]
  float v24; // [esp+4h] [ebp-48h]
  float v25; // [esp+4h] [ebp-48h]
  float v26; // [esp+8h] [ebp-44h]
  float v27; // [esp+8h] [ebp-44h]
  float v28; // [esp+8h] [ebp-44h]
  float v29; // [esp+8h] [ebp-44h]
  float v30; // [esp+Ch] [ebp-40h]
  float v31; // [esp+Ch] [ebp-40h]
  float v32; // [esp+Ch] [ebp-40h]
  float v33; // [esp+Ch] [ebp-40h]
  float v34[6]; // [esp+10h] [ebp-3Ch] BYREF
  float v35[9]; // [esp+28h] [ebp-24h] BYREF

  v7 = a4[1];
  v35[0] = *a4;
  v35[2] = a4[2];
  v8 = *a5;
  v35[1] = v7;
  v22 = v8 - *a4;
  v9 = a5[1];
  v35[3] = v22;
  v26 = v9 - a4[1];
  v10 = a5[2] - a4[2];
  v35[4] = v26;
  v30 = v10;
  v11 = *a6;
  v35[5] = v30;
  v23 = v11 - *a4;
  v27 = a6[1] - a4[1];
  v12 = a6[2] - a4[2];
  v35[6] = v23;
  v31 = v12;
  v13 = *a3;
  v35[7] = v27;
  v14 = v13 - *a7;
  v35[8] = v31;
  v24 = v14;
  v28 = a3[1] - a7[1];
  v32 = a3[2] - a7[2];
  v15 = v32;
  v16 = v28;
  if ( Vector3_InitValue_ == v24 && *(&Vector3_InitValue_ + 1) == v16 && dword_B3F9B0 == v15 )
  {
    v17 = a2;
    v20 = sub_975DF0((float *)(a2 + 4), v35, (float *)&a4, (float *)&a2);
  }
  else
  {
    v17 = a2;
    v18 = *(float *)(a2 + 8);
    v19 = *(float *)(a2 + 0xC);
    v34[0] = *(float *)(a2 + 4);
    v25 = v24 * a1;
    v34[1] = v18;
    v34[3] = v25;
    v34[2] = v19;
    v29 = v16 * a1;
    v34[4] = v29;
    v33 = a1 * v15;
    v34[5] = v33;
    v20 = sub_9726E0(v34, v35, (float *)&a5, (float *)&a4, (float *)&a2);
  }
  *(float *)&a2 = v20;
  return *(float *)&a2 <= *(float *)(v17 + 0x10) * *(float *)(v17 + 0x10);
}
