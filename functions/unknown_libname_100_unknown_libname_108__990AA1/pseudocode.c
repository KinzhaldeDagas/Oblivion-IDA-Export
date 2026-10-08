void __usercall unknown_libname_100_::unknown_libname_108(int a1@<ebp>, double a2@<st0>)
{
  *(double *)(a1 - 0x76) = a2; /*0x990aa1*/
  _87except(*(char *)(*(_DWORD *)(a1 - 0x94) + 0xE), a1 - 0x8E, (__int16 *)(a1 - 0xA4)); /*0x990abf*/
  JUMPOUT(0x990AC7); /*0x990ac7*/
}
