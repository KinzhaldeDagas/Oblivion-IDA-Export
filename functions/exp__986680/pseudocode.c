double __cdecl exp(double a1)
{
  int v1; // eax
  double result; // st7
  char v3; // [esp+0h] [ebp-8h]

  if ( dword_BAABDC ) /*0x986680*/
  {
    v1 = _mm_getcsr() & 0x1F80; /*0x986695*/
    if ( v1 == 0x1F80 ) /*0x98669f*/
      exp_::jnedef_6((v3 & 0x7F) == 0x7F, *(__int64 *)&a1); /*0x9866ad*/
    else
      exp_::jnedef_6(v1 == 0x1F80, *(__int64 *)&a1); /*0x98669f*/
  }
  else
  {
    _CIexp_::__exp_default(SLODWORD(a1), SHIDWORD(a1)); /*0x986687*/
  }
  return result;
}
