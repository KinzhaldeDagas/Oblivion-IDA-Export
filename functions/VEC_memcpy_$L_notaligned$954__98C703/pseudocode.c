void __usercall _VEC_memcpy_::_L_notaligned_954(int a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  if ( a1 == a3 ) /*0x98c705*/
  {
    *(_DWORD *)(a2 - 0x1C) = 0x10 - a1; /*0x98c70c*/
    qmemcpy(*(void **)(a2 + 8), *(const void **)(a2 + 0xC), *(_DWORD *)(a2 - 0x1C)); /*0x98c718*/
    _VEC_memcpy( /*0x98c72f*/
      (__m128i *)(*(_DWORD *)(a2 - 0x1C) + *(_DWORD *)(a2 + 8)),
      (const __m128i *)(*(_DWORD *)(a2 - 0x1C) + *(_DWORD *)(a2 + 0xC)),
      *(_DWORD *)(a2 + 0x10) - *(_DWORD *)(a2 - 0x1C));
    _VEC_memcpy_::_L_return_956(); /*0x98c73a*/
  }
  else
  {
    _VEC_memcpy_::_L_unequalalign_957(a2); /*0x98c705*/
  }
}
