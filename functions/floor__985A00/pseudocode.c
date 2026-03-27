double __cdecl floor(double a1)
{
  double result; // st7

  if ( dword_BAABDC )
  {
    result = floor_::jnedef_1();
    _mm_getcsr();
  }
  else
  {
    _floor_default(a1);
  }
  return result;
}
