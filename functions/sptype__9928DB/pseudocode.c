int __cdecl _sptype(int a1, int a2)
{
  if ( a2 == 0x7FF00000 )
  {
    if ( !a1 )
      return 1;
  }
  else if ( a2 == 0xFFF00000 && !a1 )
  {
    return 2;
  }
  if ( (HIWORD(a2) & 0x7FF8) == 0x7FF8 )
    return 3;
  if ( (HIWORD(a2) & 0x7FF8) == 0x7FF0 && ((a2 & 0x7FFFF) != 0 || a1) )
    return 4;
  return 0;
}
