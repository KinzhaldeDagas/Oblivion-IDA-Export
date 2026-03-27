int __usercall unknown_libname_186_::fF2X@<eax>(int a1@<ebp>)
{
  unknown_libname_192();
  if ( (*(_BYTE *)(a1 - 0x9F) & 1) != 0 && dword_BA9DE0 == 1 )
    return unknown_libname_186_::badP5_fdivr();
  else
    return unknown_libname_186_::fdivr_done();
}
