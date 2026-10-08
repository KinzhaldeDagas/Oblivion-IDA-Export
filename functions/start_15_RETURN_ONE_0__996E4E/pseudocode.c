double __cdecl start_15_::RETURN_ONE_0(double a1)
{
  int v1; // ecx

  if ( (HIDWORD(a1) & 0x7FFFFFFFu) >= 0x40900000 ) /*0x996e5c*/
    return start_15_::SPECIAL_CASES(HIDWORD(a1) & 0x7FFFFFFF, v1, a1); /*0x996e5c*/
  else
    return a1 + 1.0; /*0x996e75*/
}
