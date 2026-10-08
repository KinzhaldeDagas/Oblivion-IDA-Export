double __cdecl log10(double a1)
{
  void *v1; // ecx
  int v2; // eax
  double result; // st7
  char v4; // [esp+0h] [ebp-8h]

  if ( dword_BAABDC ) /*0x986c90*/
  {
    v2 = _mm_getcsr() & 0x1F80; /*0x986ca9*/
    if ( v2 == 0x1F80 ) /*0x986cb3*/
      log10_::jnedef_8((v4 & 0x7F) == 0x7F, v1, *(__int64 *)&a1); /*0x986cc1*/
    else
      log10_::jnedef_8(v2 == 0x1F80, v1, *(__int64 *)&a1); /*0x986cb3*/
  }
  else
  {
    _log10_default(v1, SLODWORD(a1), SHIDWORD(a1)); /*0x986c97*/
  }
  return result;
}
