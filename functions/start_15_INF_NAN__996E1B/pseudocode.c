double __usercall start_15_::INF_NAN@<st0>(unsigned int a1@<eax>, int a2@<ecx>, int a3, int a4)
{
  double result; // st7

  if ( a1 > 0x7FF00000 || a3 )
  {
    start_15_::NaN_arg(a2, a3);
  }
  else if ( a4 == 0x7FF00000 )
  {
    return INFINITY;
  }
  else
  {
    start_15_::INF_NEG(a2, 0);
  }
  return result;
}
