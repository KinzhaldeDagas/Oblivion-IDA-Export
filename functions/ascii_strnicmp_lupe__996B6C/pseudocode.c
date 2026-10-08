void *__usercall __ascii_strnicmp_::lupe@<eax>(
        _BYTE *a1@<edi>,
        _BYTE *a2@<esi>,
        char a3@<dh>,
        int a4@<ecx>,
        __int16 a5@<bx>)
{
  __int16 v5; // ax
  _BYTE *v6; // esi
  _BYTE *v7; // edi

  HIBYTE(v5) = *a2; /*0x996b6c*/
  LOBYTE(v5) = *a1; /*0x996b70*/
  if ( !*a2 || !(_BYTE)v5 ) /*0x996b76*/
    return __ascii_strnicmp_::eject(v5); /*0x996b72*/
  v6 = a2 + 1; /*0x996b78*/
  v7 = a1 + 1; /*0x996b7b*/
  if ( HIBYTE(v5) >= HIBYTE(a5) && HIBYTE(v5) <= (unsigned __int8)a5 ) /*0x996b84*/
    HIBYTE(v5) += a3; /*0x996b86*/
  return (void *)__ascii_strnicmp_::skip1(v5, a3, a4, a5, v7, v6);
}
