void __cdecl sub_71C840(unsigned int a1, int a2, int a3, _BYTE *a4, int a5, _DWORD *a6, int a7)
{
  int v7; // esi
  int v8; // ebx
  unsigned int v9; // ebp
  _BYTE *v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // ecx
  _BYTE *v13; // eax
  unsigned __int8 *v14; // eax
  _BYTE *v15; // ecx
  unsigned int v16; // edi
  _BYTE *v17; // ecx
  _BYTE *v18; // ecx
  unsigned int v19; // edi
  _BYTE *v20; // ecx
  unsigned int v21; // [esp+18h] [ebp+14h]

  v7 = *(_DWORD *)(a5 + 0x14);
  if ( a6[1] == 0xFF00 )
  {
    v8 = a2;
    v9 = a1;
    v10 = (_BYTE *)FormHeapAlloc(a2 * a1);
    v11 = a2 * (a1 >> 1);
    v12 = 0;
    v21 = (unsigned int)v10;
    if ( v11 )
    {
      do
      {
        *v10 = *(_BYTE *)(v12 + a7) >> 4;
        v13 = v10 + 1;
        *v13 = *(_BYTE *)(v12 + a7) & 0xF;
        ++v12;
        v10 = v13 + 1;
      }
      while ( v12 < v11 );
      v9 = a1;
    }
    v14 = (unsigned __int8 *)v21;
    if ( *a6 == 0xFF )
    {
      if ( a2 )
      {
        v15 = a4;
        do
        {
          if ( v9 )
          {
            v16 = v9;
            do
            {
              *v15 = *(_BYTE *)(v7 + 4 * *v14);
              v17 = v15 + 1;
              *v17++ = *(_BYTE *)(v7 + 4 * *v14 + 1);
              *v17 = *(_BYTE *)(v7 + 4 * *v14 + 2);
              v15 = v17 + 1;
              ++v14;
              --v16;
            }
            while ( v16 );
          }
          --v8;
        }
        while ( v8 );
      }
    }
    else if ( *a6 == 0xFF0000 )
    {
      if ( a2 )
      {
        v18 = a4;
        do
        {
          if ( v9 )
          {
            v19 = v9;
            do
            {
              *v18 = *(_BYTE *)(v7 + 4 * *v14 + 2);
              v20 = v18 + 1;
              *v20++ = *(_BYTE *)(v7 + 4 * *v14 + 1);
              *v20 = *(_BYTE *)(v7 + 4 * *v14);
              v18 = v20 + 1;
              ++v14;
              --v19;
            }
            while ( v19 );
          }
          --v8;
        }
        while ( v8 );
      }
    }
    FormHeapFree(v21);
  }
}
