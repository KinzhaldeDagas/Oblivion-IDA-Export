char __cdecl sub_93A620(unsigned __int8 *a1, int a2)
{
  int v3; // edi
  unsigned __int8 *v4; // ecx
  int v5; // ebx
  int v6; // esi
  int v7; // esi
  char v8; // cl
  unsigned __int8 *i; // esi
  int v11; // edx
  int v12; // esi
  int v13; // [esp+10h] [ebp-4h]
  int v14; // [esp+10h] [ebp-4h]
  int v15; // [esp+18h] [ebp+4h]

  v3 = a1[2];
  v13 = 0;
  if ( a1[2] )
  {
    v4 = a1 + 8;
    while ( 1 )
    {
      v5 = *(char *)(a2 + 8);
      if ( v5 == v4[0xFFFFFFFC] )
      {
        v6 = *(char *)(a2 + 9);
        if ( v6 == v4[0xFFFFFFFD] )
        {
          v15 = v5 + v6;
          v7 = 8 * v3;
          if ( *(_WORD *)a2 == *(_WORD *)&a1[8 * v3 + 4 + (*v4 >> 3)]
            && *(_WORD *)(a2 + 2) == *(_WORD *)&a1[v7 + 4 + (v4[1] >> 3)]
            && (v15 <= 2 || *(_WORD *)(a2 + 4) == *(_WORD *)&a1[v7 + 4 + (v4[2] >> 3)])
            && (v15 <= 3 || *(_WORD *)(a2 + 6) == *(_WORD *)&a1[v7 + 4 + (v4[3] >> 3)]) )
          {
            break;
          }
        }
      }
      v4 += 8;
      if ( ++v13 >= v3 )
        goto LABEL_12;
    }
    if ( v13 > 0 )
    {
      v11 = *(_DWORD *)&a1[8 * v13 + 4];
      v12 = *(_DWORD *)&a1[8 * v13 + 8];
      *(_DWORD *)&a1[8 * v13 + 4] = *((_DWORD *)a1 + 1);
      *(_DWORD *)&a1[8 * v13 + 8] = *((_DWORD *)a1 + 2);
      *((_DWORD *)a1 + 1) = v11;
      *((_DWORD *)a1 + 2) = v12;
    }
    return 1;
  }
  else
  {
LABEL_12:
    v8 = *(_BYTE *)(a2 + 8);
    if ( v8 == 1 || *(_BYTE *)(a2 + 9) == 1 )
    {
      v14 = 0;
      if ( v3 > 0 )
      {
        for ( i = a1 + 4;
              (v8 != 1 || *i != 1 || *(_WORD *)&a1[8 * v3 + 4 + (i[4] >> 3)] != *(_WORD *)a2)
           && (*(_BYTE *)(a2 + 9) != 1
            || i[1] != 1
            || *(_WORD *)&a1[8 * v3 + 4 + (i[*i + 4] >> 3)] != *(_WORD *)(a2 + 2 * v8));
              i += 8 )
        {
          if ( ++v14 >= v3 )
            return 0;
        }
        *i = 0;
        i[1] = 0;
      }
    }
    return 0;
  }
}
