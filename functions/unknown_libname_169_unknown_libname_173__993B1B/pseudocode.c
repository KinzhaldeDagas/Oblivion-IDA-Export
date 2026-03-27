int __usercall unknown_libname_169_::unknown_libname_173@<eax>(
        char a1@<cl>,
        long double a2@<st1>,
        long double a3@<st0>)
{
  long double v3; // st7

  v3 = atan2(a3, a2);
  if ( a1 )
    return unknown_libname_169_::unknown_libname_174(3.141592653589793238 - v3);
  else
    return ((int (*)(void))unknown_libname_169_::unknown_libname_174)();
}
