void __usercall unknown_libname_100_::unknown_libname_108(int a1@<ebp>, double a2@<st0>)
{
  *(double *)(a1 - 0x76) = a2;
  _87except(*(char *)(*(_DWORD *)(a1 - 0x94) + 0xE), a1 - 0x8E, a1 - 0xA4);
  JUMPOUT(0x990AC7);
}
