int __usercall _pow_pentium4_::UF_OF_CASES@<eax>(int a1@<eax>, int a2, int a3, int a4, int a5, __int64 a6)
{
  if ( a1 <= 0 )
    return _pow_pentium4_::UNDERFLOW_CASES();
  if ( (unsigned int)a1 >= 0x40000 )
    return _pow_pentium4_::RET_INF_OF();
  return _pow_pentium4_::OF_CONT(a2, a3, a4, a5, a6);
}
