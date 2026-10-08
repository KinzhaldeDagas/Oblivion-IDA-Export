int __cdecl sub_76E430(int a1)
{
  char *v1; // ebx
  int v2; // ebp
  char *v3; // edi
  int v4; // ebx
  unsigned int v5; // eax
  unsigned int v7; // eax
  int v8; // [esp+10h] [ebp-4h]

  v1 = *(char **)(a1 + 0x10); /*0x76e438*/
  v2 = 0; /*0x76e43b*/
  v3 = *(char **)(a1 + 0x24); /*0x76e440*/
  v8 = 0; /*0x76e443*/
  if ( v1 ) /*0x76e447*/
  {
    if ( *(_WORD *)(a1 + 8) ) /*0x76e47c*/
    {
      v7 = *(_DWORD *)(a1 + 0x1C); /*0x76e482*/
      do /*0x76e4a4*/
      {
        memcpy(v3, v1, v7); /*0x76e488*/
        v7 = *(_DWORD *)(a1 + 0x1C); /*0x76e48d*/
        v1 += *(_DWORD *)(a1 + 0x18); /*0x76e490*/
        v3 += *(_DWORD *)(a1 + 0x20); /*0x76e493*/
        v8 += v7; /*0x76e496*/
        ++v2; /*0x76e49a*/
      }
      while ( (unsigned __int16)v2 < *(_WORD *)(a1 + 8) ); /*0x76e4a4*/
    }
    return v8; /*0x76e4a4*/
  }
  v4 = 0; /*0x76e449*/
  if ( !*(_WORD *)(a1 + 8) ) /*0x76e44f*/
    return v8; /*0x76e4a6*/
  v5 = *(_DWORD *)(a1 + 0x1C); /*0x76e451*/
  do /*0x76e470*/
  {
    _memset((int)v3, 0, v5); /*0x76e457*/
    v5 = *(_DWORD *)(a1 + 0x1C); /*0x76e45c*/
    v3 += *(_DWORD *)(a1 + 0x20); /*0x76e45f*/
    v8 += v5; /*0x76e462*/
    ++v4; /*0x76e466*/
  }
  while ( (unsigned __int16)v4 < *(_WORD *)(a1 + 8) ); /*0x76e470*/
  return v8; /*0x76e476*/
}
