double __cdecl floor(double a1)
{
  double result; // st7
  int v2; // eax
  char v3; // [esp+0h] [ebp-8h]

  if ( !dword_BAABDC ) /*0x985a00*/
    return _floor_default(a1); /*0x985a07*/
  v2 = _mm_getcsr() & 0x1F80; /*0x985a19*/
  if ( v2 == 0x1F80 ) /*0x985a23*/
    floor_::jnedef_1((v3 & 0x7F) == 0x7F, *(__int64 *)&a1); /*0x985a31*/
  else
    floor_::jnedef_1(v2 == 0x1F80, *(__int64 *)&a1); /*0x985a23*/
  return result;
}
