void __usercall _CItan_pentium4(double a1@<st0>)
{
  double v1; // [esp+0h] [ebp-8h] BYREF

  v1 = a1; /*0x9925a9*/
  start_10(_mm_loadl_epi64((const __m128i *)&v1)); /*0x9925b1*/
}
