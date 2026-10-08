// TES4 authoritative: quicksort over 0x30-byte contact entries using float at entry+0x1C as the sort key.
void __cdecl hkpCdPointEntry30_QuickSortByDistance(int entries, int left, int right, int flags)
{
  int v4; // ebx
  int v5; // edi
  int v6; // edx
  int v7; // esi
  float *i; // ecx
  float *j; // ecx
  int v10; // edi
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // eax
  int v14; // ecx
  int v15; // [esp+34h] [ebp-3Ch]
  int v16; // [esp+38h] [ebp-38h]
  int v17; // [esp+3Ch] [ebp-34h]
  __int128 v18; // [esp+50h] [ebp-20h]

  v4 = entries; /*0x8af76a*/
  v5 = left; /*0x8af76f*/
  while ( 1 ) /*0x8af772*/
  {
    v6 = right; /*0x8af772*/
    v7 = v5; /*0x8af785*/
    v18 = *(_OWORD *)(0x30 * ((v5 + right) >> 1) + v4 + 0x10); /*0x8af787*/
    do /*0x8af860*/
    {                                           // TES4 authoritative: 0x30-byte contact entries are sorted by float at entry+0x1C, used as hit distance/fraction ordering.
      for ( i = (float *)(0x30 * v7 + v4 + 0x1C); *i < (double)*((float *)&v18 + 3); i += 0xC ) /*0x8af796*/
        ++v7; /*0x8af7ad*/
      for ( j = (float *)(0x30 * v6 + v4 + 0x1C); *((float *)&v18 + 3) < (double)*j; j += 0xFFFFFFF4 ) /*0x8af7b9*/
        --v6; /*0x8af7cd*/
      if ( v6 < v7 ) /*0x8af7d5*/
        break; /*0x8af7d5*/
      if ( v6 != v7 ) /*0x8af7db*/
      {
        v10 = *(_DWORD *)(0x30 * v6 + v4 + 0x20); /*0x8af7e3*/
        v11 = *(_OWORD *)(0x30 * v6 + v4); /*0x8af7e7*/
        v12 = *(_OWORD *)(0x30 * v6 + v4 + 0x10); /*0x8af7eb*/
        v13 = 0x30 * v6 + v4; /*0x8af7f0*/
        v15 = *(_DWORD *)(v13 + 0x24); /*0x8af7f6*/
        v16 = *(_DWORD *)(v13 + 0x28); /*0x8af7fd*/
        v17 = *(_DWORD *)(v13 + 0x2C); /*0x8af804*/
        v14 = v4 + 0x30 * v7; /*0x8af812*/
        *(_OWORD *)v13 = *(_OWORD *)v14; /*0x8af814*/
        *(_OWORD *)(v13 + 0x10) = *(_OWORD *)(v14 + 0x10); /*0x8af81b*/
        *(_DWORD *)(v13 + 0x20) = *(_DWORD *)(v14 + 0x20); /*0x8af822*/
        *(_DWORD *)(v13 + 0x24) = *(_DWORD *)(v14 + 0x24); /*0x8af828*/
        *(_DWORD *)(v13 + 0x28) = *(_DWORD *)(v14 + 0x28); /*0x8af82e*/
        *(_DWORD *)(v13 + 0x2C) = *(_DWORD *)(v14 + 0x2C); /*0x8af834*/
        v4 = entries; /*0x8af83b*/
        *(_DWORD *)(v14 + 0x24) = v15; /*0x8af83e*/
        *(_DWORD *)(v14 + 0x28) = v16; /*0x8af845*/
        *(_DWORD *)(v14 + 0x20) = v10; /*0x8af84c*/
        v5 = left; /*0x8af84f*/
        *(_OWORD *)v14 = v11; /*0x8af852*/
        *(_OWORD *)(v14 + 0x10) = v12; /*0x8af855*/
        *(_DWORD *)(v14 + 0x2C) = v17; /*0x8af859*/
      }
      --v6; /*0x8af85c*/
      ++v7; /*0x8af85d*/
    }
    while ( v7 <= v6 ); /*0x8af860*/
    if ( v5 < v6 ) /*0x8af868*/
      hkpCdPointEntry30_QuickSortByDistance(v4, v5, v6, flags); /*0x8af871*/
    if ( v7 >= right ) /*0x8af87c*/
      break; /*0x8af87c*/
    v5 = v7; /*0x8af87e*/
    left = v7; /*0x8af880*/
  }
}
