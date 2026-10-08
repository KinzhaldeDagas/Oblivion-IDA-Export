void *__usercall __ascii_strnicmp_::eject@<eax>(__int16 a1@<ax>)
{
  if ( HIBYTE(a1) == (_BYTE)a1 ) /*0x996b9f*/
    return __ascii_strnicmp_::toend_0(0); /*0x996b9f*/
  else
    return (void *)__ascii_strnicmp_::differ(HIBYTE(a1) < (unsigned __int8)a1); /*0x996ba0*/
}
