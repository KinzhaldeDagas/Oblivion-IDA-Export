double __cdecl log10(double a1)
{
  double result; // st7

  if ( !dword_BAABDC )
    return _log10_default(a1);
  result = log10_::jnedef_8();
  _mm_getcsr();
  return result;
}
