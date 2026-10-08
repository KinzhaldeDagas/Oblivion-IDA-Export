DWORD *__usercall _getptd@<eax>(int a1@<ebp>)
{
  DWORD *v1; // esi

  v1 = _getptd_noexit(); /*0x98c0fb*/
  if ( !v1 ) /*0x98c0ff*/
    _amsg_exit(a1, 0x10); /*0x98c103*/
  return v1; /*0x98c10b*/
}
