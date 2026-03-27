int __cdecl sub_76E610(int a1)
{
  _DWORD *v2; // ebx
  int v3; // eax
  _DWORD *v4; // esi
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // bp
  int v7; // ebx
  int v8; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // ebp
  int v13; // eax
  int v14; // edx
  int v15; // edx
  int v16; // edx
  _DWORD *v17; // [esp-8h] [ebp-24h]
  size_t v18; // [esp-4h] [ebp-20h]
  int v19; // [esp+10h] [ebp-Ch]
  int v20; // [esp+14h] [ebp-8h]
  unsigned int v21; // [esp+14h] [ebp-8h]
  int v22; // [esp+18h] [ebp-4h]
  int v23; // [esp+20h] [ebp+4h]
  int v24; // [esp+20h] [ebp+4h]

  v2 = *(_DWORD **)(a1 + 0x10);
  v3 = *(_DWORD *)(a1 + 0xC);
  v4 = *(_DWORD **)(a1 + 0x24);
  v5 = *(_WORD *)(a1 + 4);
  v6 = 0;
  v19 = 0;
  v23 = v3;
  if ( !v2 )
  {
    v7 = 0;
    if ( *(_WORD *)(a1 + 8) )
    {
      v8 = *(_DWORD *)(a1 + 0x1C);
      do
      {
        _memset(v4, 0, v8);
        v8 = *(_DWORD *)(a1 + 0x1C);
        v4 = (_DWORD *)((char *)v4 + *(_DWORD *)(a1 + 0x20));
        v19 += v8;
        ++v7;
      }
      while ( (unsigned __int16)v7 < *(_WORD *)(a1 + 8) );
      return v19;
    }
    return v19;
  }
  if ( v3 )
  {
    if ( !*(_WORD *)(a1 + 8) )
      return v19;
    v20 = v5;
    while ( 1 )
    {
      LODWORD(v18) = *(_DWORD *)(a1 + 0x14);
      v17 = &v2[v20 * *(unsigned __int16 *)(v3 + 2 * v6++)];
      memcpy(v4, v17, v18);
      v4 = (_DWORD *)((char *)v4 + *(_DWORD *)(a1 + 0x20));
      v19 += *(_DWORD *)(a1 + 0x1C);
      if ( v6 >= *(_WORD *)(a1 + 8) )
        break;
      v3 = v23;
    }
    return v19;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 0x14);
    v11 = *(_DWORD *)(a1 + 0x20);
    v12 = *(_DWORD *)(a1 + 0x18);
    v24 = *(_DWORD *)(a1 + 0x1C);
    v13 = *(unsigned __int16 *)(a1 + 8);
    v22 = v11;
    switch ( v10 )
    {
      case 8:
        if ( *(_WORD *)(a1 + 8) )
        {
          v16 = *(unsigned __int16 *)(a1 + 8);
          v19 = v24 * v13;
          do
          {
            *v4 = *v2;
            v4[1] = v2[1];
            v2 = (_DWORD *)((char *)v2 + v12);
            v4 = (_DWORD *)((char *)v4 + v11);
            --v16;
          }
          while ( v16 );
        }
        return v19;
      case 0xC:
        if ( !*(_WORD *)(a1 + 8) )
          return v19;
        v15 = *(unsigned __int16 *)(a1 + 8);
        do
        {
          *v4 = *v2;
          v4[1] = v2[1];
          v4[2] = v2[2];
          v2 = (_DWORD *)((char *)v2 + v12);
          v4 = (_DWORD *)((char *)v4 + v11);
          --v15;
        }
        while ( v15 );
        return v24 * v13;
      case 0x10:
        if ( !*(_WORD *)(a1 + 8) )
          return v19;
        v14 = *(unsigned __int16 *)(a1 + 8);
        do
        {
          *v4 = *v2;
          v4[1] = v2[1];
          v4[2] = v2[2];
          v4[3] = v2[3];
          v2 = (_DWORD *)((char *)v2 + v12);
          v4 = (_DWORD *)((char *)v4 + v11);
          --v14;
        }
        while ( v14 );
        return v24 * v13;
      default:
        v21 = 0;
        if ( !*(_WORD *)(a1 + 8) )
          return v19;
        do
        {
          LODWORD(v18) = *(_DWORD *)(a1 + 0x14);
          memcpy(v4, v2, v18);
          v4 = (_DWORD *)((char *)v4 + v22);
          v19 += v24;
          v2 = (_DWORD *)((char *)v2 + v12);
          ++v21;
        }
        while ( v21 < *(unsigned __int16 *)(a1 + 8) );
        return v19;
    }
  }
}
