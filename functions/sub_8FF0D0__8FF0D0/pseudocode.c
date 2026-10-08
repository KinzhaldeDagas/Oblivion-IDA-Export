int __cdecl sub_8FF0D0(int a1, int a2, __int16 a3)
{
  int result; // eax
  int v4; // ecx

  result = a2; /*0x8ff0d0*/
  v4 = 0; /*0x8ff0d8*/
  if ( *(_BYTE *)(a2 + 0xE) ) /*0x8ff0d4*/
  {
    result = a2 + 0x10; /*0x8ff0e4*/
    while ( *(_WORD *)(result + 2) != a3 ) /*0x8ff0eb*/
    {
      ++v4; /*0x8ff0ed*/
      result += 8; /*0x8ff0ee*/
      if ( v4 >= *(unsigned __int8 *)(a2 + 0xE) ) /*0x8ff0f3*/
        return result; /*0x8ff0f3*/
    }
    *(_BYTE *)result = 0; /*0x8ff0f7*/
    *(_BYTE *)(result + 1) = 0; /*0x8ff0fa*/
  }
  return result; /*0x8ff0f6*/
}
