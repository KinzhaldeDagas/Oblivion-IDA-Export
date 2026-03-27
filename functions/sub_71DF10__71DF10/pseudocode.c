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

  result = a8;
  if ( a8[1] == 0xFF00 )
  {
    result = a2;
    if ( *a8 == 0xFF0000 )
    {
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
              *result = v9[2];
              v12 = result + 1;
              *v12++ = v9[1];
              *v12++ = *v9;
              *v12 = 0xFF;
              result = v12 + 1;
              v9 += 3;
              --v11;
            }
            while ( v11 );
          }
          --v10;
        }
        while ( v10 );
      }
    }
    else if ( a2 )
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
            *result = *v13;
            v16 = v13[1];
            v17 = v13 + 1;
            v18 = result + 1;
            *v18++ = v16;
            *v18++ = v17[1];
            *v18 = 0xFF;
            v13 = v17 + 2;
            result = v18 + 1;
            --v15;
          }
          while ( v15 );
        }
        --v14;
      }
      while ( v14 );
    }
  }
  return result;
}
