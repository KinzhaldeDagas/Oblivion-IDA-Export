void __thiscall sub_900BB0(__m128 *this, int a2, __m128 *a3)
{
  __int32 v4; // edx
  double v5; // st7
  __m128 v6; // xmm1
  __m128 v7; // xmm0
  int v8; // ecx
  __m128 v9; // xmm1
  __m128 *v10; // eax
  __m128 v11; // xmm0
  unsigned int v12; // [esp+Ch] [ebp-34h]
  float v13; // [esp+Ch] [ebp-34h]
  __m128 v14; // [esp+10h] [ebp-30h] BYREF
  __m128 v15; // [esp+20h] [ebp-20h]
  int v16; // [esp+30h] [ebp-10h]
  int v17; // [esp+34h] [ebp-Ch]

  v4 = a3[1].m128_i32[1];
  v5 = -*((float *)this + 8);
  v6 = *(this + 3);
  v16 = *((_DWORD *)this + 0x10);
  *(float *)&v12 = v5;
  v7 = *a3;
  v8 = *((_DWORD *)this + 0x11);
  v9 = _mm_add_ps(*(this + 1), _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v4, (__m128)(unsigned int)v4, 0), v6));
  v17 = a2;
  v10 = *(__m128 **)(a2 + 8);
  v14 = v9;
  v11 = _mm_add_ps(
          _mm_add_ps(_mm_mul_ps(*v10, _mm_shuffle_ps(v7, v7, 0)), _mm_mul_ps(v10[1], _mm_shuffle_ps(v7, v7, 0x55))),
          _mm_mul_ps(v10[2], _mm_shuffle_ps(v7, v7, 0xAA)));
  v15 = v11;
  v15.m128_i32[3] = v4;
  v14 = _mm_add_ps(v9, _mm_mul_ps(_mm_shuffle_ps((__m128)v12, (__m128)v12, 0), v11));
  (*(void (__thiscall **)(int, __m128 *))(*(_DWORD *)v8 + 4))(v8, &v14);
  v13 = this->m128_f32[1];
  if ( *(float *)(*((_DWORD *)this + 0x11) + 4) >= (double)v13 )
    this->m128_f32[1] = v13;
  else
    this->m128_f32[1] = *(float *)(*((_DWORD *)this + 0x11) + 4);
}
