unsigned int *__cdecl __mtold12(char *a1, int a2, unsigned int *a3)
{
  unsigned int *result; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  unsigned int v6; // edx
  unsigned int v7; // edi
  int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int v11; // esi
  unsigned int v12; // ecx
  unsigned int v13; // edi
  int v14; // ebx
  unsigned int v15; // edx
  unsigned int v16; // esi
  int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // esi
  unsigned int v20; // edi
  int v21; // ecx
  __int16 v22; // [esp+Ch] [ebp-18h]
  int v23; // [esp+10h] [ebp-14h]
  int v24; // [esp+10h] [ebp-14h]
  unsigned int v25; // [esp+18h] [ebp-Ch]
  unsigned int v26; // [esp+1Ch] [ebp-8h]

  result = a3;
  v22 = 0x404E;
  *a3 = 0;
  a3[1] = 0;
  for ( a3[2] = 0; a2; ++a1 )
  {
    v25 = a3[1];
    v26 = a3[2];
    v23 = 0;
    v4 = __SPAIR64__(*(_QWORD *)(a3 + 1) >> 0x1F, *(__int64 *)a3 >> 0x1F) >> 0x1F;
    v5 = *a3;
    v6 = (2LL * *(_QWORD *)a3) >> 0x1F;
    v7 = 5 * *a3;
    *a3 *= 4;
    a3[1] = v6;
    a3[2] = v4;
    if ( 5 * v5 < 4 * v5 || v7 < v5 )
      v23 = 1;
    v8 = 0;
    *a3 = v7;
    if ( v23 )
    {
      if ( v6 + 1 < v6 || v6 == 0xFFFFFFFF )
        v8 = 1;
      a3[1] = v6 + 1;
      if ( v8 )
        a3[2] = v4 + 1;
    }
    v9 = a3[1];
    v10 = v9 + v25;
    v11 = 0;
    if ( v9 + v25 < v9 || v10 < v25 )
      v11 = 1;
    a3[1] = v10;
    if ( v11 )
      ++a3[2];
    a3[2] += v26;
    v24 = 0;
    v12 = 2 * v7;
    v13 = (v7 >> 0x1F) | (2 * v10);
    v14 = (v10 >> 0x1F) | (2 * a3[2]);
    *a3 = v12;
    a3[1] = v13;
    a3[2] = v14;
    v15 = *a1;
    v16 = v12 + v15;
    if ( v12 + v15 < v12 || v16 < v15 )
      v24 = 1;
    *a3 = v16;
    if ( v24 )
    {
      v17 = 0;
      if ( v13 + 1 < v13 || v13 == 0xFFFFFFFF )
        v17 = 1;
      a3[1] = v13 + 1;
      if ( v17 )
        a3[2] = v14 + 1;
    }
    --a2;
  }
  while ( !a3[2] )
  {
    v18 = a3[1];
    a3[2] = HIWORD(v18);
    v22 -= 0x10;
    *(_QWORD *)a3 = __PAIR64__(v18, *a3) << 0x10;
  }
  if ( (a3[2] & 0x8000) == 0 )
  {
    do
    {
      v19 = *a3;
      v20 = a3[1];
      --v22;
      *a3 *= 2;
      v21 = (v20 >> 0x1F) | (2 * a3[2]);
      a3[1] = (v19 >> 0x1F) | (2 * v20);
      a3[2] = v21;
    }
    while ( (v21 & 0x8000) == 0 );
  }
  *((_WORD *)a3 + 5) = v22;
  return result;
}
