int __thiscall sub_8E9500(int *this, unsigned int a2, __m128 *a3)
{
  int v3; // eax
  __m128 v5; // [esp+10h] [ebp-10h] BYREF

  v3 = *this;
  v5 = _mm_mul_ps(_mm_shuffle_ps((__m128)a2, (__m128)a2, 0), *a3);
  return (*(int (__thiscall **)(int *, __m128 *))(v3 + 0x64))(this, &v5);
}
