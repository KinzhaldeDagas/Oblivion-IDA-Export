// positive sp value has been detected, the output may be wrong!
int __usercall _CIlog_::jnedef_7@<eax>(char a1@<zf>)
{
  if ( a1 )
    return _CIlog_pentium4();
  else
    return ((int (*)(void))_CIlog_::__CIlog_default)();
}
