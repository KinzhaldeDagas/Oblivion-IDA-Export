void _CIexp()
{
  int v1; // eax
  bool v2; // zf
  char v3; // [esp+0h] [ebp-8h]

  if ( !dword_BAABDC )
    goto __CIexp;
  v1 = _mm_getcsr() & 0x1F80;
  v2 = v1 == 0x1F80;
  if ( v1 == 0x1F80 )
    v2 = (v3 & 0x7F) == 0x7F;
  if ( v2 )
    _CIexp_pentium4();
  else
__CIexp:
    _CIexp_::__CIexp_default();
}
