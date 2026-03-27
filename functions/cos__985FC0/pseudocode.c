double __cdecl cos(double a1)
{
  void *v1; // ecx
  int v2; // eax
  bool v3; // zf
  double result; // st7
  char v5; // [esp+0h] [ebp-8h]

  if ( dword_BAABDC )
  {
    v2 = _mm_getcsr() & 0x1F80;
    v3 = v2 == 0x1F80;
    if ( v2 == 0x1F80 )
      v3 = (v5 & 0x7F) == 0x7F;
    if ( v3 )
      return cos_::__cos_pentium4(a1);
  }
  start_12_::__cos_default(v1, SLOBYTE(a1));
  return result;
}
