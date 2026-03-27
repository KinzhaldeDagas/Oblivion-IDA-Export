__m128 *__thiscall sub_9519C0(void *this, _DWORD *a2, __m128 *a3, __m128 *a4)
{
  int i; // ebx
  __int32 v7; // eax
  __int32 v8; // eax
  __int32 v9; // eax
  unsigned int v11; // [esp+14h] [ebp-Ch] BYREF
  unsigned int v12; // [esp+18h] [ebp-8h]
  unsigned int v13; // [esp+1Ch] [ebp-4h]

  for ( i = 0; i < 0xA; ++i )
  {
    *(_OWORD *)*((_DWORD *)this + 0x1A) = *(_OWORD *)a3[1].m128_i32[1];
    *(_OWORD *)(*((_DWORD *)this + 0x1A) + 0x10) = *(_OWORD *)a3[2].m128_i32[1];
    *(_OWORD *)(*((_DWORD *)this + 0x1A) + 0x20) = *(_OWORD *)a3[3].m128_i32[1];
    sub_8D1700(
      (__m128 *)&stru_BA7A40,
      *((__m128 **)this + 0x1A),
      (__m128 *)(*((_DWORD *)this + 0x1A) + 0x10),
      (__m128 *)(*((_DWORD *)this + 0x1A) + 0x20),
      (int)&v11);
    if ( *(float *)&v11 >= (double)*(float *)&SrcStr
      && *(float *)&v12 >= (double)*(float *)&SrcStr
      && *(float *)&v13 >= (double)*(float *)&SrcStr )
    {
      break;
    }
    a3 = sub_958F40(a2, a3);
  }
  v7 = a3[1].m128_i32[1];
  *(_OWORD *)*((_DWORD *)this + 0x18) = *(_OWORD *)(v7 + 0x10);
  *(_OWORD *)*((_DWORD *)this + 0x19) = *(_OWORD *)(v7 + 0x20);
  v8 = a3[2].m128_i32[1];
  *(_OWORD *)(*((_DWORD *)this + 0x18) + 0x10) = *(_OWORD *)(v8 + 0x10);
  *(_OWORD *)(*((_DWORD *)this + 0x19) + 0x10) = *(_OWORD *)(v8 + 0x20);
  v9 = a3[3].m128_i32[1];
  *(_OWORD *)(*((_DWORD *)this + 0x18) + 0x20) = *(_OWORD *)(v9 + 0x10);
  *(_OWORD *)(*((_DWORD *)this + 0x19) + 0x20) = *(_OWORD *)(v9 + 0x20);
  **((_DWORD **)this + 0x1B) = 3;
  a4[1] = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps((__m128)v11, (__m128)v11, 0), *(__m128 *)*((_DWORD *)this + 0x18)),
              _mm_mul_ps(_mm_shuffle_ps((__m128)v12, (__m128)v12, 0), *(__m128 *)(*((_DWORD *)this + 0x18) + 0x10))),
            _mm_mul_ps(_mm_shuffle_ps((__m128)v13, (__m128)v13, 0), *(__m128 *)(*((_DWORD *)this + 0x18) + 0x20)));
  a4[2].m128_f32[0] = -a3[1].m128_f32[0];
  *a4 = _mm_xor_ps(*a3, (__m128)xmmword_A965C0);
  return a4;
}
