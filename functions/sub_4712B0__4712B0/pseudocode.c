int __thiscall sub_4712B0(_DWORD *this)
{
  int result; // eax
  _DWORD *v2; // ecx

  result = 0;
  v2 = this + 0x2D;
  if ( v2[1] || *v2 )
  {
    for ( ; v2; ++result )
      v2 = (_DWORD *)v2[1];
  }
  return result;
}
