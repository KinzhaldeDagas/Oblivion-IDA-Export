int __thiscall sub_917F10(__m128 *this, int a2)
{
  int v3; // edi
  int v4; // edx
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v8; // xmm4
  __m128 *v9; // eax
  int v10; // ecx
  double v11; // st7
  int v13; // [esp+18h] [ebp-8h] BYREF

  v3 = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 4) + 0x20))(*((_DWORD *)this + 4), a2);
  (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)this + 4) + 0x1C))(*((_DWORD *)this + 4), &v13);
  v4 = v13;
  v5 = *(this + 2);
  v6 = *(this + 3);
  v7 = *(this + 4);
  v8 = *(this + 5);
  v9 = (__m128 *)v3;
  v10 = a2 - v3;
  do
  {
    v11 = v9->m128_f32[3];
    *(__m128 *)((char *)v9 + v10) = _mm_add_ps(
                                      _mm_add_ps(
                                        _mm_mul_ps(v5, _mm_shuffle_ps(*v9, *v9, 0)),
                                        _mm_mul_ps(v6, _mm_shuffle_ps(*v9, *v9, 0x55))),
                                      _mm_add_ps(_mm_mul_ps(v7, _mm_shuffle_ps(*v9, *v9, 0xAA)), v8));
    *(float *)((char *)&v9->m128_f32[3] + v10) = v11;
    ++v9;
    --v4;
  }
  while ( v4 > 0 );
  return a2;
}
