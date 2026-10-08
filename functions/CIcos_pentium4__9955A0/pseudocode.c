void __usercall _CIcos_pentium4(double a1@<st0>, __m128d a2@<xmm1>)
{
  double v2; // [esp+0h] [ebp-8h] BYREF

  v2 = a1; /*0x9955a9*/
  start_12(_mm_loadl_epi64((const __m128i *)&v2), a2); /*0x9955b1*/
}
