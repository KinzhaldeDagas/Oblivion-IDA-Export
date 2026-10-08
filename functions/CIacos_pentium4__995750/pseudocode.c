void __usercall _CIacos_pentium4(double a1@<st0>, __m128d a2@<xmm2>, __m128d a3@<xmm7>)
{
  double v3; // [esp+0h] [ebp-8h] BYREF

  v3 = a1; /*0x995759*/
  start_13(_mm_loadl_epi64((const __m128i *)&v3), a2, a3); /*0x995761*/
}
