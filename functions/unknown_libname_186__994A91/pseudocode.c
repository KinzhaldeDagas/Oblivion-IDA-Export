int __usercall unknown_libname_186@<eax>(__int16 a1@<cx>, int a2@<ebp>, double a3@<st0>)
{
  *(_BYTE *)(a2 - 0x90) = 0xFE;
  HIBYTE(a1) = 0;
  return unknown_libname_186_::fF2X(a1, a3 * 1.442695040888963407);
}
