int __cdecl _VEC_memzero(int a1, int a2, int a3)
{
  int v3; // edx

  if ( a1 % 0x10 )
    return _VEC_memzero_::_L_notaligned_952();
  v3 = a3 & 0x7F;
  if ( a3 != v3 )
    fastzero_I((_OWORD *)a1, a3 - v3);
  return _VEC_memzero_::_L_trailing_953();
}
