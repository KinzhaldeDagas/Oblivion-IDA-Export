char __thiscall sub_605DC0(__m128 **this, float *a2)
{
  char result; // al
  double v3; // rt0
  __m128 *v4; // ecx
  __m128 v5; // [esp+0h] [ebp-20h] BYREF

  result = (char)a2; /*0x605dd6*/
  v3 = hkFactor; /*0x605de3*/
  v5.m128_f32[0] = *a2 * v3; /*0x605de5*/
  v5.m128_f32[1] = a2[1] * v3; /*0x605ded*/
  v5.m128_f32[2] = v3 * a2[2]; /*0x605df4*/
  if ( this ) /*0x605df8*/
  {
    v4 = *(this + 2); /*0x605dfa*/
    if ( v4 ) /*0x605dff*/
      return sub_8B8A10(v4, &v5); /*0x605e05*/
  }
  return result; /*0x605e0a*/
}
