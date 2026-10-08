char *__thiscall sub_8E0C90(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int i; // eax
  _WORD *v9; // edx
  _WORD *v10; // esi
  char *result; // eax
  unsigned int v12; // ebx
  int v13; // ebp
  int v14; // ecx
  int v15; // ebp
  int v16; // ebx
  int v17; // ecx
  int v18; // ebp
  int v19; // ebx
  char v20; // bl
  int v21; // ecx
  unsigned int v22; // [esp+18h] [ebp+8h]
  unsigned int j; // [esp+24h] [ebp+14h]

  for ( i = 0; i < a3; ++i ) /*0x8e0ca2*/
    *(_DWORD *)(a6 + 4 * i) = *(_DWORD *)(*this + 4 * i); /*0x8e0ca9*/
  v9 = (_WORD *)(a6 + 4); /*0x8e0cb4*/
  v10 = (_WORD *)(*this + 4 * a3); /*0x8e0cbb*/
  v22 = a6 + 4 * a3 - 4; /*0x8e0cbe*/
  result = (char *)(*this + 4); /*0x8e0cc8*/
  v12 = *this + 4 * (a4 + a3); /*0x8e0ccb*/
  for ( j = v12; *v9 < *v10; result += 4 ) /*0x8e0cd8*/
    v9 += 2; /*0x8e0ce0*/
  v13 = a2; /*0x8e0cef*/
  if ( (unsigned int)v9 < v22 ) /*0x8e0cf3*/
  {
    if ( (unsigned int)v10 >= v12 ) /*0x8e0cf7*/
      goto LABEL_12; /*0x8e0cf7*/
    do /*0x8e0d49*/
    {
      while ( *v9 >= *v10 ) /*0x8e0d08*/
      {
        *(_DWORD *)result = *(_DWORD *)v10; /*0x8e0de4*/
        v13 = a2; /*0x8e0e0b*/
        *(_WORD *)(*(_DWORD *)(4 * ((*result & 1) + 2 * a5) + 0xB2FC84) + 0x10 * *((unsigned __int16 *)result + 1) + a2) = (int)&result[-*this] >> 2; /*0x8e0e0f*/
        v10 += 2; /*0x8e0e13*/
        result += 4; /*0x8e0e16*/
        if ( (unsigned int)v10 >= j ) /*0x8e0e1d*/
          goto LABEL_12; /*0x8e0e1d*/
      }
      *(_DWORD *)result = *(_DWORD *)v9; /*0x8e0d10*/
      v14 = (int)&result[-*this] >> 2; /*0x8e0d1e*/
      v9 += 2; /*0x8e0d21*/
      v15 = *(_DWORD *)(4 * ((*result & 1) + 2 * a5) + 0xB2FC84) + 0x10 * *((unsigned __int16 *)result + 1); /*0x8e0d31*/
      result += 4; /*0x8e0d38*/
      v16 = v15; /*0x8e0d3b*/
      v13 = a2; /*0x8e0d3d*/
      *(_WORD *)(v16 + a2) = v14; /*0x8e0d41*/
    }
    while ( (unsigned int)v9 < v22 ); /*0x8e0d49*/
    v12 = j; /*0x8e0d4b*/
  }
  if ( (unsigned int)v10 < v12 ) /*0x8e0d51*/
  {
    do /*0x8e0d91*/
    {
      *(_DWORD *)result = *(_DWORD *)v10; /*0x8e0d55*/
      v17 = (int)&result[-*this] >> 2; /*0x8e0d67*/
      v10 += 2; /*0x8e0d6a*/
      v18 = *(_DWORD *)(4 * (2 * a5 + (*result & 1)) + 0xB2FC84) + 0x10 * *((unsigned __int16 *)result + 1); /*0x8e0d79*/
      result += 4; /*0x8e0d80*/
      v19 = v18; /*0x8e0d83*/
      v13 = a2; /*0x8e0d85*/
      *(_WORD *)(v19 + a2) = v17; /*0x8e0d89*/
    }
    while ( (unsigned int)v10 < j ); /*0x8e0d91*/
  }
LABEL_12:
  while ( (unsigned int)v9 <= v22 ) /*0x8e0d97*/
  {
    *(_DWORD *)result = *(_DWORD *)v9; /*0x8e0da5*/
    v20 = *result; /*0x8e0dab*/
    v21 = (int)&result[-*this] >> 2; /*0x8e0db5*/
    v9 += 2; /*0x8e0db8*/
    result += 4; /*0x8e0dbb*/
    *(_WORD *)(*(_DWORD *)(4 * (2 * a5 + (v20 & 1)) + 0xB2FC84) + 0x10 * *((unsigned __int16 *)result + 0xFFFFFFFF) + v13) = v21; /*0x8e0dd1*/
  }
  return result; /*0x8e0ddb*/
}
