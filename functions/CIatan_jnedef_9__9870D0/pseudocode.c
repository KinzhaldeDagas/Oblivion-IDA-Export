// positive sp value has been detected, the output may be wrong!
int __usercall _CIatan_::jnedef_9@<eax>(char a1@<zf>, __int64 a2@<st0>)
{
  if ( a1 ) /*0x9870d4*/
    return _CIatan_pentium4(a2); /*0x9870d6*/
  else
    return _CIatan_::__CIatan_default(a2); /*0x9870d4*/
}
