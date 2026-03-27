// positive sp value has been detected, the output may be wrong!
int __usercall ceil_::jnedef_10@<eax>(char a1@<zf>, __int64 a2)
{
  if ( a1 )
    return ceil_::__ceil_pentium4(a2);
  else
    return _floor_default_0(*(double *)&a2);
}
