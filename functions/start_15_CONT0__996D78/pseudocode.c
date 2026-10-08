double __usercall start_15_::CONT0@<st0>(void *this@<ecx>, double a2@<xmm0>, unsigned int a3)
{
  double result; // st7

  if ( (unsigned int)this < 0x80000000 ) /*0x996d7e*/
  {
    start_15_::OVERFLOW(this); /*0x996d7e*/
  }
  else if ( (unsigned int)this < 0xC086232B || (unsigned int)this <= 0xC086232B && a3 < 0xFEFA39EF ) /*0x996d94*/
  {
    return start_15_::RETURN_1(a2); /*0x996d86*/
  }
  else
  {
    start_15_::UNDERFLOW(this); /*0x996d96*/
  }
  return result;
}
