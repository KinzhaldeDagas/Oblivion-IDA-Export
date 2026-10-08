double __cdecl ceil(double a1)
{
  double result; // st7
  int v2; // eax
  char v3; // [esp+0h] [ebp-8h]

  if ( !dword_BAABDC ) /*0x987c07*/
    return _floor_default_0(a1); /*0x987c07*/
  v2 = _mm_getcsr() & 0x1F80; /*0x987c19*/
  if ( v2 == 0x1F80 ) /*0x987c23*/
    ceil_::jnedef_10((v3 & 0x7F) == 0x7F, *(__int64 *)&a1); /*0x987c31*/
  else
    ceil_::jnedef_10(v2 == 0x1F80, *(__int64 *)&a1); /*0x987c23*/
  return result;
}
