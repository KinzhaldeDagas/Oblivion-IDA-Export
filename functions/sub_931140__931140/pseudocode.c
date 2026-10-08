int __cdecl sub_931140(int a1, int a2, int a3, const void **a4)
{
  int v5; // esi
  const void *v6; // edi
  signed int v7; // eax
  int v8; // eax
  int result; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // ecx
  __int16 v14; // ax
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // [esp+1Ch] [ebp+Ch]
  int v19; // [esp+20h] [ebp+10h]

  v5 = a1; /*0x93114a*/
  v6 = *(const void **)(a1 + 8); /*0x93114f*/
  v7 = (unsigned int)a4[2] & 0x3FFFFFFF; /*0x931152*/
  if ( v7 < (int)v6 ) /*0x931159*/
  {
    v8 = 2 * v7; /*0x93115b*/
    if ( (int)v6 >= v8 ) /*0x93115f*/
      v8 = *(_DWORD *)(a1 + 8); /*0x931161*/
    sub_8A6E40(a4, v8, 2); /*0x931167*/
  }
  a4[1] = v6; /*0x931173*/
  result = *(_DWORD *)(a1 + 8); /*0x931176*/
  v11 = *(_DWORD *)(a3 + 8); /*0x931179*/
  v12 = 0; /*0x93117c*/
  v18 = v11; /*0x931180*/
  if ( result > 0 ) /*0x931184*/
  {
    do /*0x9311fa*/
    {
      v13 = *(_DWORD *)(v5 + 4) + 8 * v12; /*0x931189*/
      v14 = *(_WORD *)(v13 + 6); /*0x93118c*/
      v19 = v13; /*0x931194*/
      if ( v14 == 1 || v14 == 2 ) /*0x93119e*/
      {
        *((_WORD *)*a4 + v12) = *(_WORD *)(a3 + 8); /*0x9311b2*/
        if ( *(_DWORD *)(a3 + 8) == (*(_DWORD *)(a3 + 0xC) & 0x3FFFFFFF) ) /*0x9311c7*/
        {
          sub_8A6EE0((const void **)(a3 + 4), 8); /*0x9311cc*/
          v13 = v19; /*0x9311d1*/
        }
        v15 = *(_DWORD *)(a3 + 8); /*0x9311da*/
        v16 = *(_DWORD *)(a3 + 4); /*0x9311dd*/
        *(_DWORD *)(v16 + 8 * v15) = *(_DWORD *)v13; /*0x9311df*/
        *(_DWORD *)(v16 + 8 * v15 + 4) = *(_DWORD *)(v19 + 4); /*0x9311e9*/
        ++*(_DWORD *)(a3 + 8); /*0x9311ed*/
        v5 = a1; /*0x9311f0*/
      }
      else
      {
        *((_WORD *)*a4 + v12) = 0xFFFF; /*0x9311a3*/
      }
      result = *(_DWORD *)(v5 + 8); /*0x9311f4*/
      ++v12; /*0x9311f7*/
    }
    while ( v12 < result ); /*0x9311fa*/
    v11 = v18; /*0x9311fc*/
  }
  if ( v11 < *(_DWORD *)(a3 + 8) ) /*0x931203*/
  {
    do /*0x93122f*/
    {
      v17 = *(_DWORD *)(a3 + 4) + 8 * v11; /*0x93120b*/
      *(_WORD *)(v17 + 2) = *((_WORD *)*a4 + *(unsigned __int16 *)(v17 + 2)); /*0x931216*/
      *(_WORD *)(v17 + 4) = *((_WORD *)*a4 + *(unsigned __int16 *)(v17 + 4)); /*0x931225*/
      result = *(_DWORD *)(a3 + 8); /*0x931229*/
      ++v11; /*0x93122c*/
    }
    while ( v11 < result ); /*0x93122f*/
  }
  return result; /*0x931231*/
}
