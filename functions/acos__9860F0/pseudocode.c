double __cdecl acos(double a1)
{
  void *v1; // ecx
  int v2; // eax
  bool v3; // zf
  double result; // st7
  char v5; // [esp+0h] [ebp-8h]

  if ( !dword_BAABDC ) /*0x9860f0*/
    goto _acos; /*0x9860f0*/
  v2 = _mm_getcsr() & 0x1F80; /*0x986109*/
  v3 = v2 == 0x1F80; /*0x98610e*/
  if ( v2 == 0x1F80 ) /*0x986113*/
    v3 = (v5 & 0x7F) == 0x7F; /*0x986120*/
  if ( v3 ) /*0x986128*/
    acos_::__acos_pentium4(*(__int64 *)&a1); /*0x98612a*/
  else
_acos:
    _acos_default(v1, SLOBYTE(a1)); /*0x9860f7*/
  return result;
}
