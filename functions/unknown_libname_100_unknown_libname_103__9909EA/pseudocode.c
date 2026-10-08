void __usercall unknown_libname_100_::unknown_libname_103(_DWORD *a1@<ebp>, char a2@<fpstat>)
{
  __int16 v2; // ax

  v2 = *((_WORD *)a1 + 0xFFFFFE9B) & 0x7FF0; /*0x9909f1*/
  if ( v2 ) /*0x9909f8*/
  {
    if ( v2 == 0x7FF0 ) /*0x9909fe*/
      unknown_libname_100_::unknown_libname_106((int)a1); /*0x9909fe*/
    else
      unknown_libname_100_::unknown_libname_101(a1, a2); /*0x990a00*/
  }
  else
  {
    unknown_libname_100_::unknown_libname_105((int)a1); /*0x9909f8*/
  }
}
