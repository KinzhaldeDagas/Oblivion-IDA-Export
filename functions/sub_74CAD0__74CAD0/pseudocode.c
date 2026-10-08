NiTransform *__thiscall sub_74CAD0(float *this, NiTransform *a2, NiPoint3 *a3, NiPoint3 *a4)
{
  NiTransform *result; // eax
  float v7; // [esp+8h] [ebp-1Ch]
  float v8; // [esp+Ch] [ebp-18h]
  float v9; // [esp+Ch] [ebp-18h]
  float v10; // [esp+Ch] [ebp-18h]
  float v11; // [esp+10h] [ebp-14h]
  float v12; // [esp+14h] [ebp-10h]
  float v13[3]; // [esp+18h] [ebp-Ch] BYREF
  float v14; // [esp+2Ch] [ebp+8h]

  v8 = (double)rand() / dbl_A3D5A8; /*0x74caea*/
  v12 = *(this + 0x15) * v8; /*0x74caf5*/
  v9 = (double)rand() / dbl_A3D5A8; /*0x74cb0c*/
  v11 = unk_B3F9A0 * v9; /*0x74cb1a*/
  v7 = cos(v11); /*0x74cb24*/
  v10 = sin(v11); /*0x74cb28*/
  a3->x = v7 * v12; /*0x74cb3e*/
  a3->y = v12 * v10; /*0x74cb44*/
  v14 = (double)rand() / dbl_A3D5A8; /*0x74cb60*/
  a3->z = (v14 - dbl_A2FAA0) * *(this + 0x16); /*0x74cb77*/
  *a3 = *(NiPoint3 *)NiTransform_TransformPoint(a2, v13, a3); /*0x74cb81*/
  result = sub_7101F0(a2, (NiTransform *)v13, a4); /*0x74cb9b*/
  a4->x = result->rot.data[0][0]; /*0x74cba2*/
  a4->y = result->rot.data[0][1]; /*0x74cba7*/
  a4->z = result->rot.data[0][2]; /*0x74cbae*/
  return result; /*0x74cbad*/
}
