BOOL __cdecl sub_960650(float a1, int a2, float *a3, int a4, float *a5)
{
  double v5; // st6
  double v6; // st5
  int v7; // esi
  float v8; // ecx
  float v9; // edx
  int v10; // edi
  float v11; // eax
  float v12; // ecx
  float v13; // edx
  double v14; // st7
  double v15; // st7
  float v17; // [esp+8h] [ebp-30h]
  float v18; // [esp+8h] [ebp-30h]
  float v19; // [esp+Ch] [ebp-2Ch]
  float v20; // [esp+Ch] [ebp-2Ch]
  float v21; // [esp+10h] [ebp-28h]
  float v22; // [esp+10h] [ebp-28h]
  float v23[9]; // [esp+14h] [ebp-24h] BYREF

  v17 = *a5 - *a3;
  v19 = a5[1] - a3[1];
  v21 = a5[2] - a3[2];
  v5 = v21;
  v6 = v19;
  if ( Vector3_InitValue_ == v17 && *(&Vector3_InitValue_ + 1) == v6 && dword_B3F9B0 == v5 )
  {
    v7 = a4;
    v10 = a2;
    v14 = sub_96FCD0((float *)(a2 + 0x20), (float *)(a4 + 0x20), (float *)&a4, (float *)&a2);
  }
  else
  {
    v7 = a4;
    v8 = *(float *)(a4 + 0x24);
    v9 = *(float *)(a4 + 0x28);
    v10 = a2;
    v18 = v17 * a1;
    v23[0] = *(float *)(a4 + 0x20);
    v11 = *(float *)(a4 + 0x2C);
    v23[1] = v8;
    v12 = *(float *)(a4 + 0x30);
    v23[3] = v11;
    v20 = v6 * a1;
    v23[2] = v9;
    v13 = *(float *)(a4 + 0x34);
    v23[4] = v12;
    v23[6] = v18;
    v22 = a1 * v5;
    v23[5] = v13;
    v23[7] = v20;
    v23[8] = v22;
    v14 = sub_9708E0((float *)(a2 + 0x20), v23, (float *)&a4, (float *)&a5, (float *)&a2);
  }
  *(float *)&a4 = v14;
  *(float *)&a2 = *(float *)(v10 + 0x38) + *(float *)(v7 + 0x38);
  v15 = *(float *)&a4;
  *(float *)&a4 = *(float *)&a2 * *(float *)&a2;
  return *(float *)&a4 >= v15;
}
