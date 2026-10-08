int __cdecl _VEC_memzero(int a1, int a2, int a3)
{
  int v3; // edx
  int v5; // [esp+4h] [ebp-Ch]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  if ( a1 % 0x10 ) /*0x98c7e6*/
    return _VEC_memzero_::_L_notaligned_952((int)&savedregs, a1 % 0x10); /*0x98c7ea*/
  v3 = a3 & 0x7F; /*0x98c7f1*/
  v5 = v3; /*0x98c7f4*/
  if ( a3 == v3 ) /*0x98c7f9*/
    return _VEC_memzero_::_L_trailing_953(a1, v3, (int)&savedregs); /*0x98c7f9*/
  fastzero_I((_OWORD *)a1, a3 - v3); /*0x98c7ff*/
  return _VEC_memzero_::_L_trailing_953(a1, v5, (int)&savedregs);
}
