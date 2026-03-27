int __usercall _msize_::_LN13_0@<eax>(const void *a1@<ebx>, int a2@<ebp>, DWORD a3@<edi>, int a4@<esi>)
{
  if ( *(_DWORD *)(a2 - 0x20) == a3 )
    return HeapSize(hHeap, a3, a1);
  return a4;
}
