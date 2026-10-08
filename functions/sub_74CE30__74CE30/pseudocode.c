NiTransform *__thiscall sub_74CE30(float *this, NiTransform *a2, NiPoint3 *a3, NiPoint3 *a4)
{
  double v5; // st7
  NiTransform *result; // eax
  float v7; // [esp+8h] [ebp-24h]
  float v8; // [esp+8h] [ebp-24h]
  float v9; // [esp+Ch] [ebp-20h]
  float v10; // [esp+10h] [ebp-1Ch]
  float v11; // [esp+14h] [ebp-18h]
  float v12; // [esp+14h] [ebp-18h]
  float v13; // [esp+14h] [ebp-18h]
  float v14; // [esp+14h] [ebp-18h]
  float v15; // [esp+18h] [ebp-14h]
  float v16; // [esp+1Ch] [ebp-10h]
  float v17[3]; // [esp+20h] [ebp-Ch] BYREF

  v11 = (double)rand() / dbl_A3D5A8; /*0x74ce4a*/
  v16 = *(this + 0x15) * v11; /*0x74ce55*/
  v12 = (double)rand() / dbl_A3D5A8; /*0x74ce6c*/
  v7 = unk_B3F9A0 * v12; /*0x74ce7a*/
  v13 = (double)rand() / dbl_A3D5A8; /*0x74ce91*/
  v15 = unk_B3F9A0 * v13; /*0x74ce9f*/
  v9 = cos(v7); /*0x74cea9*/
  v10 = sin(v7); /*0x74cead*/
  v14 = cos(v15); /*0x74ceb7*/
  v8 = sin(v15); /*0x74cebb*/
  v5 = v8 * v16; /*0x74ced1*/
  a3->x = v9 * v5; /*0x74cee1*/
  a3->y = v5 * v10; /*0x74ceeb*/
  a3->z = v16 * v14; /*0x74cef2*/
  *a3 = *(NiPoint3 *)NiTransform_TransformPoint(a2, v17, a3); /*0x74cefc*/
  result = sub_7101F0(a2, (NiTransform *)v17, a4); /*0x74cf16*/
  a4->x = result->rot.data[0][0]; /*0x74cf1d*/
  a4->y = result->rot.data[0][1]; /*0x74cf22*/
  a4->z = result->rot.data[0][2]; /*0x74cf29*/
  return result; /*0x74cf28*/
}
