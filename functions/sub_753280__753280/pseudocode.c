float *__stdcall sub_753280(float *a1, float *a2, float *a3, float *a4)
{
  float v5; // edx
  float v6; // ecx
  float v7; // [esp+0h] [ebp-18h] BYREF
  float v8; // [esp+4h] [ebp-14h]
  float v9; // [esp+8h] [ebp-10h]
  float v10; // [esp+Ch] [ebp-Ch]
  float v11; // [esp+10h] [ebp-8h]
  float v12; // [esp+14h] [ebp-4h]
  float v13; // [esp+28h] [ebp+10h]

  v7 = *a4 - *a2;
  v8 = a4[1] - a2[1];
  v9 = a4[2] - a2[2];
  v13 = *a3 * v7 + v8 * a3[1] + v9 * a3[2];
  v10 = *a3 * v13;
  v11 = v13 * a3[1];
  v12 = v13 * a3[2];
  v7 = v7 - v10;
  v8 = v8 - v11;
  v9 = v9 - v12;
  if ( Vector3_InitValue_ == v7 && *(&Vector3_InitValue_ + 1) == v8 && dword_B3F9B0 == v9 )
  {
    v5 = v8;
    *a1 = v7;
    v6 = v9;
    a1[1] = v5;
    a1[2] = v6;
    return a1;
  }
  else
  {
    sub_4BF9E0(a3, a1, &v7);
    return a1;
  }
}
