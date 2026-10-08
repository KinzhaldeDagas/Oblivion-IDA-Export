int _VEC_memcpy(__m128i *Dst, const __m128i *Src, int a3, ...)
{
  int v3; // ecx
  int v5; // [esp+4h] [ebp-18h]
  int savedregs; // [esp+1Ch] [ebp+0h] BYREF

  if ( ((int)Dst % 0x10) | ((int)Src % 0x10) ) /*0x98c6b5*/
    return _VEC_memcpy_::_L_notaligned_954((int)Src % 0x10, (int)&savedregs, (int)Dst % 0x10); /*0x98c6b7*/
  v3 = a3 & 0x7F; /*0x98c6be*/
  v5 = v3; /*0x98c6c1*/
  if ( a3 == v3 ) /*0x98c6c6*/
    return _VEC_memcpy_::_L_trailing_955((int)Dst, v3, (int)&savedregs); /*0x98c6c6*/
  fastcopy_I(Dst, Src, a3 - v3); /*0x98c6cd*/
  return _VEC_memcpy_::_L_trailing_955((int)Dst, v5, (int)&savedregs);
}
