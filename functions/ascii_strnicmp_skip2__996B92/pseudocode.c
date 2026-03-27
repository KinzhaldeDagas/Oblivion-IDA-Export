int __usercall __ascii_strnicmp_::skip2@<eax>(__int16 a1@<ax>, int a2@<ecx>, _BYTE *a3@<edi>, _BYTE *a4@<esi>)
{
  if ( HIBYTE(a1) != (_BYTE)a1 )
    return __ascii_strnicmp_::differ();
  if ( a2 == 1 )
    return __ascii_strnicmp_::eject();
  return __ascii_strnicmp_::lupe(a3, a4);
}
