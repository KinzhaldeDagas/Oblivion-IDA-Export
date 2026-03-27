int *__stdcall sub_72E200(unsigned int size, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  unsigned int *v4; // eax
  int v5; // edi
  int *v6; // esi
  unsigned int v7; // eax
  unsigned int v8; // ebp
  int v9; // edi
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int *v14; // esi
  unsigned int v15; // eax
  int v16; // eax
  int v17; // ecx
  int *i; // esi
  int *v20; // [esp+14h] [ebp-20h]
  int v21; // [esp+18h] [ebp-1Ch]
  unsigned int v22; // [esp+1Ch] [ebp-18h]
  float v23; // [esp+24h] [ebp-10h]

  v2 = size;
  v3 = (0xC * (unsigned __int64)size) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * size;
  v4 = (unsigned int *)FormHeapAlloc(__CFADD__(v3, 4) ? 0xFFFFFFFF : v3 + 4);
  v5 = 0;
  if ( v4 )
  {
    v6 = (int *)(v4 + 1);
    *v4 = size;
    ArrayConstructor(v4 + 1, 0xCu, size, (int)unknown_libname_10_0, (void (__thiscall *)(void *))sub_6C4090);
    v20 = v6;
  }
  else
  {
    v20 = 0;
  }
  v7 = *(_DWORD *)(a2 + 0x40);
  v8 = 0;
  v22 = v7;
  if ( v7 )
  {
    v21 = 0;
    do
    {
      v9 = v21 + *(_DWORD *)(a2 + 0x44);
      v10 = 0;
      if ( *(_WORD *)(v9 + 0x48) )
      {
        do
        {
          v11 = *(_DWORD *)(v9 + 0x44);
          v23 = *(float *)(v11 + 8 * v10 + 4);
          v12 = 3 * *(unsigned __int16 *)(v11 + 8 * v10);
          v13 = v20[3 * *(unsigned __int16 *)(v11 + 8 * v10) + 1];
          v14 = &v20[v12];
          if ( v14[2] == v13 )
          {
            if ( v13 )
              v15 = 2 * v13;
            else
              v15 = 1;
            sub_72CC50((unsigned int *)&v20[v12], v15);
          }
          v16 = *v14;
          v17 = v14[2];
          *(_DWORD *)(v16 + 8 * v17) = v8;
          *(float *)(v16 + 8 * v17 + 4) = v23;
          ++v14[2];
          ++v10;
        }
        while ( v10 < *(unsigned __int16 *)(v9 + 0x48) );
        v7 = v22;
      }
      v21 += 0x4C;
      ++v8;
    }
    while ( v8 < v7 );
    v2 = size;
    v5 = 0;
  }
  if ( !v2 )
    return v20;
  for ( i = v20; i[2]; i += 3 )
  {
    sub_72CD30(i);
    if ( ++v5 >= v2 )
      return v20;
  }
  if ( v20 )
  {
    _LN21(v20, 0xCu, v20[0xFFFFFFFF], (void (__thiscall *)(void *))sub_6C4090);
    FormHeapFree((unsigned int)(v20 + 0xFFFFFFFF));
  }
  return 0;
}
