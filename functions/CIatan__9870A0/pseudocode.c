void __usercall _CIatan(unsigned __int64 a1@<st0>)
{
  int v1; // eax
  char v2; // [esp+0h] [ebp-8h]

  if ( dword_BAABDC ) /*0x9870a0*/
  {
    v1 = _mm_getcsr() & 0x1F80; /*0x9870b5*/
    if ( v1 == 0x1F80 ) /*0x9870bf*/
      _CIatan_::jnedef_9((v2 & 0x7F) == 0x7F); /*0x9870cd*/
    else
      _CIatan_::jnedef_9(v1 == 0x1F80); /*0x9870bf*/
  }
  else
  {
    _CIatan_::__CIatan_default(a1); /*0x9870a7*/
  }
}
