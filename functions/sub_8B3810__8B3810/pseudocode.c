__m128 *__usercall sub_8B3810@<eax>(__m128 *a1@<eax>, unsigned int a2)
{
  __m128 v3; // [esp+10h] [ebp-10h] BYREF

  a1->m128_f32[1] = *(float *)&a2 * a1->m128_f32[1];
  v3 = (__m128)a2;
  return sub_8D2A60(a1 + 2, &v3);
}
