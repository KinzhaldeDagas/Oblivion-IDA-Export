void *_VEC_memcpy(__m128i *Dst, const __m128i *Src, int a3, ...)
{
  int v3; // ecx
  int v5; // [esp+4h] [ebp-18h]

  if ( ((int)Dst % 0x10) | ((int)Src % 0x10) )
    return _VEC_memcpy_::_L_notaligned_954();
  v3 = a3 & 0x7F;
  v5 = v3;
  if ( a3 == v3 )
    return ((void *(*)(void))_VEC_memcpy_::_L_trailing_955)();
  fastcopy_I(Dst, Src, a3 - v3);
  return _VEC_memcpy_::_L_trailing_955(v5);
}
