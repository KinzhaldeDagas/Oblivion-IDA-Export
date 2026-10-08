_BYTE *__cdecl sub_71D4A0(int a1, _BYTE *a2, int a3, _BYTE *a4, int a5, int a6, unsigned __int8 *a7)
{
  int v7; // ecx
  _BYTE *result; // eax
  unsigned __int8 *v9; // esi
  _BYTE *v10; // edx
  int v11; // edi
  _BYTE *v12; // eax
  unsigned __int8 *v13; // esi
  _BYTE *v14; // edx
  int v15; // edi
  _BYTE *v16; // eax

  v7 = *(_DWORD *)(a5 + 0x14); /*0x71d4a4*/
  result = (_BYTE *)a6; /*0x71d4a7*/
  if ( *(_DWORD *)(a6 + 4) == 0xFF00 ) /*0x71d4b2*/
  {
    result = *(_BYTE **)a6; /*0x71d4b8*/
    if ( *(_DWORD *)a6 == 0xFF ) /*0x71d4c3*/
    {
      result = a2; /*0x71d4c5*/
      if ( a2 ) /*0x71d4cb*/
      {
        v9 = a7; /*0x71d4d5*/
        v10 = a2; /*0x71d4d9*/
        result = a4; /*0x71d4db*/
        do /*0x71d517*/
        {
          if ( a1 ) /*0x71d4e2*/
          {
            v11 = a1; /*0x71d4e4*/
            do /*0x71d512*/
            {
              *result = *(_BYTE *)(v7 + 4 * *v9); /*0x71d4ed*/
              v12 = result + 1; /*0x71d4f7*/
              *v12++ = *(_BYTE *)(v7 + 4 * *v9 + 1); /*0x71d4fa*/
              *v12 = *(_BYTE *)(v7 + 4 * *v9 + 2); /*0x71d507*/
              result = v12 + 1; /*0x71d509*/
              ++v9; /*0x71d50c*/
              --v11; /*0x71d50f*/
            }
            while ( v11 ); /*0x71d512*/
          }
          --v10; /*0x71d514*/
        }
        while ( v10 ); /*0x71d517*/
      }
    }
    else if ( result == (_BYTE *)0xFF0000 ) /*0x71d523*/
    {
      result = a2; /*0x71d525*/
      if ( a2 ) /*0x71d52b*/
      {
        v13 = a7; /*0x71d531*/
        v14 = a2; /*0x71d535*/
        result = a4; /*0x71d537*/
        do /*0x71d577*/
        {
          if ( a1 ) /*0x71d542*/
          {
            v15 = a1; /*0x71d544*/
            do /*0x71d572*/
            {
              *result = *(_BYTE *)(v7 + 4 * *v13 + 2); /*0x71d54e*/
              v16 = result + 1; /*0x71d558*/
              *v16++ = *(_BYTE *)(v7 + 4 * *v13 + 1); /*0x71d55b*/
              *v16 = *(_BYTE *)(v7 + 4 * *v13); /*0x71d567*/
              result = v16 + 1; /*0x71d569*/
              ++v13; /*0x71d56c*/
              --v15; /*0x71d56f*/
            }
            while ( v15 ); /*0x71d572*/
          }
          --v14; /*0x71d574*/
        }
        while ( v14 ); /*0x71d577*/
      }
    }
  }
  return result; /*0x71d51d*/
}
