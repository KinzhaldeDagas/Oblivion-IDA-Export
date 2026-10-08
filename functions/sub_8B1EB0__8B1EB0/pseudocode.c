int __thiscall sub_8B1EB0(float *this, __m128 *a2, float a3)
{
  __m128 v5; // [esp+10h] [ebp-10h] BYREF

  hkQuaternion_SetAxisAngleScaled(&v5, a2, a3); /*0x8b1ec8*/
  return hkMatrix3_SetFromQuaternion(this, v5.m128_f32); /*0x8b1ed9*/
}
