bool __cdecl sub_9682F0(float a1, float *a2, float *a3, float *a4, float *a5)
{
  float *v5; // ecx
  float *v6; // edi
  float *v7; // esi
  double v8; // st6
  double v9; // st7
  double v11; // st6
  double v12; // st5
  float v13; // ecx
  float v14; // edx
  double v15; // st7
  float v16; // [esp+8h] [ebp-2Ch] BYREF
  float v17; // [esp+Ch] [ebp-28h] BYREF
  float v18; // [esp+10h] [ebp-24h]
  float v19; // [esp+14h] [ebp-20h]
  float v20; // [esp+18h] [ebp-1Ch]
  float v21[6]; // [esp+1Ch] [ebp-18h] BYREF

  v5 = a2;
  v6 = a4;
  v7 = a2 + 1;
  v18 = a4[1] - a2[1];
  v19 = a4[2] - a2[2];
  v20 = a4[3] - a2[3];
  v8 = v19;
  v9 = v18;
  *(float *)&a2 = a2[6] * v20 + a2[4] * v18 + a2[5] * v19;
  *(float *)&a2 = fabs(*(float *)&a2);
  if ( v5[0xD] >= (double)*(float *)&a2 )
  {
    *(float *)&a2 = v5[8] * v8 + v5[7] * v9 + v5[9] * v20;
    *(float *)&a2 = fabs(*(float *)&a2);
    if ( v5[0xE] >= (double)*(float *)&a2 )
    {
      *(float *)&a2 = v9 * v5[0xA] + v8 * v5[0xB] + v20 * v5[0xC];
      *(float *)&a2 = fabs(*(float *)&a2);
      if ( v5[0xF] >= (double)*(float *)&a2 )
        return 1;
    }
  }
  v18 = *a5 - *a3;
  v19 = a5[1] - a3[1];
  v20 = a5[2] - a3[2];
  v11 = v20;
  v12 = v19;
  if ( Vector3_InitValue_ == v18 && *(&Vector3_InitValue_ + 1) == v12 && dword_B3F9B0 == v11 )
  {
    v15 = sub_974C80(a4 + 1, v7, &v16, (float *)&a4, (float *)&a2);
  }
  else
  {
    v13 = a4[2];
    v14 = a4[3];
    v21[0] = a4[1];
    v21[1] = v13;
    v18 = v18 * a1;
    v21[3] = v18;
    v21[2] = v14;
    v19 = v12 * a1;
    v21[4] = v19;
    v20 = a1 * v11;
    v21[5] = v20;
    v15 = sub_975AA0(v21, v7, &v17, &v16, (float *)&a4, (float *)&a2);
  }
  *(float *)&a2 = v15;
  return *(float *)&a2 <= v6[4] * v6[4];
}
