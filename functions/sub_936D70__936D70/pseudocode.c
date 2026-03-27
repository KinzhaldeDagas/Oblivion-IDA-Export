__int32 __thiscall sub_936D70(int this, __m128 *a2, unsigned __int8 *a3, __m128 *a4)
{
  int v4; // eax
  __int32 result; // eax
  unsigned int v6; // [esp+8h] [ebp-4h]

  v4 = *a3;
  a2[2].m128_i16[0] = *((_WORD *)a3 + 1);
  *a2 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(*(__m128 *)*(_DWORD *)(this + 0x14), _mm_shuffle_ps(*a4, *a4, 0)),
            _mm_mul_ps(*(__m128 *)(*(_DWORD *)(this + 0x14) + 0x10), _mm_shuffle_ps(*a4, *a4, 0x55))),
          _mm_add_ps(
            _mm_mul_ps(*(__m128 *)(*(_DWORD *)(this + 0x14) + 0x20), _mm_shuffle_ps(*a4, *a4, 0xAA)),
            *(__m128 *)(*(_DWORD *)(this + 0x14) + 0x30)));
  *(float *)&v6 = -a4[3].m128_f32[0];
  a2[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)v6, (__m128)v6, 0), *(__m128 *)(0x10 * (v4 - 4) + *(_DWORD *)(this + 0x18)));
  result = a4[3].m128_i32[1];
  a2[1].m128_i32[3] = result;
  return result;
}
