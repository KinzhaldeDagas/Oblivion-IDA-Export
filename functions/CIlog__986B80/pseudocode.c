void __usercall _CIlog(unsigned __int64 a1@<st0>)
{
  int v1; // eax
  char v2; // [esp+0h] [ebp-8h]

  if ( dword_BAABDC ) /*0x986b80*/
  {
    v1 = _mm_getcsr() & 0x1F80; /*0x986b95*/
    if ( v1 == 0x1F80 ) /*0x986b9f*/
      _CIlog_::jnedef_7((v2 & 0x7F) == 0x7F); /*0x986bad*/
    else
      _CIlog_::jnedef_7(v1 == 0x1F80); /*0x986b9f*/
  }
  else
  {
    _CIlog_::__CIlog_default(a1); /*0x986b87*/
  }
}
