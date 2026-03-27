// positive sp value has been detected, the output may be wrong!
int __usercall floor_::jnedef_1@<eax>(char a1@<zf>, __int64 a2)
{
  if ( a1 )
    return floor_::__floor_pentium4(a2);
  else
    return _floor_default(*(double *)&a2);
}
