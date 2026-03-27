const void *__cdecl sub_8CC3F0(const void **a1)
{
  const void *result; // eax
  int v2; // ebp
  char v3; // al
  int v4; // edx
  _DWORD **v5; // esi
  signed int v6; // edi
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  char v12; // al

  for ( result = a1[0x15]; result; result = a1[0x15] )
  {
    v2 = *((_DWORD *)a1[0x14] + (_DWORD)a1[0x15] - 1);
    a1[0x15] = (char *)a1[0x15] + 0xFFFFFFFF;
    if ( v2 )
    {
      v3 = *(_BYTE *)(v2 + 0x27);
      *(_WORD *)(v2 + 0x22) = 0xFFFF;
      if ( v3 )
      {
        v4 = *(_DWORD *)(v2 + 0x60);
        v5 = (_DWORD **)(v2 + 0x5C);
        v6 = 0xFFFFFFFF;
        v7 = 0;
        if ( v4 > 0 )
        {
          v8 = *v5;
          while ( *v8 )
          {
            ++v7;
            ++v8;
            if ( v7 >= *(_DWORD *)(v2 + 0x60) )
              goto LABEL_10;
          }
          v6 = v7++;
        }
LABEL_10:
        if ( v7 < v4 )
        {
          do
          {
            v9 = (*v5)[v7];
            if ( v9 )
              (*v5)[v6++] = v9;
            ++v7;
          }
          while ( v7 < *(_DWORD *)(v2 + 0x60) );
        }
        if ( v6 != 0xFFFFFFFF )
        {
          v10 = *(_DWORD *)(v2 + 0x64) & 0x3FFFFFFF;
          if ( v10 < v6 )
          {
            v11 = 2 * v10;
            if ( v6 >= v11 )
              v11 = v6;
            sub_8A6E40((const void **)(v2 + 0x5C), v11, 4);
          }
          *(_DWORD *)(v2 + 0x60) = v6;
        }
        *(_BYTE *)(v2 + 0x27) = 0;
      }
      v12 = *(_BYTE *)(v2 + 0x28);
      if ( v12 != (*(_BYTE *)(v2 + 0x29) != 0) )
      {
        if ( v12 )
          sub_8CBA20((int)a1, v2);
        else
          sub_8CBAF0(a1, v2);
      }
    }
  }
  return result;
}
