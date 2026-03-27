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

  v2 = a2[1];
  v4 = (int *)a2[7];
  v5 = *v4;
  v110 = this;
  v107 = (int)v2;
  v6 = this + 0xE;
  v2[5] = (*(int (__thiscall **)(int *))(v5 + 0x1C))(v4);
  v7 = sub_942960(v6);
  sub_8B0D80(v6, (bool *)&v106 + 3, v7);
  for ( ; HIBYTE(v106); v2 = (_DWORD *)v107 )
  {
    v8 = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]);
    sub_942980(v6, v7, v8 - v2[5]);
    v9 = (const char *)sub_8B0D30(v6, v7);
    v10 = *(_DWORD *)a2[7];
    v111 = v9;
    v11 = sub_8B1860(v9);
    (*(void (__thiscall **)(const void *, const char *, unsigned int))(v10 + 0xC))(a2[7], v111, v11 + 1);
    v7 = sub_9429A0(v6, v7);
    sub_8B0D80(v6, (bool *)&v106 + 3, v7);
  }
  v12 = a2[7];
  v13 = (*(int (__thiscall **)(const void *))(*(_DWORD *)v12 + 0x1C))(v12);
  v115 = v118;
  v117 = 0x80000020;
  for ( i = 0; i < 0x10; ++i )
    *((_BYTE *)v115 + i) = 0xFF;
  v15 = v13 & 0xF;
  v116 = 0x10;
  if ( v15 )
    (*(void (__thiscall **)(const void *, _DWORD *, int))(*(_DWORD *)v12 + 0xC))(v12, v115, 0x10 - v15);
  if ( v117 >= 0 )
    sub_8A75D0(
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
      v115,
      v117 & 0x3FFFFFFF,
      0x14);
  v16 = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]) - v2[5];
  v2[6] = v16;
  v2[7] = v16;
  v2[8] = v16;
  v2[9] = v16;
  v2[0xA] = v16;
  v17 = *((_BYTE *)*a2 + 8) != 0;
  v18 = (char *)a2[1] + 0x30;
  v18[5] = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]);
  if ( v17 )
    v19 = 8 * v110[0x14];
  else
    v19 = 0;
  (*(void (__thiscall **)(const void *, int, int))(*(_DWORD *)a2[7] + 0x18))(a2[7], v19, 1);
  v20 = a2[7];
  v21 = (*(int (__thiscall **)(const void *))(*(_DWORD *)v20 + 0x1C))(v20);
  v115 = v118;
  v117 = 0x80000020;
  for ( j = 0; j < 0x10; ++j )
    *((_BYTE *)v115 + j) = 0xFF;
  v23 = v21 & 0xF;
  v116 = 0x10;
  if ( v23 )
    (*(void (__thiscall **)(const void *, _DWORD *, int))(*(_DWORD *)v20 + 0xC))(v20, v115, 0x10 - v23);
  if ( v117 >= 0 )
    sub_8A75D0(
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
      v115,
      v117 & 0x3FFFFFFF,
      0x14);
  v24 = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]) - v18[5];
  v18[6] = v24;
  v18[7] = v24;
  v18[8] = v24;
  v18[9] = v24;
  v18[0xA] = v24;
  v25 = (char *)a2[1] + 0x60;
  v25[5] = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]);
  if ( v17 )
    v26 = 0xC * v110[0x13];
  else
    v26 = 0;
  (*(void (__thiscall **)(const void *, int, int))(*(_DWORD *)a2[7] + 0x18))(a2[7], v26, 1);
  v27 = a2[7];
  v28 = (*(int (__thiscall **)(const void *))(*(_DWORD *)v27 + 0x1C))(v27);
  v115 = v118;
  v117 = 0x80000020;
  for ( k = 0; k < 0x10; ++k )
    *((_BYTE *)v115 + k) = 0xFF;
  v30 = v28 & 0xF;
  v116 = 0x10;
  if ( v30 )
    (*(void (__thiscall **)(const void *, _DWORD *, int))(*(_DWORD *)v27 + 0xC))(v27, v115, 0x10 - v30);
  if ( v117 >= 0 )
    sub_8A75D0(
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
      v115,
      v117 & 0x3FFFFFFF,
      0x14);
  v31 = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]) - v25[5];
  v25[6] = v31;
  v25[7] = v31;
  v25[8] = v31;
  v25[9] = v31;
  v25[0xA] = v31;
  v32 = (const void *)v110[3];
  v33 = (unsigned int)a2[6] & 0x3FFFFFFF;
  if ( v33 < (int)v32 )
  {
    v34 = 2 * v33;
    if ( (int)v32 >= v34 )
      v34 = v110[3];
    sub_8A6E40(a2 + 4, v34, 8);
  }
  a2[5] = v32;
  v36 = (int)a2[0xD];
  v37 = a2 + 0xC;
  v108 = (int)a2[2];
  v35 = (char *)v108;
  v114 = (const char *)v36;
  if ( v108 >= v36 )
  {
    v112 = (int)a2[0xE];
    if ( v108 > (v112 & 0x3FFFFFFF) )
    {
      if ( v108 < 2 * (v112 & 0x3FFFFFFF) )
        v35 = (char *)(2 * (v112 & 0x3FFFFFFF));
      v119[0] = *v37;
      *v37 = 0;
      a2[0xD] = 0;
      a2[0xE] = (const void *)0x80000000;
      if ( (int)v35 > 0 )
        sub_8A6E40(a2 + 0xC, (int)v35 < 0 ? 0 : (unsigned int)v35, 0xC);
      v41 = *v37;
      if ( v36 > 0 )
      {
        v42 = v41;
        v43 = v119[0] + 1;
        v109 = v36;
        do
        {
          if ( v42 )
          {
            v44 = sub_8A7560(
                    *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
                    0xC * *v43,
                    0x14);
            *v42 = v44;
            v42[1] = *v43;
            v42[2] = *v43;
            v45 = *v43;
            if ( *v43 > 0 )
            {
              v46 = v43[0xFFFFFFFF] - (_DWORD)v44;
              v111 = (const char *)v46;
              v107 = v45;
              while ( 1 )
              {
                v47 = (_DWORD *)((char *)v44 + v46);
                *v44 = *v47;
                v44[1] = v47[1];
                v44[2] = v47[2];
                v44 += 3;
                if ( !--v107 )
                  break;
                v46 = (int)v111;
              }
              v36 = (int)v114;
            }
          }
          v42 += 3;
          v43 += 3;
          --v109;
        }
        while ( v109 );
      }
      a2[0xD] = (const void *)v36;
      if ( v36 > 0 )
      {
        v48 = TlsIndex;
        v49 = v119[0] + 2;
        v107 = v36;
        do
        {
          if ( *v49 >= 0 )
            sub_8A75D0(
              *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v48) + 0x19C),
              (_DWORD *)v49[0xFFFFFFFE],
              0xC * (*v49 & 0x3FFFFFFF),
              0x14);
          v49 += 3;
          --v107;
        }
        while ( v107 );
      }
      if ( v112 >= 0 )
        sub_8A75D0(
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
          v119[0],
          0xC * (v112 & 0x3FFFFFFF),
          0x14);
      v35 = (char *)v108;
    }
    if ( v36 < (int)v35 )
    {
      v50 = (char *)a2[0xC] + 0xC * v36;
      v51 = &v35[-v36];
      do
      {
        if ( v50 )
        {
          *v50 = 0;
          v50[1] = 0;
          v50[2] = 0x80000000;
        }
        v50 += 3;
        --v51;
      }
      while ( v51 );
    }
  }
  else
  {
    v38 = 0xC * v108;
    v39 = v36 - v108;
    do
    {
      v40 = *(_DWORD *)((char *)*v37 + v38 + 8);
      if ( v40 >= 0 )
      {
        sub_8A75D0(
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
          *(_DWORD **)((char *)*v37 + v38),
          0xC * (v40 & 0x3FFFFFFF),
          0x14);
        v35 = (char *)v108;
      }
      v38 += 0xC;
      --v39;
    }
    while ( v39 );
  }
  a2[0xD] = v35;
  v52 = (int)a2[0x10];
  v53 = a2 + 0xF;
  v108 = (int)a2[2];
  v111 = (const char *)v52;
  if ( v108 >= v52 )
  {
    v109 = (int)a2[0x11];
    if ( v108 > (v109 & 0x3FFFFFFF) )
    {
      v57 = 2 * (v109 & 0x3FFFFFFF);
      if ( v108 >= v57 )
        v57 = v108;
      v119[0] = *v53;
      *v53 = 0;
      a2[0x10] = 0;
      a2[0x11] = (const void *)0x80000000;
      if ( v57 > 0 )
        sub_8A6E40(a2 + 0xF, v57 < 0 ? 0 : v57, 0xC);
      v58 = *v53;
      if ( v52 > 0 )
      {
        v59 = v58;
        v60 = v119[0] + 1;
        v107 = v52;
        do
        {
          if ( v59 )
          {
            v61 = sub_8A7560(
                    *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
                    8 * *v60,
                    0x14);
            *v59 = v61;
            v59[1] = *v60;
            v59[2] = *v60;
            v62 = *v60;
            if ( (int)*v60 > 0 )
            {
              v63 = v60[0xFFFFFFFF] - (_DWORD)v61;
              do
              {
                *v61 = *(_DWORD *)((char *)v61 + v63);
                v61[1] = *(_DWORD *)((char *)v61 + v63 + 4);
                v61 += 2;
                --v62;
              }
              while ( v62 );
              v52 = (int)v111;
            }
          }
          v59 += 3;
          v60 += 3;
          --v107;
        }
        while ( v107 );
      }
      a2[0x10] = (const void *)v52;
      if ( v52 > 0 )
      {
        v64 = v119[0] + 2;
        v65 = v52;
        do
        {
          if ( *v64 >= 0 )
            sub_8A75D0(
              *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
              (_DWORD *)v64[0xFFFFFFFE],
              8 * *v64,
              0x14);
          v64 += 3;
          --v65;
        }
        while ( v65 );
      }
      if ( v109 >= 0 )
        sub_8A75D0(
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
          v119[0],
          0xC * (v109 & 0x3FFFFFFF),
          0x14);
    }
    if ( v52 < v108 )
    {
      v66 = (char *)a2[0xF] + 0xC * v52;
      v67 = v108 - v52;
      do
      {
        if ( v66 )
        {
          *v66 = 0;
          v66[1] = 0;
          v66[2] = 0x80000000;
        }
        v66 += 3;
        --v67;
      }
      while ( v67 );
    }
  }
  else
  {
    v54 = 0xC * v108;
    v55 = v52 - v108;
    do
    {
      v56 = *(_DWORD *)((char *)*v53 + v54 + 8);
      if ( v56 >= 0 )
        sub_8A75D0(
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
          *(_DWORD **)((char *)*v53 + v54),
          8 * v56,
          0x14);
      v54 += 0xC;
      --v55;
    }
    while ( v55 );
  }
  a2[0x10] = (const void *)v108;
  v68 = sub_940EF0(v110, off_B30594);
  v69 = (int)a2[2];
  v114 = v68;
  result = 3;
  v113 = 3;
  if ( v69 > 3 )
  {
    v108 = 0x24;
    v107 = 0x90;
    do
    {
      v71 = (char *)a2[1] + v107;
      v71[5] = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]);
      v72 = *a2;
      v120 = 0;
      v121 = 0;
      v122 = 0x80000000;
      v123 = 0;
      v124 = 0;
      v125 = 0x80000000;
      v126 = 0;
      v127 = 0;
      v128 = 0x80000000;
      v129 = 0;
      v130 = 0;
      v131 = 0x80000000;
      v132 = 0;
      if ( v72[8] || (const char *)v113 != v114 )
      {
        v77 = v110[3] <= 0;
        v112 = 0;
        if ( !v77 )
        {
          v109 = 0;
          do
          {
            v78 = v110[2];
            v79 = *(_DWORD *)(v78 + v109 + 0x10);
            v80 = (_DWORD *)(v109 + v78);
            if ( v79 == v113 )
            {
              v81 = (const char *)v80[1];
              v82 = (char *)a2[4];
              v133 = *v80;
              v111 = v81;
              v83 = 8 * v112;
              *(_DWORD *)&v82[v83] = v113;
              v84 = (char *)a2[4] + v83;
              *((_DWORD *)v84 + 1) = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]) - v71[5];
              if ( v111 )
                (*((void (__thiscall **)(const void **, const void *, int, const char *, char **))a2[8] + 2))(
                  a2 + 8,
                  a2[7],
                  v133,
                  v111,
                  &v120);
              else
                (*(void (__thiscall **)(const void *, _DWORD, _DWORD))(*(_DWORD *)a2[7] + 0xC))(a2[7], *v80, v80[5]);
            }
            v77 = ++v112 < v110[3];
            v109 += 0x18;
          }
          while ( v77 );
        }
      }
      else
      {
        v73 = v110;
        v74 = 0;
        if ( v110[3] > 0 )
        {
          v75 = v114;
          v76 = 0;
          do
          {
            if ( *(const char **)(v76 + v73[2] + 0x10) == v75 )
            {
              *((_DWORD *)a2[4] + 2 * v74) = 0xFFFFFFFF;
              *((_DWORD *)a2[4] + 2 * v74 + 1) = 0xFFFFFFFF;
            }
            ++v74;
            v76 += 0x18;
          }
          while ( v74 < v73[3] );
        }
      }
      for ( m = 0; m < v121; ++m )
      {
        *(_DWORD *)&v120[8 * m] -= v71[5];
        *(_DWORD *)&v120[8 * m + 4] -= v71[5];
      }
      v71[6] = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]) - v71[5];
      sub_9183A0(v119, (int)a2[7], *((_BYTE *)a2 + 0x48));
      sub_9181D0((int)v119, v120, 4, 2 * v121);
      sub_918180(v119);
      v86 = a2[7];
      v87 = (*(int (__thiscall **)(const void *))(*(_DWORD *)v86 + 0x1C))(v86);
      v115 = v118;
      v117 = 0x80000020;
      for ( n = 0; n < 0x10; ++n )
        *((_BYTE *)v115 + n) = 0xFF;
      v89 = v87 & 0xF;
      v116 = 0x10;
      if ( v89 )
        (*(void (__thiscall **)(const void *, _DWORD *, int))(*(_DWORD *)v86 + 0xC))(v86, v115, 0x10 - v89);
      if ( v117 >= 0 )
        sub_8A75D0(
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
          v115,
          v117 & 0x3FFFFFFF,
          0x14);
      v71[7] = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]) - v71[5];
      (*(void (__thiscall **)(const void *, int, int))(*(_DWORD *)a2[7] + 0x18))(a2[7], 0xC * v124, 1);
      v90 = (int *)((char *)a2[0xC] + v108);
      v91 = *v90;
      *v90 = v123;
      v123 = v91;
      v92 = v90[1];
      v90[1] = v124;
      v124 = v92;
      v93 = v90[2];
      v90[2] = v125;
      v94 = a2[7];
      v125 = v93;
      v95 = (*(int (__thiscall **)(const void *))(*(_DWORD *)v94 + 0x1C))(v94);
      v134 = &v137;
      v136 = 0x80000020;
      for ( ii = 0; ii < 0x10; ++ii )
        v134[ii] = 0xFF;
      v97 = v95 & 0xF;
      v135 = 0x10;
      if ( v97 )
        (*(void (__thiscall **)(const void *, char *, int))(*(_DWORD *)v94 + 0xC))(v94, v134, 0x10 - v97);
      if ( v136 >= 0 )
        sub_8A75D0(
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
          v134,
          v136 & 0x3FFFFFFF,
          0x14);
      v71[8] = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]) - v71[5];
      (*(void (__thiscall **)(const void *, int, int))(*(_DWORD *)a2[7] + 0x18))(a2[7], 0xC * v127, 1);
      v98 = (int *)((char *)a2[0xF] + v108);
      v99 = *v98;
      *v98 = v126;
      v126 = v99;
      v100 = v98[1];
      v98[1] = v127;
      v127 = v100;
      v101 = v98[2];
      v98[2] = v128;
      v102 = a2[7];
      v128 = v101;
      v103 = (*(int (__thiscall **)(const void *))(*(_DWORD *)v102 + 0x1C))(v102);
      v138 = &v141;
      v140 = 0x80000020;
      for ( jj = 0; jj < 0x10; ++jj )
        v138[jj] = 0xFF;
      v105 = v103 & 0xF;
      v139 = 0x10;
      if ( v105 )
        (*(void (__thiscall **)(const void *, char *, int))(*(_DWORD *)v102 + 0xC))(v102, v138, 0x10 - v105);
      if ( v140 >= 0 )
        sub_8A75D0(
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
          v138,
          v140 & 0x3FFFFFFF,
          0x14);
      v71[0xA] = (*(int (__thiscall **)(const void *))(*(_DWORD *)a2[7] + 0x1C))(a2[7]) - v71[5];
      sub_941400(&v120);
      result = v113 + 1;
      v77 = ++v113 < (int)a2[2];
      v107 += 0x30;
      v108 += 0xC;
    }
    while ( v77 );
  }
  return result;
}
