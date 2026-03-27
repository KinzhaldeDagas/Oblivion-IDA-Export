double __cdecl exp(double a1)
{
  double result; // st7

  if ( !dword_BAABDC )
    return _CIexp_::__exp_default(a1);
  result = exp_::jnedef_6();
  _mm_getcsr();
  return result;
}
