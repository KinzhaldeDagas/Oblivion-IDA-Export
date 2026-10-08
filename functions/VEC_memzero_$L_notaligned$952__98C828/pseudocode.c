void __usercall _VEC_memzero_::_L_notaligned_952(int a1@<ebp>, int a2@<edi>)
{
  *(_DWORD *)(a1 - 0x10) = 0x10 - a2; /*0x98c82d*/
  memset(*(void **)(a1 + 8), 0, *(_DWORD *)(a1 - 0x10)); /*0x98c838*/
  _VEC_memzero(*(_DWORD *)(a1 - 0x10) + *(_DWORD *)(a1 + 8), 0, *(_DWORD *)(a1 + 0x10) - *(_DWORD *)(a1 - 0x10)); /*0x98c84b*/
  _VEC_memzero_::_L_return_954(); /*0x98c854*/
}
