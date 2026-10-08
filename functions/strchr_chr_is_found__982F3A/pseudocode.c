// positive sp value has been detected, the output may be wrong!
_DWORD *__usercall strchr_::chr_is_found@<eax>(_DWORD *a1@<edx>, char a2@<bl>)
{
  unsigned int v3; // eax
  unsigned int v4; // eax

  v3 = a1[0xFFFFFFFF]; /*0x982f3a*/
  if ( (_BYTE)v3 == a2 ) /*0x982f3f*/
    return a1 + 0xFFFFFFFF; /*0x982f77*/
  if ( (_BYTE)v3 ) /*0x982f43*/
  {
    if ( BYTE1(v3) == a2 ) /*0x982f47*/
      return (_DWORD *)((char *)a1 + 0xFFFFFFFD); /*0x982f76*/
    if ( BYTE1(v3) ) /*0x982f4b*/
    {
      v4 = HIWORD(v3); /*0x982f4d*/
      if ( (_BYTE)v4 == a2 ) /*0x982f52*/
        return (_DWORD *)((char *)a1 + 0xFFFFFFFE); /*0x982f6f*/
      if ( (_BYTE)v4 ) /*0x982f56*/
      {
        if ( BYTE1(v4) == a2 ) /*0x982f5a*/
          return (_DWORD *)((char *)a1 + 0xFFFFFFFF); /*0x982f68*/
        if ( BYTE1(v4) ) /*0x982f5e*/
          return (_DWORD *)strchr_::main_loop_0(a1, a2); /*0x982f60*/
      }
    }
  }
  return (_DWORD *)strchr_::retnull(); /*0x982f68*/
}
