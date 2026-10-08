char *__stdcall sub_72E200(int size, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // edi
  char *v6; // esi
  unsigned int v7; // eax
  unsigned int v8; // ebp
  int v9; // edi
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  char *v14; // esi
  unsigned int v15; // eax
  int v16; // eax
  int v17; // ecx
  int *i; // esi
  char *v20; // [esp+14h] [ebp-20h]
  int v21; // [esp+18h] [ebp-1Ch]
  unsigned int v22; // [esp+1Ch] [ebp-18h]
  float v23; // [esp+24h] [ebp-10h]

  v2 = size; /*0x72e227*/
  v3 = (0xC * (unsigned __int64)(unsigned int)size) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * size;
  v4 = FormHeapAlloc(__CFADD__(v3, 4) ? 0xFFFFFFFF : v3 + 4);
  v5 = 0; /*0x72e256*/
  if ( v4 ) /*0x72e25e*/
  {
    v6 = (char *)(v4 + 4); /*0x72e26b*/
    *(_DWORD *)v4 = size; /*0x72e271*/
    ArrayConstructor( /*0x72e273*/
      (char *)(v4 + 4),
      0xCu,
      size,
      (void (__thiscall *)(char *))unknown_libname_10_0,
      (void (__thiscall *)(void *))sub_6C4090);
    v20 = v6; /*0x72e278*/
  }
  else
  {
    v20 = 0; /*0x72e27e*/
  }
  v7 = *(_DWORD *)(a2 + 0x40); /*0x72e286*/
  v8 = 0; /*0x72e289*/
  v22 = v7; /*0x72e295*/
  if ( v7 ) /*0x72e299*/
  {
    v21 = 0; /*0x72e29f*/
    do /*0x72e31d*/
    {
      v9 = v21 + *(_DWORD *)(a2 + 0x44); /*0x72e2aa*/
      v10 = 0; /*0x72e2ae*/
      if ( *(_WORD *)(v9 + 0x48) ) /*0x72e2b0*/
      {
        do /*0x72e30d*/
        {
          v11 = *(_DWORD *)(v9 + 0x44); /*0x72e2b6*/
          v23 = *(float *)(v11 + 8 * v10 + 4); /*0x72e2c4*/
          v12 = 3 * *(unsigned __int16 *)(v11 + 8 * v10); /*0x72e2cb*/
          v13 = *(_DWORD *)&v20[0xC * *(unsigned __int16 *)(v11 + 8 * v10) + 4]; /*0x72e2ce*/
          v14 = &v20[4 * v12]; /*0x72e2d6*/
          if ( *((_DWORD *)v14 + 2) == v13 ) /*0x72e2d9*/
          {
            if ( v13 ) /*0x72e2dd*/
              v15 = 2 * v13; /*0x72e2df*/
            else
              v15 = 1; /*0x72e2e3*/
            sub_72CC50((unsigned int *)&v20[4 * v12], v15); /*0x72e2eb*/
          }
          v16 = *(_DWORD *)v14; /*0x72e2f0*/
          v17 = *((_DWORD *)v14 + 2); /*0x72e2f2*/
          *(_DWORD *)(v16 + 8 * v17) = v8; /*0x72e2f9*/
          *(float *)(v16 + 8 * v17 + 4) = v23; /*0x72e2fc*/
          ++*((_DWORD *)v14 + 2); /*0x72e300*/
          ++v10; /*0x72e308*/
        }
        while ( v10 < *(unsigned __int16 *)(v9 + 0x48) ); /*0x72e30d*/
        v7 = v22; /*0x72e30f*/
      }
      v21 += 0x4C; /*0x72e313*/
      ++v8; /*0x72e318*/
    }
    while ( v8 < v7 ); /*0x72e31d*/
    v2 = size; /*0x72e31f*/
    v5 = 0; /*0x72e323*/
  }
  if ( !v2 ) /*0x72e327*/
    return v20; /*0x72e344*/
  for ( i = (int *)v20; i[2]; i += 3 ) /*0x72e329*/
  {
    sub_72CD30(i); /*0x72e335*/
    if ( ++v5 >= v2 ) /*0x72e342*/
      return v20; /*0x72e342*/
  }
  if ( v20 ) /*0x72e364*/
  {
    _LN21(v20, 0xCu, *((_DWORD *)v20 + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_6C4090); /*0x72e375*/
    FormHeapFree((unsigned int)(v20 + 0xFFFFFFFC)); /*0x72e37b*/
  }
  return 0; /*0x72e348*/
}
