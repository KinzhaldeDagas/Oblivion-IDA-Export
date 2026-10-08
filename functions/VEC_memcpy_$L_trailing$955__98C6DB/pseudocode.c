void __usercall _VEC_memcpy_::_L_trailing_955(int a1@<eax>, int a2@<ecx>, int a3@<ebp>)
{
  int v3; // ebx

  if ( a2 ) /*0x98c6dd*/
  {
    v3 = *(_DWORD *)(a3 + 0x10); /*0x98c6df*/
    *(_DWORD *)(a3 - 0x14) = v3 + *(_DWORD *)(a3 + 0xC) - a2; /*0x98c6e9*/
    *(_DWORD *)(a3 - 0x10) = a1 + v3 - a2; /*0x98c6f0*/
    qmemcpy(*(void **)(a3 - 0x10), *(const void **)(a3 - 0x14), *(_DWORD *)(a3 - 0x18)); /*0x98c6fc*/
  }
  _VEC_memcpy_::_L_return_956(); /*0x98c6dd*/
}
