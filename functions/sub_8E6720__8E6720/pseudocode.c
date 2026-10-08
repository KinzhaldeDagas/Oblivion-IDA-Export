char *__thiscall sub_8E6720(const void **this, int a2, _DWORD *a3)
{
  int v5; // edi
  int v6; // eax
  const void *v7; // ecx
  signed int v8; // eax
  int v9; // eax
  char *v10; // edx
  char *v11; // ecx
  int v12; // eax
  char *result; // eax
  int v14; // edx
  char *v15; // ecx
  int v16; // edi
  int v17; // eax
  const void *v18; // [esp+Ch] [ebp-8h]
  char *v19; // [esp+10h] [ebp-4h]
  int v20; // [esp+18h] [ebp+4h]

  v5 = a3[1]; /*0x8e6730*/
  v6 = (int)*(this + 1); /*0x8e6733*/
  v7 = (const void *)(v6 + v5); /*0x8e6736*/
  v20 = v6 - a2; /*0x8e673b*/
  v8 = (unsigned int)*(this + 2) & 0x3FFFFFFF; /*0x8e6742*/
  v18 = v7; /*0x8e6749*/
  if ( v8 < (int)v7 ) /*0x8e674d*/
  {
    v9 = 2 * v8; /*0x8e674f*/
    if ( (int)v7 >= v9 ) /*0x8e6753*/
      v9 = (int)v7; /*0x8e6755*/
    sub_8A6E40(this, v9, 4); /*0x8e675b*/
    v7 = v18; /*0x8e6760*/
  }
  v19 = (char *)*this + 4 * a2; /*0x8e6774*/
  v10 = (char *)*this + 4 * v5 + 4 * a2; /*0x8e677b*/
  if ( v20 - 1 >= 0 ) /*0x8e6783*/
  {
    v11 = &v10[4 * v20 - 4]; /*0x8e6789*/
    v12 = v20; /*0x8e678e*/
    do /*0x8e6799*/
    {
      *(_DWORD *)v11 = *(_DWORD *)&v11[v19 - v10]; /*0x8e6793*/
      v11 += 0xFFFFFFFC; /*0x8e6795*/
      --v12; /*0x8e6798*/
    }
    while ( v12 ); /*0x8e6799*/
    v7 = v18; /*0x8e679b*/
  }
  result = (char *)*this + 4 * a2; /*0x8e67a7*/
  v14 = v5 - 1; /*0x8e67a9*/
  if ( v5 - 1 < 0 ) /*0x8e67af*/
  {
    *(this + 1) = v7; /*0x8e67dc*/
  }
  else
  {
    v15 = &result[4 * v14]; /*0x8e67b3*/
    v16 = *a3 - (_DWORD)result; /*0x8e67b6*/
    v17 = v14 + 1; /*0x8e67b8*/
    do /*0x8e67c9*/
    {
      *(_DWORD *)v15 = *(_DWORD *)&v15[v16]; /*0x8e67c3*/
      v15 += 0xFFFFFFFC; /*0x8e67c5*/
      --v17; /*0x8e67c8*/
    }
    while ( v17 ); /*0x8e67c9*/
    *(this + 1) = v18; /*0x8e67d0*/
    return (char *)v18; /*0x8e67cb*/
  }
  return result; /*0x8e67cf*/
}
