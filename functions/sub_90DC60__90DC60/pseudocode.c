int __thiscall sub_90DC60(int *this, const void **a2)
{
  _DWORD *v2; // ebp
  int *v4; // ecx
  int v5; // eax
  int *v6; // ebx
  int v7; // edi
  int v8; // eax
  const char *v9; // eax
  int v10; // ebp
  unsigned int v11; // eax
  const void *v12; // edi
  char v13; // al
  int i; // ecx
  int v15; // eax
  int v16; // eax
  bool v17; // bl
  _DWORD *v18; // edi
  int v19; // eax
  const void *v20; // ebp
  char v21; // al
  int j; // ecx
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // edi
  int v26; // eax
  const void *v27; // ebx
  char v28; // al
  int k; // ecx
  int v30; // eax
  int v31; // eax
  const void *v32; // edi
  signed int v33; // eax
  int v34; // eax
  char *v35; // edx
  int v36; // ebp
  const void **v37; // edi
  int v38; // ebx
  int v39; // ebp
  int v40; // eax
  _DWORD *v41; // edi
  _DWORD *v42; // ebx
  int *v43; // edi
  _DWORD *v44; // eax
  int v45; // ecx
  int v46; // edx
  _DWORD *v47; // edx
  int v48; // ebx
  int *v49; // edi
  _DWORD *v50; // eax
  char *v51; // ecx
  int v52; // ebp
  const void **v53; // edi
  int v54; // ebx
  int v55; // ebp
  int v56; // eax
  int v57; // eax
  _DWORD *v58; // edi
  _DWORD *v59; // ebx
  _DWORD *v60; // edi
  _DWORD *v61; // eax
  int v62; // edx
  int v63; // ecx
  int *v64; // edi
  int v65; // ebx
  _DWORD *v66; // eax
  int v67; // ecx
  const char *v68; // eax
  int v69; // ecx
  int result; // eax
  _DWORD *v71; // edi
  _BYTE *v72; // eax
  int *v73; // edx
  int v74; // eax
  const char *v75; // ebx
  int v76; // ecx
  bool v77; // cc
  int v78; // ebp
  int v79; // eax
  _DWORD *v80; // ebp
  const char *v81; // ecx
  char *v82; // edx
  int v83; // eax
  char *v84; // ebx
  int m; // eax
  const void *v86; // ebx
  char v87; // al
  int n; // ecx
  int v89; // eax
  int *v90; // eax
  int v91; // ecx
  int v92; // ecx
  unsigned int v93; // ecx
  const void *v94; // ebx
  char v95; // al
  int ii; // ecx
  int v97; // eax
  int *v98; // eax
  int v99; // ecx
  int v100; // ecx
  unsigned int v101; // ecx
  const void *v102; // ebx
  char v103; // al
  int jj; // ecx
  int v105; // eax
  int v106; // [esp+5Ch] [ebp-F0h] BYREF
  int v107; // [esp+60h] [ebp-ECh]
  int v108; // [esp+64h] [ebp-E8h]
  int v109; // [esp+68h] [ebp-E4h]
  int *v110; // [esp+6Ch] [ebp-E0h]
  const char *v111; // [esp+70h] [ebp-DCh]
  int v112; // [esp+74h] [ebp-D8h]
  int v113; // [esp+78h] [ebp-D4h]
  const char *v114; // [esp+7Ch] [ebp-D0h]
  _DWORD *v115; // [esp+80h] [ebp-CCh]
  int v116; // [esp+84h] [ebp-C8h]
  int v117; // [esp+88h] [ebp-C4h]
  _DWORD v118[8]; // [esp+8Ch] [ebp-C0h] BYREF
  _DWORD *v119[4]; // [esp+ACh] [ebp-A0h] BYREF
  char *v120; // [esp+BCh] [ebp-90h] BYREF
  int v121; // [esp+C0h] [ebp-8Ch]
  unsigned int v122; // [esp+C4h] [ebp-88h]
  int v123; // [esp+C8h] [ebp-84h]
  int v124; // [esp+CCh] [ebp-80h]
  unsigned int v125; // [esp+D0h] [ebp-7Ch]
  int v126; // [esp+D4h] [ebp-78h]
  int v127; // [esp+D8h] [ebp-74h]
  unsigned int v128; // [esp+DCh] [ebp-70h]
  int v129; // [esp+E0h] [ebp-6Ch]
  int v130; // [esp+E4h] [ebp-68h]
  unsigned int v131; // [esp+E8h] [ebp-64h]
  int v132; // [esp+ECh] [ebp-60h]
  int v133; // [esp+F0h] [ebp-5Ch]
  char *v134; // [esp+F4h] [ebp-58h]
  int v135; // [esp+F8h] [ebp-54h]
  int v136; // [esp+FCh] [ebp-50h]
  char v137; // [esp+100h] [ebp-4Ch] BYREF
  char *v138; // [esp+120h] [ebp-2Ch]
  int v139; // [esp+124h] [ebp-28h]
  int v140; // [esp+128h] [ebp-24h]
  char v141; // [esp+12Ch] [ebp-20h] BYREF

  v2 = a2[1]; /*0x90dc70*/
  v4 = (int *)a2[7]; /*0x90dc75*/
  v5 = *v4; /*0x90dc78*/
  v110 = this; /*0x90dc7b*/
  v107 = (int)v2; /*0x90dc7f*/
  v6 = this + 0xE; /*0x90dc86*/
  v2[5] = (*(int (__thiscall **)(int *))(v5 + 0x1C))(v4); /*0x90dc8b*/
  v7 = sub_942960(v6); /*0x90dc93*/
  sub_8B0D80(v6, (bool *)&v106 + 3, v7); /*0x90dc9d*/
  for ( ; HIBYTE(v106); v2 = (_DWORD *)v107 ) /*0x90dca8*/
  {
    v8 = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]); /*0x90dcb5*/
    sub_942980(v6, v7, v8 - v2[5]); /*0x90dcbf*/
    v9 = (const char *)sub_8B0D30(v6, v7); /*0x90dcc7*/
    v10 = *(_DWORD *)a2[7]; /*0x90dccf*/
    v111 = v9; /*0x90dcd2*/
    v11 = sub_8B1860(v9); /*0x90dcd6*/
    (*(void (__thiscall **)(const void *, const char *, unsigned int))(v10 + 0xC))(a2[7], v111, v11 + 1); /*0x90dce8*/
    v7 = sub_9429A0(v6, v7); /*0x90dcf3*/
    sub_8B0D80(v6, (bool *)&v106 + 3, v7); /*0x90dcfd*/
  }
  v12 = a2[7]; /*0x90dd0e*/
  v13 = (*(int (__thiscall **)(const void *))(*(_DWORD *)v12 + 0x1C))(v12); /*0x90dd15*/
  v115 = v118; /*0x90dd1c*/
  v117 = 0x80000020; /*0x90dd20*/
  for ( i = 0; i < 0x10; ++i ) /*0x90dd28*/
    *((_BYTE *)v115 + i) = 0xFF; /*0x90dd34*/
  v15 = v13 & 0xF; /*0x90dd3e*/
  v116 = 0x10; /*0x90dd41*/
  if ( v15 ) /*0x90dd49*/
    (*(void (__thiscall **)(const void *, _DWORD *, int))(*(_DWORD *)v12 + 0xC))(v12, v115, 0x10 - v15); /*0x90dd5c*/
  if ( v117 >= 0 ) /*0x90dd65*/
    sub_8A75D0( /*0x90dd89*/
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
      v115,
      v117 & 0x3FFFFFFF,
      0x14);
  v16 = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]) - v2[5]; /*0x90dd96*/
  v2[6] = v16; /*0x90dd99*/
  v2[7] = v16; /*0x90dd9c*/
  v2[8] = v16; /*0x90dd9f*/
  v2[9] = v16; /*0x90dda2*/
  v2[0xA] = v16; /*0x90dda5*/
  v17 = *((_BYTE *)*a2 + 8) != 0; /*0x90ddb7*/
  v18 = (char *)a2[1] + 0x30; /*0x90ddba*/
  v18[5] = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]); /*0x90ddc2*/
  if ( v17 ) /*0x90ddc5*/
    v19 = 8 * v110[0x14]; /*0x90ddce*/
  else
    v19 = 0; /*0x90ddd3*/
  (*(void (__thiscall **)(const void *, int, int))(*(_DWORD *)a2[7] + 0x18))(a2[7], v19, 1); /*0x90dddd*/
  v20 = a2[7]; /*0x90dde0*/
  v21 = (*(int (__thiscall **)(const void *))(*(_DWORD *)v20 + 0x1C))(v20); /*0x90dde8*/
  v115 = v118; /*0x90ddef*/
  v117 = 0x80000020; /*0x90ddf3*/
  for ( j = 0; j < 0x10; ++j ) /*0x90ddfb*/
    *((_BYTE *)v115 + j) = 0xFF; /*0x90de04*/
  v23 = v21 & 0xF; /*0x90de0e*/
  v116 = 0x10; /*0x90de11*/
  if ( v23 ) /*0x90de19*/
    (*(void (__thiscall **)(const void *, _DWORD *, int))(*(_DWORD *)v20 + 0xC))(v20, v115, 0x10 - v23); /*0x90de2d*/
  if ( v117 >= 0 ) /*0x90de36*/
    sub_8A75D0( /*0x90de5a*/
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
      v115,
      v117 & 0x3FFFFFFF,
      0x14);
  v24 = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]) - v18[5]; /*0x90de67*/
  v18[6] = v24; /*0x90de6a*/
  v18[7] = v24; /*0x90de6d*/
  v18[8] = v24; /*0x90de70*/
  v18[9] = v24; /*0x90de73*/
  v18[0xA] = v24; /*0x90de76*/
  v25 = (char *)a2[1] + 0x60; /*0x90de81*/
  v25[5] = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]); /*0x90de89*/
  if ( v17 ) /*0x90de8c*/
    v26 = 0xC * v110[0x13]; /*0x90de98*/
  else
    v26 = 0; /*0x90de9d*/
  (*(void (__thiscall **)(const void *, int, int))(*(_DWORD *)a2[7] + 0x18))(a2[7], v26, 1); /*0x90dea7*/
  v27 = a2[7]; /*0x90deaa*/
  v28 = (*(int (__thiscall **)(const void *))(*(_DWORD *)v27 + 0x1C))(v27); /*0x90deb1*/
  v115 = v118; /*0x90deb8*/
  v117 = 0x80000020; /*0x90debc*/
  for ( k = 0; k < 0x10; ++k ) /*0x90dec4*/
    *((_BYTE *)v115 + k) = 0xFF; /*0x90deca*/
  v30 = v28 & 0xF; /*0x90ded4*/
  v116 = 0x10; /*0x90ded7*/
  if ( v30 ) /*0x90dedf*/
    (*(void (__thiscall **)(const void *, _DWORD *, int))(*(_DWORD *)v27 + 0xC))(v27, v115, 0x10 - v30); /*0x90def2*/
  if ( v117 >= 0 ) /*0x90defb*/
    sub_8A75D0( /*0x90df1f*/
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
      v115,
      v117 & 0x3FFFFFFF,
      0x14);
  v31 = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]) - v25[5]; /*0x90df2c*/
  v25[6] = v31; /*0x90df2f*/
  v25[7] = v31; /*0x90df32*/
  v25[8] = v31; /*0x90df35*/
  v25[9] = v31; /*0x90df38*/
  v25[0xA] = v31; /*0x90df3b*/
  v32 = (const void *)v110[3]; /*0x90df42*/
  v33 = (unsigned int)a2[6] & 0x3FFFFFFF; /*0x90df4b*/
  if ( v33 < (int)v32 ) /*0x90df52*/
  {
    v34 = 2 * v33; /*0x90df54*/
    if ( (int)v32 >= v34 ) /*0x90df58*/
      v34 = v110[3]; /*0x90df5a*/
    sub_8A6E40(a2 + 4, v34, 8); /*0x90df60*/
  }
  a2[5] = v32; /*0x90df68*/
  v36 = (int)a2[0xD]; /*0x90df6e*/
  v37 = a2 + 0xC; /*0x90df73*/
  v108 = (int)a2[2]; /*0x90df76*/
  v35 = (char *)v108; /*0x90df6b*/
  v114 = (const char *)v36; /*0x90df7a*/
  if ( v108 >= v36 )
  {
    v112 = (int)a2[0xE]; /*0x90dfd2*/
    if ( v108 > (v112 & 0x3FFFFFFF) )
    {
      if ( v108 < 2 * (v112 & 0x3FFFFFFF) ) /*0x90dfe7*/
        v35 = (char *)(2 * (v112 & 0x3FFFFFFF)); /*0x90dfe9*/
      v119[0] = *v37; /*0x90dfef*/
      *v37 = 0; /*0x90dff3*/
      a2[0xD] = 0; /*0x90dff9*/
      a2[0xE] = (const void *)0x80000000; /*0x90e000*/
      if ( (int)v35 > 0 )
        sub_8A6E40(a2 + 0xC, (int)v35 < 0 ? 0 : (unsigned int)v35, 0xC);
      v41 = *v37; /*0x90e021*/
      if ( v36 > 0 ) /*0x90e023*/
      {
        v42 = v41; /*0x90e029*/
        v43 = v119[0] + 1; /*0x90e02f*/
        v109 = v36; /*0x90e032*/
        do /*0x90e0ba*/
        {
          if ( v42 ) /*0x90e038*/
          {
            v44 = sub_8A7560( /*0x90e05b*/
                    *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
                    0xC * *v43,
                    0x14);
            *v42 = v44; /*0x90e060*/
            v42[1] = *v43; /*0x90e064*/
            v42[2] = *v43; /*0x90e069*/
            v45 = *v43; /*0x90e06c*/
            if ( *v43 > 0 ) /*0x90e073*/
            {
              v46 = v43[0xFFFFFFFF] - (_DWORD)v44; /*0x90e075*/
              v111 = (const char *)v46; /*0x90e077*/
              v107 = v45; /*0x90e07b*/
              while ( 1 ) /*0x90e085*/
              {
                v47 = (_DWORD *)((char *)v44 + v46); /*0x90e085*/
                *v44 = *v47; /*0x90e08b*/
                v44[1] = v47[1]; /*0x90e090*/
                v44[2] = v47[2]; /*0x90e096*/
                v44 += 3; /*0x90e09d*/
                if ( !--v107 ) /*0x90e0a5*/
                  break; /*0x90e0a5*/
                v46 = (int)v111; /*0x90e081*/
              }
              v36 = (int)v114; /*0x90e0a7*/
            }
          }
          v42 += 3; /*0x90e0af*/
          v43 += 3; /*0x90e0b2*/
          --v109; /*0x90e0b6*/
        }
        while ( v109 ); /*0x90e0ba*/
      }
      a2[0xD] = (const void *)v36; /*0x90e0c2*/
      if ( v36 > 0 ) /*0x90e0c5*/
      {
        v48 = MEMORY[0xBA9DE4]; /*0x90e0cb*/
        v49 = v119[0] + 2; /*0x90e0d1*/
        v107 = v36; /*0x90e0d4*/
        do /*0x90e111*/
        {
          if ( *v49 >= 0 ) /*0x90e0dc*/
            sub_8A75D0( /*0x90e100*/
              *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v48) + 0x19C),
              (_DWORD *)v49[0xFFFFFFFE],
              0xC * (*v49 & 0x3FFFFFFF),
              0x14);
          v49 += 3; /*0x90e109*/
          --v107; /*0x90e10d*/
        }
        while ( v107 ); /*0x90e111*/
      }
      if ( v112 >= 0 ) /*0x90e119*/
        sub_8A75D0( /*0x90e143*/
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
          v119[0],
          0xC * (v112 & 0x3FFFFFFF),
          0x14);
      v35 = (char *)v108; /*0x90e148*/
    }
    if ( v36 < (int)v35 ) /*0x90e151*/
    {
      v50 = (char *)a2[0xC] + 0xC * v36; /*0x90e157*/
      v51 = &v35[-v36]; /*0x90e15c*/
      do /*0x90e175*/
      {
        if ( v50 ) /*0x90e167*/
        {
          *v50 = 0; /*0x90e169*/
          v50[1] = 0; /*0x90e16b*/
          v50[2] = 0x80000000; /*0x90e16e*/
        }
        v50 += 3; /*0x90e171*/
        --v51; /*0x90e174*/
      }
      while ( v51 ); /*0x90e175*/
    }
  }
  else
  {
    v38 = 0xC * v108; /*0x90df83*/
    v39 = v36 - v108; /*0x90df86*/
    do /*0x90dfc8*/
    {
      v40 = *(_DWORD *)((char *)*v37 + v38 + 8); /*0x90df8a*/
      if ( v40 >= 0 ) /*0x90df92*/
      {
        sub_8A75D0( /*0x90dfbb*/
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
          *(_DWORD **)((char *)*v37 + v38),
          0xC * (v40 & 0x3FFFFFFF),
          0x14);
        v35 = (char *)v108; /*0x90dfc0*/
      }
      v38 += 0xC; /*0x90dfc4*/
      --v39; /*0x90dfc7*/
    }
    while ( v39 ); /*0x90dfc8*/
  }
  a2[0xD] = v35; /*0x90e177*/
  v52 = (int)a2[0x10]; /*0x90e17d*/
  v53 = a2 + 0xF; /*0x90e182*/
  v108 = (int)a2[2]; /*0x90e185*/
  v111 = (const char *)v52; /*0x90e189*/
  if ( v108 >= v52 )
  {
    v109 = (int)a2[0x11]; /*0x90e1d9*/
    if ( v108 > (v109 & 0x3FFFFFFF) )
    {
      v57 = 2 * (v109 & 0x3FFFFFFF); /*0x90e1eb*/
      if ( v108 >= v57 ) /*0x90e1f4*/
        v57 = v108; /*0x90e1f6*/
      v119[0] = *v53; /*0x90e1fc*/
      *v53 = 0; /*0x90e200*/
      a2[0x10] = 0; /*0x90e206*/
      a2[0x11] = (const void *)0x80000000; /*0x90e20d*/
      if ( v57 > 0 )
        sub_8A6E40(a2 + 0xF, v57 < 0 ? 0 : v57, 0xC);
      v58 = *v53; /*0x90e22e*/
      if ( v52 > 0 ) /*0x90e230*/
      {
        v59 = v58; /*0x90e236*/
        v60 = v119[0] + 1; /*0x90e23c*/
        v107 = v52; /*0x90e23f*/
        do /*0x90e2aa*/
        {
          if ( v59 ) /*0x90e245*/
          {
            v61 = sub_8A7560( /*0x90e269*/
                    *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
                    8 * *v60,
                    0x14);
            *v59 = v61; /*0x90e26e*/
            v59[1] = *v60; /*0x90e272*/
            v59[2] = *v60; /*0x90e277*/
            v62 = *v60; /*0x90e27a*/
            if ( (int)*v60 > 0 ) /*0x90e281*/
            {
              v63 = v60[0xFFFFFFFF] - (_DWORD)v61; /*0x90e283*/
              do /*0x90e295*/
              {
                *v61 = *(_DWORD *)((char *)v61 + v63); /*0x90e288*/
                v61[1] = *(_DWORD *)((char *)v61 + v63 + 4); /*0x90e28e*/
                v61 += 2; /*0x90e291*/
                --v62; /*0x90e294*/
              }
              while ( v62 ); /*0x90e295*/
              v52 = (int)v111; /*0x90e297*/
            }
          }
          v59 += 3; /*0x90e29f*/
          v60 += 3; /*0x90e2a2*/
          --v107; /*0x90e2a6*/
        }
        while ( v107 ); /*0x90e2aa*/
      }
      a2[0x10] = (const void *)v52; /*0x90e2ae*/
      if ( v52 > 0 ) /*0x90e2b1*/
      {
        v64 = v119[0] + 2; /*0x90e2b7*/
        v65 = v52; /*0x90e2ba*/
        do /*0x90e2f4*/
        {
          if ( *v64 >= 0 ) /*0x90e2c4*/
            sub_8A75D0( /*0x90e2eb*/
              *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
              (_DWORD *)v64[0xFFFFFFFE],
              8 * *v64,
              0x14);
          v64 += 3; /*0x90e2f0*/
          --v65; /*0x90e2f3*/
        }
        while ( v65 ); /*0x90e2f4*/
      }
      if ( v109 >= 0 ) /*0x90e2fc*/
        sub_8A75D0( /*0x90e326*/
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
          v119[0],
          0xC * (v109 & 0x3FFFFFFF),
          0x14);
    }
    if ( v52 < v108 ) /*0x90e334*/
    {
      v66 = (char *)a2[0xF] + 0xC * v52; /*0x90e33a*/
      v67 = v108 - v52; /*0x90e33d*/
      do /*0x90e356*/
      {
        if ( v66 ) /*0x90e348*/
        {
          *v66 = 0; /*0x90e34a*/
          v66[1] = 0; /*0x90e34c*/
          v66[2] = 0x80000000; /*0x90e34f*/
        }
        v66 += 3; /*0x90e352*/
        --v67; /*0x90e355*/
      }
      while ( v67 ); /*0x90e356*/
    }
  }
  else
  {
    v54 = 0xC * v108; /*0x90e192*/
    v55 = v52 - v108; /*0x90e195*/
    do /*0x90e1cf*/
    {
      v56 = *(_DWORD *)((char *)*v53 + v54 + 8); /*0x90e199*/
      if ( v56 >= 0 ) /*0x90e1a1*/
        sub_8A75D0( /*0x90e1c6*/
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
          *(_DWORD **)((char *)*v53 + v54),
          8 * v56,
          0x14);
      v54 += 0xC; /*0x90e1cb*/
      --v55; /*0x90e1ce*/
    }
    while ( v55 ); /*0x90e1cf*/
  }
  a2[0x10] = (const void *)v108; /*0x90e35c*/
  v68 = sub_940EF0(v110, off_B30594); /*0x90e36a*/
  v69 = (int)a2[2]; /*0x90e36f*/
  v114 = v68; /*0x90e372*/
  result = 3; /*0x90e376*/
  v113 = 3; /*0x90e37d*/
  if ( v69 > 3 ) /*0x90e381*/
  {
    v108 = 0x24; /*0x90e387*/
    v107 = 0x90; /*0x90e38f*/
    do /*0x90e848*/
    {
      v71 = (char *)a2[1] + v107; /*0x90e3a1*/
      v71[5] = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]); /*0x90e3af*/
      v72 = *a2; /*0x90e3b2*/
      v120 = 0; /*0x90e3b4*/
      v121 = 0; /*0x90e3b8*/
      v122 = 0x80000000; /*0x90e3bc*/
      v123 = 0; /*0x90e3c0*/
      v124 = 0; /*0x90e3c4*/
      v125 = 0x80000000; /*0x90e3cb*/
      v126 = 0; /*0x90e3d2*/
      v127 = 0; /*0x90e3d9*/
      v128 = 0x80000000; /*0x90e3e0*/
      v129 = 0; /*0x90e3e7*/
      v130 = 0; /*0x90e3ee*/
      v131 = 0x80000000; /*0x90e3f5*/
      v132 = 0; /*0x90e3fc*/
      if ( v72[8] || (const char *)v113 != v114 ) /*0x90e412*/
      {
        v77 = v110[3] <= 0; /*0x90e463*/
        v112 = 0; /*0x90e466*/
        if ( !v77 ) /*0x90e46a*/
        {
          v109 = 0; /*0x90e470*/
          do /*0x90e524*/
          {
            v78 = v110[2]; /*0x90e484*/
            v79 = *(_DWORD *)(v78 + v109 + 0x10); /*0x90e48f*/
            v80 = (_DWORD *)(v109 + v78); /*0x90e493*/
            if ( v79 == v113 ) /*0x90e497*/
            {
              v81 = (const char *)v80[1]; /*0x90e49c*/
              v82 = (char *)a2[4]; /*0x90e49f*/
              v133 = *v80; /*0x90e4a2*/
              v111 = v81; /*0x90e4ad*/
              v83 = 8 * v112; /*0x90e4b5*/
              *(_DWORD *)&v82[v83] = v113; /*0x90e4b8*/
              v84 = (char *)a2[4] + v83; /*0x90e4c3*/
              *((_DWORD *)v84 + 1) = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]) - v71[5]; /*0x90e4cb*/
              if ( v111 ) /*0x90e4d4*/
                (*((void (__thiscall **)(const void **, const void *, int, const char *, char **))a2[8] + 2))( /*0x90e4f2*/
                  a2 + 8,
                  a2[7],
                  v133,
                  v111,
                  &v120);
              else
                (*(void (__thiscall **)(const void *, _DWORD, _DWORD))(*(_DWORD *)a2[7] + 0xC))(a2[7], *v80, v80[5]); /*0x90e504*/
            }
            v77 = ++v112 < v110[3]; /*0x90e51a*/
            v109 += 0x18; /*0x90e520*/
          }
          while ( v77 ); /*0x90e524*/
        }
      }
      else
      {
        v73 = v110; /*0x90e414*/
        v74 = 0; /*0x90e41b*/
        if ( v110[3] > 0 ) /*0x90e41f*/
        {
          v75 = v114; /*0x90e425*/
          v76 = 0; /*0x90e429*/
          do /*0x90e458*/
          {
            if ( *(const char **)(v76 + v73[2] + 0x10) == v75 ) /*0x90e437*/
            {
              *((_DWORD *)a2[4] + 2 * v74) = 0xFFFFFFFF; /*0x90e43c*/
              *((_DWORD *)a2[4] + 2 * v74 + 1) = 0xFFFFFFFF; /*0x90e447*/
            }
            ++v74; /*0x90e452*/
            v76 += 0x18; /*0x90e453*/
          }
          while ( v74 < v73[3] ); /*0x90e458*/
        }
      }
      for ( m = 0; m < v121; ++m ) /*0x90e532*/
      {
        *(_DWORD *)&v120[8 * m] -= v71[5]; /*0x90e540*/
        *(_DWORD *)&v120[8 * m + 4] -= v71[5]; /*0x90e550*/
      }
      v71[6] = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]) - v71[5]; /*0x90e56a*/
      sub_9183A0(v119, (int)a2[7], *((_BYTE *)a2 + 0x48)); /*0x90e579*/
      sub_9181D0((int)v119, v120, 4, 2 * v121); /*0x90e591*/
      sub_918180(v119); /*0x90e59a*/
      v86 = a2[7]; /*0x90e59f*/
      v87 = (*(int (__thiscall **)(const void *))(*(_DWORD *)v86 + 0x1C))(v86); /*0x90e5a6*/
      v115 = v118; /*0x90e5ad*/
      v117 = 0x80000020; /*0x90e5b1*/
      for ( n = 0; n < 0x10; ++n ) /*0x90e5b9*/
        *((_BYTE *)v115 + n) = 0xFF; /*0x90e5c4*/
      v89 = v87 & 0xF; /*0x90e5ce*/
      v116 = 0x10; /*0x90e5d1*/
      if ( v89 ) /*0x90e5d9*/
        (*(void (__thiscall **)(const void *, _DWORD *, int))(*(_DWORD *)v86 + 0xC))(v86, v115, 0x10 - v89); /*0x90e5ec*/
      if ( v117 >= 0 ) /*0x90e5f5*/
        sub_8A75D0( /*0x90e619*/
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
          v115,
          v117 & 0x3FFFFFFF,
          0x14);
      v71[7] = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]) - v71[5]; /*0x90e629*/
      (*(void (__thiscall **)(const void *, int, int))(*(_DWORD *)a2[7] + 0x18))(a2[7], 0xC * v124, 1); /*0x90e641*/
      v90 = (int *)((char *)a2[0xC] + v108); /*0x90e64b*/
      v91 = *v90; /*0x90e64f*/
      *v90 = v123; /*0x90e651*/
      v123 = v91; /*0x90e65a*/
      v92 = v90[1]; /*0x90e65e*/
      v90[1] = v124; /*0x90e661*/
      v124 = v92; /*0x90e66b*/
      v93 = v90[2]; /*0x90e672*/
      v90[2] = v125; /*0x90e675*/
      v94 = a2[7]; /*0x90e678*/
      v125 = v93; /*0x90e67b*/
      v95 = (*(int (__thiscall **)(const void *))(*(_DWORD *)v94 + 0x1C))(v94); /*0x90e686*/
      v134 = &v137; /*0x90e690*/
      v136 = 0x80000020; /*0x90e697*/
      for ( ii = 0; ii < 0x10; ++ii ) /*0x90e6a2*/
        v134[ii] = 0xFF; /*0x90e6ab*/
      v97 = v95 & 0xF; /*0x90e6b5*/
      v135 = 0x10; /*0x90e6b8*/
      if ( v97 ) /*0x90e6c3*/
        (*(void (__thiscall **)(const void *, char *, int))(*(_DWORD *)v94 + 0xC))(v94, v134, 0x10 - v97); /*0x90e6d9*/
      if ( v136 >= 0 ) /*0x90e6e5*/
        sub_8A75D0( /*0x90e70c*/
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
          v134,
          v136 & 0x3FFFFFFF,
          0x14);
      v71[8] = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]) - v71[5]; /*0x90e71c*/
      (*(void (__thiscall **)(const void *, int, int))(*(_DWORD *)a2[7] + 0x18))(a2[7], 0xC * v127, 1); /*0x90e734*/
      v98 = (int *)((char *)a2[0xF] + v108); /*0x90e741*/
      v99 = *v98; /*0x90e745*/
      *v98 = v126; /*0x90e747*/
      v126 = v99; /*0x90e750*/
      v100 = v98[1]; /*0x90e757*/
      v98[1] = v127; /*0x90e75a*/
      v127 = v100; /*0x90e764*/
      v101 = v98[2]; /*0x90e76b*/
      v98[2] = v128; /*0x90e76e*/
      v102 = a2[7]; /*0x90e771*/
      v128 = v101; /*0x90e774*/
      v103 = (*(int (__thiscall **)(const void *))(*(_DWORD *)v102 + 0x1C))(v102); /*0x90e77f*/
      v138 = &v141; /*0x90e789*/
      v140 = 0x80000020; /*0x90e790*/
      for ( jj = 0; jj < 0x10; ++jj ) /*0x90e79b*/
        v138[jj] = 0xFF; /*0x90e7a7*/
      v105 = v103 & 0xF; /*0x90e7b1*/
      v139 = 0x10; /*0x90e7b4*/
      if ( v105 ) /*0x90e7bf*/
        (*(void (__thiscall **)(const void *, char *, int))(*(_DWORD *)v102 + 0xC))(v102, v138, 0x10 - v105); /*0x90e7d5*/
      if ( v140 >= 0 ) /*0x90e7e1*/
        sub_8A75D0( /*0x90e808*/
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
          v138,
          v140 & 0x3FFFFFFF,
          0x14);
      v71[0xA] = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]) - v71[5]; /*0x90e81c*/
      sub_941400(&v120); /*0x90e81f*/
      result = v113 + 1; /*0x90e833*/
      v77 = ++v113 < (int)a2[2]; /*0x90e83a*/
      v107 += 0x30; /*0x90e840*/
      v108 += 0xC; /*0x90e844*/
    }
    while ( v77 ); /*0x90e848*/
  }
  return result; /*0x90e84e*/
}
