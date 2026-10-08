// positive sp value has been detected, the output may be wrong!
void __usercall log10_::jnedef_8(char a1@<zf>, void *a2@<ecx>, __int64 a3)
{
  if ( a1 ) /*0x986cc8*/
    log10_::__log10_pentium4(a3); /*0x986cca*/
  else
    _log10_default(a2, a3, SHIDWORD(a3)); /*0x986cc8*/
}
