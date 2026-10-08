int __cdecl sub_770300(int a1)
{
  _WORD *v2; // edx
  int v3; // ebx
  int v4; // ebp
  int v5; // edi
  unsigned int v6; // eax
  _WORD *v8; // eax
  _WORD *v9; // edi
  int v10; // ecx
  int v11; // ecx
  _WORD *v12; // edi
  int i; // ecx
  bool v14; // cf
  unsigned __int16 v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-8h]
  unsigned __int16 v18; // [esp+1Ch] [ebp-4h]
  unsigned __int16 v19; // [esp+24h] [ebp+4h]

  v2 = *(_WORD **)(a1 + 0x10); /*0x77030a*/
  v3 = *(_DWORD *)(a1 + 0x24); /*0x77030d*/
  v4 = 0; /*0x770310*/
  v16 = 0; /*0x770315*/
  if ( v2 ) /*0x770319*/
  {
    v18 = 2 * (*(_DWORD *)a1 != 6) + 2; /*0x770378*/
    if ( (__int16)(*(_WORD *)(a1 + 4) - 4 - v18) <= 0 ) /*0x77037c*/
      v19 = *(_WORD *)(a1 + 4) - 4; /*0x77038a*/
    else
      v19 = 2 * (*(_DWORD *)a1 != 6) + 2; /*0x770381*/
    v17 = 0; /*0x770392*/
    if ( *(_WORD *)(a1 + 8) ) /*0x77038e*/
    {
      do /*0x77040e*/
      {
        v8 = v2; /*0x7703a7*/
        v9 = (_WORD *)v3; /*0x7703a9*/
        v15 = 0; /*0x7703ab*/
        if ( v19 ) /*0x7703b3*/
        {
          v10 = v19; /*0x7703b5*/
          v15 = v19; /*0x7703bb*/
          do /*0x7703cf*/
          {
            *v9++ = *v8; /*0x7703c3*/
            v8 += 2; /*0x7703c9*/
            --v10; /*0x7703cc*/
          }
          while ( v10 ); /*0x7703cf*/
          v4 = v16; /*0x7703d1*/
        }
        if ( v15 < v18 ) /*0x7703e0*/
        {
          v11 = (unsigned __int16)(v18 - v15) >> 1; /*0x7703e9*/
          memset(v9, 0, 4 * v11); /*0x7703eb*/
          v12 = &v9[2 * v11]; /*0x7703eb*/
          for ( i = ((_BYTE)v18 - (_BYTE)v15) & 1; i; --i ) /*0x7703ed*/
            *v12++ = 0; /*0x7703ef*/
        }
        v4 += *(_DWORD *)(a1 + 0x1C); /*0x7703f6*/
        v2 = (_WORD *)((char *)v2 + *(_DWORD *)(a1 + 0x18)); /*0x7703f9*/
        v3 += *(_DWORD *)(a1 + 0x20); /*0x7703fc*/
        v14 = (unsigned __int16)(v17 + 1) < *(_WORD *)(a1 + 8); /*0x770402*/
        v16 = v4; /*0x770406*/
        ++v17; /*0x77040a*/
      }
      while ( v14 ); /*0x77040e*/
    }
    return v4; /*0x77040e*/
  }
  v5 = 0; /*0x77031b*/
  if ( !*(_WORD *)(a1 + 8) ) /*0x770321*/
    return v4; /*0x770412*/
  v6 = *(_DWORD *)(a1 + 0x1C); /*0x770327*/
  do /*0x77034b*/
  {
    _memset(v3, 0, v6); /*0x770334*/
    v6 = *(_DWORD *)(a1 + 0x1C); /*0x770339*/
    v3 += *(_DWORD *)(a1 + 0x20); /*0x77033c*/
    ++v5; /*0x77033f*/
    v4 += v6; /*0x770345*/
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(a1 + 8) ); /*0x77034b*/
  return v4; /*0x77034d*/
}
