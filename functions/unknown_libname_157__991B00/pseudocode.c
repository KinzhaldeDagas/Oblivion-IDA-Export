long double __usercall unknown_libname_157@<st0>(double a1@<st0>)
{
  _ST6 = a1;
  __asm { frndint }
  return __FSCALE__(__F2XM1__(-(_ST6 - a1)) + 1.0, _ST6);
}
