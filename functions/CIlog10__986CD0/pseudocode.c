void __usercall _CIlog10(unsigned __int64 a1@<st0>)
{
  int v1; // eax
  bool v2; // zf
  char v3; // [esp+0h] [ebp-8h]

  if ( !dword_BAABDC ) /*0x986cd0*/
    goto __CIlog10; /*0x986cd0*/
  v1 = _mm_getcsr() & 0x1F80; /*0x986ce5*/
  v2 = v1 == 0x1F80; /*0x986cea*/
  if ( v1 == 0x1F80 ) /*0x986cef*/
    v2 = (v3 & 0x7F) == 0x7F; /*0x986cfc*/
  if ( v2 ) /*0x986d04*/
    _CIlog10_pentium4(a1); /*0x986d06*/
  else
__CIlog10:
    _CIlog10_::__CIlog10_default(a1); /*0x986cd7*/
}
