double __cdecl atan(double a1)
{
  void *v1; // ecx
  int v2; // eax
  bool v3; // zf
  double result; // st7
  char v5; // [esp+0h] [ebp-8h]

  if ( !dword_BAABDC ) /*0x987060*/
    goto _atan; /*0x987060*/
  v2 = _mm_getcsr() & 0x1F80; /*0x987079*/
  v3 = v2 == 0x1F80; /*0x98707e*/
  if ( v2 == 0x1F80 ) /*0x987083*/
    v3 = (v5 & 0x7F) == 0x7F; /*0x987090*/
  if ( v3 ) /*0x987098*/
    atan_::__atan_pentium4(*(__int64 *)&a1); /*0x98709a*/
  else
_atan:
    _atan_default(v1, SLOBYTE(a1)); /*0x987067*/
  return result;
}
