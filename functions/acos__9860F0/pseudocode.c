double __cdecl acos(double a1)
{
  int v1; // eax
  bool v2; // zf
  char v4; // [esp+0h] [ebp-8h]

  if ( !dword_BAABDC )
    return _acos_default(a1);
  v1 = _mm_getcsr() & 0x1F80;
  v2 = v1 == 0x1F80;
  if ( v1 == 0x1F80 )
    v2 = (v4 & 0x7F) == 0x7F;
  if ( v2 )
    return acos_::__acos_pentium4(a1);
  else
    return _acos_default(a1);
}
