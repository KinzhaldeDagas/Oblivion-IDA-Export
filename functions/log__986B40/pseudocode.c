double __cdecl log(double a1)
{
  void *v1; // ecx
  int v2; // eax
  bool v3; // zf
  double result; // st7
  char v5; // [esp+0h] [ebp-8h]

  if ( !dword_BAABDC ) /*0x986b40*/
    goto _log; /*0x986b40*/
  v2 = _mm_getcsr() & 0x1F80; /*0x986b59*/
  v3 = v2 == 0x1F80; /*0x986b5e*/
  if ( v2 == 0x1F80 ) /*0x986b63*/
    v3 = (v5 & 0x7F) == 0x7F; /*0x986b70*/
  if ( v3 ) /*0x986b78*/
    log_::__log_pentium4(*(__int64 *)&a1); /*0x986b7a*/
  else
_log:
    _log_default(v1, SLODWORD(a1), SHIDWORD(a1)); /*0x986b47*/
  return result;
}
