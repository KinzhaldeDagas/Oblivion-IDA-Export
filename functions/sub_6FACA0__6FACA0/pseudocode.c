int __cdecl sub_6FACA0(float a1, float angleZ)
{
  float *v2; // eax
  int result; // eax
  float v4[3]; // [esp+4h] [ebp-3Ch] BYREF
  float v5[3]; // [esp+10h] [ebp-30h] BYREF
  NiMatrix33 v6; // [esp+1Ch] [ebp-24h] BYREF

  v4[0] = 0.0; /*0x6faca6*/
  v4[1] = a1 * fCostant_100; /*0x6facb8*/
  v4[2] = 0.0; /*0x6facbc*/
  NiMatrix33_InitRotationZ(&v6, angleZ); /*0x6facc7*/
  v2 = NiPoint3_MultiplyMatrix3(v5, v4, (float *)&v6); /*0x6facdb*/
  *(float *)&unk_B3F494 = *v2; /*0x6face2*/
  flt_B3F498 = v2[1]; /*0x6faceb*/
  result = *((_DWORD *)v2 + 2); /*0x6facf1*/
  LODWORD(unk_B3F49C) = result; /*0x6facf4*/
  return result; /*0x6facfc*/
}
