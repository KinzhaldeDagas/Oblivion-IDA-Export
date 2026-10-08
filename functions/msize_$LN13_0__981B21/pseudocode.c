int __usercall _msize_::_LN13_0@<eax>(const void *a1@<ebx>, int a2@<ebp>, DWORD a3@<edi>, int a4@<esi>)
{
  if ( *(_DWORD *)(a2 - 0x20) == a3 ) /*0x981b24*/
    return HeapSize((HANDLE)dword_BA9E10[0x127], a3, a1); /*0x981b34*/
  return a4; /*0x981b38*/
}
