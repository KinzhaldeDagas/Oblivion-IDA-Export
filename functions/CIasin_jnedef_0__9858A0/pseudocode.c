// positive sp value has been detected, the output may be wrong!
int __usercall _CIasin_::jnedef_0@<eax>(char a1@<zf>)
{
  if ( a1 )
    return _CIasin_pentium4();
  else
    return ((int (*)(void))_CIasin_::__CIasin_default)();
}
