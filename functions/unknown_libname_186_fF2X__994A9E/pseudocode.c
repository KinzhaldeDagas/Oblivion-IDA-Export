int __usercall unknown_libname_186_::fF2X@<eax>(int a1@<ebp>, double a2@<st0>, char a3@<ch>)
{
  char v3; // dl
  int v4; // ecx
  double v5; // st7

  v5 = unknown_libname_192(a1, a2, a3) + 1.0; /*0x994aa5*/
  if ( (*(_BYTE *)(a1 - 0x9F) & 1) != 0 && *(_DWORD *)&byte_BA9DCC[0x14] == 1 ) /*0x994ab9*/
    return unknown_libname_186_::badP5_fdivr(1.0, v5); /*0x994ab9*/
  else
    return unknown_libname_186_::fdivr_done(v4, v3); /*0x994abd*/
}
