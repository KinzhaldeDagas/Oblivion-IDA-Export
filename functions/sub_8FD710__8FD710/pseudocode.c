int __cdecl sub_8FD710(int a1, int a2, __int16 a3)
{
  int result; // eax
  _WORD *i; // ecx

  result = 0;
  if ( *(_BYTE *)(a2 + 0x21) )
  {
    for ( i = (_WORD *)(a2 + 2); *i != 0xFFFF; i += 2 )
    {
      if ( ++result >= *(unsigned __int8 *)(a2 + 0x21) )
        return result;
    }
    *(_WORD *)(a2 + 4 * result + 2) = a3;
  }
  return result;
}
