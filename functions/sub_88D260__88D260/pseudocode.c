int __thiscall sub_88D260(__m128 *this, float *a2)
{
  double v2; // rt0
  __m128 v4; // [esp+0h] [ebp-20h] BYREF

  v2 = hkFactor;
  v4.m128_f32[0] = *a2 * v2;
  v4.m128_f32[1] = a2[1] * v2;
  v4.m128_f32[2] = v2 * a2[2];
  return sub_88C600(this, &v4);
}
