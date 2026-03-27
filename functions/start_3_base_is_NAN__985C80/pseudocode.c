int __cdecl start_3_::base_is_NAN(int a1, int a2, int a3)
{
  if ( (a3 & 0x80000) != 0 )
    return start_3_::SNaN_detected();
  else
    return start_3_::one_of_args_is_QNaN();
}
