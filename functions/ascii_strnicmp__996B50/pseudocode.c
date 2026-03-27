int __usercall __ascii_strnicmp@<eax>(__int16 a1@<dx>, const char *Str1, const char *Str2, int a4, ...)
{
  if ( !a4 )
    return __ascii_strnicmp_::toend_0();
  HIBYTE(a1) = 0x20;
  return __ascii_strnicmp_::lupe(a4, a1);
}
