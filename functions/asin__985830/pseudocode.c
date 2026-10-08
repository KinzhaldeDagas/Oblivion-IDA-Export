double __cdecl asin(double a1)
{
  void *v1; // ecx
  int v2; // eax
  bool v3; // zf
  double result; // st7
  char v5; // [esp+0h] [ebp-8h]

  if ( !dword_BAABDC ) /*0x985830*/
    goto _asin; /*0x985830*/
  v2 = _mm_getcsr() & 0x1F80; /*0x985849*/
  v3 = v2 == 0x1F80; /*0x98584e*/
  if ( v2 == 0x1F80 ) /*0x985853*/
    v3 = (v5 & 0x7F) == 0x7F; /*0x985860*/
  if ( v3 ) /*0x985868*/
    asin_::__asin_pentium4(*(__int64 *)&a1); /*0x98586a*/
  else
_asin:
    _asin_default(v1, SLOBYTE(a1)); /*0x985837*/
  return result;
}
