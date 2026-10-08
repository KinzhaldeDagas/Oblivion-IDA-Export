double __usercall start_13_::CALL_LIBM_ERROR_1@<st0>(int a1@<edx>, double a2@<xmm0>, double a3)
{
  double v4; // [esp+10h] [ebp-Ch] BYREF

  v4 = a2; /*0x995bf1*/
  __libm_error_support(&a3, &a3, &v4, a1); /*0x995c0e*/
  return start_13_::RETURN_0(v4); /*0x995c19*/
}
