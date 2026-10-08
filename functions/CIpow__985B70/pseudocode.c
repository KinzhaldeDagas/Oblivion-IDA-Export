void __usercall _CIpow(double a1@<st1>, unsigned __int64 a2@<st0>)
{
  int v2; // eax
  char v3; // [esp+0h] [ebp-8h]

  if ( dword_BAABDC ) /*0x985b70*/
  {
    v2 = _mm_getcsr() & 0x1F80; /*0x985b85*/
    if ( v2 == 0x1F80 ) /*0x985b8f*/
      _CIpow_::jnedef_2((v3 & 0x7F) == 0x7F); /*0x985b9d*/
    else
      _CIpow_::jnedef_2(v2 == 0x1F80); /*0x985b8f*/
  }
  else
  {
    _CIpow_::__CIpow_default(a1, a2); /*0x985b77*/
  }
}
