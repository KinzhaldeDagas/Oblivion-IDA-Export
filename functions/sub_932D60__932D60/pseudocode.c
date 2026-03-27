void __cdecl sub_932D60(int a1, int *a2, int a3, int a4, int *a5)
{
  int v5; // ebp
  int v6; // ebx
  int v7; // esi
  float *v8; // edx
  unsigned int v9; // ecx
  float *v10; // edx
  int v11; // ecx
  int v12; // ebp
  bool v13; // al
  int v14; // edi
  _DWORD *v15; // ebx
  int v16; // ecx
  int v17; // edx
  bool v18; // cc
  int v19; // edi
  _DWORD *v20; // ebx
  int v21; // eax
  int v22; // ecx
  int v23; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  unsigned int *v25; // edx
  int v26; // ecx
  int v27; // esi
  int v28; // edi
  float v29; // [esp+10h] [ebp-844h] BYREF
  int v30; // [esp+14h] [ebp-840h] BYREF
  unsigned int *v31; // [esp+18h] [ebp-83Ch] BYREF
  int v32; // [esp+1Ch] [ebp-838h]
  unsigned int v33; // [esp+20h] [ebp-834h]
  _BYTE v34[12]; // [esp+24h] [ebp-830h] BYREF
  float v35; // [esp+30h] [ebp-824h] BYREF
  int v36; // [esp+34h] [ebp-820h] BYREF
  _DWORD *v37; // [esp+38h] [ebp-81Ch]
  int v38; // [esp+3Ch] [ebp-818h]
  int v39; // [esp+40h] [ebp-814h]
  int v40; // [esp+444h] [ebp-410h] BYREF
  _DWORD *v41; // [esp+448h] [ebp-40Ch] BYREF
  int v42; // [esp+44Ch] [ebp-408h]
  int v43; // [esp+450h] [ebp-404h]

  v5 = 0;
  v6 = a4 + 1;
  v7 = a3;
  v30 = a4 + 1;
  if ( a4 + 1 - a3 >= 4 )
  {
    v8 = (float *)(0x10 * a3 + *a2 + 0x1C);
    v9 = ((unsigned int)(v6 - a3 - 4) >> 2) + 1;
    v7 = a3 + 4 * v9;
    do
    {
      v5 += (v8[8] == *(float *)&SrcStr)
          + (v8[4] == *(float *)&SrcStr)
          + (*v8 == *(float *)&SrcStr)
          + (v8[0xFFFFFFFC] == *(float *)&SrcStr);
      v8 += 0x10;
      --v9;
    }
    while ( v9 );
  }
  if ( v7 < v6 )
  {
    v10 = (float *)(0x10 * v7 + *a2 + 0xC);
    v11 = v6 - v7;
    do
    {
      v5 += *v10 == *(float *)&SrcStr;
      v10 += 4;
      --v11;
    }
    while ( v11 );
  }
  if ( v5 <= 3 )
  {
    v18 = a3 < v30;
    *a5 = *a2;
    v25 = (unsigned int *)v34;
    v26 = 0x80000003;
    v31 = (unsigned int *)v34;
    v32 = 0;
    v33 = 0x80000003;
    v27 = a3;
    if ( v18 )
    {
      v28 = 0x10 * a3;
      do
      {
        if ( *(float *)(v28 + *a2 + 0xC) == *(float *)&SrcStr )
        {
          if ( v32 == (v26 & 0x3FFFFFFF) )
          {
            sub_8A6EE0((const void **)&v31, 4);
            v25 = v31;
          }
          v25[v32] = v27;
          v26 = v33;
          v25 = v31;
          ++v32;
        }
        ++v27;
        v28 += 0x10;
      }
      while ( v27 < v30 );
    }
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        sub_933810(a5, *v25);
      }
      else if ( v5 == 2 )
      {
        sub_933870(a5, *v25, v25[1]);
      }
      else
      {
        sub_933920(a5, *v25, v25[1], v25[2]);
      }
      v26 = v33;
      v25 = v31;
    }
    if ( v26 >= 0 )
      sub_8A75D0(
        *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
        v25,
        4 * v26,
        0x14);
  }
  else
  {
    v12 = (a3 + a4) / 2;
    sub_933D80(&v40);
    v40 = *a2;
    sub_933D80(&v36);
    v36 = *a2;
    LOBYTE(v29) = 1;
    do
    {
      do
      {
        v42 = 0;
        sub_932D60(a1, a2, a3, v12, &v40);
        sub_92DE30(&v40, (float *)a3, v12, a1, &v29);
      }
      while ( LOBYTE(v29) );
      LOBYTE(v29) = 1;
      do
      {
        v38 = 0;
        sub_932D60(a1, a2, v12 + 1, a4, &v36);
        sub_92DE30(&v36, (float *)(v12 + 1), a4, a1, &v29);
      }
      while ( LOBYTE(v29) );
      LOBYTE(v35) = 1;
      sub_92DE30(&v40, (float *)a3, a4, a1, &v35);
      LOBYTE(v30) = 1;
      sub_92DE30(&v36, (float *)a3, a4, a1, (float *)&v30);
      v13 = LOBYTE(v35) || (_BYTE)v30;
      LOBYTE(v29) = v13;
    }
    while ( v13 );
    if ( v42 )
    {
      if ( v38 )
      {
        sub_932250(a1, &v40, &v36, a5);
      }
      else
      {
        v19 = 0;
        if ( v42 > 0 )
        {
          do
          {
            v20 = &v41[2 * v19];
            if ( a5[2] == (a5[3] & 0x3FFFFFFF) )
              sub_8A6EE0((const void **)a5 + 1, 8);
            v21 = a5[2];
            v22 = a5[1];
            *(_DWORD *)(v22 + 8 * v21) = *v20;
            *(_DWORD *)(v22 + 8 * v21 + 4) = v20[1];
            v18 = ++v19 < v42;
            ++a5[2];
          }
          while ( v18 );
        }
      }
    }
    else
    {
      v14 = 0;
      if ( v38 > 0 )
      {
        do
        {
          v15 = &v37[2 * v14];
          if ( a5[2] == (a5[3] & 0x3FFFFFFF) )
            sub_8A6EE0((const void **)a5 + 1, 8);
          v16 = a5[2];
          v17 = a5[1];
          *(_DWORD *)(v17 + 8 * v16) = *v15;
          *(_DWORD *)(v17 + 8 * v16 + 4) = v15[1];
          v18 = ++v14 < v38;
          ++a5[2];
        }
        while ( v18 );
      }
    }
    if ( !a5[2] )
      sub_92F1D0(a5 + 1, &v41);
    v23 = TlsIndex;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( v39 >= 0 )
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v23] + 0x19C), v37, 8 * v39, 0x14);
    if ( v43 >= 0 )
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v23] + 0x19C), v41, 8 * v43, 0x14);
  }
}
