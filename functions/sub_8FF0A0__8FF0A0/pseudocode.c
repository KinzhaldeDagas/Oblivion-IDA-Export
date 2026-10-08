int __cdecl sub_8FF0A0(int a1, int a2, __int16 a3)
{
  int result; // eax
  _WORD *i; // ecx

  result = 0; /*0x8ff0a9*/
  if ( *(_BYTE *)(a2 + 0xE) ) /*0x8ff0a5*/
  {
    for ( i = (_WORD *)(a2 + 0x12); *i != 0xFFFF; i += 4 ) /*0x8ff0af*/
    {
      if ( ++result >= *(unsigned __int8 *)(a2 + 0xE) ) /*0x8ff0bf*/
        return result; /*0x8ff0bf*/
    }
    *(_WORD *)(a2 + 8 * result + 0x12) = a3; /*0x8ff0c8*/
  }
  return result; /*0x8ff0c1*/
}
