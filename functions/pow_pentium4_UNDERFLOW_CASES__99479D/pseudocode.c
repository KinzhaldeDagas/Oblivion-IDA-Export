int __usercall _pow_pentium4_::UNDERFLOW_CASES@<eax>(signed int a1@<eax>, int a2, int a3, int a4, int a5, __int64 a6)
{
  if ( a1 <= (int)0xFFFC0200 )
    return _pow_pentium4_::RET_ZERO_UF();
  else
    return _pow_pentium4_::OF_CONT(a2, a3, a4, a5, a6);
}
