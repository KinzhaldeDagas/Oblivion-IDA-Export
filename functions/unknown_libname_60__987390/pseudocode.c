int __usercall unknown_libname_60@<eax>(int a1@<edi>, int a2, unsigned int a3, int a4, int a5)
{
  if ( a2 || !a3 )
  {
    if ( a4 && a5 )
    {
      if ( a3 < 2 )
        JUMPOUT(0x98762D);
      return unknown_libname_60_::unknown_libname_61();
    }
    else
    {
      *_errno() = 0x16;
      return _invalid_parameter(a2, a1, a3);
    }
  }
  else
  {
    *_errno() = 0x16;
    return _invalid_parameter(0, a1, a3);
  }
}
