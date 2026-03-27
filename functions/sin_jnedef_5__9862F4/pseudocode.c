// positive sp value has been detected, the output may be wrong!
void __usercall sin_::jnedef_5(char a1@<zf>, __int64 a2)
{
  if ( a1 )
    sin_::__sin_pentium4(a2);
  else
    start_14_::__sin_default(*(double *)&a2);
}
