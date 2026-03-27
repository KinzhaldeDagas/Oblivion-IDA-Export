NiTransform *__thiscall sub_74CE30(float *this, NiTransform *a2, NiPoint3 *a3, NiPoint3 *a4)
{
  double v5; // st7
  float *v6; // eax
  NiTransform *result; // eax
  float v8; // [esp+8h] [ebp-24h]
  float v9; // [esp+8h] [ebp-24h]
  float v10; // [esp+Ch] [ebp-20h]
  float v11; // [esp+10h] [ebp-1Ch]
  float v12; // [esp+14h] [ebp-18h]
  float v13; // [esp+14h] [ebp-18h]
  float v14; // [esp+14h] [ebp-18h]
  float v15; // [esp+14h] [ebp-18h]
  float v16; // [esp+18h] [ebp-14h]
  float v17; // [esp+1Ch] [ebp-10h]
  float v18[3]; // [esp+20h] [ebp-Ch] BYREF

  v12 = (double)rand() / dbl_A3D5A8;
  v17 = *(this + 0x15) * v12;
  v13 = (double)rand() / dbl_A3D5A8;
  v8 = flt_B3F9A0 * v13;
  v14 = (double)rand() / dbl_A3D5A8;
  v16 = flt_B3F9A0 * v14;
  v10 = cos(v8);
  v11 = sin(v8);
  v15 = cos(v16);
  v9 = sin(v16);
  v5 = v9 * v17;
  a3->x = v10 * v5;
  a3->y = v5 * v11;
  a3->z = v17 * v15;
  v6 = sub_53D4B0(a2, v18, a3);
  a3->x = *v6;
  a3->y = v6[1];
  a3->z = v6[2];
  result = sub_7101F0(a2, (NiTransform *)v18, a4);
  a4->x = result->rot.data[0][0];
  a4->y = result->rot.data[0][1];
  a4->z = result->rot.data[0][2];
  return result;
}
