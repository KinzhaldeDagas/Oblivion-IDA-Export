void __cdecl start_3_::base_is_NAN(int a1, int a2, int a3)
{
  if ( (a3 & 0x80000) != 0 ) /*0x985c85*/
    start_3_::SNaN_detected(); /*0x985c85*/
  else
    start_3_::one_of_args_is_QNaN(); /*0x985c86*/
}
