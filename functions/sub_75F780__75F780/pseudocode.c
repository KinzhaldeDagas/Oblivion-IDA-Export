float *__thiscall sub_75F780(float *this)
{
  float *result; // eax
  float z; // ecx

  result = this; /*0x75f782*/
  *this = g_zeroNiPoint3.x; /*0x75f78a*/
  *(this + 1) = g_zeroNiPoint3.y; /*0x75f792*/
  z = g_zeroNiPoint3.z; /*0x75f795*/
  result[3] = 0.0; /*0x75f79b*/
  result[2] = z; /*0x75f79e*/
  result[4] = 0.0; /*0x75f7a1*/
  result[5] = 0.0; /*0x75f7a6*/
  *((_WORD *)result + 0xC) = 0; /*0x75f7a9*/
  *((_WORD *)result + 0xD) = 0; /*0x75f7ad*/
  return result; /*0x75f7b1*/
}
