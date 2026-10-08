char __thiscall sub_8B8A10(__m128 *this, __m128 *a2)
{
  int v3; // eax
  int v4; // ecx

  LOBYTE(v3) = _mm_movemask_ps( /*0x8b8a4a*/
                 _mm_cmplt_ps(
                   _mm_shuffle_ps((__m128)0x3A83126Fu, (__m128)0x3A83126Fu, 0),
                   _mm_and_ps(_mm_sub_ps(*a2, *(this + 3)), (__m128)xmmword_A372D0)));
  if ( (v3 & 7) != 0 ) /*0x8b8a4f*/
  {
    v4 = *((_DWORD *)this + 6); /*0x8b8a51*/
    if ( v4 ) /*0x8b8a56*/
    {
      v3 = *(_DWORD *)(v4 + 8); /*0x8b8a58*/
      if ( v3 ) /*0x8b8a5d*/
        LOBYTE(v3) = sub_8A6410(v4); /*0x8b8a5f*/
    }
  }
  *(this + 3) = *a2; /*0x8b8a68*/
  return v3; /*0x8b8a6d*/
}
