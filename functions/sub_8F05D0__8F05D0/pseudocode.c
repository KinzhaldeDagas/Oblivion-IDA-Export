int __thiscall sub_8F05D0(int *this, __m128 *a2, int a3)
{
  int v3; // eax
  __m128 v4; // xmm1
  unsigned int v6; // [esp+Ch] [ebp-24h]
  _OWORD v7[2]; // [esp+10h] [ebp-20h] BYREF

  v3 = *this;
  *(float *)&v6 = -a2->m128_f32[3];
  v4 = _mm_add_ps(_mm_shuffle_ps((__m128)v6, (__m128)v6, 0), *a2);
  v7[1] = _mm_add_ps(_mm_shuffle_ps((__m128)a2->m128_u32[3], (__m128)a2->m128_u32[3], 0), *a2);
  v7[0] = v4;
  return (*(int (__thiscall **)(int *, _OWORD *, int))(v3 + 0x24))(this, v7, a3);
}
