void _CIlog10()
{
  int v1; // eax
  bool v2; // zf
  char v3; // [esp+0h] [ebp-8h]

  if ( !dword_BAABDC )
    goto __CIlog10;
  v1 = _mm_getcsr() & 0x1F80;
  v2 = v1 == 0x1F80;
  if ( v1 == 0x1F80 )
    v2 = (v3 & 0x7F) == 0x7F;
  if ( v2 )
    _CIlog10_pentium4();
  else
__CIlog10:
    _CIlog10_::__CIlog10_default();
}
