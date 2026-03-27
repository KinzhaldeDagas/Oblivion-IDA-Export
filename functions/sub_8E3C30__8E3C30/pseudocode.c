_WORD *__cdecl sub_8E3C30(
        int a1,
        int a2,
        int a3,
        __int16 a4,
        unsigned int a5,
        unsigned int a6,
        const void **a7,
        const void **a8)
{
  int v9; // ebx
  _WORD *v10; // edi
  unsigned int i; // ecx
  int v12; // eax
  __int16 v13; // dx
  int v14; // ecx
  int v15; // edx
  int v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // edx
  int v19; // edi
  int v20; // eax
  int v21; // ecx
  int v22; // edi
  unsigned int v23; // ecx
  __int16 v24; // bx
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  _WORD *v28; // edx
  unsigned int v29; // ecx
  _WORD *result; // eax
  __int16 v31; // bx
  int v32; // edi
  int v33; // eax
  int v34; // ecx
  __int16 j; // [esp+1Ch] [ebp+Ch]

  v9 = *(unsigned __int16 *)(a3 + 8);
  v10 = (_WORD *)(*(_DWORD *)(a1 + 0x4C) + 4 * v9);
  for ( i = (unsigned __int16)v10[0xFFFFFFFE]; a5 < i; LOWORD(v9) = v9 - 1 )
  {
    v12 = a2 + 0x10 * (unsigned __int16)v10[0xFFFFFFFF];
    v13 = v10[0xFFFFFFFF];
    *v10 = i;
    v10[1] = v13;
    if ( (i & 1) != 0 )
    {
      v14 = *(_DWORD *)(v12 + 4) - *(_DWORD *)a3;
      v15 = *(_DWORD *)(a3 + 4) - *(_DWORD *)v12;
      *(_WORD *)(v12 + 0xA) = v9;
      if ( ((v15 | v14) & 0x80008000) == 0 )
        sub_8E1280(*(_DWORD *)(a1 + 0x78), a3, a4, v12, a7);
    }
    else
    {
      *(_WORD *)(v12 + 8) = v9;
    }
    v10 += 0xFFFFFFFE;
    v10[1] = a4;
    i = (unsigned __int16)v10[0xFFFFFFFE];
  }
  *(_WORD *)(a3 + 8) = v9;
  *v10 = a5;
  v16 = *(_DWORD *)(a1 + 0x4C) + 4 * *(unsigned __int16 *)(a3 + 0xA);
  v17 = *(unsigned __int16 *)(v16 + 4);
  v18 = a6;
  v19 = v16 + 4;
  for ( j = 0; v18 > v17; v19 += 4 )
  {
    ++j;
    v20 = a2 + 0x10 * *(unsigned __int16 *)(v19 + 2);
    *(_DWORD *)(v19 - 4) = *(_DWORD *)v19;
    *(_WORD *)(v19 + 2) = a4;
    if ( (v17 & 1) != 0 )
    {
      --*(_WORD *)(v20 + 0xA);
    }
    else
    {
      v21 = (*(_DWORD *)(a3 + 4) - *(_DWORD *)v20) | (*(_DWORD *)(v20 + 4) - *(_DWORD *)a3);
      --*(_WORD *)(v20 + 8);
      if ( (v21 & 0x80008000) == 0 )
      {
        sub_8E1280(*(_DWORD *)(a1 + 0x78), a3, a4, v20, a7);
        v18 = a6;
      }
    }
    v17 = *(unsigned __int16 *)(v19 + 4);
  }
  *(_WORD *)(a3 + 0xA) += j;
  v22 = *(_DWORD *)(a1 + 0x4C) + 4 * *(unsigned __int16 *)(a3 + 0xA);
  v23 = *(unsigned __int16 *)(v22 - 4);
  v24 = 0;
  if ( v18 < v23 )
  {
    do
    {
      v25 = *(unsigned __int16 *)(v22 - 2);
      v22 -= 4;
      v26 = a2 + 0x10 * v25;
      --v24;
      *(_DWORD *)(v22 + 4) = *(_DWORD *)v22;
      *(_WORD *)(v22 + 2) = a4;
      if ( (v23 & 1) != 0 )
      {
        ++*(_WORD *)(v26 + 0xA);
      }
      else
      {
        v27 = (*(_DWORD *)(a3 + 4) - *(_DWORD *)v26) | (*(_DWORD *)(v26 + 4) - *(_DWORD *)a3);
        ++*(_WORD *)(v26 + 8);
        if ( (v27 & 0x80008000) == 0 )
          sub_8E1310(*(_DWORD *)(a1 + 0x78), a3, a4, v26, a8);
      }
      v23 = *(unsigned __int16 *)(v22 - 4);
    }
    while ( a6 < v23 );
    LOWORD(v18) = a6;
  }
  *(_WORD *)(a3 + 0xA) += v24;
  *(_WORD *)v22 = v18;
  v28 = (_WORD *)(*(_DWORD *)(a1 + 0x4C) + 4 * *(unsigned __int16 *)(a3 + 8));
  v29 = (unsigned __int16)v28[2];
  result = v28 + 2;
  v31 = 0;
  if ( a5 <= v29 )
  {
    *(_WORD *)(a3 + 8) = *(_WORD *)(a3 + 8);
    *v28 = a5;
  }
  else
  {
    do
    {
      v32 = (int)result;
      v33 = a2 + 0x10 * (unsigned __int16)result[1];
      ++v31;
      *(_DWORD *)(v32 - 4) = *(_DWORD *)v32;
      *(_WORD *)(v32 + 2) = a4;
      if ( (v29 & 1) != 0 )
      {
        v34 = (*(_DWORD *)(v33 + 4) - *(_DWORD *)a3) | (*(_DWORD *)(a3 + 4) - *(_DWORD *)v33);
        --*(_WORD *)(v33 + 0xA);
        if ( (v34 & 0x80008000) == 0 )
          sub_8E1310(*(_DWORD *)(a1 + 0x78), a3, a4, v33, a8);
      }
      else
      {
        --*(_WORD *)(v33 + 8);
      }
      v29 = *(unsigned __int16 *)(v32 + 4);
      result = (_WORD *)(v32 + 4);
    }
    while ( a5 > v29 );
    *(_WORD *)(a3 + 8) += v31;
    *(_WORD *)v32 = a5;
  }
  return result;
}
