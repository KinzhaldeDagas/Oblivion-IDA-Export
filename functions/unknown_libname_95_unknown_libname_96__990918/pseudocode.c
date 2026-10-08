// positive sp value has been detected, the output may be wrong!
int __usercall unknown_libname_95_::unknown_libname_96@<eax>(
        int a1@<ebp>,
        int a2@<edx>,
        __int16 a3@<cx>,
        __int16 a4@<fpstat>,
        double a5@<st0>)
{
  unknown_libname_114(a2, a3, a1, a4, a5); /*0x990918*/
  *(_BYTE *)(a1 - 0x2C8) |= 1u; /*0x99091d*/
  *(_BYTE *)(a1 - 0x2C8) &= ~2u; /*0x990924*/
  return unknown_libname_100(a1, a5); /*0x990932*/
}
