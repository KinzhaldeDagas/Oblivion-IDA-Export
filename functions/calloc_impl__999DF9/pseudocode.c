int __usercall _calloc_impl@<eax>(int a1@<ebx>, int a2@<esi>, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // esi
  unsigned int v6; // [esp+34h] [ebp+8h]

  if ( a3 && 0xFFFFFFE0 / a3 < a4 )
  {
    *_errno() = 0xC;
    _invalid_parameter(a1, 0, a2);
    return 0;
  }
  else
  {
    v5 = a4 * a3;
    v6 = v5;
    if ( !v5 )
      v5 = 1;
    if ( v5 > 0xFFFFFFE0 )
      JUMPOUT(0x999EBF);
    if ( dword_BAABC0 != 3 || v6 > dword_BAABCC )
      JUMPOUT(0x999EAA);
    _lock(4);
    __sbh_alloc_block(v6);
    _unlock(4);
    return _calloc_impl_::_LN25_3(v6, (v5 + 0xF) & 0xFFFFFFF0);
  }
}
