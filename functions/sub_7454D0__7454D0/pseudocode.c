signed int __cdecl sub_7454D0(int a1, int a2, unsigned int a3, int *a4, unsigned int *a5, _WORD *a6)
{
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // eax
  unsigned int v10; // esi
  int v11; // edx
  unsigned int i; // eax
  unsigned int j; // eax
  __int16 v14; // dx
  unsigned int k; // eax
  unsigned int v16; // ebp
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  _DWORD *v21; // ecx
  unsigned int v22; // edx
  unsigned int m; // eax
  int v24; // esi
  char v25; // cl
  unsigned int v26; // edx
  int v27; // eax
  unsigned __int16 *v28; // esi
  int v29; // eax
  int v30; // esi
  unsigned int n; // eax
  int v32; // [esp+8h] [ebp-88h]
  int v33; // [esp+8h] [ebp-88h]
  unsigned int v34; // [esp+Ch] [ebp-84h]
  unsigned int v35; // [esp+10h] [ebp-80h]
  _WORD *v36; // [esp+14h] [ebp-7Ch]
  unsigned int v37; // [esp+18h] [ebp-78h]
  int v38; // [esp+1Ch] [ebp-74h]
  unsigned int v39; // [esp+24h] [ebp-6Ch]
  char *v40; // [esp+28h] [ebp-68h]
  char *v41; // [esp+2Ch] [ebp-64h]
  int v42; // [esp+30h] [ebp-60h]
  int v43; // [esp+34h] [ebp-5Ch]
  unsigned int v44; // [esp+38h] [ebp-58h]
  int v45; // [esp+3Ch] [ebp-54h]
  int v46; // [esp+4Ch] [ebp-44h] BYREF
  int v47; // [esp+50h] [ebp-40h]
  _WORD v48[28]; // [esp+54h] [ebp-3Ch] BYREF

  v6 = 0;
  v36 = a6;
  v46 = 0;
  v47 = 0;
  memset(v48, 0, 0x18);
  if ( a3 )
  {
    do
      ++*((_WORD *)&v46 + *(unsigned __int16 *)(a2 + 2 * v6++));
    while ( v6 < a3 );
  }
  v7 = *a5;
  v34 = *a5;
  v8 = 0xF;
  do
  {
    if ( *((_WORD *)&v46 + v8) )
      break;
    --v8;
  }
  while ( v8 );
  v37 = v8;
  if ( v7 > v8 )
  {
    v34 = v8;
    v7 = v8;
  }
  if ( !v8 )
    return 0xFFFFFFFF;
  v10 = 1;
  while ( !*((_WORD *)&v46 + v10) )
  {
    if ( *((_WORD *)&v46 + v10 + 1) )
    {
      ++v10;
      break;
    }
    if ( v48[v10 - 2] )
    {
      v10 += 2;
      break;
    }
    if ( v48[v10 - 1] )
    {
      v10 += 3;
      break;
    }
    if ( v48[v10] )
    {
      v10 += 4;
      break;
    }
    v10 += 5;
    if ( v10 > 0xF )
      break;
  }
  if ( v7 < v10 )
    v34 = v10;
  v11 = 1;
  for ( i = 1; i <= 0xF; ++i )
  {
    v11 = 2 * v11 - *((unsigned __int16 *)&v46 + i);
    if ( v11 < 0 )
      return 0xFFFFFFFF;
  }
  if ( v11 > 0 && (!a1 || a3 - (unsigned __int16)v46 != 1) )
    return 0xFFFFFFFF;
  v48[0xD] = 0;
  for ( j = 1; j < 0xF; v48[j + 0xC] = v14 )
  {
    v14 = *(_WORD *)((char *)&v46 + j * 2) + v48[j + 0xC];
    ++j;
  }
  for ( k = 0; k < a3; ++k )
  {
    if ( *(_WORD *)(a2 + 2 * k) )
      a6[(unsigned __int16)v48[*(unsigned __int16 *)(a2 + 2 * k) + 0xC]++] = k;
  }
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v41 = (char *)&unk_A82888 + 0xFFFFFDFE;
      v40 = (char *)&unk_A828C8 + 0xFFFFFDFE;
      v43 = 0x100;
    }
    else
    {
      v41 = (char *)&unk_A82908;
      v40 = (char *)&unk_A82948;
      v43 = 0xFFFFFFFF;
    }
  }
  else
  {
    v40 = (char *)a6;
    v41 = (char *)a6;
    v43 = 0x13;
  }
  v38 = *a4;
  v44 = 0xFFFFFFFF;
  v16 = 0;
  v17 = 0;
  v35 = v10;
  v42 = 1 << v34;
  v39 = 1 << v34;
  v45 = (1 << v34) - 1;
  if ( a1 == 1 && (unsigned int)(1 << v34) >= 0x506 )
    return 1;
  while ( 1 )
  {
    if ( (unsigned __int16)*v36 >= v43 )
    {
      if ( (unsigned __int16)*v36 <= v43 )
      {
        LOBYTE(v32) = 0x60;
        HIWORD(v32) = 0;
      }
      else
      {
        v18 = 2 * (unsigned __int16)*v36;
        LOBYTE(v32) = v40[v18];
        HIWORD(v32) = *(_WORD *)&v41[v18];
      }
    }
    else
    {
      LOBYTE(v32) = 0;
      HIWORD(v32) = *v36;
    }
    v19 = v42;
    v20 = 1 << (v35 - v17);
    v21 = (_DWORD *)(v38 + 4 * (v42 + (v16 >> v17)));
    do
    {
      v19 -= v20;
      v21 -= v20;
      BYTE1(v32) = v35 - v17;
      *v21 = v32;
    }
    while ( v19 );
    v22 = v35;
    for ( m = 1 << (v35 - 1); (m & v16) != 0; m >>= 1 )
      ;
    if ( m )
      v16 = m + (v16 & (m - 1));
    else
      v16 = 0;
    --*((_WORD *)&v46 + v35);
    ++v36;
    if ( *((_WORD *)&v46 + v35) )
      goto LABEL_60;
    if ( v35 == v37 )
      break;
    v22 = *(unsigned __int16 *)(a2 + 2 * (unsigned __int16)*v36);
    v35 = v22;
LABEL_60:
    if ( v22 > v34 )
    {
      v24 = v16 & v45;
      if ( (v16 & v45) != v44 )
      {
        if ( !v17 )
          v17 = v34;
        v25 = v35 - v17;
        v38 += 4 * v42;
        v26 = v35;
        v27 = 1 << (v35 - v17);
        if ( v35 < v37 )
        {
          v28 = (unsigned __int16 *)&v46 + v35;
          do
          {
            v29 = v27 - *v28;
            if ( v29 <= 0 )
              break;
            ++v26;
            ++v25;
            ++v28;
            v27 = 2 * v29;
          }
          while ( v26 < v37 );
          v24 = v16 & v45;
        }
        v39 += 1 << v25;
        v42 = 1 << v25;
        if ( a1 == 1 && v39 >= 0x506 )
          return 1;
        *(_BYTE *)(*a4 + 4 * v24) = v25;
        *(_BYTE *)(*a4 + 4 * v24 + 1) = v34;
        v44 = v24;
        *(_WORD *)(*a4 + 4 * v24 + 2) = (v38 - *a4) >> 2;
      }
    }
  }
  LOBYTE(v33) = 0x40;
  BYTE1(v33) = v35 - v17;
  HIWORD(v33) = 0;
  if ( v16 )
  {
    v30 = v38;
    do
    {
      if ( v17 )
      {
        if ( (v16 & v45) != v44 )
        {
          v30 = *a4;
          v17 = 0;
          BYTE1(v33) = v34;
          LOBYTE(v22) = v34;
        }
      }
      *(_DWORD *)(v30 + 4 * (v16 >> v17)) = v33;
      for ( n = 1 << (v22 - 1); (n & v16) != 0; n >>= 1 )
        ;
      if ( !n )
        break;
      v16 = n + (v16 & (n - 1));
    }
    while ( v16 );
  }
  *a4 += 4 * v39;
  *a5 = v34;
  return 0;
}
