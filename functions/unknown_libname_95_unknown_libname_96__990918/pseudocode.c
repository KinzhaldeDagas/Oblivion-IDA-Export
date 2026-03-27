// positive sp value has been detected, the output may be wrong!
int __usercall unknown_libname_95_::unknown_libname_96@<eax>(int a1@<ebp>)
{
  double v1; // st7

  v1 = ((double (*)(void))unknown_libname_114)();
  *(_BYTE *)(a1 - 0x2C8) |= 1u;
  *(_BYTE *)(a1 - 0x2C8) &= ~2u;
  return unknown_libname_100(a1, v1);
}
