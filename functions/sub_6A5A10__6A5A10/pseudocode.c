double __cdecl sub_6A5A10(float *a1, float *a2)
{
  float *v3; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st5
  float v9; // eax
  float v10; // edx
  double v11; // st7
  float v13[6]; // [esp+Ch] [ebp-6Ch] BYREF
  float v14[3]; // [esp+24h] [ebp-54h] BYREF
  float v15[9]; // [esp+30h] [ebp-48h] BYREF
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

  v3 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x174))(a1);
  v17 = a2[1] - v3[1];
  v23 = a2[2] - v3[2];
  v13[0] = *a2 - *v3;
  v13[1] = v17;
  v13[2] = v23;
  v18 = v17 * v17 + v13[0] * v13[0] + v23 * v23;
  v19 = sqrt(v18);
  v5 = v19;
  v6 = dbl_A529C0;
  if ( v6 <= v19 )
  {
    v8 = dbl_A3F470;
    if ( v8 <= v5 )
      v7 = 0.0;
    else
      v7 = (v8 - v5) / v6;
  }
  else
  {
    v7 = v5 / v6;
  }
  v20 = v7;
  v9 = a1[8];
  v10 = a1[0xA];
  v13[4] = a1[9];
  qmemcpy(v15, &stru_B26AF0[0xA].unk2C, sizeof(v15));
  v13[5] = v10;
  v13[3] = v9;
  NiMatrix33_InitRotationTransform(v15, v10);
  sub_7103C0(v15, v16);
  sub_710250(v14, v13, v15);
  sub_43F350(v14);
  v24 = fabs(v14[0]);
  v25 = 1.0 - v24;
  v26 = v25 * v25;
  v11 = v26 * v20;
  v21 = (v14[1] + 1.0) * dbl_A2FAA0;
  return (float)(v11 * v21);
}
