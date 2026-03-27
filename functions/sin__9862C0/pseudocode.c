double __cdecl sin(double a1)
{
  double result; // st7

  if ( !dword_BAABDC )
    return start_14_::__sin_default(a1);
  result = sin_::jnedef_5();
  _mm_getcsr();
  return result;
}
