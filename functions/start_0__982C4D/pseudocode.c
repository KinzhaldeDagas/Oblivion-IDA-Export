int __usercall start_0@<eax>(char a1@<zf>, __int16 a2@<dx>, int a3, int a4)
{
  int v4; // eax

  v4 = a4; /*0x982c52*/
  if ( a1 ) /*0x982c56*/
    return start_0_::inf_or_nan(a4, a3, a4); /*0x982c56*/
  if ( a2 != 0x27F ) /*0x982c5e*/
    unknown_libname_158(); /*0x982c60*/
  return start_0_::CW_is_set_to_default(v4, a3, a4);
}
