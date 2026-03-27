int __thiscall sub_8B1EB0(float *this, __m128 *a2, float a3)
{
  __m128 v5; // [esp+10h] [ebp-10h] BYREF

  sub_8B1B00(&v5, a2, a3);
  return sub_8B1DD0(this, v5.m128_f32);
}
