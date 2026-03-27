int __cdecl sub_76E4B0(int a1)
{
  unsigned __int16 v2; // dx
  char *v3; // ebp
  int v4; // ecx
  char *v5; // ebx
  unsigned __int16 v6; // di
  int v7; // edi
  int v8; // eax
  int v10; // eax
  bool v11; // zf
  int v12; // edx
  size_t v13; // [esp-4h] [ebp-28h]
  int v14; // [esp+10h] [ebp-14h]
  unsigned __int16 v15; // [esp+14h] [ebp-10h]
  int v16; // [esp+18h] [ebp-Ch]
  int v17; // [esp+1Ch] [ebp-8h]
  int v18; // [esp+20h] [ebp-4h]
  __int16 v19; // [esp+28h] [ebp+4h]
  unsigned __int16 v20; // [esp+28h] [ebp+4h]

  v2 = *(_WORD *)(a1 + 4);
  v3 = *(char **)(a1 + 0x10);
  v4 = *(_DWORD *)(a1 + 0xC);
  v5 = *(char **)(a1 + 0x24);
  v6 = *(_WORD *)a1 - v2 + 1;
  v14 = 0;
  v16 = v4;
  v15 = v6;
  if ( !v3 )
  {
    v7 = 0;
    if ( *(_WORD *)(a1 + 8) )
    {
      v8 = *(_DWORD *)(a1 + 0x1C);
      do
      {
        _memset(v5, 0, v8);
        v8 = *(_DWORD *)(a1 + 0x1C);
        v5 += *(_DWORD *)(a1 + 0x20);
        v14 += v8;
        ++v7;
      }
      while ( (unsigned __int16)v7 < *(_WORD *)(a1 + 8) );
      return v14;
    }
    return v14;
  }
  if ( !v4 )
  {
    v11 = *(_WORD *)(a1 + 8) == 0;
    v20 = 0;
    if ( !v11 )
    {
      do
      {
        LODWORD(v13) = *(_DWORD *)(a1 + 0x14);
        memcpy(v5, v3, v13);
        if ( v6 )
        {
          memset(&v5[*(_DWORD *)(a1 + 0x14)], 0, 4 * v6);
          v6 = v15;
        }
        v14 += *(_DWORD *)(a1 + 0x1C);
        v3 += *(_DWORD *)(a1 + 0x18);
        v5 += *(_DWORD *)(a1 + 0x20);
        ++v20;
      }
      while ( v20 < *(_WORD *)(a1 + 8) );
    }
    return v14;
  }
  v10 = 0;
  v11 = *(_WORD *)(a1 + 8) == 0;
  v19 = 0;
  if ( v11 )
    return v14;
  v17 = v2;
  while ( 1 )
  {
    LODWORD(v13) = *(_DWORD *)(a1 + 0x14);
    v18 = v10 + 1;
    memcpy(v5, &v3[4 * v17 * *(unsigned __int16 *)(v4 + 2 * (unsigned __int16)v10)], v13);
    v5 += 4 * *(_DWORD *)(a1 + 0x18);
    if ( v6 )
    {
      v12 = v6;
      memset(v5, 0, 4 * v6);
      v6 = v15;
      v5 += 4 * v12;
    }
    v14 += *(_DWORD *)(a1 + 0x1C);
    if ( (unsigned __int16)++v19 >= *(_WORD *)(a1 + 8) )
      break;
    v4 = v16;
    v10 = v18;
  }
  return v14;
}
