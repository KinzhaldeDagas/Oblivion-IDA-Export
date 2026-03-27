double __usercall start_17_::CALL_LIBM_ERROR_4@<st0>(int a1@<edx>, double a2@<xmm1>, double a3)
{
  double v4; // [esp+10h] [ebp-Ch] BYREF

  v4 = a2;
  __libm_error_support(&a3, &a3, &v4, a1);
  return v4;
}
