double __cdecl pow(double a1, double a2)
{
  int v2; // eax
  bool v3; // zf
  char v5; // [esp+0h] [ebp-8h]

  if ( !dword_BAABDC )
    return _pow_default(a1, a2);
  v2 = _mm_getcsr() & 0x1F80;
  v3 = v2 == 0x1F80;
  if ( v2 == 0x1F80 )
    v3 = (v5 & 0x7F) == 0x7F;
  if ( v3 )
    return _pow_pentium4(a1, a2);
  else
    return _pow_default(a1, a2);
}
