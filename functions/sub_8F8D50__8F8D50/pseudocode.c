int __cdecl sub_8F8D50(int a1, int a2, __int16 a3)
{
  int result; // eax

  result = 0;
  while ( *(_WORD *)(a2 + 2 * result) != 0xFFFF )
  {
    if ( ++result >= 3 )
      return result;
  }
  *(_WORD *)(a2 + 2 * result) = a3;
  return result;
}
