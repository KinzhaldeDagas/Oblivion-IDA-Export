void __usercall start_3_::test_base(int ecx0@<ecx>, double st6_0@<st1>, double st7_0@<st0>, int a1, int a2, int a3)
{
  if ( (a3 & 0x7FF00000) == 0x7FF00000 && a2 | a3 & 0xFFFFF ) /*0x985cc2*/
    start_3_::base_is_NAN(a1, a2, a3); /*0x985cc6*/
  else
    start_3_::end_of_tests(ecx0, st6_0, st7_0); /*0x985cc7*/
}
