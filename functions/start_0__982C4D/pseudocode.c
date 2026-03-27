int __usercall start_0@<eax>(char a1@<zf>, __int16 a2@<dx>, int a3, int a4)
{
  if ( a1 )
    return start_0_::inf_or_nan(a3, a4);
  if ( a2 != 0x27F )
    unknown_libname_158(a2);
  return start_0_::CW_is_set_to_default();
}
