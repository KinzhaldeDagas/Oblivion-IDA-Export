int __cdecl sub_76E610(int a1)
{
  _DWORD *v2; // ebx
  int v3; // eax
  _DWORD *v4; // esi
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // bp
  int v7; // ebx
  unsigned int v8; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // ebp
  int v13; // eax
  int v14; // edx
  int v15; // edx
  int v16; // edx
  _DWORD *v17; // [esp-8h] [ebp-24h]
  int v18; // [esp+10h] [ebp-Ch]
  int v19; // [esp+14h] [ebp-8h]
  unsigned int v20; // [esp+14h] [ebp-8h]
  int v21; // [esp+18h] [ebp-4h]
  int v22; // [esp+20h] [ebp+4h]
  int v23; // [esp+20h] [ebp+4h]

  v2 = *(_DWORD **)(a1 + 0x10); /*0x76e61b*/
  v3 = *(_DWORD *)(a1 + 0xC); /*0x76e61e*/
  v4 = *(_DWORD **)(a1 + 0x24); /*0x76e621*/
  v5 = *(_WORD *)(a1 + 4); /*0x76e624*/
  v6 = 0; /*0x76e628*/
  v18 = 0; /*0x76e62c*/
  v22 = v3; /*0x76e630*/
  if ( !v2 ) /*0x76e634*/
  {
    v7 = 0; /*0x76e636*/
    if ( *(_WORD *)(a1 + 8) ) /*0x76e638*/
    {
      v8 = *(_DWORD *)(a1 + 0x1C); /*0x76e642*/
      do /*0x76e662*/
      {
        _memset((int)v4, 0, v8); /*0x76e649*/
        v8 = *(_DWORD *)(a1 + 0x1C); /*0x76e64e*/
        v4 = (_DWORD *)((char *)v4 + *(_DWORD *)(a1 + 0x20)); /*0x76e651*/
        v18 += v8; /*0x76e654*/
        ++v7; /*0x76e658*/
      }
      while ( (unsigned __int16)v7 < *(_WORD *)(a1 + 8) ); /*0x76e662*/
      return v18; /*0x76e66f*/
    }
    return v18; /*0x76e7e7*/
  }
  if ( v3 ) /*0x76e672*/
  {
    if ( !*(_WORD *)(a1 + 8) ) /*0x76e678*/
      return v18; /*0x76e678*/
    v19 = v5; /*0x76e681*/
    while ( 1 ) /*0x76e6a7*/
    {
      v17 = &v2[v19 * *(unsigned __int16 *)(v3 + 2 * v6++)]; /*0x76e6a7*/
      memcpy(v4, v17, *(_DWORD *)(a1 + 0x14)); /*0x76e6ac*/
      v4 = (_DWORD *)((char *)v4 + *(_DWORD *)(a1 + 0x20)); /*0x76e6b4*/
      v18 += *(_DWORD *)(a1 + 0x1C); /*0x76e6b7*/
      if ( v6 >= *(_WORD *)(a1 + 8) ) /*0x76e6c2*/
        break; /*0x76e6c2*/
      v3 = v22; /*0x76e690*/
    }
    return v18; /*0x76e6c4*/
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 0x14); /*0x76e6d3*/
    v11 = *(_DWORD *)(a1 + 0x20); /*0x76e6d9*/
    v12 = *(_DWORD *)(a1 + 0x18); /*0x76e6dc*/
    v23 = *(_DWORD *)(a1 + 0x1C); /*0x76e6df*/
    v13 = *(unsigned __int16 *)(a1 + 8); /*0x76e6e3*/
    v21 = v11; /*0x76e6e7*/
    switch ( v10 ) /*0x76e6eb*/
    {
      case 8: /*0x76e6eb*/
        if ( *(_WORD *)(a1 + 8) ) /*0x76e6e3*/
        {
          v16 = *(unsigned __int16 *)(a1 + 8); /*0x76e7c9*/
          v18 = v23 * v13; /*0x76e7d0*/
          do /*0x76e7e5*/
          {
            *v4 = *v2; /*0x76e7d6*/
            v4[1] = v2[1]; /*0x76e7db*/
            v2 = (_DWORD *)((char *)v2 + v12); /*0x76e7de*/
            v4 = (_DWORD *)((char *)v4 + v11); /*0x76e7e0*/
            --v16; /*0x76e7e2*/
          }
          while ( v16 ); /*0x76e7e5*/
        }
        return v18; /*0x76e7e5*/
      case 0xC: /*0x76e6eb*/
        if ( !*(_WORD *)(a1 + 8) ) /*0x76e78d*/
          return v18; /*0x76e78d*/
        v15 = *(unsigned __int16 *)(a1 + 8); /*0x76e78f*/
        do /*0x76e7b7*/
        {
          *v4 = *v2; /*0x76e7a2*/
          v4[1] = v2[1]; /*0x76e7a7*/
          v4[2] = v2[2]; /*0x76e7ad*/
          v2 = (_DWORD *)((char *)v2 + v12); /*0x76e7b0*/
          v4 = (_DWORD *)((char *)v4 + v11); /*0x76e7b2*/
          --v15; /*0x76e7b4*/
        }
        while ( v15 ); /*0x76e7b7*/
        return v23 * v13; /*0x76e7b9*/
      case 0x10: /*0x76e6eb*/
        if ( !*(_WORD *)(a1 + 8) ) /*0x76e74d*/
          return v18; /*0x76e74d*/
        v14 = *(unsigned __int16 *)(a1 + 8); /*0x76e753*/
        do /*0x76e77d*/
        {
          *v4 = *v2; /*0x76e762*/
          v4[1] = v2[1]; /*0x76e767*/
          v4[2] = v2[2]; /*0x76e76d*/
          v4[3] = v2[3]; /*0x76e773*/
          v2 = (_DWORD *)((char *)v2 + v12); /*0x76e776*/
          v4 = (_DWORD *)((char *)v4 + v11); /*0x76e778*/
          --v14; /*0x76e77a*/
        }
        while ( v14 ); /*0x76e77d*/
        return v23 * v13; /*0x76e77f*/
      default:
        v20 = 0; /*0x76e701*/
        if ( !*(_WORD *)(a1 + 8) ) /*0x76e709*/
          return v18; /*0x76e709*/
        do /*0x76e73d*/
        {
          memcpy(v4, v2, *(_DWORD *)(a1 + 0x14)); /*0x76e716*/
          v4 = (_DWORD *)((char *)v4 + v21); /*0x76e727*/
          v18 += v23; /*0x76e72b*/
          v2 = (_DWORD *)((char *)v2 + v12); /*0x76e735*/
          ++v20; /*0x76e739*/
        }
        while ( v20 < *(unsigned __int16 *)(a1 + 8) ); /*0x76e73d*/
        return v18; /*0x76e73f*/
    }
  }
}
