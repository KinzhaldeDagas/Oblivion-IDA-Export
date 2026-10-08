double __cdecl cos(double a1)
{
  void *v1; // ecx
  int v2; // eax
  bool v3; // zf
  double result; // st7
  char v5; // [esp+0h] [ebp-8h]

  if ( !dword_BAABDC ) /*0x985fc0*/
    goto _cos; /*0x985fc0*/
  v2 = _mm_getcsr() & 0x1F80; /*0x985fd9*/
  v3 = v2 == 0x1F80; /*0x985fde*/
  if ( v2 == 0x1F80 ) /*0x985fe3*/
    v3 = (v5 & 0x7F) == 0x7F; /*0x985ff0*/
  if ( v3 ) /*0x985ff8*/
    cos_::__cos_pentium4(*(__int64 *)&a1); /*0x985ffa*/
  else
_cos:
    start_12_::__cos_default(v1, SLODWORD(a1), SHIDWORD(a1)); /*0x985fc7*/
  return result;
}
