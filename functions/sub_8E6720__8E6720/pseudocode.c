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

  v5 = a3[1];
  v6 = (int)*(this + 1);
  v7 = (const void *)(v6 + v5);
  v20 = v6 - a2;
  v8 = (unsigned int)*(this + 2) & 0x3FFFFFFF;
  v18 = v7;
  if ( v8 < (int)v7 )
  {
    v9 = 2 * v8;
    if ( (int)v7 >= v9 )
      v9 = (int)v7;
    sub_8A6E40(this, v9, 4);
    v7 = v18;
  }
  v19 = (char *)*this + 4 * a2;
  v10 = (char *)*this + 4 * v5 + 4 * a2;
  if ( v20 - 1 >= 0 )
  {
    v11 = &v10[4 * v20 - 4];
    v12 = v20;
    do
    {
      *(_DWORD *)v11 = *(_DWORD *)&v11[v19 - v10];
      v11 += 0xFFFFFFFC;
      --v12;
    }
    while ( v12 );
    v7 = v18;
  }
  result = (char *)*this + 4 * a2;
  v14 = v5 - 1;
  if ( v5 - 1 < 0 )
  {
    *(this + 1) = v7;
  }
  else
  {
    v15 = &result[4 * v14];
    v16 = *a3 - (_DWORD)result;
    v17 = v14 + 1;
    do
    {
      *(_DWORD *)v15 = *(_DWORD *)&v15[v16];
      v15 += 0xFFFFFFFC;
      --v17;
    }
    while ( v17 );
    *(this + 1) = v18;
    return (char *)v18;
  }
  return result;
}
