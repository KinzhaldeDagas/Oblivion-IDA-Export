double __cdecl tan(double a1)
{
  void *v1; // ecx
  int v2; // eax
  double result; // st7
  char v4; // [esp+0h] [ebp-8h]

  if ( dword_BAABDC ) /*0x983ab0*/
  {
    v2 = _mm_getcsr() & 0x1F80; /*0x983ac9*/
    if ( v2 == 0x1F80 ) /*0x983ad3*/
      tan_::jnedef((v4 & 0x7F) == 0x7F, *(__int64 *)&a1); /*0x983ae1*/
    else
      tan_::jnedef(v2 == 0x1F80, *(__int64 *)&a1); /*0x983ad3*/
  }
  else
  {
    start_10_::__tan_default(v1, SLOBYTE(a1)); /*0x983ab7*/
  }
  return result;
}
