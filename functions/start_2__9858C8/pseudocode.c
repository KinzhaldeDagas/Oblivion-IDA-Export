int __usercall start_2@<eax>(
        char a1@<zf>,
        __int16 a2@<dx>,
        unsigned int a3@<eax>,
        long double a4@<st0>,
        int a5,
        int a6,
        int a7)
{
  if ( a1 ) /*0x9858cd*/
    return start_2_::inf_or_nan_1(a3, a5, a6); /*0x9858cd*/
  if ( a2 != 0x27F ) /*0x9858d5*/
    unknown_libname_158(); /*0x9858d7*/
  return start_2_::CW_is_set_to_default_1(a3, a4, a5, a6, a7);
}
