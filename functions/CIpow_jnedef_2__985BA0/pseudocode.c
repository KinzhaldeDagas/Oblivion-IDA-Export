// positive sp value has been detected, the output may be wrong!
void __usercall _CIpow_::jnedef_2(char a1@<zf>, double a2@<st1>, double a3@<st0>)
{
  if ( a1 ) /*0x985ba4*/
    _CIpow_pentium4(a2, a3); /*0x985ba6*/
  else
    _CIpow_::__CIpow_default(a2, *(unsigned __int64 *)&a3); /*0x985ba4*/
}
