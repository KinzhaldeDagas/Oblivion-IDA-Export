// positive sp value has been detected, the output may be wrong!
void __usercall sin_::jnedef_5(char a1@<zf>, void *a2@<ecx>, __int64 a3)
{
  if ( a1 ) /*0x9862f8*/
    sin_::__sin_pentium4(a3); /*0x9862fa*/
  else
    start_14_::__sin_default(a2, a3); /*0x9862f8*/
}
