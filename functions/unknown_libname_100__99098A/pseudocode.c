int __usercall unknown_libname_100@<eax>(int a1@<ebp>, double a2@<st0>)
{
  char v2; // al

  if ( dword_BA9DDC )
    return unknown_libname_100_::unknown_libname_102();
  *(double *)(a1 - 0x2D0) = a2;
  v2 = *(_BYTE *)(a1 - 0x90);
  switch ( v2 )
  {
    case 0:
      return unknown_libname_100_::unknown_libname_101();
    case 0xFF:
      return unknown_libname_100_::unknown_libname_104();
    case 0xFE:
      return unknown_libname_100_::unknown_libname_103();
  }
  *(_DWORD *)(a1 - 0x8E) = v2;
  return unknown_libname_100_::unknown_libname_107();
}
