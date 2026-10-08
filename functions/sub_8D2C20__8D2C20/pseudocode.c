// Multiplies a 3x3 basis matrix in place by another basis matrix through 0x8D2AB0.
__m128 *__thiscall hkMatrix3_MultiplyInPlace(__m128 *this, __m128 *a2)
{
  __m128 *result; // eax
  _OWORD v4[3]; // [esp+10h] [ebp-30h] BYREF

  result = sub_8D2AB0((char *)v4, this, a2); /*0x8d2c35*/
  *this = (__m128)v4[0]; /*0x8d2c3f*/
  *(this + 1) = (__m128)v4[1]; /*0x8d2c47*/
  *(this + 2) = (__m128)v4[2]; /*0x8d2c50*/
  return result; /*0x8d2c54*/
}
