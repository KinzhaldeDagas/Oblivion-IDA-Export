void start_3_::one_of_args_is_QNaN()
{
  __asm { faddp   st(1), st } /*0x985c87*/
  start_3_::_ErrorHandling(); /*0x985c8e*/
}
