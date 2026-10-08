NiTransform *__thiscall sub_74D120(float *this, NiTransform *a2, NiPoint3 *a3, NiPoint3 *a4)
{
  double v5; // rt0
  float v6; // ecx
  double v7; // st7
  NiTransform *result; // eax
  float v9; // [esp+8h] [ebp-18h]
  float v10; // [esp+Ch] [ebp-14h]
  float v11; // [esp+10h] [ebp-10h]
  float v12; // [esp+14h] [ebp-Ch] BYREF
  float v13; // [esp+18h] [ebp-8h]
  float v14; // [esp+1Ch] [ebp-4h]

  v11 = (double)rand() / dbl_A3D5A8; /*0x74d13a*/
  v10 = (double)rand() / dbl_A3D5A8; /*0x74d151*/
  v9 = (double)rand() / dbl_A3D5A8; /*0x74d16c*/
  v5 = dbl_A2FAA0; /*0x74d181*/
  v12 = (v9 - v5) * *(this + 0x15); /*0x74d183*/
  v13 = (v10 - v5) * *(this + 0x16); /*0x74d194*/
  v6 = v13; /*0x74d198*/
  v7 = (v11 - v5) * *(this + 0x17); /*0x74d1a0*/
  a3->x = v12; /*0x74d1a7*/
  a3->y = v6; /*0x74d1a9*/
  v14 = v7; /*0x74d1ac*/
  a3->z = v14; /*0x74d1bc*/
  *a3 = *(NiPoint3 *)NiTransform_TransformPoint(a2, &v12, a3); /*0x74d1c6*/
  result = sub_7101F0(a2, (NiTransform *)&v12, a4); /*0x74d1e0*/
  a4->x = result->rot.data[0][0]; /*0x74d1e7*/
  a4->y = result->rot.data[0][1]; /*0x74d1ec*/
  a4->z = result->rot.data[0][2]; /*0x74d1f3*/
  return result; /*0x74d1f2*/
}
