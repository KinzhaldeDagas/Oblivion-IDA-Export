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

  v7 = *(_DWORD *)(a3 + 8); /*0x8d4b01*/
  v121[0] = *(_DWORD *)(a3 + 4) + 0x14; /*0x8d4b09*/
  v121[3] = a3 + 0x20; /*0x8d4b13*/
  v121[4] = a3 + 0x10; /*0x8d4b1f*/
  v121[1] = v7 + 0x14; /*0x8d4b2a*/
  v121[5] = *(_DWORD *)(a3 + 0xC); /*0x8d4b33*/
  v121[6] = 0; /*0x8d4b37*/
  sub_8DC890(a5, a5, (int)v121); /*0x8d4b42*/
  v8 = *(_DWORD *)(a3 + 4); /*0x8d4b47*/
  if ( *(_DWORD *)(v8 + 0x98) ) /*0x8d4b4a*/
    sub_8DC010(v8, v8, (int)v121); /*0x8d4b5d*/
  v9 = *(_DWORD *)(a3 + 8); /*0x8d4b65*/
  if ( *(_DWORD *)(v9 + 0x98) ) /*0x8d4b68*/
    sub_8DC010(v9, v9, (int)v121); /*0x8d4b78*/
  v10 = *(_DWORD *)(a3 + 4); /*0x8d4b80*/
  v11 = *(_BYTE *)(v10 + 0x91); /*0x8d4b83*/
  v12 = *(_DWORD *)(a3 + 8); /*0x8d4b8b*/
  v113 = v12; /*0x8d4b8e*/
  if ( v11 ) /*0x8d4b92*/
    v13 = *(_DWORD *)(v12 + 0x54); /*0x8d4b99*/
  else
    v13 = *(_DWORD *)(v10 + 0x54); /*0x8d4b94*/
  v14 = *(_DWORD *)(v13 + 0x38); /*0x8d4b9c*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d4b9f*/
  v116 = v13; /*0x8d4ba6*/
  v104 = 0; /*0x8d4bac*/
  v105 = 0; /*0x8d4bb0*/
  v16 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d4bb9*/
  v17 = *(_DWORD **)(v16 + 0x19C); /*0x8d4bbc*/
  v103 = v16; /*0x8d4bc2*/
  v106 = 0x80000000; /*0x8d4bc6*/
  v18 = (_DWORD *)v17[8]; /*0x8d4bce*/
  v19 = (char *)v18 + ((4 * v14 + 0x10) & 0xFFFFFFF0); /*0x8d4bdb*/
  if ( (unsigned int)v19 > v17[0xB] ) /*0x8d4be1*/
  {
    v20 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v17 + 0xC))(v17, (4 * v14 + 0x10) & 0xFFFFFFF0); /*0x8d4bed*/
  }
  else
  {
    v17[8] = v19; /*0x8d4be3*/
    v20 = v18; /*0x8d4be6*/
  }
  v21 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d4bf0*/
  v22 = MEMORY[0xBA9DE4]; /*0x8d4bf7*/
  v104 = v20; /*0x8d4bfd*/
  v107 = v20; /*0x8d4c01*/
  v134 = &v137; /*0x8d4c0c*/
  v135 = 0; /*0x8d4c15*/
  v115 = 0; /*0x8d4c1c*/
  v23 = v21[v22]; /*0x8d4c20*/
  v24 = *(_DWORD *)(v23 + 0x1A4); /*0x8d4c23*/
  v25 = *(_DWORD *)(v23 + 0x1A8); /*0x8d4c29*/
  v106 = v14 | 0x80000000; /*0x8d4c3c*/
  v136 = 0x80000040; /*0x8d4c40*/
  if ( v24 < v25 ) /*0x8d4c47*/
  {
    v26 = *(_DWORD **)(v103 + 0x1A4); /*0x8d4c4d*/
    *v26 = "St2BodyCollide"; /*0x8d4c53*/
    v27 = __rdtsc(); /*0x8d4c59*/
    v111 = v27; /*0x8d4c5b*/
    v26[1] = v27; /*0x8d4c63*/
    *(_DWORD *)(v103 + 0x1A4) = v26 + 3; /*0x8d4c69*/
  }
  v28 = a7; /*0x8d4c77*/
  if ( !*(_BYTE *)(v10 + 0x91) ) /*0x8d4c6f*/
  {
    v104[v105] = v10; /*0x8d4c88*/
    v29 = *(float *)a3; /*0x8d4c8f*/
    ++v105; /*0x8d4c92*/
    v30 = *(unsigned __int16 *)(v10 + 0x8C); /*0x8d4c96*/
    v111 = LODWORD(v29); /*0x8d4c9d*/
    v31 = (_BYTE *)(v30 + *a7); /*0x8d4ca3*/
    if ( !*v31 ) /*0x8d4ca5*/
    {
      v32 = *(float *)&v111; /*0x8d4caa*/
      *v31 = 1; /*0x8d4cae*/
      sub_8DD150((__m128 *)(*(_DWORD *)(v10 + 0x50) + 0x50), v32, (__m128 *)(*(_DWORD *)(v10 + 0x50) + 0x10)); /*0x8d4cbd*/
      v28 = a7; /*0x8d4cc2*/
    }
    *(_BYTE *)(*(unsigned __int16 *)(v10 + 0x8C) + *v28) = 2; /*0x8d4cd5*/
  }
  v33 = v113; /*0x8d4cd9*/
  if ( !*(_BYTE *)(v113 + 0x91) ) /*0x8d4cdd*/
  {
    v104[v105] = v113; /*0x8d4cef*/
    v34 = *(_DWORD *)a3; /*0x8d4cf6*/
    ++v105; /*0x8d4cf9*/
    v35 = *(unsigned __int16 *)(v33 + 0x8C); /*0x8d4cfd*/
    v111 = v34; /*0x8d4d04*/
    v36 = (_BYTE *)(*v28 + v35); /*0x8d4d0a*/
    if ( !*v36 ) /*0x8d4d0c*/
    {
      v37 = *(float *)&v111; /*0x8d4d11*/
      *v36 = 1; /*0x8d4d15*/
      sub_8DD150((__m128 *)(*(_DWORD *)(v33 + 0x50) + 0x50), v37, (__m128 *)(*(_DWORD *)(v33 + 0x50) + 0x10)); /*0x8d4d24*/
      v28 = a7; /*0x8d4d29*/
    }
    *(_BYTE *)(*(unsigned __int16 *)(v33 + 0x8C) + *v28) = 2; /*0x8d4d3c*/
  }
  v126 = (int)&v129; /*0x8d4d5a*/
  v127 = 0; /*0x8d4d61*/
  v128 = 0x80000040; /*0x8d4d68*/
  sub_8D2F10(a5, a3, &v126); /*0x8d4d6f*/
  v108 = *(_DWORD *)v126; /*0x8d4d7d*/
  if ( (int)v127 <= 1 ) /*0x8d4d8e*/
    v109 = 0; /*0x8d4d99*/
  else
    v109 = *(_DWORD *)(v126 + 4); /*0x8d4d93*/
  Shared_NoOpVirtual_60D0A0(v127); /*0x8d4d9d*/
  sub_923CE0((int *)a2, (unsigned int)v104, v105); /*0x8d4db4*/
  v122 = (int)&v125; /*0x8d4dc7*/
  v130 = (int)&v133; /*0x8d4dd7*/
  v38 = a1[4]; /*0x8d4dde*/
  v39 = 1; /*0x8d4de6*/
  v124 = 0x80000040; /*0x8d4de8*/
  v132 = 0x80000040; /*0x8d4def*/
  v40 = a6; /*0x8d4df6*/
  v117 = 1; /*0x8d4dfd*/
  v123 = 0; /*0x8d4e01*/
  v131 = 0; /*0x8d4e08*/
  v111 = v38; /*0x8d4e0f*/
  if ( v38 <= 0 ) /*0x8d4e13*/
  {
LABEL_92:
    v77 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8d543f*/
    if ( *(_DWORD *)(v77 + 0x1A4) < *(_DWORD *)(v77 + 0x1A8) ) /*0x8d545b*/
    {
      v78 = *(_DWORD **)(v103 + 0x1A4); /*0x8d5461*/
      *v78 = "StForcedConstr"; /*0x8d5467*/
      v79 = __rdtsc(); /*0x8d546d*/
      v112 = (int *)v79; /*0x8d546f*/
      v78[1] = v79; /*0x8d5477*/
      *(_DWORD *)(v103 + 0x1A4) = v78 + 3; /*0x8d547d*/
    }
    if ( *(_DWORD *)(a2 + 0x34) == *(_DWORD *)(a2 + 0x3C) ) /*0x8d5489*/
      goto LABEL_99; /*0x8d5489*/
    sub_8D32C0(a2, &v104); /*0x8d5495*/
    if ( *sub_8D4020((_BYTE *)&v110 + 3, (int *)a2, &v134, *(_DWORD **)(a5 + 0x74)) ) /*0x8d54b8*/
      goto LABEL_99; /*0x8d54b8*/
    v80 = a1[5]; /*0x8d54c8*/
    while ( v80-- ) /*0x8d54d0*/
    {
      sub_9202A0(*(_DWORD *)(a2 + 4), *(float **)(a2 + 0x34), *(_DWORD *)(a2 + 0xC), *(float **)(a2 + 0x1C)); /*0x8d54eb*/
      sub_8D32C0(a2, &v104); /*0x8d54f6*/
      if ( *sub_8D4020((_BYTE *)&v110 + 3, (int *)a2, &v134, *(_DWORD **)(a5 + 0x74)) ) /*0x8d5519*/
        goto LABEL_99; /*0x8d5520*/
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x10))(a4) != 2 ) /*0x8d55c8*/
    {
LABEL_99:
      if ( *(_DWORD *)(v40 + 4) ) /*0x8d5522*/
      {
        v82 = a7; /*0x8d576b*/
      }
      else
      {
        v112 = &v108; /*0x8d5536*/
        v113 = 1; /*0x8d5543*/
        v114 = 0x80000001; /*0x8d554b*/
        sub_8E6720((const void **)v40, 0, &v112); /*0x8d554f*/
        v82 = a7; /*0x8d555f*/
        *(_BYTE *)(*(unsigned __int16 *)(**(_DWORD **)v40 + 0x8C) + *a7) = 8; /*0x8d5568*/
        if ( v109 ) /*0x8d5572*/
        {
          v112 = &v109; /*0x8d5581*/
          v113 = 1; /*0x8d5589*/
          v114 = 0x80000001; /*0x8d5591*/
          sub_8E6720((const void **)v40, 1, &v112); /*0x8d5595*/
          *(_BYTE *)(*(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)v40 + 4) + 0x8C) + *a7) = 8; /*0x8d55a8*/
        }
      }
      v93 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8d577f*/
      if ( *(_DWORD *)(v93 + 0x1A4) < *(_DWORD *)(v93 + 0x1A8) ) /*0x8d578e*/
      {
        v94 = *(_DWORD **)(v103 + 0x1A4); /*0x8d5794*/
        *v94 = "StIntegMotions"; /*0x8d579a*/
        v95 = __rdtsc(); /*0x8d57a0*/
        v112 = (int *)v95; /*0x8d57a2*/
        v94[1] = v95; /*0x8d57aa*/
        *(_DWORD *)(v103 + 0x1A4) = v94 + 3; /*0x8d57b0*/
      }
      for ( i = 0; i < *(_DWORD *)(v40 + 4); ++i ) /*0x8d57bd*/
        sub_8DD530(*(float *)a3, (__m128 *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v40 + 4 * i) + 0x50) + 0x10)); /*0x8d57d6*/
      sub_923C80(*(_DWORD *)a2, *(_DWORD *)v40, *(_DWORD *)(v40 + 4), *(_DWORD *)(a2 + 0xC)); /*0x8d57f5*/
      sub_8D41A0(v116, v82); /*0x8d5800*/
      v97 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8d5812*/
      if ( *(_DWORD *)(v97 + 0x1A4) < *(_DWORD *)(v97 + 0x1A8) ) /*0x8d5826*/
      {
        v98 = *(_DWORD **)(v103 + 0x1A4); /*0x8d582c*/
        *v98 = "StInvalidTIMs"; /*0x8d5832*/
        v99 = __rdtsc(); /*0x8d5838*/
        v112 = (int *)v99; /*0x8d583a*/
        v98[1] = v99; /*0x8d5842*/
        *(_DWORD *)(v103 + 0x1A4) = v98 + 3; /*0x8d5848*/
      }
      for ( j = 0; j < *(_DWORD *)(v40 + 4); ++j ) /*0x8d5855*/
        sub_8E77C0(*(_DWORD *)(*(_DWORD *)v40 + 4 * j), *(_DWORD **)(a5 + 0x74)); /*0x8d586a*/
      if ( v132 >= 0 ) /*0x8d5887*/
        sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v130, 4 * v132, 0x14); /*0x8d58a2*/
      if ( v124 >= 0 ) /*0x8d58b0*/
        sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v122, 4 * v124, 0x14); /*0x8d58c8*/
      if ( v128 >= 0 ) /*0x8d58d6*/
        sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v126, 4 * v128, 0x14); /*0x8d58f1*/
      if ( v136 >= 0 ) /*0x8d58ff*/
        sub_8A75D0(*(_DWORD *)(v103 + 0x19C), v134, 0xC * (v136 & 0x3FFFFFFF), 0x14); /*0x8d591d*/
      v101 = *(_DWORD **)(v103 + 0x19C); /*0x8d5922*/
      v102 = v107; /*0x8d5928*/
      v69 = v107 == (_DWORD *)v101[0xA]; /*0x8d592c*/
      v101[8] = v107; /*0x8d592f*/
      if ( v69 ) /*0x8d5932*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v101 + 0x10))(v101, v102); /*0x8d5937*/
      result = v106; /*0x8d593a*/
      if ( v106 < 0 ) /*0x8d5940*/
        return result; /*0x8d5940*/
      v71 = *(_DWORD *)(v103 + 0x19C); /*0x8d5942*/
    }
    else
    {
      v83 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d55ce*/
      v84 = MEMORY[0xBA9DE4]; /*0x8d55d5*/
      if ( *(_DWORD *)(v83[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v83[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x8d55ee*/
      {
        v85 = *(_DWORD **)(v103 + 0x1A4); /*0x8d55f0*/
        *v85 = "StBackstep"; /*0x8d55f6*/
        v86 = __rdtsc(); /*0x8d55fc*/
        v112 = (int *)v86; /*0x8d55fe*/
        v85[1] = v86; /*0x8d5606*/
        *(_DWORD *)(v103 + 0x1A4) = v85 + 3; /*0x8d560c*/
      }
      sub_8D40E0(*(float *)a3, (_DWORD *)v116, a7, v40); /*0x8d562a*/
      if ( *(_DWORD *)(v83[v84] + 0x1A4) < *(_DWORD *)(v83[v84] + 0x1A8) ) /*0x8d5643*/
      {
        v87 = *(_DWORD **)(v103 + 0x1A4); /*0x8d5645*/
        *v87 = "StInvalidTIMs"; /*0x8d564b*/
        v88 = __rdtsc(); /*0x8d5651*/
        v112 = (int *)v88; /*0x8d5653*/
        v87[1] = v88; /*0x8d565b*/
        *(_DWORD *)(v103 + 0x1A4) = v87 + 3; /*0x8d5661*/
      }
      for ( k = 0; k < *(_DWORD *)(v40 + 4); ++k ) /*0x8d566e*/
        sub_8E77C0(*(_DWORD *)(*(_DWORD *)v40 + 4 * k), *(_DWORD **)(a5 + 0x74)); /*0x8d5681*/
      v90 = v132; /*0x8d5691*/
      v66 = v132 < 0; /*0x8d5698*/
      *(_DWORD *)(v40 + 4) = 0; /*0x8d569a*/
      if ( !v66 ) /*0x8d56a1*/
        sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v130, 4 * v90, 0x14); /*0x8d56bc*/
      if ( v124 >= 0 ) /*0x8d56ca*/
        sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v122, 4 * v124, 0x14); /*0x8d56e2*/
      if ( v128 >= 0 ) /*0x8d56f0*/
        sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v126, 4 * v128, 0x14); /*0x8d570b*/
      if ( v136 >= 0 ) /*0x8d5719*/
        sub_8A75D0(*(_DWORD *)(v103 + 0x19C), v134, 0xC * (v136 & 0x3FFFFFFF), 0x14); /*0x8d5737*/
      v91 = *(_DWORD **)(v103 + 0x19C); /*0x8d573c*/
      v92 = v107; /*0x8d5742*/
      v69 = v107 == (_DWORD *)v91[0xA]; /*0x8d5746*/
      v91[8] = v107; /*0x8d5749*/
      if ( v69 ) /*0x8d574c*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v91 + 0x10))(v91, v92); /*0x8d5751*/
      result = v106; /*0x8d5754*/
      if ( v106 < 0 ) /*0x8d575a*/
        return result; /*0x8d575a*/
      v71 = *(_DWORD *)(v103 + 0x19C); /*0x8d5760*/
    }
    return sub_8A75D0(v71, v104, 4 * result, 0x14); /*0x8d5958*/
  }
  v41 = a7; /*0x8d4e19*/
  while ( 1 ) /*0x8d4e26*/
  {
    if ( v117 ) /*0x8d4e26*/
    {
      v42 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8d4e38*/
      v120 = v42; /*0x8d4e3b*/
      while ( 1 ) /*0x8d4e40*/
      {
        if ( *(_DWORD *)(v42 + 0x1A4) < *(_DWORD *)(v42 + 0x1A8) ) /*0x8d4e4c*/
        {
          v43 = *(_DWORD **)(v103 + 0x1A4); /*0x8d4e52*/
          *v43 = "StExpandSystem"; /*0x8d4e58*/
          v44 = __rdtsc(); /*0x8d4e5e*/
          v119[2] = v44; /*0x8d4e60*/
          v43[1] = v44; /*0x8d4e6c*/
          *(_DWORD *)(v103 + 0x1A4) = v43 + 3; /*0x8d4e72*/
        }
        v131 = 0; /*0x8d4e80*/
        v123 = 0; /*0x8d4e87*/
        v119[0] = v115; /*0x8d4e8e*/
        if ( !v39 ) /*0x8d4e92*/
        {
          if ( v115 >= v135 ) /*0x8d4e9d*/
            goto LABEL_64; /*0x8d4e9d*/
          v127 = 0; /*0x8d4eaa*/
          sub_8D39E0((int *)a2, *(_DWORD **)(a5 + 0x74), (int *)&v134, v119, *a1, v41, &v104, (const void **)&v126); /*0x8d4edb*/
          if ( !v127 ) /*0x8d4eec*/
            goto LABEL_85; /*0x8d4eec*/
        }
        sub_8D3CF0(*(float **)(a5 + 0x74), *a1, *(float *)a3, &v126, v41, (int)&v122, (int)&v130); /*0x8d4f2a*/
        v45 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8d4f3c*/
        if ( *(_DWORD *)(v45 + 0x1A4) < *(_DWORD *)(v45 + 0x1A8) ) /*0x8d4f50*/
        {
          v46 = *(_DWORD **)(v103 + 0x1A4); /*0x8d4f56*/
          *v46 = "StbuildAcc+Jac"; /*0x8d4f5c*/
          v47 = __rdtsc(); /*0x8d4f62*/
          v119[1] = v47; /*0x8d4f64*/
          v46[1] = v47; /*0x8d4f70*/
          *(_DWORD *)(v103 + 0x1A4) = v46 + 3; /*0x8d4f76*/
        }
        if ( !*sub_923D70((_BYTE *)&v118 + 3, (_DWORD *)a2, v122, v123) /*0x8d4fdc*/
          || !*sub_923F40((_BYTE *)&v110 + 3, (_DWORD *)a2, v130, v131)
          || a1[3] < v135 + v131 )
        {
          break; /*0x8d4fdc*/
        }
        v48 = *(_DWORD *)(v40 + 4); /*0x8d4fe2*/
        v49 = v123; /*0x8d4fe5*/
        if ( a1[1] < v105 + v48 + v123 || a1[2] < (int)v127 + v48 ) /*0x8d5008*/
          goto LABEL_58; /*0x8d5008*/
        sub_923CE0((int *)a2, v122, v123); /*0x8d5015*/
        sub_923DD0(a2, v130, v131, &v134); /*0x8d5033*/
        v50 = v105; /*0x8d5038*/
        v51 = 0; /*0x8d5043*/
        v115 = v119[0]; /*0x8d5047*/
        if ( v105 > 0 ) /*0x8d504b*/
        {
          v52 = v104; /*0x8d504d*/
          do /*0x8d507a*/
          {
            if ( *(_BYTE *)(*(unsigned __int16 *)(v52[v51] + 0x8C) + *v41) == 8 ) /*0x8d5061*/
            {
              v105 = v50 - 1; /*0x8d5064*/
              v52[v51] = v52[v50 - 1]; /*0x8d506b*/
              v50 = v105; /*0x8d506e*/
              v52 = v104; /*0x8d5072*/
              --v51; /*0x8d5076*/
            }
            ++v51; /*0x8d5077*/
          }
          while ( v51 < v50 ); /*0x8d507a*/
          v40 = a6; /*0x8d507c*/
        }
        sub_8E6720((const void **)v40, *(_DWORD *)(v40 + 4), &v126); /*0x8d5091*/
        if ( (v106 & 0x3FFFFFFF) < v123 + v105 ) /*0x8d50af*/
        {
          v53 = 2 * (v106 & 0x3FFFFFFF); /*0x8d50b1*/
          if ( v123 + v105 >= v53 ) /*0x8d50b5*/
            v53 = v123 + v105; /*0x8d50b7*/
          sub_8A6E40((const void **)&v104, v53, 4); /*0x8d50c1*/
        }
        for ( m = 0; m < v123; ++m ) /*0x8d50d4*/
        {
          v55 = *(_DWORD *)(*(_DWORD *)(v122 + 4 * m) + 0x50); /*0x8d50dd*/
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v55 + 8))(v55) != 6 ) /*0x8d50e8*/
            v104[v105++] = *(_DWORD *)(v122 + 4 * m); /*0x8d50f9*/
        }
        sub_8D3140(&v134, &v115, v131); /*0x8d5121*/
        sub_8D3200((int *)&v134, &v115, a7); /*0x8d513b*/
        sub_923C00(a2, 1); /*0x8d5143*/
        if ( !v131 && !v123 ) /*0x8d515f*/
        {
          v41 = a7; /*0x8d53a1*/
          goto LABEL_85; /*0x8d53a1*/
        }
        v41 = a7; /*0x8d5165*/
        v42 = v120; /*0x8d516c*/
        v39 = 0; /*0x8d5170*/
      }
      v49 = v123; /*0x8d5177*/
