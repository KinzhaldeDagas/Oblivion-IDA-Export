int __usercall unknown_libname_100_::unknown_libname_101@<eax>(int a1@<ebp>, char a2@<fpstat>)
{
  if ( (*(_WORD *)(a1 - 0xA4) & 0x20) != 0 || (a2 & 0x20) == 0 )
    return unknown_libname_100_::unknown_libname_102();
  *(_DWORD *)(a1 - 0x8E) = 8;
  return unknown_libname_100_::unknown_libname_107();
}
