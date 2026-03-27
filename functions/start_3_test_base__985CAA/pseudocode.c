int __cdecl start_3_::test_base(int a1, int a2, int a3)
{
  if ( (a3 & 0x7FF00000) == 0x7FF00000 && a2 | a3 & 0xFFFFF )
    return start_3_::base_is_NAN(a1, a2, a3);
  else
    return start_3_::end_of_tests();
}
