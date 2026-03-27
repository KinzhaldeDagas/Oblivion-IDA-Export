int __thiscall sub_8EACE0(int *this, unsigned int a2, __m128 *a3, int a4)
{
  int v4; // eax
  __m128 v6; // [esp+10h] [ebp-10h] BYREF

  v4 = *this;
  v6 = _mm_mul_ps(_mm_shuffle_ps((__m128)a2, (__m128)a2, 0), *a3);
  return (*(int (__thiscall **)(int *, __m128 *, int))(v4 + 0x60))(this, &v6, a4);
}
