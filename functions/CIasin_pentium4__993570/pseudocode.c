void __usercall _CIasin_pentium4(double a1@<st0>, __m128d a2@<xmm2>, __m128d a3@<xmm7>)
{
  double v3; // [esp+0h] [ebp-8h] BYREF

  v3 = a1; /*0x993579*/
  start_11(_mm_loadl_epi64((const __m128i *)&v3), a2, a3); /*0x993581*/
}
