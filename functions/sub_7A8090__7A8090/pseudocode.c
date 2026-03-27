int __thiscall sub_7A8090(float *this, float *a2, float *a3, float a4)
{
  int v6; // edx
  int v7; // eax
  double v8; // rt2
  float v10; // [esp+8h] [ebp-18h] BYREF
  float v11; // [esp+Ch] [ebp-14h]
  float v12; // [esp+10h] [ebp-10h]
  float v13; // [esp+14h] [ebp-Ch] BYREF
  float v14; // [esp+18h] [ebp-8h]
  float v15; // [esp+1Ch] [ebp-4h]
  float v16; // [esp+24h] [ebp+4h]
  float v17; // [esp+24h] [ebp+4h]
  float v18; // [esp+24h] [ebp+4h]
  float v19; // [esp+24h] [ebp+4h]
  float v20; // [esp+24h] [ebp+4h]
  float v21; // [esp+24h] [ebp+4h]
  float v22; // [esp+24h] [ebp+4h]
  float v23; // [esp+24h] [ebp+4h]
  float v24; // [esp+28h] [ebp+8h]

  v13 = *(this + 1) - *a2;
  v14 = *(this + 2) - a2[1];
  v15 = *(this + 3) - a2[2];
  v16 = v14 * v14 + v13 * v13 + v15 * v15;
  v17 = sqrt(v16);
  v18 = 1.0 / v17;
  v13 = v13 * v18;
  v14 = v14 * v18;
  v15 = v18 * v15;
  v10 = *a3 - *a2;
  v11 = a3[1] - a2[1];
  v12 = a3[2] - a2[2];
  v19 = v11 * v11 + v10 * v10 + v12 * v12;
  v20 = sqrt(v19);
  v21 = 1.0 / v20;
  v10 = v10 * v21;
  v11 = v11 * v21;
  v12 = v21 * v12;
  v22 = cos(sub_78FCC0(&v13, &v10));
  v6 = *((unsigned __int8 *)this + 0x15);
  v7 = *((unsigned __int8 *)this + 0x16);
  v23 = (v22 + 1.0) * dbl_A2FAA0;
  v24 = (1.0 - a4) * v23 + a4;
  v8 = dbl_A3DDD8;
  v13 = (double)*((unsigned __int8 *)this + 0x14) / v8;
  v14 = (double)v6 / v8;
  v15 = (double)v7 / v8;
  v10 = v13 * v24;
  v11 = v14 * v24;
  v12 = v24 * v15;
  return sub_7A7F10((int)this, &v10, 1);
}
