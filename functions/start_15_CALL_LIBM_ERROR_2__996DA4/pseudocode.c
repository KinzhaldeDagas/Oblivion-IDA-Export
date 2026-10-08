double __usercall start_15_::CALL_LIBM_ERROR_2@<st0>(int a1@<edx>, double a2@<xmm0>, double a3)
{
  double v4; // [esp+10h] [ebp-Ch] BYREF

  v4 = a2; /*0x996da7*/
  __libm_error_support(&a3, &a3, &v4, a1); /*0x996dc4*/
  return start_15_::RETURN_1(v4);
}
