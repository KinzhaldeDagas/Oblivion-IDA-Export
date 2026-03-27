int __usercall start_2_::CW_is_set_to_default_1@<eax>(
        unsigned int a1@<eax>,
        long double a2@<st0>,
        int a3,
        int a4,
        int a5)
{
  if ( a1 < 0x3FF00000 )
    start_2_::exit_1(atan2(a2, sqrt((a2 + 1.0) * (1.0 - a2))));
  return start_2_::x_huge(a3, a4, a5);
}
