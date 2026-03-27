// positive sp value has been detected, the output may be wrong!
void __usercall log10_::jnedef_8(char a1@<zf>, __int64 a2)
{
  if ( a1 )
    log10_::__log10_pentium4(a2);
  else
    _log10_default(*(double *)&a2);
}
