int __thiscall sub_919D40(char *this)
{
  int result; // eax
  int v3; // edi
  int i; // esi

  result = *((_DWORD *)this + 7);
  if ( result )
  {
    v3 = *(_DWORD *)(result + 0x60);
    for ( i = 0; i < v3; ++i )
      result = sub_91C620(this + 0xFFFFFFF8, *(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 7) + 0x5C) + 4 * i));
  }
  return result;
}
