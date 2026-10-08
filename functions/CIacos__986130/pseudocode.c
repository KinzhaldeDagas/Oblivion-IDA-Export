void __usercall _CIacos(unsigned __int64 a1@<st0>)
{
  int v1; // eax
  char v2; // [esp+0h] [ebp-8h]

  if ( dword_BAABDC ) /*0x986130*/
  {
    v1 = _mm_getcsr() & 0x1F80; /*0x986145*/
    if ( v1 == 0x1F80 ) /*0x98614f*/
      _CIacos_::jnedef_4((v2 & 0x7F) == 0x7F); /*0x98615d*/
    else
      _CIacos_::jnedef_4(v1 == 0x1F80); /*0x98614f*/
  }
  else
  {
    _CIacos_::__CIacos_default(a1); /*0x986137*/
  }
}
