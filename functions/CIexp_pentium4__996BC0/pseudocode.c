void __usercall _CIexp_pentium4(double a1@<st0>)
{
  double v1; // [esp+0h] [ebp-8h] BYREF

  v1 = a1; /*0x996bc9*/
  start_15((__m128d)_mm_loadl_epi64((const __m128i *)&v1), SLODWORD(a1), HIDWORD(*(unsigned __int64 *)&a1)); /*0x996bd1*/
}
