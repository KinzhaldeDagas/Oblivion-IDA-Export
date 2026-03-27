int __usercall start_11_::CALL_LIBM_ERROR@<eax>(int a1@<edx>, __int64 a2@<xmm0>, int a3)
{
  __int64 v4; // [esp+10h] [ebp-Ch] BYREF

  v4 = a2;
  __libm_error_support(&a3, &a3, &v4, a1);
  return start_11_::RETURN();
}
