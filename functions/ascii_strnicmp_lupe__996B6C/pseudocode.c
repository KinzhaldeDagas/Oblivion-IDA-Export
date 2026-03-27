int __usercall __ascii_strnicmp_::lupe@<eax>(_BYTE *a1@<edi>, _BYTE *a2@<esi>)
{
  if ( *a2 && *a1 )
    return __ascii_strnicmp_::skip1();
  else
    return __ascii_strnicmp_::eject();
}
