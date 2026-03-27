// positive sp value has been detected, the output may be wrong!
int __usercall _CIpow_::jnedef_2@<eax>(char a1@<zf>)
{
  if ( a1 )
    return _CIpow_pentium4();
  else
    return ((int (*)(void))_CIpow_::__CIpow_default)();
}
