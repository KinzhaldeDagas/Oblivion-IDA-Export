double __cdecl ceil(double a1)
{
  double result; // st7

  if ( dword_BAABDC )
  {
    result = ceil_::jnedef_10();
    _mm_getcsr();
  }
  else
  {
    _floor_default_0(a1);
  }
  return result;
}
