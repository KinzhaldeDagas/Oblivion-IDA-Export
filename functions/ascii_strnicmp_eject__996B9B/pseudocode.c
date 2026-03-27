int __usercall __ascii_strnicmp_::eject@<eax>(__int16 a1@<ax>)
{
  if ( HIBYTE(a1) == (_BYTE)a1 )
    return __ascii_strnicmp_::toend_0(0);
  else
    return __ascii_strnicmp_::differ();
}
