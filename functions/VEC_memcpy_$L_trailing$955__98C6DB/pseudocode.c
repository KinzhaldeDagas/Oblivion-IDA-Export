int __usercall _VEC_memcpy_::_L_trailing_955@<eax>(int a1@<eax>, int a2@<ecx>, int a3@<ebp>)
{
  int v3; // ebx

  if ( a2 )
  {
    v3 = *(_DWORD *)(a3 + 0x10);
    *(_DWORD *)(a3 - 0x14) = v3 + *(_DWORD *)(a3 + 0xC) - a2;
    *(_DWORD *)(a3 - 0x10) = a1 + v3 - a2;
    qmemcpy(*(void **)(a3 - 0x10), *(const void **)(a3 - 0x14), *(_DWORD *)(a3 - 0x18));
  }
  return _VEC_memcpy_::_L_return_956();
}
