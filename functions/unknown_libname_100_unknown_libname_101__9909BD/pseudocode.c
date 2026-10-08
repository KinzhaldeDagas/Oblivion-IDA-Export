void __usercall unknown_libname_100_::unknown_libname_101(_DWORD *a1@<ebp>, char a2@<fpstat>)
{
  if ( (a1[0xFFFFFFD7] & 0x20) != 0 || (a2 & 0x20) == 0 ) /*0x9909d1*/
  {
    unknown_libname_100_::unknown_libname_102(); /*0x9909c8*/
  }
  else
  {
    *(_DWORD *)((char *)a1 + 0xFFFFFF72) = 8; /*0x9909d3*/
    unknown_libname_100_::unknown_libname_107(a1); /*0x9909dd*/
  }
}
