int __cdecl sub_92EB50(int a1)
{
  float *v1; // ecx
  int v2; // esi
  int v3; // eax
  float *v4; // edx
  unsigned int v5; // ebx
  float *v6; // eax
  float *v7; // ecx
  float *v8; // eax
  char *v9; // ecx
  float *v10; // eax
  char *v11; // ecx
  float *v12; // eax
  int v13; // esi
  float *v14; // eax
  int v15; // edx
  int v16; // esi
  int result; // eax
  int v18; // eax

  v1 = *(float **)a1;
  v2 = *(_DWORD *)(a1 + 4) - 1;
  v3 = *(_DWORD *)(a1 + 4);
  v4 = *(float **)a1;
  if ( v3 >= 4 )
  {
    v5 = (unsigned int)v3 >> 2;
    v2 -= 4 * ((unsigned int)v3 >> 2);
    do
    {
      if ( v1[3] == *(float *)&SrcStr )
      {
        v6 = v4;
        v4 += 4;
        *(_OWORD *)v6 = *(_OWORD *)v1;
      }
      v7 = v1 + 4;
      if ( v7[3] == *(float *)&SrcStr )
      {
        v8 = v4;
        v4 += 4;
        *(_OWORD *)v8 = *(_OWORD *)v7;
      }
      v9 = (char *)(v7 + 4);
      if ( *((float *)v9 + 3) == *(float *)&SrcStr )
      {
        v10 = v4;
        v4 += 4;
        *(_OWORD *)v10 = *(_OWORD *)v9;
      }
      v11 = v9 + 0x10;
      if ( *((float *)v11 + 3) == *(float *)&SrcStr )
      {
        v12 = v4;
        v4 += 4;
        *(_OWORD *)v12 = *(_OWORD *)v11;
      }
      v1 = (float *)(v11 + 0x10);
      --v5;
    }
    while ( v5 );
  }
  if ( v2 >= 0 )
  {
    v13 = v2 + 1;
    do
    {
      if ( v1[3] == *(float *)&SrcStr )
      {
        v14 = v4;
        v4 += 4;
        *(_OWORD *)v14 = *(_OWORD *)v1;
      }
      v1 += 4;
      --v13;
    }
    while ( v13 );
  }
  v15 = ((int)v4 - *(_DWORD *)a1) >> 4;
  v16 = v15;
  result = *(_DWORD *)(a1 + 8) & 0x3FFFFFFF;
  if ( result < v15 )
  {
    v18 = 2 * result;
    if ( v15 >= v18 )
      v18 = v15;
    result = sub_8A6E40((const void **)a1, v18, 0x10);
  }
  *(_DWORD *)(a1 + 4) = v16;
  return result;
}
