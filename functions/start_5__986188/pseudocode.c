int __usercall start_5@<eax>(
        char a1@<zf>,
        __int16 a2@<dx>,
        unsigned int a3@<eax>,
        long double a4@<st0>,
        int a5,
        int a6,
        int a7)
{
  if ( a1 ) /*0x98618d*/
    return start_5_::inf_or_nan_3(a3, a5, a6); /*0x98618d*/
  if ( a2 != 0x27F ) /*0x986195*/
    unknown_libname_158(); /*0x986197*/
  return start_5_::CW_is_set_to_default_4(a3, a4, a5, a6, a7);
}
