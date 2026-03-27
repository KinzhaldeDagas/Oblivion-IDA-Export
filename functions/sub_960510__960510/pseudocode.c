BOOL __cdecl sub_960510(float a1, int a2, float *a3, int a4, float *a5)
{
  double v5; // st6
  double v6; // st5
  int v7; // esi
  float v8; // ecx
  float v9; // edx
  int v10; // edi
  double v11; // st7
  double v12; // st7
  float v14; // [esp+8h] [ebp-24h]
  float v15; // [esp+8h] [ebp-24h]
  float v16; // [esp+Ch] [ebp-20h]
  float v17; // [esp+Ch] [ebp-20h]
  float v18; // [esp+10h] [ebp-1Ch]
  float v19; // [esp+10h] [ebp-1Ch]
  float v20[6]; // [esp+14h] [ebp-18h] BYREF

  v14 = *a5 - *a3;
  v16 = a5[1] - a3[1];
  v18 = a5[2] - a3[2];
  v5 = v18;
  v6 = v16;
  if ( Vector3_InitValue_ == v14 && *(&Vector3_InitValue_ + 1) == v6 && dword_B3F9B0 == v5 )
  {
    v10 = a2;
    v7 = a4;
    v11 = sub_96FBB0((float *)(a4 + 4), (float *)(a2 + 0x20), (float *)&a2);
  }
  else
  {
    v7 = a4;
    v8 = *(float *)(a4 + 8);
    v9 = *(float *)(a4 + 0xC);
    v10 = a2;
    v15 = v14 * a1;
    v20[0] = *(float *)(a4 + 4);
    v20[1] = v8;
    v20[3] = v15;
    v20[2] = v9;
    v17 = v6 * a1;
    v20[4] = v17;
    v19 = a1 * v5;
    v20[5] = v19;
    v11 = sub_96FCD0(v20, (float *)(a2 + 0x20), (float *)&a2, (float *)&a4);
  }
  *(float *)&a2 = v11;
  *(float *)&a4 = *(float *)(v10 + 0x38) + *(float *)(v7 + 0x10);
  v12 = *(float *)&a2;
  *(float *)&a2 = *(float *)&a4 * *(float *)&a4;
  return *(float *)&a2 >= v12;
}
