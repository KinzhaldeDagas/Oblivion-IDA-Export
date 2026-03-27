// positive sp value has been detected, the output may be wrong!
int __usercall unknown_libname_192_::ExpArgOutOfRange@<eax>(int a1@<ebp>, __int16 a2@<fpstat>, double a3@<st0>)
{
  bool v3; // c0
  char v4; // c2
  bool v5; // c3

  v3 = a3 < 0.0;
  v4 = 0;
  v5 = a3 == 0.0;
  *(_WORD *)(a1 - 0xA0) = a2;
  if ( (*(_BYTE *)(a1 - 0x9F) & 1) != 0 )
    return unknown_libname_192_::zeronpopue();
  else
    return unknown_libname_192_::_expbigret();
}
