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

  result = (_BYTE *)a6;
  if ( *(_DWORD *)(a6 + 4) == 0xFF00 )
  {
    result = *(_BYTE **)a6;
    if ( *(_DWORD *)a6 == 0xFF0000 )
    {
      result = a2;
      if ( a2 )
      {
        v8 = a7;
        v9 = a2;
        result = a4;
        do
        {
          if ( a1 )
          {
            v10 = a1;
            do
            {
              *result = v8[2];
              v11 = result + 1;
              *v11++ = v8[1];
              *v11 = *v8;
              result = v11 + 1;
              v8 += 4;
              --v10;
            }
            while ( v10 );
          }
          --v9;
        }
        while ( v9 );
      }
    }
    else if ( result == (_BYTE *)0xFF )
    {
      result = a2;
      if ( a2 )
      {
        v12 = a7;
        v13 = a2;
        result = a4;
        do
        {
          if ( a1 )
          {
            v14 = a1;
            do
            {
              *result = *v12;
              v15 = v12[1];
              v16 = v12 + 1;
              v17 = result + 1;
              *v17++ = v15;
              *v17 = v16[1];
              result = v17 + 1;
              v12 = v16 + 3;
              --v14;
            }
            while ( v14 );
          }
          --v13;
        }
        while ( v13 );
      }
    }
  }
  return result;
}
