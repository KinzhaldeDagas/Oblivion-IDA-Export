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

  v3 = a1[2]; /*0x93a62d*/
  v13 = 0; /*0x93a633*/
  if ( a1[2] ) /*0x93a62d*/
  {
    v4 = a1 + 8; /*0x93a641*/
    while ( 1 ) /*0x93a648*/
    {
      v5 = *(char *)(a2 + 8); /*0x93a648*/
      if ( v5 == v4[0xFFFFFFFC] ) /*0x93a64e*/
      {
        v6 = *(char *)(a2 + 9); /*0x93a650*/
        if ( v6 == v4[0xFFFFFFFD] ) /*0x93a65a*/
        {
          v15 = v5 + v6; /*0x93a664*/
          v7 = 8 * v3; /*0x93a66b*/
          if ( *(_WORD *)a2 == *(_WORD *)&a1[8 * v3 + 4 + (*v4 >> 3)] /*0x93a6c7*/
            && *(_WORD *)(a2 + 2) == *(_WORD *)&a1[v7 + 4 + (v4[1] >> 3)]
            && (v15 <= 2 || *(_WORD *)(a2 + 4) == *(_WORD *)&a1[v7 + 4 + (v4[2] >> 3)])
            && (v15 <= 3 || *(_WORD *)(a2 + 6) == *(_WORD *)&a1[v7 + 4 + (v4[3] >> 3)]) )
          {
            break; /*0x93a6c7*/
          }
        }
      }
      v4 += 8; /*0x93a6d2*/
      if ( ++v13 >= v3 ) /*0x93a6db*/
        goto LABEL_12; /*0x93a6db*/
    }
    if ( v13 > 0 ) /*0x93a766*/
    {
      v11 = *(_DWORD *)&a1[8 * v13 + 4]; /*0x93a76b*/
      v12 = *(_DWORD *)&a1[8 * v13 + 8]; /*0x93a76f*/
      *(_DWORD *)&a1[8 * v13 + 4] = *((_DWORD *)a1 + 1); /*0x93a773*/
      *(_DWORD *)&a1[8 * v13 + 8] = *((_DWORD *)a1 + 2); /*0x93a77a*/
      *((_DWORD *)a1 + 1) = v11; /*0x93a77e*/
      *((_DWORD *)a1 + 2) = v12; /*0x93a781*/
    }
    return 1; /*0x93a787*/
  }
  else
  {
LABEL_12:
    v8 = *(_BYTE *)(a2 + 8); /*0x93a6e1*/
    if ( v8 == 1 || *(_BYTE *)(a2 + 9) == 1 ) /*0x93a6ed*/
    {
      v14 = 0; /*0x93a6f5*/
      if ( v3 > 0 ) /*0x93a6fd*/
      {
        for ( i = a1 + 4; /*0x93a703*/
              (v8 != 1 || *i != 1 || *(_WORD *)&a1[8 * v3 + 4 + (i[4] >> 3)] != *(_WORD *)a2)
           && (*(_BYTE *)(a2 + 9) != 1
            || i[1] != 1
            || *(_WORD *)&a1[8 * v3 + 4 + (i[*i + 4] >> 3)] != *(_WORD *)(a2 + 2 * v8));
              i += 8 )
        {
          if ( ++v14 >= v3 ) /*0x93a756*/
            return 0; /*0x93a75f*/
        }
        *i = 0; /*0x93a78c*/
        i[1] = 0; /*0x93a78f*/
      }
    }
    return 0; /*0x93a796*/
  }
}
