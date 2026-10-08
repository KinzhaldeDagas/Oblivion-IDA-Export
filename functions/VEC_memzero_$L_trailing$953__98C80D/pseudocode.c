void __usercall _VEC_memzero_::_L_trailing_953(int a1@<eax>, int a2@<edx>, int a3@<ebp>)
{
  if ( a2 ) /*0x98c80f*/
  {
    *(_DWORD *)(a3 - 8) = *(_DWORD *)(a3 + 0x10) + a1 - a2; /*0x98c816*/
    memset(*(void **)(a3 - 8), 0, *(_DWORD *)(a3 - 0xC)); /*0x98c821*/
  }
  _VEC_memzero_::_L_return_954(); /*0x98c80f*/
}
