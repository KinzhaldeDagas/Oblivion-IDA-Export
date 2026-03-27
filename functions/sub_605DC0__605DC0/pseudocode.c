char __thiscall sub_605DC0(__m128 **this, float *a2)
{
  char result; // al
  double v3; // rt0
  __m128 *v4; // ecx
  __m128 v5; // [esp+0h] [ebp-20h] BYREF

  result = (char)a2;
  v3 = hkFactor;
  v5.m128_f32[0] = *a2 * v3;
  v5.m128_f32[1] = a2[1] * v3;
  v5.m128_f32[2] = v3 * a2[2];
  if ( this )
  {
    v4 = *(this + 2);
    if ( v4 )
      return sub_8B8A10(v4, &v5);
  }
  return result;
}
