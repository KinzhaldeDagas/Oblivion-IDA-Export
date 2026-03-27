int __cdecl sub_6FA080(char *a1, char *Str2, int a3)
{
  char v3; // bl
  char v4; // al
  int v5; // ecx
  unsigned __int8 v6; // al
  char v7; // al
  int result; // eax
  char *v9; // ebp
  unsigned int v10; // edi

  v3 = 0;
  *(_BYTE *)(a3 + 2) = strlen(a1);
  v4 = tolower(*a1);
  v5 = *(unsigned __int8 *)(a3 + 2);
  *(_BYTE *)(a3 + 3) = v4;
  *(_BYTE *)a3 = tolower(a1[v5 - 1]);
  v6 = *(_BYTE *)(a3 + 2);
  if ( v6 <= 2u )
    v7 = 0;
  else
    v7 = tolower(a1[v6 - 2]);
  *(_BYTE *)(a3 + 1) = v7;
  result = *(unsigned __int8 *)(a3 + 2);
  *(_DWORD *)(a3 + 4) = 0;
  if ( (unsigned __int8)result > 3u )
  {
    result = sub_6FA040(a1 + 1, result - 3);
    *(_DWORD *)(a3 + 4) = result;
  }
  if ( Str2 )
  {
    *(_DWORD *)(a3 + 4) += sub_6FA040(Str2, strlen(Str2));
    v9 = byte_B25374;
    v10 = 0;
    while ( 1 )
    {
      result = _strcmp(v9, Str2);
      if ( !result )
        break;
      v10 += 0xA;
      ++v3;
      v9 += 0xA;
      if ( v10 >= 0x32 )
        return result;
    }
    *(_BYTE *)(a3 + 3) += 0x20 * (v3 & 0xFC);
    result = (unsigned __int8)((v3 & 0xFE) << 6);
    *(_BYTE *)a3 += result;
    *(_BYTE *)(a3 + 1) += v3 << 7;
  }
  return result;
}
