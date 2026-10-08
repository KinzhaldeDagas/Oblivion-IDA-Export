void __usercall _CIexp(unsigned __int64 a1@<st0>, void *a2@<ecx>)
{
  int v2; // eax
  bool v3; // zf
  char v4; // [esp+0h] [ebp-8h]

  if ( !dword_BAABDC ) /*0x9866bc*/
    goto __CIexp; /*0x9866bc*/
  v2 = _mm_getcsr() & 0x1F80; /*0x9866d1*/
  v3 = v2 == 0x1F80; /*0x9866d6*/
  if ( v2 == 0x1F80 ) /*0x9866db*/
    v3 = (v4 & 0x7F) == 0x7F; /*0x9866e8*/
  if ( v3 ) /*0x9866f0*/
    _CIexp_pentium4(a1); /*0x9866f2*/
  else
__CIexp:
    _CIexp_::__CIexp_default(a2); /*0x9866c3*/
}
