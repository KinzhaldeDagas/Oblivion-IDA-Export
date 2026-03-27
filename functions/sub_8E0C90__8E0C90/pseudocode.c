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

  for ( i = 0; i < a3; ++i )
    *(_DWORD *)(a6 + 4 * i) = *(_DWORD *)(*this + 4 * i);
  v9 = (_WORD *)(a6 + 4);
  v10 = (_WORD *)(*this + 4 * a3);
  v22 = a6 + 4 * a3 - 4;
  result = (char *)(*this + 4);
  v12 = *this + 4 * (a4 + a3);
  for ( j = v12; *v9 < *v10; result += 4 )
    v9 += 2;
  v13 = a2;
  if ( (unsigned int)v9 < v22 )
  {
    if ( (unsigned int)v10 >= v12 )
      goto LABEL_12;
    do
    {
      while ( *v9 >= *v10 )
      {
        *(_DWORD *)result = *(_DWORD *)v10;
        v13 = a2;
        *(_WORD *)(*(_DWORD *)(4 * ((*result & 1) + 2 * a5) + 0xB2FC84) + 0x10 * *((unsigned __int16 *)result + 1) + a2) = (int)&result[-*this] >> 2;
        v10 += 2;
        result += 4;
        if ( (unsigned int)v10 >= j )
          goto LABEL_12;
      }
      *(_DWORD *)result = *(_DWORD *)v9;
      v14 = (int)&result[-*this] >> 2;
      v9 += 2;
      v15 = *(_DWORD *)(4 * ((*result & 1) + 2 * a5) + 0xB2FC84) + 0x10 * *((unsigned __int16 *)result + 1);
      result += 4;
      v16 = v15;
      v13 = a2;
      *(_WORD *)(v16 + a2) = v14;
    }
    while ( (unsigned int)v9 < v22 );
    v12 = j;
  }
  if ( (unsigned int)v10 < v12 )
  {
    do
    {
      *(_DWORD *)result = *(_DWORD *)v10;
      v17 = (int)&result[-*this] >> 2;
      v10 += 2;
      v18 = *(_DWORD *)(4 * (2 * a5 + (*result & 1)) + 0xB2FC84) + 0x10 * *((unsigned __int16 *)result + 1);
      result += 4;
      v19 = v18;
      v13 = a2;
      *(_WORD *)(v19 + a2) = v17;
    }
    while ( (unsigned int)v10 < j );
  }
LABEL_12:
  while ( (unsigned int)v9 <= v22 )
  {
    *(_DWORD *)result = *(_DWORD *)v9;
    v20 = *result;
    v21 = (int)&result[-*this] >> 2;
    v9 += 2;
    result += 4;
    *(_WORD *)(*(_DWORD *)(4 * (2 * a5 + (v20 & 1)) + 0xB2FC84) + 0x10 * *((unsigned __int16 *)result + 0xFFFFFFFF) + v13) = v21;
  }
  return result;
}
