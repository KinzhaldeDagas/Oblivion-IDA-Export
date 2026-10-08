_BYTE *__cdecl sub_71DF10(int a1, _BYTE *a2, int a3, _BYTE *a4, int a5, int a6, _BYTE *a7, _DWORD *a8)
{
  _BYTE *result; // eax
  _BYTE *v9; // ecx
  _BYTE *v10; // ebp
  int v11; // esi
  _BYTE *v12; // eax
  _BYTE *v13; // ecx
  _BYTE *v14; // ebp
  int v15; // esi
  char v16; // dl
  _BYTE *v17; // ecx
  _BYTE *v18; // eax

  result = a8; /*0x71df10*/
  if ( a8[1] == 0xFF00 ) /*0x71df1b*/
  {
    result = a2; /*0x71df27*/
    if ( *a8 == 0xFF0000 ) /*0x71df2e*/
    {
      if ( a2 ) /*0x71df32*/
      {
        v9 = a7; /*0x71df3c*/
        v10 = a2; /*0x71df40*/
        result = a4; /*0x71df42*/
        do /*0x71df7b*/
        {
          if ( a1 ) /*0x71df48*/
          {
            v11 = a1; /*0x71df4a*/
            do /*0x71df76*/
            {
              *result = v9[2]; /*0x71df54*/
              v12 = result + 1; /*0x71df5a*/
              *v12++ = v9[1]; /*0x71df5d*/
              *v12++ = *v9; /*0x71df65*/
              *v12 = 0xFF; /*0x71df6a*/
              result = v12 + 1; /*0x71df6d*/
              v9 += 3; /*0x71df70*/
              --v11; /*0x71df73*/
            }
            while ( v11 ); /*0x71df76*/
          }
          --v10; /*0x71df78*/
        }
        while ( v10 ); /*0x71df7b*/
      }
    }
    else if ( a2 ) /*0x71df83*/
    {
      v13 = a7; /*0x71df89*/
      v14 = a2; /*0x71df8d*/
      result = a4; /*0x71df8f*/
      do /*0x71dfd1*/
      {
        if ( a1 ) /*0x71df95*/
        {
          v15 = a1; /*0x71df97*/
          do /*0x71dfcc*/
          {
            *result = *v13; /*0x71dfa3*/
            v16 = v13[1]; /*0x71dfa5*/
            v17 = v13 + 1; /*0x71dfa9*/
            v18 = result + 1; /*0x71dfac*/
            *v18++ = v16; /*0x71dfaf*/
            *v18++ = v17[1]; /*0x71dfbb*/
            *v18 = 0xFF; /*0x71dfc0*/
            v13 = v17 + 2; /*0x71dfc3*/
            result = v18 + 1; /*0x71dfc6*/
            --v15; /*0x71dfc9*/
          }
          while ( v15 ); /*0x71dfcc*/
        }
        --v14; /*0x71dfce*/
      }
      while ( v14 ); /*0x71dfd1*/
    }
  }
  return result; /*0x71df80*/
}
