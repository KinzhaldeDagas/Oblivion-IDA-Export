int __usercall start_5_::CW_is_set_to_default_4@<eax>(
        unsigned int a1@<eax>,
        long double a2@<st0>,
        int a3,
        int a4,
        int a5)
{
  if ( a1 < 0x3FF00000 )
    start_5_::exit_4(atan2(sqrt((a2 + 1.0) * (1.0 - a2)), a2));
  return start_5_::x_huge_0(a3, a4, a5);
}
