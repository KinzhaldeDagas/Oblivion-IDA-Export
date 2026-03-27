int __thiscall sub_91CA70(char *this)
{
  int result; // eax
  int i; // esi

  result = *((_DWORD *)this + 7);
  if ( result )
  {
    for ( i = 0; i < *(_DWORD *)(result + 0x60); ++i )
    {
      sub_91C620(this + 0xFFFFFFF8, *(_DWORD **)(*(_DWORD *)(result + 0x5C) + 4 * i));
      result = *((_DWORD *)this + 7);
    }
  }
  return result;
}
