// positive sp value has been detected, the output may be wrong!
void __usercall tan_::jnedef(char a1@<zf>, void *a2@<ecx>, __int64 a3)
{
  if ( a1 ) /*0x983ae8*/
    tan_::__tan_pentium4(a3); /*0x983aea*/
  else
    start_10_::__tan_default(a2, a3); /*0x983ae8*/
}
