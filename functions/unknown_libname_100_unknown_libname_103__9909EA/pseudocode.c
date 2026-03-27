int __usercall unknown_libname_100_::unknown_libname_103@<eax>(int a1@<ebp>, char a2@<fpstat>)
{
  __int16 v2; // ax

  v2 = *(_WORD *)(a1 - 0x2CA) & 0x7FF0;
  if ( !v2 )
    return unknown_libname_100_::unknown_libname_105();
  if ( v2 == 0x7FF0 )
    return unknown_libname_100_::unknown_libname_106();
  return unknown_libname_100_::unknown_libname_101(a1, a2);
}
