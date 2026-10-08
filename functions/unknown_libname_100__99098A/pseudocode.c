void __usercall unknown_libname_100(_DWORD *a1@<ebp>, double a2@<st0>)
{
  char v2; // fps
  char v3; // al

  if ( *(_DWORD *)&byte_BA9DCC[0x10] ) /*0x990991*/
  {
    unknown_libname_100_::unknown_libname_102(); /*0x990991*/
  }
  else
  {
    *((double *)a1 + 0xFFFFFFA6) = a2; /*0x990993*/
    v3 = *((_BYTE *)a1 + 0xFFFFFF70); /*0x990999*/
    if ( v3 ) /*0x9909a1*/
    {
      if ( v3 == (char)0xFF ) /*0x9909a5*/
      {
        unknown_libname_100_::unknown_libname_104((int)a1, v2); /*0x9909a5*/
      }
      else if ( v3 == (char)0xFE ) /*0x9909a9*/
      {
        unknown_libname_100_::unknown_libname_103((int)a1, v2); /*0x9909a9*/
      }
      else
      {
        *(_DWORD *)((char *)a1 + 0xFFFFFF72) = v3; /*0x9909b2*/
        unknown_libname_100_::unknown_libname_107(a1); /*0x9909b8*/
      }
    }
    else
    {
      unknown_libname_100_::unknown_libname_101((int)a1, v2); /*0x9909a1*/
    }
  }
}
