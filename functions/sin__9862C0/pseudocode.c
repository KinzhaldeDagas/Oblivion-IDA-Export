double __cdecl sin(double a1)
{
  void *v1; // ecx
  int v2; // eax
  double result; // st7
  char v4; // [esp+0h] [ebp-8h]

  if ( dword_BAABDC ) /*0x9862c0*/
  {
    v2 = _mm_getcsr() & 0x1F80; /*0x9862d9*/
    if ( v2 == 0x1F80 ) /*0x9862e3*/
      sin_::jnedef_5((v4 & 0x7F) == 0x7F, *(__int64 *)&a1); /*0x9862f1*/
    else
      sin_::jnedef_5(v2 == 0x1F80, *(__int64 *)&a1); /*0x9862e3*/
  }
  else
  {
    start_14_::__sin_default(v1, SLOBYTE(a1)); /*0x9862c7*/
  }
  return result;
}
