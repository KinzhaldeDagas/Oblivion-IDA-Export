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

  v6 = 0; /*0x74550d*/
  v36 = a6; /*0x745519*/
  v46 = 0; /*0x74551d*/
  v47 = 0; /*0x745521*/
  memset(v48, 0, 0x18); /*0x745525*/
  if ( a3 ) /*0x74553d*/
  {
    do /*0x745553*/
      ++*((_WORD *)&v46 + *(unsigned __int16 *)(a2 + 2 * v6++)); /*0x745544*/
    while ( v6 < a3 ); /*0x745553*/
  }
  v7 = *a5; /*0x745555*/
  v34 = *a5; /*0x745557*/
  v8 = 0xF; /*0x74555b*/
  do /*0x74556e*/
  {
    if ( *((_WORD *)&v46 + v8) ) /*0x745560*/
      break; /*0x745566*/
    --v8; /*0x745568*/
  }
  while ( v8 ); /*0x74556e*/
  v37 = v8; /*0x745572*/
  if ( v7 > v8 ) /*0x745576*/
  {
    v34 = v8; /*0x745578*/
    v7 = v8; /*0x74557c*/
  }
  if ( !v8 ) /*0x745580*/
    return 0xFFFFFFFF; /*0x74559b*/
  v10 = 1; /*0x74559d*/
  while ( !*((_WORD *)&v46 + v10) ) /*0x7455a8*/
  {
    if ( *((_WORD *)&v46 + v10 + 1) ) /*0x7455aa*/
    {
      ++v10; /*0x7455d4*/
      break; /*0x7455d7*/
    }
    if ( v48[v10 - 2] ) /*0x7455b2*/
    {
      v10 += 2; /*0x7455d9*/
      break; /*0x7455dc*/
    }
    if ( v48[v10 - 1] ) /*0x7455ba*/
    {
      v10 += 3; /*0x7455de*/
      break; /*0x7455e1*/
    }
    if ( v48[v10] ) /*0x7455c2*/
    {
      v10 += 4; /*0x7455e3*/
      break; /*0x7455e3*/
    }
    v10 += 5; /*0x7455ca*/
    if ( v10 > 0xF ) /*0x7455d0*/
      break; /*0x7455d0*/
  }
  if ( v7 < v10 ) /*0x7455e8*/
    v34 = v10; /*0x7455ea*/
  v11 = 1; /*0x7455ee*/
  for ( i = 1; i <= 0xF; ++i ) /*0x7455f3*/
  {
    v11 = 2 * v11 - *((unsigned __int16 *)&v46 + i); /*0x7455fc*/
    if ( v11 < 0 ) /*0x7455fe*/
      return 0xFFFFFFFF; /*0x745648*/
  }
  if ( v11 > 0 && (!a1 || a3 - (unsigned __int16)v46 != 1) ) /*0x745624*/
    return 0xFFFFFFFF; /*0x745629*/
  v48[0xD] = 0; /*0x745649*/
  for ( j = 1; j < 0xF; v48[j + 0xC] = v14 ) /*0x745650*/
  {
    v14 = *(_WORD *)((char *)&v46 + j * 2) + v48[j + 0xC]; /*0x745665*/
    ++j; /*0x74566a*/
  }
  for ( k = 0; k < a3; ++k ) /*0x74567f*/
  {
    if ( *(_WORD *)(a2 + 2 * k) ) /*0x745681*/
      a6[(unsigned __int16)v48[*(unsigned __int16 *)(a2 + 2 * k) + 0xC]++] = k; /*0x745691*/
  }
  if ( a1 ) /*0x7456b4*/
  {
    if ( a1 == 1 ) /*0x7456b9*/
    {
      v41 = (char *)&unk_A82888 + 0xFFFFFDFE; /*0x7456db*/
      v40 = (char *)&unk_A828C8 + 0xFFFFFDFE; /*0x7456e9*/
      v43 = 0x100; /*0x7456ed*/
    }
    else
    {
      v41 = (char *)&unk_A82908; /*0x7456bb*/
      v40 = (char *)&unk_A82948; /*0x7456c3*/
      v43 = 0xFFFFFFFF; /*0x7456cb*/
    }
  }
  else
  {
    v40 = (char *)a6; /*0x7456f7*/
    v41 = (char *)a6; /*0x7456fb*/
    v43 = 0x13; /*0x7456ff*/
  }
  v38 = *a4; /*0x74570d*/
  v44 = 0xFFFFFFFF; /*0x74571c*/
  v16 = 0; /*0x745720*/
  v17 = 0; /*0x745722*/
  v35 = v10; /*0x74572a*/
  v42 = 1 << v34; /*0x74572e*/
  v39 = 1 << v34; /*0x745732*/
  v45 = (1 << v34) - 1; /*0x745736*/
  if ( a1 == 1 && (unsigned int)(1 << v34) >= 0x506 ) /*0x745741*/
    return 1; /*0x745990*/
  while ( 1 ) /*0x745750*/
  {
    if ( (unsigned __int16)*v36 >= v43 ) /*0x74576a*/
    {
      if ( (unsigned __int16)*v36 <= v43 ) /*0x745778*/
      {
        LOBYTE(v32) = 0x60; /*0x745799*/
        HIWORD(v32) = 0; /*0x74579e*/
      }
      else
      {
        v18 = 2 * (unsigned __int16)*v36; /*0x745781*/
        LOBYTE(v32) = v40[v18]; /*0x74578e*/
        HIWORD(v32) = *(_WORD *)&v41[v18]; /*0x745792*/
      }
    }
    else
    {
      LOBYTE(v32) = 0; /*0x74576c*/
      HIWORD(v32) = *v36; /*0x745771*/
    }
    v19 = v42; /*0x7457a9*/
    v20 = 1 << (v35 - v17); /*0x7457b4*/
    v21 = (_DWORD *)(v38 + 4 * (v42 + (v16 >> v17))); /*0x7457c9*/
    do /*0x7457d8*/
    {
      v19 -= v20; /*0x7457d0*/
      v21 -= v20; /*0x7457d2*/
      BYTE1(v32) = v35 - v17; /*0x745761*/
      *v21 = v32; /*0x7457d6*/
    }
    while ( v19 ); /*0x7457d8*/
    v22 = v35; /*0x7457da*/
    for ( m = 1 << (v35 - 1); (m & v16) != 0; m >>= 1 ) /*0x7457ea*/
      ; /*0x7457f0*/
    if ( m ) /*0x7457f8*/
      v16 = m + (v16 & (m - 1)); /*0x745801*/
    else
      v16 = 0; /*0x745805*/
    --*((_WORD *)&v46 + v35); /*0x745807*/
    ++v36; /*0x745813*/
    if ( *((_WORD *)&v46 + v35) ) /*0x74580e*/
      goto LABEL_60; /*0x74581b*/
    if ( v35 == v37 ) /*0x745821*/
      break; /*0x745821*/
    v22 = *(unsigned __int16 *)(a2 + 2 * (unsigned __int16)*v36); /*0x745832*/
    v35 = v22; /*0x745836*/
LABEL_60:
    if ( v22 > v34 ) /*0x74583e*/
    {
      v24 = v16 & v45; /*0x745848*/
      if ( (v16 & v45) != v44 ) /*0x745852*/
      {
        if ( !v17 ) /*0x74585a*/
          v17 = v34; /*0x74585c*/
        v25 = v35 - v17; /*0x74586f*/
        v38 += 4 * v42; /*0x745871*/
        v26 = v35; /*0x74587a*/
        v27 = 1 << (v35 - v17); /*0x74587d*/
        if ( v35 < v37 ) /*0x745883*/
        {
          v28 = (unsigned __int16 *)&v46 + v35; /*0x745885*/
          do /*0x7458a8*/
          {
            v29 = v27 - *v28; /*0x745893*/
            if ( v29 <= 0 ) /*0x745897*/
              break; /*0x745897*/
            ++v26; /*0x745899*/
            ++v25; /*0x74589c*/
            ++v28; /*0x74589f*/
            v27 = 2 * v29; /*0x7458a2*/
          }
          while ( v26 < v37 ); /*0x7458a8*/
          v24 = v16 & v45; /*0x7458aa*/
        }
        v39 += 1 << v25; /*0x7458b5*/
        v42 = 1 << v25; /*0x7458c1*/
        if ( a1 == 1 && v39 >= 0x506 ) /*0x7458cf*/
          return 1; /*0x7458cf*/
        *(_BYTE *)(*a4 + 4 * v24) = v25; /*0x7458dd*/
        *(_BYTE *)(*a4 + 4 * v24 + 1) = v34; /*0x7458e6*/
        v44 = v24; /*0x7458f5*/
        *(_WORD *)(*a4 + 4 * v24 + 2) = (v38 - *a4) >> 2; /*0x7458f9*/
      }
    }
  }
  LOBYTE(v33) = 0x40; /*0x74590d*/
  BYTE1(v33) = v35 - v17; /*0x745912*/
  HIWORD(v33) = 0; /*0x745916*/
  if ( v16 ) /*0x74591d*/
  {
    v30 = v38; /*0x74591f*/
    do /*0x745973*/
    {
      if ( v17 ) /*0x745925*/
      {
        if ( (v16 & v45) != v44 ) /*0x745931*/
        {
          v30 = *a4; /*0x745937*/
          v17 = 0; /*0x745939*/
          BYTE1(v33) = v34; /*0x74593f*/
          LOBYTE(v22) = v34; /*0x745943*/
        }
      }
      *(_DWORD *)(v30 + 4 * (v16 >> v17)) = v33; /*0x74594f*/
      for ( n = 1 << (v22 - 1); (n & v16) != 0; n >>= 1 ) /*0x74595e*/
        ; /*0x745960*/
      if ( !n ) /*0x745968*/
        break; /*0x745968*/
      v16 = n + (v16 & (n - 1)); /*0x745971*/
    }
    while ( v16 ); /*0x745973*/
  }
  *a4 += 4 * v39; /*0x745984*/
  *a5 = v34; /*0x74598a*/
  return 0; /*0x745582*/
}
