// positive sp value has been detected, the output may be wrong!
void __usercall exp_::jnedef_6(char a1@<zf>, __int64 a2)
{
  if ( a1 ) /*0x9866b4*/
    exp_::__exp_pentium4(a2); /*0x9866b6*/
  else
    _CIexp_::__exp_default(a2, SHIDWORD(a2)); /*0x9866b4*/
}
