void __usercall _CItan(unsigned __int64 a1@<st0>)
{
  int v1; // eax
  bool v2; // zf
  char v3; // [esp+0h] [ebp-8h]

  if ( !dword_BAABDC ) /*0x983af0*/
    goto __CItan; /*0x983af0*/
  v1 = _mm_getcsr() & 0x1F80; /*0x983b05*/
  v2 = v1 == 0x1F80; /*0x983b0a*/
  if ( v1 == 0x1F80 ) /*0x983b0f*/
    v2 = (v3 & 0x7F) == 0x7F; /*0x983b1c*/
  if ( v2 ) /*0x983b24*/
    _CItan_pentium4(a1); /*0x983b26*/
  else
__CItan:
    _CItan_::__CItan_default(a1); /*0x983af7*/
}
