_BYTE *__cdecl sub_71DB00(int a1, _BYTE *a2, int a3, _BYTE *a4, int a5, int a6, _BYTE *a7)
{
  _BYTE *result; // eax
  _BYTE *v8; // ecx
  _BYTE *v9; // ebp
  int v10; // esi
  _BYTE *v11; // eax
  _BYTE *v12; // ecx
  _BYTE *v13; // ebp
  int v14; // esi
  char v15; // dl
  _BYTE *v16; // ecx
  _BYTE *v17; // eax

  result = (_BYTE *)a6; /*0x71db00*/
  if ( *(_DWORD *)(a6 + 4) == 0xFF00 ) /*0x71db0b*/
  {
    result = *(_BYTE **)a6; /*0x71db11*/
    if ( *(_DWORD *)a6 == 0xFF0000 ) /*0x71db1b*/
    {
      result = a2; /*0x71db1d*/
      if ( a2 ) /*0x71db23*/
      {
        v8 = a7; /*0x71db2d*/
        v9 = a2; /*0x71db31*/
        result = a4; /*0x71db33*/
        do /*0x71db65*/
        {
          if ( a1 ) /*0x71db39*/
          {
            v10 = a1; /*0x71db3b*/
            do /*0x71db60*/
            {
              *result = v8[2]; /*0x71db44*/
              v11 = result + 1; /*0x71db4a*/
              *v11++ = v8[1]; /*0x71db4d*/
              *v11 = *v8; /*0x71db55*/
              result = v11 + 1; /*0x71db57*/
              v8 += 4; /*0x71db5a*/
              --v10; /*0x71db5d*/
            }
            while ( v10 ); /*0x71db60*/
          }
          --v9; /*0x71db62*/
        }
        while ( v9 ); /*0x71db65*/
      }
    }
    else if ( result == (_BYTE *)0xFF ) /*0x71db70*/
    {
      result = a2; /*0x71db72*/
      if ( a2 ) /*0x71db78*/
      {
        v12 = a7; /*0x71db7e*/
        v13 = a2; /*0x71db82*/
        result = a4; /*0x71db84*/
        do /*0x71dbbb*/
        {
          if ( a1 ) /*0x71db8a*/
          {
            v14 = a1; /*0x71db8c*/
            do /*0x71dbb6*/
            {
              *result = *v12; /*0x71db93*/
              v15 = v12[1]; /*0x71db95*/
              v16 = v12 + 1; /*0x71db99*/
              v17 = result + 1; /*0x71db9c*/
              *v17++ = v15; /*0x71db9f*/
              *v17 = v16[1]; /*0x71dbab*/
              result = v17 + 1; /*0x71dbad*/
              v12 = v16 + 3; /*0x71dbb0*/
              --v14; /*0x71dbb3*/
            }
            while ( v14 ); /*0x71dbb6*/
          }
          --v13; /*0x71dbb8*/
        }
        while ( v13 ); /*0x71dbbb*/
      }
    }
  }
  return result; /*0x71db6a*/
}
