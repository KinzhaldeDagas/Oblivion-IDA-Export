int __fastcall sub_8E1310(int a1, int a2, __int16 a3, int a4, const void **a5)
{
  int v5; // eax
  const void *v7; // eax
  _DWORD *v8; // ecx
  int result; // eax
  unsigned int v10; // eax
  int v11; // edx
  int v12; // eax
  signed int v13; // ecx
  _WORD *v14; // esi
  int v15; // edx

  v5 = *(_DWORD *)(a4 + 0xC); /*0x8e1315*/
  if ( (v5 & 1) != 0 ) /*0x8e131e*/
  {
    v10 = v5 & 0xFFFFFFFE; /*0x8e135b*/
    v11 = *(_DWORD *)(v10 + a1 + 8); /*0x8e135e*/
    v12 = a1 + v10; /*0x8e1362*/
    v13 = 0; /*0x8e1364*/
    if ( v11 <= 0 ) /*0x8e1368*/
    {
LABEL_9:
      v13 = 0xFFFFFFFF; /*0x8e137e*/
    }
    else
    {
      v14 = *(_WORD **)(v12 + 4); /*0x8e136a*/
      while ( *v14 != a3 ) /*0x8e1374*/
      {
        ++v13; /*0x8e1376*/
        ++v14; /*0x8e1377*/
        if ( v13 >= v11 ) /*0x8e137c*/
          goto LABEL_9; /*0x8e137c*/
      }
    }
    v15 = *(_DWORD *)(v12 + 8) - 1; /*0x8e1384*/
    *(_DWORD *)(v12 + 8) = v15; /*0x8e1385*/
    result = *(_DWORD *)(v12 + 4); /*0x8e1388*/
    *(_WORD *)(result + 2 * v13) = *(_WORD *)(result + 2 * v15); /*0x8e1391*/
  }
  else
  {
    if ( a5[1] == (const void *)((unsigned int)a5[2] & 0x3FFFFFFF) ) /*0x8e1331*/
      sub_8A6EE0(a5, 8); /*0x8e1336*/
    v7 = a5[1]; /*0x8e133e*/
    v8 = (char *)*a5 + 8 * (_DWORD)v7; /*0x8e1343*/
    a5[1] = (char *)v7 + 1; /*0x8e1347*/
    *v8 = *(_DWORD *)(a2 + 0xC); /*0x8e134e*/
    result = *(_DWORD *)(a4 + 0xC); /*0x8e1350*/
    v8[1] = result; /*0x8e1354*/
  }
  return result; /*0x8e134d*/
}
