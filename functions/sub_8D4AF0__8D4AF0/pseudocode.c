int __cdecl sub_8D4AF0(signed int *a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ebp
  char v11; // cl
  int v12; // eax
  int v13; // eax
  int v14; // esi
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v16; // eax
  _DWORD *v17; // ecx
  _DWORD *v18; // edx
  char *v19; // edi
  _DWORD *v20; // eax
  _DWORD *v21; // ecx
  int v22; // edx
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // edx
  _DWORD *v26; // ecx
  unsigned __int64 v27; // rax
  _DWORD *v28; // ecx
  float v29; // eax
  int v30; // edx
  _BYTE *v31; // eax
  float v32; // ecx
  int v33; // esi
  int v34; // edx
  int v35; // eax
  _BYTE *v36; // eax
  float v37; // ecx
  int v38; // eax
  char v39; // bl
  int v40; // edi
  _DWORD *v41; // esi
  int v42; // eax
  _DWORD *v43; // ecx
  unsigned __int64 v44; // rax
  int v45; // eax
  _DWORD *v46; // ecx
  unsigned __int64 v47; // rax
  int v48; // eax
  int v49; // ecx
  int v50; // edx
  int v51; // eax
  _DWORD *v52; // ecx
  int v53; // eax
  int m; // esi
  int v55; // ecx
  int v56; // eax
  int v57; // eax
  int v58; // eax
  _DWORD *v59; // ebp
  _DWORD *v60; // ecx
  unsigned __int64 v61; // rax
  _DWORD *v62; // ecx
  unsigned __int64 v63; // rax
  int n; // esi
  int v65; // eax
  bool v66; // sf
  _DWORD *v67; // ecx
  _DWORD *v68; // eax
  bool v69; // zf
  int result; // eax
  int v71; // ecx
  int v72; // eax
  _DWORD *v73; // ecx
  unsigned __int64 v74; // rax
  float *v75; // eax
  float *v76; // eax
  int v77; // eax
  _DWORD *v78; // ecx
  unsigned __int64 v79; // rax
  signed int v80; // esi
  _DWORD *v82; // ebx
  _DWORD *v83; // esi
  int v84; // ebx
  _DWORD *v85; // ecx
  unsigned __int64 v86; // rax
  _DWORD *v87; // ecx
  unsigned __int64 v88; // rax
  int k; // esi
  int v90; // eax
  _DWORD *v91; // ecx
  _DWORD *v92; // eax
  int v93; // eax
  _DWORD *v94; // ecx
  unsigned __int64 v95; // rax
  int i; // esi
  int v97; // eax
  _DWORD *v98; // ecx
  unsigned __int64 v99; // rax
  int j; // esi
  _DWORD *v101; // ecx
  _DWORD *v102; // eax
  int v103; // [esp+10h] [ebp-69Ch]
  _DWORD *v104; // [esp+14h] [ebp-698h] BYREF
  int v105; // [esp+18h] [ebp-694h]
  signed int v106; // [esp+1Ch] [ebp-690h]
  _DWORD *v107; // [esp+20h] [ebp-68Ch]
  int v108; // [esp+24h] [ebp-688h] BYREF
  int v109; // [esp+28h] [ebp-684h] BYREF
  int v110; // [esp+2Ch] [ebp-680h] BYREF
  int v111; // [esp+30h] [ebp-67Ch]
  int *v112; // [esp+34h] [ebp-678h] BYREF
  int v113; // [esp+38h] [ebp-674h]
  unsigned int v114; // [esp+3Ch] [ebp-670h]
  int v115; // [esp+40h] [ebp-66Ch] BYREF
  int v116; // [esp+44h] [ebp-668h]
  char v117; // [esp+4Bh] [ebp-661h]
  int v118; // [esp+4Ch] [ebp-660h] BYREF
  int v119[3]; // [esp+50h] [ebp-65Ch] BYREF
  int v120; // [esp+5Ch] [ebp-650h]
  _DWORD v121[7]; // [esp+60h] [ebp-64Ch] BYREF
  int v122; // [esp+7Ch] [ebp-630h] BYREF
  int v123; // [esp+80h] [ebp-62Ch]
  int v124; // [esp+84h] [ebp-628h]
  char v125; // [esp+88h] [ebp-624h] BYREF
  int v126; // [esp+188h] [ebp-524h] BYREF
  void *v127; // [esp+18Ch] [ebp-520h]
  int v128; // [esp+190h] [ebp-51Ch]
  char v129; // [esp+194h] [ebp-518h] BYREF
  int v130; // [esp+294h] [ebp-418h] BYREF
  int v131; // [esp+298h] [ebp-414h]
  int v132; // [esp+29Ch] [ebp-410h]
  char v133; // [esp+2A0h] [ebp-40Ch] BYREF
  char *v134; // [esp+3A0h] [ebp-30Ch] BYREF
  int v135; // [esp+3A4h] [ebp-308h]
  int v136; // [esp+3A8h] [ebp-304h]
  char v137; // [esp+3ACh] [ebp-300h] BYREF

  v7 = *(_DWORD *)(a3 + 8);
  v121[0] = *(_DWORD *)(a3 + 4) + 0x14;
  v121[3] = a3 + 0x20;
  v121[4] = a3 + 0x10;
  v121[1] = v7 + 0x14;
  v121[5] = *(_DWORD *)(a3 + 0xC);
  v121[6] = 0;
  sub_8DC890(a5, a5, (int)v121);
  v8 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(v8 + 0x98) )
    sub_8DC010(v8, v8, (int)v121);
  v9 = *(_DWORD *)(a3 + 8);
  if ( *(_DWORD *)(v9 + 0x98) )
    sub_8DC010(v9, v9, (int)v121);
  v10 = *(_DWORD *)(a3 + 4);
  v11 = *(_BYTE *)(v10 + 0x91);
  v12 = *(_DWORD *)(a3 + 8);
  v113 = v12;
  if ( v11 )
    v13 = *(_DWORD *)(v12 + 0x54);
  else
    v13 = *(_DWORD *)(v10 + 0x54);
  v14 = *(_DWORD *)(v13 + 0x38);
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v116 = v13;
  v104 = 0;
  v105 = 0;
  v16 = ThreadLocalStoragePointer[TlsIndex];
  v17 = *(_DWORD **)(v16 + 0x19C);
  v103 = v16;
  v106 = 0x80000000;
  v18 = (_DWORD *)v17[8];
  v19 = (char *)v18 + ((4 * v14 + 0x10) & 0xFFFFFFF0);
  if ( (unsigned int)v19 > v17[0xB] )
  {
    v20 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v17 + 0xC))(v17, (4 * v14 + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v17[8] = v19;
    v20 = v18;
  }
  v21 = NtCurrentTeb()->ThreadLocalStoragePointer;
  v22 = TlsIndex;
  v104 = v20;
  v107 = v20;
  v134 = &v137;
  v135 = 0;
  v115 = 0;
  v23 = v21[v22];
  v24 = *(_DWORD *)(v23 + 0x1A4);
  v25 = *(_DWORD *)(v23 + 0x1A8);
  v106 = v14 | 0x80000000;
  v136 = 0x80000040;
  if ( v24 < v25 )
  {
    v26 = *(_DWORD **)(v103 + 0x1A4);
    *v26 = "St2BodyCollide";
    v27 = __rdtsc();
    v111 = v27;
    v26[1] = v27;
    *(_DWORD *)(v103 + 0x1A4) = v26 + 3;
  }
  v28 = a7;
  if ( !*(_BYTE *)(v10 + 0x91) )
  {
    v104[v105] = v10;
    v29 = *(float *)a3;
    ++v105;
    v30 = *(unsigned __int16 *)(v10 + 0x8C);
    v111 = LODWORD(v29);
    v31 = (_BYTE *)(v30 + *a7);
    if ( !*v31 )
    {
      v32 = *(float *)&v111;
      *v31 = 1;
      sub_8DD150(*(_DWORD *)(v10 + 0x50) + 0x50, v32, *(_DWORD *)(v10 + 0x50) + 0x10);
      v28 = a7;
    }
    *(_BYTE *)(*(unsigned __int16 *)(v10 + 0x8C) + *v28) = 2;
  }
  v33 = v113;
  if ( !*(_BYTE *)(v113 + 0x91) )
  {
    v104[v105] = v113;
    v34 = *(_DWORD *)a3;
    ++v105;
    v35 = *(unsigned __int16 *)(v33 + 0x8C);
    v111 = v34;
    v36 = (_BYTE *)(*v28 + v35);
    if ( !*v36 )
    {
      v37 = *(float *)&v111;
      *v36 = 1;
      sub_8DD150(*(_DWORD *)(v33 + 0x50) + 0x50, v37, *(_DWORD *)(v33 + 0x50) + 0x10);
      v28 = a7;
    }
    *(_BYTE *)(*(unsigned __int16 *)(v33 + 0x8C) + *v28) = 2;
  }
  v126 = (int)&v129;
  v127 = 0;
  v128 = 0x80000040;
  sub_8D2F10(a5, a3, &v126);
  v108 = *(_DWORD *)v126;
  if ( (int)v127 <= 1 )
    v109 = 0;
  else
    v109 = *(_DWORD *)(v126 + 4);
  TESTexture::ClearComponentReferences(v127);
  sub_923CE0((int *)a2, (unsigned int)v104, v105);
  v122 = (int)&v125;
  v130 = (int)&v133;
  v38 = a1[4];
  v39 = 1;
  v124 = 0x80000040;
  v132 = 0x80000040;
  v40 = a6;
  v117 = 1;
  v123 = 0;
  v131 = 0;
  v111 = v38;
  if ( v38 <= 0 )
  {
LABEL_92:
    v77 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
    if ( *(_DWORD *)(v77 + 0x1A4) < *(_DWORD *)(v77 + 0x1A8) )
    {
      v78 = *(_DWORD **)(v103 + 0x1A4);
      *v78 = "StForcedConstr";
      v79 = __rdtsc();
      v112 = (int *)v79;
      v78[1] = v79;
      *(_DWORD *)(v103 + 0x1A4) = v78 + 3;
    }
    if ( *(_DWORD *)(a2 + 0x34) == *(_DWORD *)(a2 + 0x3C) )
      goto LABEL_99;
    sub_8D32C0(a2, &v104);
    if ( *sub_8D4020((_BYTE *)&v110 + 3, (int *)a2, &v134, *(_DWORD **)(a5 + 0x74)) )
      goto LABEL_99;
    v80 = a1[5];
    while ( v80-- )
    {
      sub_9202A0(*(_DWORD *)(a2 + 4), *(float **)(a2 + 0x34), *(_DWORD *)(a2 + 0xC), *(float **)(a2 + 0x1C));
      sub_8D32C0(a2, &v104);
      if ( *sub_8D4020((_BYTE *)&v110 + 3, (int *)a2, &v134, *(_DWORD **)(a5 + 0x74)) )
        goto LABEL_99;
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x10))(a4) != 2 )
    {
LABEL_99:
      if ( *(_DWORD *)(v40 + 4) )
      {
        v82 = a7;
      }
      else
      {
        v112 = &v108;
        v113 = 1;
        v114 = 0x80000001;
        sub_8E6720((const void **)v40, 0, &v112);
        v82 = a7;
        *(_BYTE *)(*(unsigned __int16 *)(**(_DWORD **)v40 + 0x8C) + *a7) = 8;
        if ( v109 )
        {
          v112 = &v109;
          v113 = 1;
          v114 = 0x80000001;
          sub_8E6720((const void **)v40, 1, &v112);
          *(_BYTE *)(*(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)v40 + 4) + 0x8C) + *a7) = 8;
        }
      }
      v93 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      if ( *(_DWORD *)(v93 + 0x1A4) < *(_DWORD *)(v93 + 0x1A8) )
      {
        v94 = *(_DWORD **)(v103 + 0x1A4);
        *v94 = "StIntegMotions";
        v95 = __rdtsc();
        v112 = (int *)v95;
        v94[1] = v95;
        *(_DWORD *)(v103 + 0x1A4) = v94 + 3;
      }
      for ( i = 0; i < *(_DWORD *)(v40 + 4); ++i )
        sub_8DD530(*(float *)a3, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v40 + 4 * i) + 0x50) + 0x10);
      sub_923C80(*(_DWORD *)a2, *(_DWORD *)v40, *(_DWORD *)(v40 + 4), *(_DWORD *)(a2 + 0xC));
      sub_8D41A0(v116, v82);
      v97 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      if ( *(_DWORD *)(v97 + 0x1A4) < *(_DWORD *)(v97 + 0x1A8) )
      {
        v98 = *(_DWORD **)(v103 + 0x1A4);
        *v98 = "StInvalidTIMs";
        v99 = __rdtsc();
        v112 = (int *)v99;
        v98[1] = v99;
        *(_DWORD *)(v103 + 0x1A4) = v98 + 3;
      }
      for ( j = 0; j < *(_DWORD *)(v40 + 4); ++j )
        sub_8E77C0(*(_DWORD *)(*(_DWORD *)v40 + 4 * j), *(_DWORD **)(a5 + 0x74));
      if ( v132 >= 0 )
        sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v130, 4 * v132, 0x14);
      if ( v124 >= 0 )
        sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v122, 4 * v124, 0x14);
      if ( v128 >= 0 )
        sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v126, 4 * v128, 0x14);
      if ( v136 >= 0 )
        sub_8A75D0(*(_DWORD *)(v103 + 0x19C), v134, 0xC * (v136 & 0x3FFFFFFF), 0x14);
      v101 = *(_DWORD **)(v103 + 0x19C);
      v102 = v107;
      v69 = v107 == (_DWORD *)v101[0xA];
      v101[8] = v107;
      if ( v69 )
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v101 + 0x10))(v101, v102);
      result = v106;
      if ( v106 < 0 )
        return result;
      v71 = *(_DWORD *)(v103 + 0x19C);
    }
    else
    {
      v83 = NtCurrentTeb()->ThreadLocalStoragePointer;
      v84 = TlsIndex;
      if ( *(_DWORD *)(v83[TlsIndex] + 0x1A4) < *(_DWORD *)(v83[TlsIndex] + 0x1A8) )
      {
        v85 = *(_DWORD **)(v103 + 0x1A4);
        *v85 = "StBackstep";
        v86 = __rdtsc();
        v112 = (int *)v86;
        v85[1] = v86;
        *(_DWORD *)(v103 + 0x1A4) = v85 + 3;
      }
      sub_8D40E0(*(float *)a3, (_DWORD *)v116, a7, v40);
      if ( *(_DWORD *)(v83[v84] + 0x1A4) < *(_DWORD *)(v83[v84] + 0x1A8) )
      {
        v87 = *(_DWORD **)(v103 + 0x1A4);
        *v87 = "StInvalidTIMs";
        v88 = __rdtsc();
        v112 = (int *)v88;
        v87[1] = v88;
        *(_DWORD *)(v103 + 0x1A4) = v87 + 3;
      }
      for ( k = 0; k < *(_DWORD *)(v40 + 4); ++k )
        sub_8E77C0(*(_DWORD *)(*(_DWORD *)v40 + 4 * k), *(_DWORD **)(a5 + 0x74));
      v90 = v132;
      v66 = v132 < 0;
      *(_DWORD *)(v40 + 4) = 0;
      if ( !v66 )
        sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v130, 4 * v90, 0x14);
      if ( v124 >= 0 )
        sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v122, 4 * v124, 0x14);
      if ( v128 >= 0 )
        sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v126, 4 * v128, 0x14);
      if ( v136 >= 0 )
        sub_8A75D0(*(_DWORD *)(v103 + 0x19C), v134, 0xC * (v136 & 0x3FFFFFFF), 0x14);
      v91 = *(_DWORD **)(v103 + 0x19C);
      v92 = v107;
      v69 = v107 == (_DWORD *)v91[0xA];
      v91[8] = v107;
      if ( v69 )
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v91 + 0x10))(v91, v92);
      result = v106;
      if ( v106 < 0 )
        return result;
      v71 = *(_DWORD *)(v103 + 0x19C);
    }
    return sub_8A75D0(v71, v104, 4 * result, 0x14);
  }
  v41 = a7;
  while ( 1 )
  {
    if ( v117 )
    {
      v42 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      v120 = v42;
      while ( 1 )
      {
        if ( *(_DWORD *)(v42 + 0x1A4) < *(_DWORD *)(v42 + 0x1A8) )
        {
          v43 = *(_DWORD **)(v103 + 0x1A4);
          *v43 = "StExpandSystem";
          v44 = __rdtsc();
          v119[2] = v44;
          v43[1] = v44;
          *(_DWORD *)(v103 + 0x1A4) = v43 + 3;
        }
        v131 = 0;
        v123 = 0;
        v119[0] = v115;
        if ( !v39 )
        {
          if ( v115 >= v135 )
            goto LABEL_64;
          v127 = 0;
          sub_8D39E0((int *)a2, *(_DWORD **)(a5 + 0x74), (int *)&v134, v119, *a1, v41, &v104, (const void **)&v126);
          if ( !v127 )
            goto LABEL_85;
        }
        sub_8D3CF0(*(int **)(a5 + 0x74), *a1, *(float *)a3, &v126, v41, (int)&v122, (int)&v130);
        v45 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
        if ( *(_DWORD *)(v45 + 0x1A4) < *(_DWORD *)(v45 + 0x1A8) )
        {
          v46 = *(_DWORD **)(v103 + 0x1A4);
          *v46 = "StbuildAcc+Jac";
          v47 = __rdtsc();
          v119[1] = v47;
          v46[1] = v47;
          *(_DWORD *)(v103 + 0x1A4) = v46 + 3;
        }
        if ( !*sub_923D70((_BYTE *)&v118 + 3, (_DWORD *)a2, v122, v123)
          || !*sub_923F40((_BYTE *)&v110 + 3, (_DWORD *)a2, v130, v131)
          || a1[3] < v135 + v131 )
        {
          break;
        }
        v48 = *(_DWORD *)(v40 + 4);
        v49 = v123;
        if ( a1[1] < v105 + v48 + v123 || a1[2] < (int)v127 + v48 )
          goto LABEL_58;
        sub_923CE0((int *)a2, v122, v123);
        sub_923DD0(a2, v130, v131, (int)&v134);
        v50 = v105;
        v51 = 0;
        v115 = v119[0];
        if ( v105 > 0 )
        {
          v52 = v104;
          do
          {
            if ( *(_BYTE *)(*(unsigned __int16 *)(v52[v51] + 0x8C) + *v41) == 8 )
            {
              v105 = v50 - 1;
              v52[v51] = v52[v50 - 1];
              v50 = v105;
              v52 = v104;
              --v51;
            }
            ++v51;
          }
          while ( v51 < v50 );
          v40 = a6;
        }
        sub_8E6720((const void **)v40, *(_DWORD *)(v40 + 4), &v126);
        if ( (v106 & 0x3FFFFFFF) < v123 + v105 )
        {
          v53 = 2 * (v106 & 0x3FFFFFFF);
          if ( v123 + v105 >= v53 )
            v53 = v123 + v105;
          sub_8A6E40((const void **)&v104, v53, 4);
        }
        for ( m = 0; m < v123; ++m )
        {
          v55 = *(_DWORD *)(*(_DWORD *)(v122 + 4 * m) + 0x50);
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v55 + 8))(v55) != 6 )
            v104[v105++] = *(_DWORD *)(v122 + 4 * m);
        }
        sub_8D3140(&v134, &v115, v131);
        sub_8D3200((int *)&v134, &v115, a7);
        sub_923C00(a2, 1);
        if ( !v131 && !v123 )
        {
          v41 = a7;
          goto LABEL_85;
        }
        v41 = a7;
        v42 = v120;
        v39 = 0;
      }
      v49 = v123;
