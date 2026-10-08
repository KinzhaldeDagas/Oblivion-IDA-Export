void *__usercall __ascii_strnicmp_::skip2@<eax>(
        __int16 ax0@<ax>,
        int ecx0@<ecx>,
        _BYTE *a1@<edi>,
        _BYTE *a2@<esi>,
        char a5@<dh>,
        __int16 a6@<bx>)
{
  int v6; // ecx

  if ( HIBYTE(ax0) != (_BYTE)ax0 ) /*0x996b94*/
    return __ascii_strnicmp_::differ(HIBYTE(ax0) < (unsigned __int8)ax0); /*0x996b94*/
  v6 = ecx0 - 1; /*0x996b96*/
  if ( v6 ) /*0x996b99*/
    return __ascii_strnicmp_::lupe(a1, a2, a5, v6, a6); /*0x996b99*/
  else
    return __ascii_strnicmp_::eject(ax0); /*0x996b9a*/
}
