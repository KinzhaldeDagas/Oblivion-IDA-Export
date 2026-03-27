int __cdecl sub_8D84F0(const void **a1, int *k)
{
  int v3; // ecx
  int *v4; // edi
  int result; // eax
  int *v6; // esi
  int v7; // edx
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  int v10; // ecx
  int *v11; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ebp
  unsigned int v16; // eax
  unsigned int v17; // ecx
  int v18; // esi
  __int64 v19; // rax
  int v20; // esi
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // ebp
  __int64 v24; // rax
  int v25; // esi
  int v26; // eax
  int v27; // ecx
  int v28; // esi
  int j; // ecx
  _DWORD *v30; // eax
  int v31; // edx
  int v32; // eax
  int v33; // eax
  int *v34; // [esp+10h] [ebp-14h]
  unsigned int v35; // [esp+14h] [ebp-10h]
  char *v36[3]; // [esp+18h] [ebp-Ch] BYREF
  int v37; // [esp+28h] [ebp+4h]
  int v38; // [esp+28h] [ebp+4h]
  int i; // [esp+28h] [ebp+4h]

  v3 = (int)a1[1];
  v4 = k;
  result = k[1];
  if ( v3 >= result )
    v3 = k[1];
  if ( v3 >= 0x20 )
  {
    sub_8B1100(v36, (int)a1);
    sub_8B15E0(v36, (int)a1[1]);
    v14 = 0;
    v38 = 0;
    if ( (int)a1[1] > 0 )
    {
      while ( 1 )
      {
        v15 = *((_DWORD *)*a1 + 2 * v14);
        v16 = *((_DWORD *)*a1 + 2 * v14 + 1);
        v35 = v16;
        if ( v15 > v16 )
        {
          v17 = v15;
          v15 = v16;
          v35 = v17;
          v16 = v17;
        }
        v18 = sub_8B1250((int *)v36, __PAIR64__(v16, v15));
        if ( *sub_8B0D80(v36, (bool *)&k, v18) )
        {
          v19 = sub_8B0DD0(v36, v18);
          sub_8B0DF0((int *)v36, v18, v19 + 1, (unsigned __int64)(v19 + 1) >> 0x20);
          *((_DWORD *)*a1 + 2 * v38) = 0;
        }
        else
        {
          sub_8B1170(v36, __PAIR64__(v35, v15), (v38 << 0x10) | 1, ((v38 << 0x10) | 1) >> 0x1F);
        }
        if ( ++v38 >= (int)a1[1] )
          break;
        v14 = v38;
      }
    }
    v20 = 0;
    for ( i = 0; v20 < v4[1]; i = v20 )
    {
      v21 = *(_DWORD *)(*v4 + 8 * v20);
      v22 = *(_DWORD *)(*v4 + 8 * v20 + 4);
      if ( v21 > v22 )
      {
        v21 = *(_DWORD *)(*v4 + 8 * v20 + 4);
        v22 = *(_DWORD *)(*v4 + 8 * v20);
      }
      v23 = sub_8B1250((int *)v36, __PAIR64__(v22, v21));
      if ( *sub_8B0D80(v36, (bool *)&k, v23) )
      {
        v24 = sub_8B0DD0(v36, v23);
        v25 = v24;
        if ( (unsigned __int16)v24 <= 1u )
        {
          sub_8B12E0((int *)v36, v23);
          *((_DWORD *)*a1 + 2 * (v25 >> 0x10)) = 0;
        }
        else
        {
          sub_8B0DF0((int *)v36, v23, v24 - 1, (unsigned __int64)(v24 - 1) >> 0x20);
        }
        v26 = *v4;
        v27 = v4[1] - 1;
        v4[1] = v27;
        *(_DWORD *)(v26 + 8 * i) = *(_DWORD *)(v26 + 8 * v27);
        *(_DWORD *)(v26 + 8 * i + 4) = *(_DWORD *)(v26 + 8 * v27 + 4);
        v20 = i - 1;
      }
      ++v20;
    }
    v28 = 0;
    for ( j = 0; j < (int)a1[1]; ++j )
    {
      v30 = *a1;
      v31 = *((_DWORD *)*a1 + 2 * j);
      if ( v31 )
      {
        v30[2 * v28] = v31;
        v30[2 * v28++ + 1] = v30[2 * j + 1];
      }
    }
    v32 = (unsigned int)a1[2] & 0x3FFFFFFF;
    if ( v32 < v28 )
    {
      v33 = 2 * v32;
      if ( v28 >= v33 )
        v33 = v28;
      sub_8A6E40(a1, v33, 8);
    }
    a1[1] = (const void *)v28;
    return sub_8B1150(v36);
  }
  else
  {
    v6 = 0;
    for ( k = 0; (int)v6 < result; k = v6 )
    {
      v7 = 0;
      if ( (int)a1[1] > 0 )
      {
        v34 = (int *)(*v4 + 8 * (_DWORD)v6);
        v8 = *a1;
        v37 = *v34;
        v9 = *a1;
        while ( (*v9 != v37 || v9[1] != v34[1]) && (v9[1] != v37 || *v9 != v34[1]) )
        {
          ++v7;
          v9 += 2;
          if ( v7 >= (int)a1[1] )
          {
            v6 = k;
            goto LABEL_14;
          }
        }
        v10 = (int)a1[1] + 0xFFFFFFFF;
        a1[1] = (const void *)v10;
        v8[2 * v7] = v8[2 * v10];
        v11 = k;
        v8[2 * v7 + 1] = v8[2 * v10 + 1];
        v12 = *v4;
        v13 = v4[1] - 1;
        v4[1] = v13;
        *(_DWORD *)(v12 + 8 * (_DWORD)v11) = *(_DWORD *)(v12 + 8 * v13);
        *(_DWORD *)(v12 + 8 * (_DWORD)v11 + 4) = *(_DWORD *)(v12 + 8 * v13 + 4);
        v6 = (int *)((char *)v11 + 0xFFFFFFFF);
      }
LABEL_14:
      result = v4[1];
      v6 = (int *)((char *)v6 + 1);
    }
  }
  return result;
}
