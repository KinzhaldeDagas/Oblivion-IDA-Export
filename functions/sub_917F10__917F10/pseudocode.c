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

  v3 = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 4) + 0x20))(*((_DWORD *)this + 4), a2); /*0x917f2f*/
  (*(void (__thiscall **)(_DWORD, int *))(**((_DWORD **)this + 4) + 0x1C))(*((_DWORD *)this + 4), &v13); /*0x917f36*/
  v4 = v13; /*0x917f39*/
  v5 = *(this + 2); /*0x917f3d*/
  v6 = *(this + 3); /*0x917f41*/
  v7 = *(this + 4); /*0x917f45*/
  v8 = *(this + 5); /*0x917f49*/
  v9 = (__m128 *)v3; /*0x917f4f*/
  v10 = a2 - v3; /*0x917f51*/
  do /*0x917f97*/
  {
    v11 = v9->m128_f32[3]; /*0x917f56*/
    *(__m128 *)((char *)v9 + v10) = _mm_add_ps( /*0x917f89*/
                                      _mm_add_ps(
                                        _mm_mul_ps(v5, _mm_shuffle_ps(*v9, *v9, 0)),
                                        _mm_mul_ps(v6, _mm_shuffle_ps(*v9, *v9, 0x55))),
                                      _mm_add_ps(_mm_mul_ps(v7, _mm_shuffle_ps(*v9, *v9, 0xAA)), v8));
    *(float *)((char *)&v9->m128_f32[3] + v10) = v11; /*0x917f8d*/
    ++v9; /*0x917f91*/
    --v4; /*0x917f94*/
  }
  while ( v4 > 0 ); /*0x917f97*/
  return a2; /*0x917f99*/
}
