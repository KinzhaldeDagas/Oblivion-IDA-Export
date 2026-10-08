__m128 *__thiscall sub_8CE130(int this, __m128 *a2)
{
  __m128 *result; // eax
  __m128 *v3; // ecx
  __m128 *v4; // edx
  int v5; // edi
  __m128 v6; // xmm0
  __m128 v7; // [esp+Ch] [ebp-10h]

  v7.m128_u64[0] = *(_QWORD *)(this + 0x10); /*0x8ce141*/
  result = a2; /*0x8ce156*/
  v7.m128_u64[1] = __PAIR64__(*(_DWORD *)(this + 0xC), *(_DWORD *)(this + 0x18)); /*0x8ce15e*/
  v3 = (__m128 *)&unk_A99CD0; /*0x8ce167*/
  v4 = a2 + 1; /*0x8ce16f*/
  v5 = 4; /*0x8ce174*/
  do /*0x8ce1a1*/
  {
    v6 = _mm_mul_ps(v7, v3[1]); /*0x8ce187*/
    *(__m128 *)((char *)v3 + (char *)a2 - (char *)&unk_A99CD0) = _mm_mul_ps(v7, *v3); /*0x8ce193*/
    *v4 = v6; /*0x8ce197*/
    v3 += 2; /*0x8ce19a*/
    v4 += 2; /*0x8ce19d*/
    --v5; /*0x8ce1a0*/
  }
  while ( v5 ); /*0x8ce1a1*/
  return result; /*0x8ce1a4*/
}
