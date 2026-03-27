int __usercall _VEC_memzero_::_L_trailing_953@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ebp>)
{
  if ( a2 )
  {
    *(_DWORD *)(a3 - 8) = *(_DWORD *)(a3 + 0x10) + a1 - a2;
    memset(*(void **)(a3 - 8), 0, *(_DWORD *)(a3 - 0xC));
  }
  return _VEC_memzero_::_L_return_954();
}
