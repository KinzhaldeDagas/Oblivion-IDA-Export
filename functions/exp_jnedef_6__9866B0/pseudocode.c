// positive sp value has been detected, the output may be wrong!
void __usercall exp_::jnedef_6(char a1@<zf>, __int64 a2)
{
  if ( a1 )
    exp_::__exp_pentium4(a2);
  else
    _CIexp_::__exp_default(*(double *)&a2);
}