LABEL_58:
      v56 = 0;
      if ( (int)v127 > 0 )
      {
        do
          *(_BYTE *)(*(unsigned __int16 *)(*(_DWORD *)(v126 + 4 * v56++) + 0x8C) + *v41) = 2;
        while ( v56 < (int)v127 );
        v49 = v123;
      }
      v57 = 0;
      if ( v49 > 0 )
      {
        do
          *(_BYTE *)(*(unsigned __int16 *)(*(_DWORD *)(v122 + 4 * v57++) + 0x8C) + *v41) = 1;
        while ( v57 < v123 );
      }
      v58 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x14))(a4);
      if ( v58 == 1 )
      {
LABEL_64:
        v117 = 0;
        goto LABEL_85;
      }
      if ( v58 == 2 )
        break;
    }
LABEL_85:
    v72 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
    v39 = 0;
    if ( *(_DWORD *)(v72 + 0x1A4) < *(_DWORD *)(v72 + 0x1A8) )
    {
      v73 = *(_DWORD **)(v103 + 0x1A4);
      *v73 = "StSolver";
      v74 = __rdtsc();
      v112 = (int *)v74;
      v73[1] = v74;
      *(_DWORD *)(v103 + 0x1A4) = v73 + 3;
    }
    v75 = *(float **)(a2 + 0x24);
    if ( v75 != *(float **)(a2 + 0x2C) )
      sub_9202A0(*(_DWORD *)(a2 + 4), v75, *(_DWORD *)(a2 + 0xC), *(float **)(a2 + 0x1C));
    v76 = *(float **)(a2 + 0x34);
    if ( v76 != *(float **)(a2 + 0x3C) )
      sub_9202A0(*(_DWORD *)(a2 + 4), v76, *(_DWORD *)(a2 + 0xC), *(float **)(a2 + 0x1C));
    if ( --v111 <= 0 )
      goto LABEL_92;
  }
  v59 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( *(_DWORD *)(v59[TlsIndex] + 0x1A4) < *(_DWORD *)(v59[TlsIndex] + 0x1A8) )
  {
    v60 = *(_DWORD **)(v103 + 0x1A4);
    *v60 = "StBackstep";
    v61 = __rdtsc();
    v112 = (int *)v61;
    v60[1] = v61;
    *(_DWORD *)(v103 + 0x1A4) = v60 + 3;
  }
  sub_8D40E0(*(float *)a3, (_DWORD *)v116, v41, v40);
  if ( *(_DWORD *)(v59[TlsIndex] + 0x1A4) < *(_DWORD *)(v59[TlsIndex] + 0x1A8) )
  {
    v62 = *(_DWORD **)(v103 + 0x1A4);
    *v62 = "StInvalidTIMs";
    v63 = __rdtsc();
    v112 = (int *)v63;
    v62[1] = v63;
    *(_DWORD *)(v103 + 0x1A4) = v62 + 3;
  }
  for ( n = 0; n < *(_DWORD *)(v40 + 4); ++n )
    sub_8E77C0(*(_DWORD *)(*(_DWORD *)v40 + 4 * n), *(_DWORD **)(a5 + 0x74));
  v65 = v132;
  v66 = v132 < 0;
  *(_DWORD *)(v40 + 4) = 0;
  if ( !v66 )
    sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v130, 4 * v65, 0x14);
  if ( v124 >= 0 )
    sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v122, 4 * v124, 0x14);
  if ( v128 >= 0 )
    sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v126, 4 * v128, 0x14);
  if ( v136 >= 0 )
    sub_8A75D0(*(_DWORD *)(v103 + 0x19C), v134, 0xC * (v136 & 0x3FFFFFFF), 0x14);
  v67 = *(_DWORD **)(v103 + 0x19C);
  v68 = v107;
  v69 = v107 == (_DWORD *)v67[0xA];
  v67[8] = v107;
  if ( v69 )
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v67 + 0x10))(v67, v68);
  result = v106;
  if ( v106 >= 0 )
  {
    v71 = *(_DWORD *)(v103 + 0x19C);
    return sub_8A75D0(v71, v104, 4 * result, 0x14);
  }
  return result;
}
