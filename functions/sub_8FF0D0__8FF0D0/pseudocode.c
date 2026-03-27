int __cdecl sub_8FF0D0(int a1, int a2, __int16 a3)
{
  int result; // eax
  int v4; // ecx

  result = a2;
  v4 = 0;
  if ( *(_BYTE *)(a2 + 0xE) )
  {
    result = a2 + 0x10;
    while ( *(_WORD *)(result + 2) != a3 )
    {
      ++v4;
      result += 8;
      if ( v4 >= *(unsigned __int8 *)(a2 + 0xE) )
        return result;
    }
    *(_BYTE *)result = 0;
    *(_BYTE *)(result + 1) = 0;
  }
  return result;
}