LABEL_58:
      v56 = 0; /*0x8d517e*/
      if ( (int)v127 > 0 ) /*0x8d518d*/
      {
        do /*0x8d51b1*/
          *(_BYTE *)(*(unsigned __int16 *)(*(_DWORD *)(v126 + 4 * v56++) + 0x8C) + *v41) = 2; /*0x8d51a3*/
        while ( v56 < (int)v127 ); /*0x8d51b1*/
        v49 = v123; /*0x8d51b3*/
      }
      v57 = 0; /*0x8d51ba*/
      if ( v49 > 0 ) /*0x8d51be*/
      {
        do /*0x8d51de*/
          *(_BYTE *)(*(unsigned __int16 *)(*(_DWORD *)(v122 + 4 * v57++) + 0x8C) + *v41) = 1; /*0x8d51d0*/
        while ( v57 < v123 ); /*0x8d51de*/
      }
      v58 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x14))(a4); /*0x8d51e9*/
      if ( v58 == 1 ) /*0x8d51ef*/
      {
LABEL_64:
        v117 = 0; /*0x8d51f1*/
        goto LABEL_85; /*0x8d51f6*/
      }
      if ( v58 == 2 ) /*0x8d51fe*/
        break; /*0x8d51fe*/
    }
LABEL_85:
    v72 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8d53a8*/
    v39 = 0; /*0x8d53c4*/
    if ( *(_DWORD *)(v72 + 0x1A4) < *(_DWORD *)(v72 + 0x1A8) ) /*0x8d53c8*/
    {
      v73 = *(_DWORD **)(v103 + 0x1A4); /*0x8d53ce*/
      *v73 = "StSolver"; /*0x8d53d4*/
      v74 = __rdtsc(); /*0x8d53da*/
      v112 = (int *)v74; /*0x8d53dc*/
      v73[1] = v74; /*0x8d53e8*/
      *(_DWORD *)(v103 + 0x1A4) = v73 + 3; /*0x8d53ee*/
    }
    v75 = *(float **)(a2 + 0x24); /*0x8d53f4*/
    if ( v75 != *(float **)(a2 + 0x2C) ) /*0x8d53fa*/
      sub_9202A0(*(_DWORD *)(a2 + 4), v75, *(_DWORD *)(a2 + 0xC), *(float **)(a2 + 0x1C)); /*0x8d5409*/
    v76 = *(float **)(a2 + 0x34); /*0x8d5411*/
    if ( v76 != *(float **)(a2 + 0x3C) ) /*0x8d5417*/
      sub_9202A0(*(_DWORD *)(a2 + 4), v76, *(_DWORD *)(a2 + 0xC), *(float **)(a2 + 0x1C)); /*0x8d5426*/
    if ( --v111 <= 0 ) /*0x8d5439*/
      goto LABEL_92; /*0x8d5439*/
  }
  v59 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d520a*/
  if ( *(_DWORD *)(v59[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v59[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x8d5221*/
  {
    v60 = *(_DWORD **)(v103 + 0x1A4); /*0x8d5223*/
    *v60 = "StBackstep"; /*0x8d5229*/
    v61 = __rdtsc(); /*0x8d522f*/
    v112 = (int *)v61; /*0x8d5231*/
    v60[1] = v61; /*0x8d5239*/
    *(_DWORD *)(v103 + 0x1A4) = v60 + 3; /*0x8d523f*/
  }
  sub_8D40E0(*(float *)a3, (_DWORD *)v116, v41, v40); /*0x8d5256*/
  if ( *(_DWORD *)(v59[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v59[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x8d5276*/
  {
    v62 = *(_DWORD **)(v103 + 0x1A4); /*0x8d5278*/
    *v62 = "StInvalidTIMs"; /*0x8d527e*/
    v63 = __rdtsc(); /*0x8d5284*/
    v112 = (int *)v63; /*0x8d5286*/
    v62[1] = v63; /*0x8d528e*/
    *(_DWORD *)(v103 + 0x1A4) = v62 + 3; /*0x8d5294*/
  }
  for ( n = 0; n < *(_DWORD *)(v40 + 4); ++n ) /*0x8d52a1*/
    sub_8E77C0(*(_DWORD *)(*(_DWORD *)v40 + 4 * n), *(_DWORD **)(a5 + 0x74)); /*0x8d52b4*/
  v65 = v132; /*0x8d52c4*/
  v66 = v132 < 0; /*0x8d52cb*/
  *(_DWORD *)(v40 + 4) = 0; /*0x8d52cd*/
  if ( !v66 ) /*0x8d52d4*/
    sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v130, 4 * v65, 0x14); /*0x8d52ef*/
  if ( v124 >= 0 ) /*0x8d52fd*/
    sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v122, 4 * v124, 0x14); /*0x8d5318*/
  if ( v128 >= 0 ) /*0x8d5326*/
    sub_8A75D0(*(_DWORD *)(v103 + 0x19C), (_DWORD *)v126, 4 * v128, 0x14); /*0x8d5341*/
  if ( v136 >= 0 ) /*0x8d534f*/
    sub_8A75D0(*(_DWORD *)(v103 + 0x19C), v134, 0xC * (v136 & 0x3FFFFFFF), 0x14); /*0x8d536d*/
  v67 = *(_DWORD **)(v103 + 0x19C); /*0x8d5372*/
  v68 = v107; /*0x8d5378*/
  v69 = v107 == (_DWORD *)v67[0xA]; /*0x8d537c*/
  v67[8] = v107; /*0x8d537f*/
  if ( v69 ) /*0x8d5382*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v67 + 0x10))(v67, v68); /*0x8d5387*/
  result = v106; /*0x8d538a*/
  if ( v106 >= 0 ) /*0x8d5390*/
  {
    v71 = *(_DWORD *)(v103 + 0x19C); /*0x8d5396*/
    return sub_8A75D0(v71, v104, 4 * result, 0x14); /*0x8d539c*/
  }
  return result; /*0x8d595d*/
}
