NiTransform *__thiscall sub_74D120(float *this, NiTransform *a2, NiPoint3 *a3, NiPoint3 *a4)
{
  double v5; // rt0
  float v6; // ecx
  double v7; // st7
  float *v8; // eax
  NiTransform *result; // eax
  float v10; // [esp+8h] [ebp-18h]
  float v11; // [esp+Ch] [ebp-14h]
  float v12; // [esp+10h] [ebp-10h]
  float v13; // [esp+14h] [ebp-Ch] BYREF
  float v14; // [esp+18h] [ebp-8h]
  float v15; // [esp+1Ch] [ebp-4h]

  v12 = (double)rand() / dbl_A3D5A8;
  v11 = (double)rand() / dbl_A3D5A8;
  v10 = (double)rand() / dbl_A3D5A8;
  v5 = dbl_A2FAA0;
  v13 = (v10 - v5) * *(this + 0x15);
  v14 = (v11 - v5) * *(this + 0x16);
  v6 = v14;
  v7 = (v12 - v5) * *(this + 0x17);
  a3->x = v13;
  a3->y = v6;
  v15 = v7;
  a3->z = v15;
  v8 = sub_53D4B0(a2, &v13, a3);
  a3->x = *v8;
  a3->y = v8[1];
  a3->z = v8[2];
  result = sub_7101F0(a2, (NiTransform *)&v13, a4);
  a4->x = result->rot.data[0][0];
  a4->y = result->rot.data[0][1];
  a4->z = result->rot.data[0][2];
  return result;
}
