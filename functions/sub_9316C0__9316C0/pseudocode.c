bool *__cdecl sub_9316C0(bool *a1, int a2, int a3, char a4, int **a5)
{
  int v5; // edx
  int v6; // ebp
  int v7; // eax
  char v8; // dl
  int v9; // edi
  int v10; // esi
  int v11; // ecx
  int *v12; // eax
  int v13; // eax
  int v15; // edi
  int v16; // esi
  int v17; // edx
  int *v18; // eax
  int v19; // eax
  int *v20; // eax
  bool v21; // cl
  int v22; // ebp
  int v23; // eax
  int v24; // edi
  int *v25; // eax
  int v26; // eax
  int v27; // esi
  _BYTE *v28; // eax
  bool v29; // al
  int v30; // eax
  bool v31; // zf
  int v32; // eax
  _BYTE *v33; // eax
  bool v34; // al
  int *v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int *v39; // esi
  int v40; // eax
  int v41; // ebp
  int v42; // edi
  int v43; // edx
  int *v44; // ecx
  int v45; // eax
  int v46; // edx
  char v47; // bl
  int v48; // ecx
  _WORD *v49; // eax
  bool v50; // al
  int v51; // edx
  int i; // eax
  char v53; // [esp+12h] [ebp-1Ah] BYREF
  char v54; // [esp+13h] [ebp-19h] BYREF
  int v55; // [esp+14h] [ebp-18h]
  char v56; // [esp+18h] [ebp-14h]
  int v57; // [esp+1Ch] [ebp-10h]
  int v58; // [esp+20h] [ebp-Ch]
  char v59; // [esp+24h] [ebp-8h]
  int v60; // [esp+28h] [ebp-4h]

  v5 = *(_DWORD *)(a2 + 8); /*0x9316ca*/
  v55 = *(_DWORD *)(a2 + 4); /*0x9316cf*/
  v6 = 0; /*0x9316d3*/
  v7 = 0; /*0x9316d6*/
  if ( v5 > 0 ) /*0x9316db*/
  {
    do /*0x9316ee*/
      *(_WORD *)(*(_DWORD *)(a2 + 4) + 8 * v7++ + 6) = 0; /*0x9316e3*/
    while ( v7 < *(_DWORD *)(a2 + 8) ); /*0x9316ee*/
  }
  v8 = a4; /*0x9316f0*/
  if ( a4 ) /*0x9316fa*/
    v9 = **a5; /*0x9316fe*/
  else
    v9 = (*a5)[1]; /*0x931704*/
  v10 = (int)a5[1] + 0xFFFFFFFF; /*0x93170a*/
  if ( v10 < 0 )
  {
LABEL_18:
    *a1 = 1; /*0x93175a*/
    return a1; /*0x93175a*/
  }
  else
  {
    v11 = 4 * v10; /*0x93170f*/
    do /*0x931754*/
    {
      v12 = *a5; /*0x931714*/
      if ( v8 ) /*0x931716*/
        v13 = v12[v11]; /*0x931718*/
      else
        v13 = v12[v11 + 1]; /*0x93171d*/
      if ( v13 != v9 ) /*0x931723*/
      {
        ++v6; /*0x931725*/
        v9 = v13; /*0x931728*/
        if ( v8 ) /*0x93172a*/
          v13 = v55 + 8 * *(unsigned __int16 *)(v13 + 2); /*0x931734*/
        if ( *(_WORD *)(v13 + 6) == 3 ) /*0x931740*/
        {
LABEL_39:
          *a1 = 0; /*0x9317e8*/
          return a1; /*0x9317f6*/
        }
        *(_WORD *)(v13 + 6) = 3; /*0x931746*/
        v8 = a4; /*0x93174a*/
      }
      --v10; /*0x93174e*/
      v11 -= 4; /*0x93174f*/
    }
    while ( v10 >= 0 ); /*0x931754*/
    if ( !v6 ) /*0x931758*/
      goto LABEL_18; /*0x931758*/
    if ( v8 ) /*0x93176b*/
      v15 = **a5; /*0x93176f*/
    else
      v15 = (*a5)[1]; /*0x931775*/
    v16 = (int)a5[1] + 0xFFFFFFFF; /*0x93177b*/
    if ( v16 >= 0 ) /*0x931781*/
    {
      v17 = 4 * v16; /*0x931785*/
      do /*0x9317d2*/
      {
        v18 = *a5; /*0x93178e*/
        if ( a4 ) /*0x931790*/
          v19 = v18[v17]; /*0x931792*/
        else
          v19 = v18[v17 + 1]; /*0x931797*/
        if ( v19 != v15 ) /*0x93179d*/
        {
          v15 = v19; /*0x9317a1*/
          if ( !a4 ) /*0x9317a3*/
            v19 = v55 + 8 * *(unsigned __int16 *)(v19 + 2); /*0x9317ad*/
          if ( *(_WORD *)(v19 + 6) ) /*0x9317b0*/
          {
            if ( *(_WORD *)(v19 + 6) == 1 ) /*0x9317ba*/
              goto LABEL_39; /*0x9317ba*/
            if ( *(_WORD *)(v19 + 6) == 3 ) /*0x9317be*/
              *(_WORD *)(v19 + 6) = 2; /*0x9317c0*/
          }
          else
          {
            *(_WORD *)(v19 + 6) = 1; /*0x9317c6*/
          }
        }
        --v16; /*0x9317cc*/
        v17 -= 4; /*0x9317cd*/
      }
      while ( v16 >= 0 ); /*0x9317d2*/
      v8 = a4; /*0x9317d4*/
    }
    v20 = *a5; /*0x9317da*/
    v21 = 1; /*0x9317dc*/
    v56 = 1; /*0x9317de*/
    if ( v8 ) /*0x9317e2*/
      v22 = *v20; /*0x9317e4*/
    else
      v22 = v20[1]; /*0x9317f7*/
    v23 = (int)a5[1] + 0xFFFFFFFF; /*0x9317fd*/
    if ( v23 >= 0 ) /*0x9317fe*/
    {
      v24 = 4 * v23; /*0x931806*/
      v58 = (int)a5[1]; /*0x93180a*/
      do /*0x9318b8*/
      {
        v25 = *a5; /*0x931812*/
        if ( v8 ) /*0x931814*/
          v26 = v25[v24]; /*0x931816*/
        else
          v26 = v25[v24 + 1]; /*0x93181b*/
        if ( v26 != v22 ) /*0x931821*/
        {
          v22 = v26; /*0x931829*/
          if ( v8 ) /*0x93182b*/
            v27 = v26; /*0x93182d*/
          else
            v27 = v55 + 8 * *(unsigned __int16 *)(v26 + 2); /*0x931839*/
          if ( *(_WORD *)(v27 + 6) == 1 ) /*0x931841*/
          {
            v29 = 0; /*0x931866*/
            if ( v21 ) /*0x931845*/
            {
              v28 = sub_931520(&v53, a2, v27, 1); /*0x931854*/
              v8 = a4; /*0x93185b*/
              if ( *v28 ) /*0x931859*/
                v29 = 1; /*0x931845*/
            }
            v21 = v29; /*0x93186c*/
          }
          v30 = *(unsigned __int16 *)(v27 + 2); /*0x93186e*/
          v31 = *(_WORD *)(v55 + 8 * v30 + 6) == 3; /*0x931876*/
          v32 = v55 + 8 * v30; /*0x93187c*/
          if ( v31 ) /*0x93187f*/
          {
            v34 = 0; /*0x9318a4*/
            if ( v21 ) /*0x931883*/
            {
              v33 = sub_931520(&v54, a2, v32, 3); /*0x931892*/
              v8 = a4; /*0x931899*/
              if ( *v33 ) /*0x931897*/
                v34 = 1; /*0x931883*/
            }
            v21 = v34; /*0x9318aa*/
          }
        }
        v24 -= 4; /*0x9318b0*/
        --v58; /*0x9318b4*/
      }
      while ( v58 ); /*0x9318b8*/
      v56 = v21; /*0x9318be*/
    }
    v35 = *a5; /*0x9318c4*/
    if ( v8 ) /*0x9318c6*/
      v36 = *v35; /*0x9318c8*/
    else
      v36 = v35[1]; /*0x9318cc*/
    v57 = v36; /*0x9318cf*/
    v37 = (int)a5[1] + 0xFFFFFFFF; /*0x9318d6*/
    if ( v37 >= 0 )
    {
      v60 = (int)a5[1]; /*0x9318e3*/
      v58 = 0x10 * v37; /*0x9318e7*/
      v38 = 0x10 * v37; /*0x9318eb*/
      while ( 1 )
      {
        v39 = *a5; /*0x9318f9*/
        if ( v8 ) /*0x9318fb*/
          v40 = *(int *)((char *)v39 + v38); /*0x9318fd*/
        else
          v40 = *(int *)((char *)v39 + v38 + 4); /*0x931902*/
        if ( v40 != v57 )
        {
          v57 = v40; /*0x931912*/
          v41 = v8 ? v40 : v55 + 8 * *(unsigned __int16 *)(v40 + 2);
          if ( *(_WORD *)(v41 + 6) == 2 )
          {
            v59 = 1; /*0x931938*/
            if ( v8 ) /*0x93193d*/
              v42 = *v39; /*0x93193f*/
            else
              v42 = v39[1]; /*0x931943*/
            v43 = (int)a5[1] + 0xFFFFFFFF; /*0x931949*/
            if ( v43 >= 0 )
            {
              v44 = &v39[4 * v43]; /*0x931951*/
              while ( 1 )
              {
                v45 = a4 ? *v44 : v44[1];
                if ( v45 != v42 ) /*0x931964*/
                {
                  v42 = v45; /*0x93196a*/
                  if ( *(_WORD *)(v45 + 6) != 2 ) /*0x93196c*/
                    break; /*0x93196c*/
                }
                --v43; /*0x93196e*/
                v44 += 0xFFFFFFFC; /*0x93196f*/
                if ( v43 < 0 ) /*0x931974*/
                  goto LABEL_91; /*0x931974*/
              }
              v59 = 0; /*0x931978*/
            }
LABEL_91:
            v46 = *(_DWORD *)(a2 + 8); /*0x93197d*/
            v47 = 0; /*0x931984*/
            v48 = 0; /*0x931986*/
            if ( v46 > 0 ) /*0x93198a*/
            {
              v49 = (_WORD *)(*(_DWORD *)(a2 + 4) + 6); /*0x93198f*/
              while ( *v49 ) /*0x931996*/
              {
                ++v48; /*0x931998*/
                v49 += 4; /*0x931999*/
                if ( v48 >= v46 ) /*0x93199e*/
                  goto LABEL_97; /*0x93199e*/
              }
              v47 = 1; /*0x9319a2*/
            }
LABEL_97:
            if ( v59 ) /*0x9319aa*/
            {
              if ( v47 ) /*0x9319ae*/
              {
                v50 = v56 && *sub_931520(&v54, a2, v41, 3); /*0x9319d3*/
                v56 = v50; /*0x9319d9*/
              }
            }
          }
        }
        v38 = v58 - 0x10; /*0x9319e5*/
        v31 = v60 == 1; /*0x9319e8*/
        v58 -= 0x10; /*0x9319e9*/
        --v60; /*0x9319ed*/
        if ( v31 ) /*0x9319f1*/
          break; /*0x9319f1*/
        v8 = a4; /*0x9318ef*/
      }
      v21 = v56; /*0x9319f7*/
    }
    v51 = *(_DWORD *)(a2 + 8); /*0x9319ff*/
    for ( i = 0; i < v51; ++i ) /*0x931a06*/
      v21 = v21 && *(_WORD *)(*(_DWORD *)(a2 + 4) + 8 * i + 6); /*0x931a17*/
    *a1 = v21; /*0x931a29*/
    return a1; /*0x931a22*/
  }
}
