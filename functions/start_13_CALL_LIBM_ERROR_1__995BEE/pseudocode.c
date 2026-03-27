int __usercall start_13_::CALL_LIBM_ERROR_1@<eax>(int a1@<edx>, double a2@<xmm0>, double a3)
{
  double v4; // [esp+10h] [ebp-Ch] BYREF

  v4 = a2;
  __libm_error_support(&a3, &a3, &v4, a1);
  return start_13_::RETURN_0();
}
