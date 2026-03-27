__m128 *__thiscall sub_8CE130(int this, __m128 *a2)
{
  __m128 *result; // eax
  __m128 *v3; // ecx
  __m128 *v4; // edx
  int v5; // edi
  __m128 v6; // xmm0
  __m128 v7; // [esp+Ch] [ebp-10h]

  v7.m128_u64[0] = *(_QWORD *)(this + 0x10);
  result = a2;
  v7.m128_u64[1] = __PAIR64__(*(_DWORD *)(this + 0xC), *(_DWORD *)(this + 0x18));
  v3 = (__m128 *)&unk_A99CD0;
  v4 = a2 + 1;
  v5 = 4;
  do
  {
    v6 = _mm_mul_ps(v7, v3[1]);
    *(__m128 *)((char *)v3 + (char *)a2 - (char *)&unk_A99CD0) = _mm_mul_ps(v7, *v3);
    *v4 = v6;
    v3 += 2;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return result;
}
