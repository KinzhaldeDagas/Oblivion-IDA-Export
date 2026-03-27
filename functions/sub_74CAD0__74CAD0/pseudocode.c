NiTransform *__thiscall sub_74CAD0(float *this, NiTransform *a2, NiPoint3 *a3, NiPoint3 *a4)
{
  float *v6; // eax
  NiTransform *result; // eax
  float v8; // [esp+8h] [ebp-1Ch]
  float v9; // [esp+Ch] [ebp-18h]
  float v10; // [esp+Ch] [ebp-18h]
  float v11; // [esp+Ch] [ebp-18h]
  float v12; // [esp+10h] [ebp-14h]
  float v13; // [esp+14h] [ebp-10h]
  float v14[3]; // [esp+18h] [ebp-Ch] BYREF
  float v15; // [esp+2Ch] [ebp+8h]

  v9 = (double)rand() / dbl_A3D5A8;
  v13 = *(this + 0x15) * v9;
  v10 = (double)rand() / dbl_A3D5A8;
  v12 = flt_B3F9A0 * v10;
  v8 = cos(v12);
  v11 = sin(v12);
  a3->x = v8 * v13;
  a3->y = v13 * v11;
  v15 = (double)rand() / dbl_A3D5A8;
  a3->z = (v15 - dbl_A2FAA0) * *(this + 0x16);
  v6 = sub_53D4B0(a2, v14, a3);
  a3->x = *v6;
  a3->y = v6[1];
  a3->z = v6[2];
  result = sub_7101F0(a2, (NiTransform *)v14, a4);
  a4->x = result->rot.data[0][0];
  a4->y = result->rot.data[0][1];
  a4->z = result->rot.data[0][2];
  return result;
}
