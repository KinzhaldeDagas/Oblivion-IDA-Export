int __cdecl sub_770420(int a1)
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

  v2 = *(_WORD **)(a1 + 0x10); /*0x77042a*/
  v3 = *(_DWORD *)(a1 + 0x24); /*0x77042d*/
  v4 = 0; /*0x770430*/
  v16 = 0; /*0x770435*/
  if ( v2 ) /*0x770439*/
  {
    v18 = 2 * (*(_DWORD *)a1 != 6) + 2; /*0x770498*/
    if ( (__int16)(*(_WORD *)(a1 + 4) - 8 - v18) <= 0 ) /*0x77049c*/
      v19 = *(_WORD *)(a1 + 4) - 8; /*0x7704aa*/
    else
      v19 = 2 * (*(_DWORD *)a1 != 6) + 2; /*0x7704a1*/
    v17 = 0; /*0x7704b2*/
    if ( *(_WORD *)(a1 + 8) ) /*0x7704ae*/
    {
      do /*0x77052e*/
      {
        v8 = v2; /*0x7704c7*/
        v9 = (_WORD *)v3; /*0x7704c9*/
        v15 = 0; /*0x7704cb*/
        if ( v19 ) /*0x7704d3*/
        {
          v10 = v19; /*0x7704d5*/
          v15 = v19; /*0x7704db*/
          do /*0x7704ef*/
          {
            *v9++ = *v8; /*0x7704e3*/
            v8 += 2; /*0x7704e9*/
            --v10; /*0x7704ec*/
          }
          while ( v10 ); /*0x7704ef*/
          v4 = v16; /*0x7704f1*/
        }
        if ( v15 < v18 ) /*0x770500*/
        {
          v11 = (unsigned __int16)(v18 - v15) >> 1; /*0x770509*/
          memset(v9, 0, 4 * v11); /*0x77050b*/
          v12 = &v9[2 * v11]; /*0x77050b*/
          for ( i = ((_BYTE)v18 - (_BYTE)v15) & 1; i; --i ) /*0x77050d*/
            *v12++ = 0; /*0x77050f*/
        }
        v4 += *(_DWORD *)(a1 + 0x1C); /*0x770516*/
        v2 = (_WORD *)((char *)v2 + *(_DWORD *)(a1 + 0x18)); /*0x770519*/
        v3 += *(_DWORD *)(a1 + 0x20); /*0x77051c*/
        v14 = (unsigned __int16)(v17 + 1) < *(_WORD *)(a1 + 8); /*0x770522*/
        v16 = v4; /*0x770526*/
        ++v17; /*0x77052a*/
      }
      while ( v14 ); /*0x77052e*/
    }
    return v4; /*0x77052e*/
  }
  v5 = 0; /*0x77043b*/
  if ( !*(_WORD *)(a1 + 8) ) /*0x770441*/
    return v4; /*0x770532*/
  v6 = *(_DWORD *)(a1 + 0x1C); /*0x770447*/
  do /*0x77046b*/
  {
    _memset(v3, 0, v6); /*0x770454*/
    v6 = *(_DWORD *)(a1 + 0x1C); /*0x770459*/
    v3 += *(_DWORD *)(a1 + 0x20); /*0x77045c*/
    ++v5; /*0x77045f*/
    v4 += v6; /*0x770465*/
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(a1 + 8) ); /*0x77046b*/
  return v4; /*0x77046d*/
}
