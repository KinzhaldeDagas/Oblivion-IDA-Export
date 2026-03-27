int __cdecl sub_8FF0A0(int a1, int a2, __int16 a3)
{
  int result; // eax
  _WORD *i; // ecx

  result = 0;
  if ( *(_BYTE *)(a2 + 0xE) )
  {
    for ( i = (_WORD *)(a2 + 0x12); *i != 0xFFFF; i += 4 )
    {
      if ( ++result >= *(unsigned __int8 *)(a2 + 0xE) )
        return result;
    }
    *(_WORD *)(a2 + 8 * result + 0x12) = a3;
  }
  return result;
}
