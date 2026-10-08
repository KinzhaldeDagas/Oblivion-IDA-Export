int __usercall __ascii_strnicmp_::skip1@<eax>(
        __int16 a1@<ax>,
        char a2@<dh>,
        int a3@<ecx>,
        __int16 a4@<bx>,
        _BYTE *a5@<edi>,
        _BYTE *a6@<esi>)
{
  if ( (unsigned __int8)a1 >= HIBYTE(a4) && (unsigned __int8)a1 <= (unsigned __int8)a4 ) /*0x996b8e*/
    LOBYTE(a1) = a2 + a1; /*0x996b90*/
  return __ascii_strnicmp_::skip2(a1, a3, a5, a6);
}
