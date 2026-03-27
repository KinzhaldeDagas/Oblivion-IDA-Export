char __thiscall sub_8B8A10(__m128 *this, __m128 *a2)
{
  int v3; // eax
  int v4; // ecx

  LOBYTE(v3) = _mm_movemask_ps(
                 _mm_cmplt_ps(
                   _mm_shuffle_ps((__m128)0x3A83126Fu, (__m128)0x3A83126Fu, 0),
                   _mm_and_ps(_mm_sub_ps(*a2, *(this + 3)), (__m128)xmmword_A372D0)));
  if ( (v3 & 7) != 0 )
  {
    v4 = *((_DWORD *)this + 6);
    if ( v4 )
    {
      v3 = *(_DWORD *)(v4 + 8);
      if ( v3 )
        LOBYTE(v3) = sub_8A6410(v4);
    }
  }
  *(this + 3) = *a2;
  return v3;
}
