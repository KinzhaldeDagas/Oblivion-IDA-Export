signed int __cdecl sub_93AB40(unsigned __int8 *a1, int a2, int a3, int a4, int a5, int a6, __m128 *a7, int a8, int a9)
{
  signed int v10; // edi
  __int16 v11; // bx
  int v12; // edx
  unsigned __int8 v13; // al
  unsigned __int8 *v14; // eax
  _DWORD *v15; // ecx
  _DWORD *v16; // edx
  int v17; // eax
  int v18; // eax
  int v20; // edi
  int v21; // eax
  int v22; // ecx
  unsigned __int8 *v23; // edx
  unsigned __int8 *v24; // ecx
  int v25; // eax
  int v26; // edx
  unsigned __int8 v27; // al
  int v28; // ebx
  unsigned __int8 *v29; // ebp
  __int16 v30; // di
  int v31; // eax
  int i; // ecx
  unsigned __int8 *v33; // eax
  int v34; // edi
  int v35; // ecx
  int j; // ebx
  int v37; // eax
  __int16 v38; // dx
  int v39; // ecx
  int v40; // [esp+14h] [ebp-4h]
  int v41; // [esp+1Ch] [ebp+4h]

  v40 = 4;
  if ( a1[2] != 4 )
  {
    v20 = a5;
    if ( !a9 || *(_BYTE *)(a5 + 9) == 3 )
    {
      v11 = (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)a8 + 8))(a8, a2, a3, a4, a6);
      if ( v11 == (__int16)0xFFFF )
        return 5;
    }
    else
    {
      v11 = 0xFFFF;
    }
    *(_WORD *)(a6 + 0x20) = v11;
    v21 = (a1[1] + *a1 - 1) >> 1;
    v22 = v21 + 2 * a1[2];
    v23 = &a1[4 * v22 + 0xC];
    v24 = &a1[4 * v22 + 4];
    if ( v21 >= 0 )
    {
      v25 = v21 + 1;
      do
      {
        *(_DWORD *)v23 = *(_DWORD *)v24;
        v23 += 0xFFFFFFFC;
        v24 += 0xFFFFFFFC;
        --v25;
      }
      while ( v25 );
    }
    v26 = a1[2];
    *(_DWORD *)&a1[8 * v26 + 4] = *((_DWORD *)a1 + 1);
    *(_DWORD *)&a1[8 * v26 + 8] = *((_DWORD *)a1 + 2);
    ++a1[2];
    goto LABEL_19;
  }
  v10 = sub_93A7A0(a7);
  if ( v10 == 4 )
    return 5;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a8 + 0x10))(a8, *(unsigned __int16 *)&a1[8 * v10 + 6]);
  if ( v10 )
  {
    *(_DWORD *)&a1[8 * v10 + 4] = *((_DWORD *)a1 + 1);
    *(_DWORD *)&a1[8 * v10 + 8] = *((_DWORD *)a1 + 2);
  }
  else
  {
    *((_DWORD *)a1 + 1) = *((_DWORD *)a1 + 3);
    *((_DWORD *)a1 + 2) = *((_DWORD *)a1 + 4);
  }
  sub_9399E0(a1);
  v11 = (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)a8 + 8))(a8, a2, a3, a4, a6);
  if ( v11 == (__int16)0xFFFF )
  {
    v12 = *((_DWORD *)a1 + 7);
    *((_DWORD *)a1 + 2) = *((_DWORD *)a1 + 8);
    v13 = a1[2] - 1;
    a1[2] = v13;
    v14 = &a1[8 * v13];
    *((_DWORD *)a1 + 1) = v12;
    v15 = v14 + 4;
    v16 = v14 + 0xC;
    v17 = (a1[1] + *a1 - 1) >> 1;
    if ( v17 >= 0 )
    {
      v18 = v17 + 1;
      do
      {
        *v15++ = *v16++;
        --v18;
      }
      while ( v18 );
    }
    sub_934050((char *)&a7[3 * v10], (int)&a7[9]);
    return 6;
  }
  *(_WORD *)(a6 + 0x20) = v11;
  sub_934050((char *)&a7[3 * v10], a6);
  v40 = v10;
  v20 = a5;
LABEL_19:
  a1[4] = *(_BYTE *)(v20 + 8);
  v27 = *(_BYTE *)(v20 + 9);
  *((_WORD *)a1 + 3) = v11;
  a1[5] = v27;
  *((_DWORD *)a1 + 2) = 0;
  v28 = 0;
  v29 = &a1[8 * a1[2] + 4];
  v41 = 0;
  if ( *(char *)(v20 + 8) > 0 )
  {
    while ( 1 )
    {
      v30 = *(_WORD *)(v20 + 2 * v28);
      v31 = 0;
      if ( *a1 )
      {
        while ( *(_WORD *)&v29[2 * v31] != v30 )
        {
          if ( ++v31 >= *a1 )
            goto LABEL_27;
        }
      }
      else
      {
LABEL_27:
        for ( i = *a1 + a1[1]; i > v31; --i )
          *(_WORD *)&v29[2 * i] = *(_WORD *)&v29[2 * i - 2];
        *(_WORD *)&v29[2 * v31] = v30;
        ++*a1;
        v41 += 0x10;
      }
      a1[v28++ + 8] = 0x10 * v31;
      if ( v28 >= *(char *)(a5 + 8) )
        break;
      v20 = a5;
    }
    if ( v41 )
    {
      v33 = a1 + 0xC;
      v34 = 1;
      if ( a1[2] > 1u )
      {
        do
        {
          v35 = *v33;
          if ( v35 < v35 + v33[1] )
          {
            do
              v33[v35++ + 4] += v41;
            while ( v35 < *v33 + v33[1] );
          }
          v33 += 8;
          ++v34;
        }
        while ( v34 < a1[2] );
      }
    }
    v20 = a5;
  }
  for ( j = 0; j < *(char *)(v20 + 9); ++j )
  {
    v37 = *a1;
    v38 = *(_WORD *)(v20 + 2 * (j + *(char *)(v20 + 8)));
    v39 = v37 + a1[1];
    if ( v37 >= v39 )
    {
LABEL_41:
      *(_WORD *)&v29[2 * v37] = v38;
      ++a1[1];
    }
    else
    {
      while ( *(_WORD *)&v29[2 * v37] != v38 )
      {
        if ( ++v37 >= v39 )
          goto LABEL_41;
      }
    }
    a1[j + 8 + *(char *)(v20 + 8)] = 0x10 * v37;
  }
  return v40;
}
