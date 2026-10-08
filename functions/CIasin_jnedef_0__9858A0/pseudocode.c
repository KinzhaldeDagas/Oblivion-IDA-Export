// positive sp value has been detected, the output may be wrong!
int __usercall _CIasin_::jnedef_0@<eax>(char a1@<zf>, unsigned __int64 a2@<st0>)
{
  if ( a1 ) /*0x9858a4*/
    return _CIasin_pentium4(a2); /*0x9858a6*/
  else
    return _CIasin_::__CIasin_default(a2); /*0x9858a4*/
}
