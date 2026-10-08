void start_3_::SNaN_detected()
{
  __asm { faddp   st(1), st } /*0x985c77*/
  start_3_::_ErrorHandling(); /*0x985c7e*/
}
