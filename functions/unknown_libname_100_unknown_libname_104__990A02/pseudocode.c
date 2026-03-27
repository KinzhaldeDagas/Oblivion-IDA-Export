int __usercall unknown_libname_100_::unknown_libname_104@<eax>(int a1@<ebp>, char a2@<fpstat>)
{
  if ( (*(_WORD *)(a1 - 0x2CA) & 0x7FF0) == 0x7FF0 )
    return unknown_libname_100_::unknown_libname_106();
  else
    return unknown_libname_100_::unknown_libname_101(a1, a2);
}
