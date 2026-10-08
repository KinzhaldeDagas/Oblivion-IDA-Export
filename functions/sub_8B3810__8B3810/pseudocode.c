__m128 *__usercall sub_8B3810@<eax>(__m128 *a1@<eax>, float a2)
{
  __m128 v3; // [esp+10h] [ebp-10h] BYREF

  a1->m128_f32[1] = a2 * a1->m128_f32[1]; /*0x8b3831*/
  v3 = (__m128)LODWORD(a2); /*0x8b3837*/
  return sub_8D2A60(a1 + 2, &v3); /*0x8b3841*/
}
