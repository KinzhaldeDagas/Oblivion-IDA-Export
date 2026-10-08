_BYTE *__cdecl StringIDToTileString(signed int a1)
{
  _DWORD *v1; // eax
  _BYTE *result; // eax
  int *v3; // edx
  _DWORD *v4; // eax
  _DWORD *v5; // ecx

  if ( a1 < 0x2710 ) /*0x58908b*/
  {
    v3 = dword_B3B0B4; /*0x5890c5*/
    while ( 1 ) /*0x5890d0*/
    {
      v4 = (_DWORD *)*v3; /*0x5890d0*/
      if ( *v3 ) /*0x5890d0*/
        break; /*0x5890d0*/
LABEL_11:
      v3 += 4; /*0x5890ed*/
      if ( (int)v3 >= (int)&dword_B3B0B4[0x70] ) /*0x5890f6*/
        return 0; /*0x5890f8*/
    }
    while ( 1 ) /*0x5890d9*/
    {
      v5 = (_DWORD *)v4[2]; /*0x5890d9*/
      v4 = (_DWORD *)*v4; /*0x5890dd*/
      if ( a1 == *v5 ) /*0x5890df*/
      {
        if ( *(_BYTE *)v5[2] ) /*0x5890e4*/
          return (_BYTE *)v5[2]; /*0x5890fd*/
      }
      if ( !v4 ) /*0x5890eb*/
        goto LABEL_11; /*0x5890eb*/
    }
  }
  else
  {
    v1 = *(_DWORD **)(MEMORY[0xB13BC8] + 4 * (a1 % 0x2710)); /*0x5890ae*/
    if ( !v1 ) /*0x5890b3*/
      return 0; /*0x5890b3*/
    if ( a1 != *v1 ) /*0x5890b7*/
      return 0; /*0x5890b7*/
    result = (_BYTE *)v1[2]; /*0x5890b9*/
    if ( !*result ) /*0x5890bc*/
      return 0; /*0x5890c1*/
  }
  return result; /*0x5890c3*/
}
