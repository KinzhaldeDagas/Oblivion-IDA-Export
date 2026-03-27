char *__stdcall sub_954DB0(char *a1, char *a2, int a3)
{
  char *result; // eax
  int v4; // esi
  char *v5; // ecx
  int v6; // edx
  char *v7; // esi
  char *v8; // edx
  int *v9; // ebx
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // [esp+8h] [ebp-Ch]
  int v14; // [esp+Ch] [ebp-8h]

  result = a2;
  v4 = *((_DWORD *)a2 + 2) - 8;
  if ( v4 <= 0 )
    v4 = 0;
  v5 = a1;
  v6 = *((_DWORD *)a1 + 9) - v4;
  if ( v6 > *((_DWORD *)a1 + 9) )
    v6 = *((_DWORD *)a1 + 9);
  v13 = v6;
  *(_BYTE *)a3 = 0;
  if ( v6 <= 0 )
  {
    *((_DWORD *)a2 + 9) = *((_DWORD *)a1 + 9);
    *((_DWORD *)a2 + 0xA) = *((_DWORD *)a1 + 0xA);
    *((_DWORD *)a2 + 0xB) = *((_DWORD *)a1 + 0xB);
    *((_DWORD *)a2 + 0xC) = *((_DWORD *)a1 + 0xC);
  }
  else
  {
    if ( v6 >= 4 )
      v13 = 4;
LABEL_8:
    *((_DWORD *)result + 9) = *((_DWORD *)v5 + 9) - v13;
    v14 = 0;
    v7 = result + 0x10;
    v8 = result + 0x28;
    v9 = (int *)(a3 + 8);
    while ( v14 < 3 )
    {
      v10 = *(_DWORD *)&v8[a1 - a2];
      v11 = *((_DWORD *)v5 + 9);
      v12 = (*((_DWORD *)v7 + 0xFFFFFFFF) - v10) >> v11;
      *(_DWORD *)v8 = v10 + (v12 << v11);
      *v9 = v12;
      result = a2;
      if ( (*(_DWORD *)v7 - *(_DWORD *)v8) >> *((_DWORD *)a2 + 9) >= 0xFF )
      {
        --v13;
        v5 = a1;
        goto LABEL_8;
      }
      v5 = a1;
      ++v9;
      v8 += 4;
      ++v14;
      v7 += 8;
    }
    *(_DWORD *)(a3 + 4) = v13;
    *(_BYTE *)a3 = 1;
    return (char *)a3;
  }
  return result;
}
