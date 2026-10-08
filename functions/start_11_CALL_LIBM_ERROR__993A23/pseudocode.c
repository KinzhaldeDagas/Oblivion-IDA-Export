double __usercall start_11_::CALL_LIBM_ERROR@<st0>(int a1@<edx>, double a2@<xmm0>, double a3)
{
  double v4; // [esp+10h] [ebp-Ch] BYREF

  v4 = a2; /*0x993a26*/
  __libm_error_support(&a3, &a3, &v4, a1); /*0x993a43*/
  return start_11_::RETURN(v4); /*0x993a4e*/
}
