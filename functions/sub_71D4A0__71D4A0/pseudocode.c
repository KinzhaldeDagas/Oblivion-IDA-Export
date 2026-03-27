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

  v7 = *(_DWORD *)(a5 + 0x14);
  result = (_BYTE *)a6;
  if ( *(_DWORD *)(a6 + 4) == 0xFF00 )
  {
    result = *(_BYTE **)a6;
    if ( *(_DWORD *)a6 == 0xFF )
    {
      result = a2;
      if ( a2 )
      {
        v9 = a7;
        v10 = a2;
        result = a4;
        do
        {
          if ( a1 )
          {
            v11 = a1;
            do
            {
              *result = *(_BYTE *)(v7 + 4 * *v9);
              v12 = result + 1;
              *v12++ = *(_BYTE *)(v7 + 4 * *v9 + 1);
              *v12 = *(_BYTE *)(v7 + 4 * *v9 + 2);
              result = v12 + 1;
              ++v9;
              --v11;
            }
            while ( v11 );
          }
          --v10;
        }
        while ( v10 );
      }
    }
    else if ( result == (_BYTE *)0xFF0000 )
    {
      result = a2;
      if ( a2 )
      {
        v13 = a7;
        v14 = a2;
        result = a4;
        do
        {
          if ( a1 )
          {
            v15 = a1;
            do
            {
              *result = *(_BYTE *)(v7 + 4 * *v13 + 2);
              v16 = result + 1;
              *v16++ = *(_BYTE *)(v7 + 4 * *v13 + 1);
              *v16 = *(_BYTE *)(v7 + 4 * *v13);
              result = v16 + 1;
              ++v13;
              --v15;
            }
            while ( v15 );
          }
          --v14;
        }
        while ( v14 );
      }
    }
  }
  return result;
}
