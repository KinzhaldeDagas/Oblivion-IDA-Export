void __thiscall sub_7F2C00(float *this, int a2, signed int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  float v10; // ebx
  int v11; // eax
  float v12; // ebx
  int v13; // eax
  float v14; // edx
  int v15; // eax
  float v16; // ecx
  int v17; // edx
  float y; // ecx
  float z; // edx
  int v20; // edi
  float *v21; // eax
  double v22; // st7
  double v23; // st6
  double v24; // st5
  double v25; // st7
  int v26; // ecx
  float x; // [esp+Ch] [ebp-2Ch] BYREF
  float v28; // [esp+10h] [ebp-28h]
  float v29; // [esp+14h] [ebp-24h]
  float v30; // [esp+18h] [ebp-20h]
  float v31; // [esp+1Ch] [ebp-1Ch]
  float v32; // [esp+20h] [ebp-18h]
  int v33; // [esp+24h] [ebp-14h]
  float v34; // [esp+28h] [ebp-10h]
  float v35; // [esp+2Ch] [ebp-Ch]
  float v36; // [esp+30h] [ebp-8h]
  int v37; // [esp+34h] [ebp-4h]
  float v38; // [esp+3Ch] [ebp+4h]
  float v39; // [esp+3Ch] [ebp+4h]
  float v40; // [esp+40h] [ebp+8h]
  float v41; // [esp+40h] [ebp+8h]
  float v42; // [esp+40h] [ebp+8h]
  float v43; // [esp+40h] [ebp+8h]
  float v44; // [esp+40h] [ebp+8h]
  float v45; // [esp+40h] [ebp+8h]
  float v46; // [esp+40h] [ebp+8h]
  float v47; // [esp+40h] [ebp+8h]
  float v48; // [esp+40h] [ebp+8h]
  float v49; // [esp+40h] [ebp+8h]
  float v50; // [esp+40h] [ebp+8h]
  int v51; // [esp+44h] [ebp+Ch]

  v6 = a2 * *((_DWORD *)this + 0x53); /*0x7f2c19*/
  v7 = v6 + a3; /*0x7f2c1d*/
  v8 = *((_DWORD *)this + 0x1B); /*0x7f2c20*/
  v9 = 0x10 * (a4 + v6); /*0x7f2c25*/
  v10 = *(float *)(v9 + v8); /*0x7f2c28*/
  v11 = v8 + v9; /*0x7f2c2b*/
  v30 = v10; /*0x7f2c2d*/
  v31 = *(float *)(v11 + 4); /*0x7f2c38*/
  v12 = *(float *)(v11 + 8); /*0x7f2c3c*/
  v33 = *(_DWORD *)(v11 + 0xC); /*0x7f2c42*/
  v51 = *((_DWORD *)this + 0x53); /*0x7f2c4c*/
  v32 = v12; /*0x7f2c57*/
  v13 = 0x10 * (a5 + a2 * v51); /*0x7f2c5b*/
  v14 = *(float *)(v13 + v8 + 4); /*0x7f2c5e*/
  v15 = v8 + v13; /*0x7f2c62*/
  v34 = *(float *)v15; /*0x7f2c66*/
  v16 = *(float *)(v15 + 8); /*0x7f2c6a*/
  v35 = v14; /*0x7f2c71*/
  v17 = *(_DWORD *)(v15 + 0xC); /*0x7f2c75*/
  v36 = v16; /*0x7f2c78*/
  x = v30 - v34; /*0x7f2c7c*/
  v37 = v17; /*0x7f2c80*/
  v28 = v31 - v35; /*0x7f2c8c*/
  v29 = v12 - v16; /*0x7f2c98*/
  if ( v28 < 0.0 ) /*0x7f2ca7*/
  {
    y = g_zeroNiPoint3.y; /*0x7f2cae*/
    z = g_zeroNiPoint3.z; /*0x7f2cb4*/
    x = g_zeroNiPoint3.x; /*0x7f2cba*/
    v28 = y; /*0x7f2cbe*/
    v29 = z; /*0x7f2cc2*/
  }
  v28 = v28 + dbl_A2F928; /*0x7f2cd4*/
  Vector3_NormalizeInPlace(&x); /*0x7f2cd8*/
  v38 = *(this + 0x54); /*0x7f2ce5*/
  x = v38 * x; /*0x7f2cf3*/
  v28 = v38 * v28; /*0x7f2cfd*/
  v29 = v38 * v29; /*0x7f2d05*/
  v39 = (double)a3 / (double)v51; /*0x7f2d11*/
  v20 = 0x10 * v7; /*0x7f2d25*/
  v40 = (double)rand() / dbl_A3D5A8; /*0x7f2d2e*/
  v41 = *(this + 0x55) * v40 + x + v30 - *(this + 0x55) * dbl_A2FAA0; /*0x7f2d54*/
  *(float *)(v20 + *((_DWORD *)this + 0x1B)) = v41; /*0x7f2d5c*/
  v42 = v28 + v31; /*0x7f2d6a*/
  *(float *)(*((_DWORD *)this + 0x1B) + v20 + 4) = v42; /*0x7f2d72*/
  v43 = (double)rand() / dbl_A3D5A8; /*0x7f2d8c*/
  v44 = *(this + 0x55) * v43 + v29 + v32 - *(this + 0x55) * dbl_A2FAA0; /*0x7f2db2*/
  *(float *)(*((_DWORD *)this + 0x1B) + v20 + 8) = v44; /*0x7f2dba*/
  v21 = (float *)(v20 + *((_DWORD *)this + 0x1B)); /*0x7f2dc4*/
  x = *(this + 0x1C) * v39 - *v21; /*0x7f2dd4*/
  v28 = v39 * *(this + 0x1E) - v21[2]; /*0x7f2dde*/
  v45 = v28 * v28 + x * x; /*0x7f2df2*/
  v46 = sqrt(v45); /*0x7f2dff*/
  v22 = v46; /*0x7f2e0b*/
  if ( *(this + 0x4F) < (double)v46 ) /*0x7f2e1c*/
  {
    v23 = v22 - *(this + 0x4F); /*0x7f2e24*/
    v47 = *(this + 0x50) * v23 / v22; /*0x7f2e34*/
    v24 = v47; /*0x7f2e38*/
    v48 = v47 * v22; /*0x7f2e40*/
    v49 = fabs(v48); /*0x7f2e4a*/
    if ( *(this + 0x4F) >= (double)v49 ) /*0x7f2e5f*/
    {
      v25 = v24; /*0x7f2e6f*/
    }
    else
    {
      v50 = v23 / v22; /*0x7f2e65*/
      v25 = v50; /*0x7f2e69*/
    }
    v26 = *((_DWORD *)this + 0x1B); /*0x7f2e77*/
    x = x * v25; /*0x7f2e7f*/
    v28 = v25 * v28; /*0x7f2e87*/
    *(float *)(v26 + v20) = *(float *)(v26 + v20) + x; /*0x7f2e91*/
    *(float *)(*((_DWORD *)this + 0x1B) + v20 + 8) = *(float *)(*((_DWORD *)this + 0x1B) + v20 + 8) + v28; /*0x7f2ea5*/
  }
}
