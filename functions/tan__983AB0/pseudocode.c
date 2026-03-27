double __cdecl tan(double a1)
{
  double result; // st7

  if ( !dword_BAABDC )
    return start_10_::__tan_default(a1);
  result = tan_::jnedef();
  _mm_getcsr();
  return result;
}
