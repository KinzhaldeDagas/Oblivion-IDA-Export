double __cdecl sub_6A5A10(float *a1, float *a2)
{
  float *v3; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st5
  float v9; // eax
  float angleZ; // edx
  double v11; // st7
  float v13[6]; // [esp+Ch] [ebp-6Ch] BYREF
  float v14[3]; // [esp+24h] [ebp-54h] BYREF
  NiMatrix33 v15; // [esp+30h] [ebp-48h] BYREF
  float v16[9]; // [esp+54h] [ebp-24h] BYREF
  float v17; // [esp+7Ch] [ebp+4h]
  float v18; // [esp+7Ch] [ebp+4h]
  float v19; // [esp+7Ch] [ebp+4h]
  float v20; // [esp+7Ch] [ebp+4h]
  float v21; // [esp+7Ch] [ebp+4h]
  float v23; // [esp+80h] [ebp+8h]
  float v24; // [esp+80h] [ebp+8h]
  float v25; // [esp+80h] [ebp+8h]
  float v26; // [esp+80h] [ebp+8h]

  v3 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x174))(a1); /*0x6a5a23*/
  v17 = a2[1] - v3[1]; /*0x6a5a2f*/
  v23 = a2[2] - v3[2]; /*0x6a5a39*/
  v13[0] = *a2 - *v3; /*0x6a5a41*/
  v13[1] = v17; /*0x6a5a49*/
  v13[2] = v23; /*0x6a5a51*/
  v18 = v17 * v17 + v13[0] * v13[0] + v23 * v23; /*0x6a5a65*/
  v19 = sqrt(v18); /*0x6a5a72*/
  v5 = v19; /*0x6a5a7e*/
  v6 = dbl_A529C0; /*0x6a5a82*/
  if ( v6 <= v19 ) /*0x6a5a8f*/
  {
    v8 = dbl_A3F470; /*0x6a5a95*/
    if ( v8 <= v5 ) /*0x6a5aa2*/
      v7 = 0.0; /*0x6a5ab0*/
    else
      v7 = (v8 - v5) / v6; /*0x6a5aa6*/
  }
  else
  {
    v7 = v5 / v6; /*0x6a5a91*/
  }
  v20 = v7; /*0x6a5ab5*/
  v9 = a1[8]; /*0x6a5ab9*/
  angleZ = a1[0xA]; /*0x6a5abc*/
  v13[4] = a1[9]; /*0x6a5abf*/
  qmemcpy(&v15, &stru_B26AF0[0xA].unk2C, sizeof(v15)); /*0x6a5ad1*/
  v13[5] = angleZ; /*0x6a5ad3*/
  v13[3] = v9; /*0x6a5ae0*/
  NiMatrix33_InitRotationZ(&v15, angleZ); /*0x6a5ae7*/
  sub_7103C0((float *)&v15, v16); /*0x6a5af5*/
  NiPoint3_MultiplyMatrix3(v14, v13, (float *)&v15); /*0x6a5b09*/
  Vector3_NormalizeInPlace(v14); /*0x6a5b15*/
  v24 = fabs(v14[0]); /*0x6a5b24*/
  v25 = 1.0 - v24; /*0x6a5b34*/
  v26 = v25 * v25; /*0x6a5b3e*/
  v11 = v26 * v20; /*0x6a5b50*/
  v21 = (v14[1] + 1.0) * dbl_A2FAA0; /*0x6a5b58*/
  return (float)(v11 * v21); /*0x6a5b68*/
}
