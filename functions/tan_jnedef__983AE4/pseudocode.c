// positive sp value has been detected, the output may be wrong!
void __usercall tan_::jnedef(char a1@<zf>, __int64 a2)
{
  if ( a1 )
    tan_::__tan_pentium4(a2);
  else
    start_10_::__tan_default(*(double *)&a2);
}
