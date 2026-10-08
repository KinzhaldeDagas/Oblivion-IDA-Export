// positive sp value has been detected, the output may be wrong!
int __usercall _CIacos_::jnedef_4@<eax>(char a1@<zf>, unsigned __int64 a2@<st0>)
{
  if ( a1 ) /*0x986164*/
    return _CIacos_pentium4(a2); /*0x986166*/
  else
    return _CIacos_::__CIacos_default(a2); /*0x986164*/
}
