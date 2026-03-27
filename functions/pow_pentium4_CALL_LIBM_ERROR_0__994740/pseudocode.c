double __usercall _pow_pentium4_::CALL_LIBM_ERROR_0@<st0>(
        int a1@<edx>,
        double a2@<xmm0>,
        float a3,
        float a4,
        double a5)
{
  int v6; // [esp+0h] [ebp-1Ch] BYREF
  double v7; // [esp+10h] [ebp-Ch] BYREF

  v7 = a2;
  __libm_error_support((double *)(&v6 + 0xFFFFFFFE + 0xA), &a5, &v7, a1);
  return v7;
}
