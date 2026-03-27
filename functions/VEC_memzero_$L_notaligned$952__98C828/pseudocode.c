int __usercall _VEC_memzero_::_L_notaligned_952@<eax>(int a1@<ebp>, int a2@<edi>)
{
  *(_DWORD *)(a1 - 0x10) = 0x10 - a2;
  memset(*(void **)(a1 + 8), 0, *(_DWORD *)(a1 - 0x10));
  _VEC_memzero(*(_DWORD *)(a1 - 0x10) + *(_DWORD *)(a1 + 8), 0, *(_DWORD *)(a1 + 0x10) - *(_DWORD *)(a1 - 0x10));
  return _VEC_memzero_::_L_return_954();
}
