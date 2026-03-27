double __cdecl start_15_::RETURN_ONE_0(double a1)
{
  double result; // st7

  if ( (HIDWORD(a1) & 0x7FFFFFFFu) < 0x40900000 )
    return a1 + 1.0;
  start_15_::SPECIAL_CASES(HIDWORD(a1) & 0x7FFFFFFF, a1);
  return result;
}
