// positive sp value has been detected, the output may be wrong!
int __usercall _CIlog_::jnedef_7@<eax>(char a1@<zf>, unsigned __int64 a2@<st0>)
{
  if ( a1 ) /*0x986bb4*/
    return _CIlog_pentium4(a2); /*0x986bb6*/
  else
    return _CIlog_::__CIlog_default(a2); /*0x986bb4*/
}
