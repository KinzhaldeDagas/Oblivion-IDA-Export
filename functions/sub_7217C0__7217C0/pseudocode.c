char __stdcall sub_7217C0(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  double v7; // st7
  double v8; // st7
  int v9; // ecx
  double v10; // st7
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  float v14; // edx
  float v15; // eax
  NiTransform *v16; // eax
  NiTransform *v17; // eax
  float v18; // [esp+0h] [ebp-64h]
  float v19; // [esp+4h] [ebp-60h]
  float v20; // [esp+8h] [ebp-5Ch]
  float v21; // [esp+Ch] [ebp-58h]
  float v22; // [esp+1Ch] [ebp-48h] BYREF
  float v23; // [esp+20h] [ebp-44h]
  float v24; // [esp+24h] [ebp-40h]
  float v25; // [esp+28h] [ebp-3Ch]
  float v26; // [esp+2Ch] [ebp-38h]
  float v27; // [esp+30h] [ebp-34h]
  _BYTE v28[48]; // [esp+34h] [ebp-30h] BYREF
  float v29; // [esp+68h] [ebp+4h]
  float v30; // [esp+68h] [ebp+4h]

  v22 = a1[0x22] - *a2;
  v23 = a1[0x23] - a2[1];
  v24 = a1[0x24] - a2[2];
  v29 = v22 * v22 + v23 * v23 + v24 * v24;
  if ( v29 < (double)flt_A37080 )
    return 0;
  sub_43F350(&v22);
  v25 = a1[0x19];
  v26 = a1[0x1C];
  v27 = a1[0x1F];
  *(float *)v28 = -v25;
  v7 = v26;
  *a3 = *(float *)v28;
  *(float *)&v28[4] = -v7;
  v8 = v27;
  a3[1] = *(float *)&v28[4];
  *(float *)&v28[8] = -v8;
  a3[2] = *(float *)&v28[8];
  *(float *)v28 = a1[0x1A];
  *(float *)&v28[4] = a1[0x1D];
  v9 = *(_DWORD *)&v28[4];
  v10 = a1[0x20];
  *a4 = *(float *)v28;
  *(float *)&v28[8] = v10;
  v11 = *(_DWORD *)&v28[8];
  *((_DWORD *)a4 + 1) = v9;
  *((_DWORD *)a4 + 2) = v11;
  *(float *)v28 = a1[0x1B];
  *(float *)&v28[4] = a1[0x1E];
  v12 = *(_DWORD *)&v28[4];
  *(float *)&v28[8] = a1[0x21];
  v13 = *(_DWORD *)&v28[8];
  *a5 = *(float *)v28;
  *((_DWORD *)a5 + 1) = v12;
  *((_DWORD *)a5 + 2) = v13;
  v30 = a3[1] * v23 + *a3 * v22 + a3[2] * v24;
  if ( v30 < dbl_A7F740 )
  {
    sub_4BF9E0(&v22, (float *)v28, a3);
    v21 = *(float *)&v28[8];
    v20 = *(float *)&v28[4];
    v19 = *(float *)v28;
    v18 = sub_612820(v30);
    sub_70FE20((float *)&v28[0xC], v18, v19, v20, v21);
    v14 = v23;
    v15 = v24;
    *a3 = v22;
    a3[1] = v14;
    a3[2] = v15;
    v16 = sub_7101F0((NiTransform *)&v28[0xC], (NiTransform *)v28, (NiPoint3 *)a4);
    *a4 = v16->rot.data[0][0];
    a4[1] = v16->rot.data[0][1];
    a4[2] = v16->rot.data[0][2];
    v17 = sub_7101F0((NiTransform *)&v28[0xC], (NiTransform *)v28, (NiPoint3 *)a5);
    *a5 = v17->rot.data[0][0];
    a5[1] = v17->rot.data[0][1];
    a5[2] = v17->rot.data[0][2];
  }
  return 1;
}
