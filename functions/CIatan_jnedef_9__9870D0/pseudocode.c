// positive sp value has been detected, the output may be wrong!
int __usercall _CIatan_::jnedef_9@<eax>(char a1@<zf>)
{
  if ( a1 )
    return _CIatan_pentium4();
  else
    return ((int (*)(void))_CIatan_::__CIatan_default)();
}
