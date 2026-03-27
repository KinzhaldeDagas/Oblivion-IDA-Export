// positive sp value has been detected, the output may be wrong!
int __usercall _CIacos_::jnedef_4@<eax>(char a1@<zf>)
{
  if ( a1 )
    return _CIacos_pentium4();
  else
    return ((int (*)(void))_CIacos_::__CIacos_default)();
}
