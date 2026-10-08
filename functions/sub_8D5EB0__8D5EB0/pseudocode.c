char __thiscall sub_8D5EB0(const void **this, int a2, float *a3, float a4)
{
  unsigned __int64 v5; // rax
  int v6; // ecx
  float *v7; // edi
  const void **v8; // ebx
  int v9; // esi
  float v10; // eax
  double v11; // st7
  _DWORD *ThreadLocalStoragePointer; // ecx
  _DWORD *v13; // edi
  unsigned __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  _DWORD *v19; // ecx
  char *v20; // edx
  char *v21; // eax
  int v22; // eax
  int v23; // edi
  _DWORD *v24; // ecx
  unsigned __int64 v25; // rax
  int v26; // eax
  int v27; // edi
  int v28; // eax
  _DWORD *v29; // esi
  int v30; // eax
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // esi
  int v35; // eax
  char *v36; // ecx
  int v37; // eax
  char *v38; // ecx
  _DWORD *v39; // edx
  int v40; // edi
  bool v41; // zf
  int v42; // eax
  _DWORD *v43; // ecx
  unsigned __int64 v44; // rax
  float v45; // eax
  int v46; // ecx
  float v47; // edx
  float v48; // eax
  int v49; // edi
  _DWORD *v50; // ecx
  char *v51; // edx
  int v52; // eax
  int v53; // ebx
  int v54; // ecx
  int *v55; // ecx
  int v56; // edx
  int v57; // eax
  int v58; // esi
  int v59; // eax
  int v60; // esi
  int v61; // edx
  int v62; // eax
  int v63; // ecx
  int v64; // eax
  int v65; // edx
  int v66; // edi
  _DWORD *v67; // ecx
  _DWORD *v68; // ecx
  _DWORD *v69; // ecx
  _DWORD *v70; // ecx
  int v72; // [esp-8h] [ebp-339Ch]
  int v73; // [esp+28h] [ebp-336Ch]
  char *v74; // [esp+28h] [ebp-336Ch]
  int v75; // [esp+2Ch] [ebp-3368h]
  char *v76; // [esp+30h] [ebp-3364h]
  int v77; // [esp+30h] [ebp-3364h]
  int v78; // [esp+34h] [ebp-3360h]
  unsigned int v79; // [esp+34h] [ebp-3360h]
  int v80; // [esp+34h] [ebp-3360h]
  char *v81; // [esp+38h] [ebp-335Ch]
  char *v82; // [esp+3Ch] [ebp-3358h]
  int v83; // [esp+3Ch] [ebp-3358h]
  char *v85; // [esp+44h] [ebp-3350h]
  int v86; // [esp+44h] [ebp-3350h]
  const void **v87; // [esp+48h] [ebp-334Ch]
  int v88; // [esp+4Ch] [ebp-3348h]
  float v89; // [esp+50h] [ebp-3344h] BYREF
  float v90; // [esp+54h] [ebp-3340h]
  float v91; // [esp+58h] [ebp-333Ch]
  float v92; // [esp+5Ch] [ebp-3338h]
  signed int v93[6]; // [esp+60h] [ebp-3334h] BYREF
  int v94; // [esp+78h] [ebp-331Ch]
  int v95; // [esp+7Ch] [ebp-3318h]
  float v96[4]; // [esp+80h] [ebp-3314h] BYREF
  __int16 v97; // [esp+90h] [ebp-3304h] BYREF
  int v98; // [esp+94h] [ebp-3300h]
  signed int v99; // [esp+98h] [ebp-32FCh]
  int v100; // [esp+9Ch] [ebp-32F8h]
  int v101; // [esp+A4h] [ebp-32F0h]
  _DWORD v102[11]; // [esp+A8h] [ebp-32ECh] BYREF
  _DWORD v103[20]; // [esp+D4h] [ebp-32C0h] BYREF
  _DWORD v104[4]; // [esp+124h] [ebp-3270h] BYREF
  __int128 v105; // [esp+134h] [ebp-3260h]
  __int128 v106; // [esp+144h] [ebp-3250h]
  float v107; // [esp+218h] [ebp-317Ch]
  float v108; // [esp+21Ch] [ebp-3178h]
  int v109; // [esp+220h] [ebp-3174h]
  int v110; // [esp+224h] [ebp-3170h]
  int v111; // [esp+234h] [ebp-3160h] BYREF
  int v112; // [esp+238h] [ebp-315Ch]
  int v113; // [esp+23Ch] [ebp-3158h]
  char v114; // [esp+240h] [ebp-3154h] BYREF
  _DWORD v115[12]; // [esp+344h] [ebp-3050h] BYREF
  _BYTE v116[12292]; // [esp+374h] [ebp-3020h] BYREF
  float v117; // [esp+3378h] [ebp-1Ch]
  int v118; // [esp+3384h] [ebp-10h]

  if ( unk_BA8180 || (LOBYTE(v5) = sub_9246E0((int)this, 3), (unk_BA8180 = v5) != 0) ) /*0x8d5ee3*/
  {
    v6 = (int)*(this + 8); /*0x8d5ee9*/
    v7 = a3; /*0x8d5eec*/
    v93[1] = 0x3E8; /*0x8d5ef4*/
    v93[2] = 0x3E8; /*0x8d5ef8*/
    v93[3] = 0x3E8; /*0x8d5efc*/
    v93[4] = 4; /*0x8d5f09*/
    v93[5] = 4; /*0x8d5f0d*/
    v8 = this + 5; /*0x8d5f14*/
    v93[0] = 2; /*0x8d5f18*/
    v94 = 0; /*0x8d5f20*/
    v95 = 0; /*0x8d5f24*/
    v87 = v8; /*0x8d5f2b*/
    LODWORD(v5) = (*(int (__thiscall **)(int, float *, const void **, signed int *))(*(_DWORD *)v6 + 0xC))( /*0x8d5f2f*/
                    v6,
                    a3,
                    v8,
                    v93);
    if ( (_DWORD)v5 != 1 ) /*0x8d5f35*/
    {
      v9 = a2; /*0x8d5f3b*/
      ++*(_DWORD *)(a2 + 0x88); /*0x8d5f3e*/
      v10 = *a3; /*0x8d5f47*/
      v90 = *(float *)(a2 + 0x18); /*0x8d5f49*/
      v89 = v10; /*0x8d5f51*/
      v91 = v90 - v10; /*0x8d5f60*/
      v92 = fConstant_1 / v91; /*0x8d5f75*/
      sub_8D2E10(v104, a2 + 0x170); /*0x8d5f79*/
      v11 = fConstant_1 / a4; /*0x8d5f84*/
      v107 = a4; /*0x8d5f90*/
      *(float *)v102 = a4; /*0x8d5f9b*/
      *(float *)&v102[2] = v91; /*0x8d5fa2*/
      *(float *)&v102[3] = v92; /*0x8d5fb6*/
      v109 = 1; /*0x8d5fda*/
      v110 = 0x3F800000; /*0x8d5fe5*/
      v105 = 0; /*0x8d5ff0*/
      v106 = 0; /*0x8d5ff8*/
      v104[2] = 0x3FB33333; /*0x8d6000*/
      v104[1] = 0x3F000000; /*0x8d600b*/
      v104[3] = 0; /*0x8d6016*/
      v102[4] = 0x3F800000; /*0x8d6021*/
      v108 = v11; /*0x8d602c*/
      *(float *)&v102[1] = v11; /*0x8d6033*/
      sub_923B10((int)&v89, (int)v104, (int)v102, v94, v95, v103); /*0x8d603a*/
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d6045*/
      if ( *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] /*0x8d605e*/
                                                                                        + 0x1A8) )
      {
        v13 = *(_DWORD **)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] + 0x1A4); /*0x8d6068*/
        *v13 = "LtTOI"; /*0x8d606e*/
        v13[3] = "SolveToi"; /*0x8d6074*/
        v14 = __rdtsc(); /*0x8d607b*/
        HIDWORD(v14) = v14; /*0x8d6081*/
        LODWORD(v14) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d608a*/
        v13[1] = HIDWORD(v14); /*0x8d608d*/
        *(_DWORD *)(v14 + 0x1A4) = v13 + 4; /*0x8d6093*/
        v7 = a3; /*0x8d6099*/
      }
      v15 = *((_DWORD *)v7 + 1); /*0x8d609c*/
      if ( *(_BYTE *)(v15 + 0x91) ) /*0x8d609f*/
        v15 = *((_DWORD *)v7 + 2); /*0x8d60a9*/
      v16 = *(_DWORD *)(v15 + 0x54); /*0x8d60af*/
      v17 = *(_DWORD *)(v16 + 0x38); /*0x8d60b1*/
      v73 = v16; /*0x8d60b4*/
      v18 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d60be*/
      v19 = *(_DWORD **)(v18 + 0x19C); /*0x8d60c1*/
      v75 = v18; /*0x8d60ca*/
      v76 = (char *)v19[8]; /*0x8d60d4*/
      v20 = &v76[(v17 + 0x10) & 0xFFFFFFF0]; /*0x8d60d8*/
      if ( (unsigned int)v20 > v19[0xB] ) /*0x8d60dd*/
      {
        v21 = (char *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v19 + 0xC))(v19, (v17 + 0x10) & 0xFFFFFFF0); /*0x8d60ef*/
        v81 = v21; /*0x8d60f2*/
      }
      else
      {
        v21 = (char *)v19[8]; /*0x8d60df*/
        v19[8] = v20; /*0x8d60e3*/
        v81 = v76; /*0x8d60e6*/
      }
      LODWORD(v96[0]) = v21; /*0x8d60fa*/
      sub_8B18C0((int)v8, v21, 0, v17); /*0x8d60fe*/
      v111 = (int)&v114; /*0x8d610f*/
      v72 = (int)*(this + 8); /*0x8d6129*/
      v112 = 0; /*0x8d6138*/
      v113 = 0x80000040; /*0x8d6143*/
      sub_8D4AF0(v93, (int)v103, (int)a3, v72, a2, (int)&v111, v96); /*0x8d614e*/
      nullsub_5(); /*0x8d615b*/
      v22 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8d616c*/
      v23 = v75; /*0x8d617b*/
      if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) ) /*0x8d6184*/
      {
        v24 = *(_DWORD **)(v75 + 0x1A4); /*0x8d6186*/
        *v24 = "StEvtCleanup"; /*0x8d618c*/
        v25 = __rdtsc(); /*0x8d6192*/
        v24[1] = v25; /*0x8d619c*/
        *(_DWORD *)(v75 + 0x1A4) = v24 + 3; /*0x8d61a2*/
      }
      v26 = (int)v8[1] + 0xFFFFFFFF; /*0x8d61ab*/
      if ( v26 >= 0 ) /*0x8d61ac*/
      {
        v27 = v26 << 6; /*0x8d61b4*/
        v78 = v26 << 6; /*0x8d61b8*/
        v82 = (char *)v8[1]; /*0x8d61bc*/
        do /*0x8d62eb*/
        {
          v28 = *(_DWORD *)((char *)*v8 + v27 + 4); /*0x8d61c2*/
          v29 = (char *)*v8 + v27; /*0x8d61c9*/
          if ( *(_DWORD *)(v28 + 0x54) == v73 && v81[*(unsigned __int16 *)(v28 + 0x8C)] == 8 /*0x8d6200*/
            || (v30 = v29[2], *(_DWORD *)(v30 + 0x54) == v73) && v81[*(unsigned __int16 *)(v30 + 0x8C)] == 8 )
          {
            v31 = v29[1]; /*0x8d6209*/
            v32 = v29[6]; /*0x8d620c*/
            v100 = v29[2]; /*0x8d620f*/
            v97 = 0xFFFF; /*0x8d621a*/
            v98 = 0; /*0x8d6221*/
            v99 = v31; /*0x8d622c*/
            v101 = v32; /*0x8d6233*/
            sub_8DC920(v31, *(_DWORD *)(v31 + 8), (int)&v97); /*0x8d623f*/
            v33 = v29[1]; /*0x8d6244*/
            if ( *(_DWORD *)(v33 + 0x98) ) /*0x8d6247*/
              sub_8DC0A0(v33, v33, (int)&v97); /*0x8d625a*/
            v34 = v29[2]; /*0x8d6262*/
            v35 = *(_DWORD *)(v34 + 0x98); /*0x8d6265*/
            if ( v35 ) /*0x8d626d*/
              sub_8DC0A0(v35, v34, (int)&v97); /*0x8d6275*/
            v36 = (char *)*v8; /*0x8d6280*/
            v37 = (int)*v8 + 0x40 * ((int)v8[1] + 0xFFFFFFFF); /*0x8d6288*/
            v8[1] = (char *)v8[1] + 0xFFFFFFFF; /*0x8d628a*/
            v38 = &v36[v27]; /*0x8d628f*/
            *(_DWORD *)v38 = *(_DWORD *)v37; /*0x8d6293*/
            v39 = v38 + 4; /*0x8d6295*/
            v40 = 2; /*0x8d629a*/
            do /*0x8d62a9*/
            {
              *v39 = *(_DWORD *)((char *)v39 + v37 - (_DWORD)v38); /*0x8d62a3*/
              ++v39; /*0x8d62a5*/
              --v40; /*0x8d62a8*/
            }
            while ( v40 ); /*0x8d62a9*/
            v27 = v78; /*0x8d62ae*/
            v8 = v87; /*0x8d62b2*/
            *((_DWORD *)v38 + 3) = *(_DWORD *)(v37 + 0xC); /*0x8d62b6*/
            *((_DWORD *)v38 + 4) = *(_DWORD *)(v37 + 0x10); /*0x8d62bc*/
            *((_DWORD *)v38 + 5) = *(_DWORD *)(v37 + 0x14); /*0x8d62c2*/
            *((_DWORD *)v38 + 6) = *(_DWORD *)(v37 + 0x18); /*0x8d62c8*/
            *((_OWORD *)v38 + 2) = *(_OWORD *)(v37 + 0x20); /*0x8d62cf*/
            *((_OWORD *)v38 + 3) = *(_OWORD *)(v37 + 0x30); /*0x8d62d7*/
          }
          v27 -= 0x40; /*0x8d62df*/
          v41 = v82 == (char *)1; /*0x8d62e2*/
          v78 = v27; /*0x8d62e3*/
          --v82; /*0x8d62e7*/
        }
        while ( !v41 ); /*0x8d62eb*/
        v9 = a2; /*0x8d62f1*/
        v23 = v75; /*0x8d62f4*/
      }
      v42 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8d6304*/
      if ( *(_DWORD *)(v42 + 0x1A4) < *(_DWORD *)(v42 + 0x1A8) ) /*0x8d6313*/
      {
        v43 = *(_DWORD **)(v23 + 0x1A4); /*0x8d6315*/
        *v43 = "StCollide"; /*0x8d631b*/
        v44 = __rdtsc(); /*0x8d6321*/
        v43[1] = v44; /*0x8d632b*/
        *(_DWORD *)(v23 + 0x1A4) = v43 + 3; /*0x8d6331*/
      }
      sub_8D2C90(v96, *a3, *(float *)(v9 + 0x18)); /*0x8d6345*/
      v45 = v96[1]; /*0x8d6351*/
      v46 = *(_DWORD *)(v9 + 0x74) + 0x10; /*0x8d6355*/
      *(float *)v46 = v96[0]; /*0x8d6358*/
      v47 = v96[2]; /*0x8d635a*/
      *(float *)(v46 + 4) = v45; /*0x8d635e*/
      v48 = v96[3]; /*0x8d6361*/
      *(float *)(v46 + 8) = v47; /*0x8d6365*/
      *(float *)(v46 + 0xC) = v48; /*0x8d6368*/
      v49 = *(_DWORD *)(v9 + 0x74); /*0x8d637b*/
      v77 = v112; /*0x8d637e*/
      v83 = v111; /*0x8d6382*/
      if ( !v112 || (sub_8D4590(v111, v112, v9, 0), *(_DWORD *)(unk_BA7D98 + 4) == 1) ) /*0x8d63a4*/
      {
LABEL_60:
        v66 = v75; /*0x8d661c*/
      }
      else
      {
        v50 = *(_DWORD **)(v75 + 0x19C); /*0x8d63b7*/
        v88 = *(_DWORD *)(*(_DWORD *)v83 + 0x54); /*0x8d63c0*/
        v79 = *(_DWORD *)(v88 + 0x38); /*0x8d63c7*/
        v85 = (char *)v50[8]; /*0x8d63d1*/
        v51 = &v85[(v79 + 0x10) & 0xFFFFFFF0]; /*0x8d63d5*/
        if ( (unsigned int)v51 > v50[0xB] ) /*0x8d63da*/
        {
          v74 = (char *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v50 + 0xC))(v50, (v79 + 0x10) & 0xFFFFFFF0); /*0x8d63ef*/
        }
        else
        {
          v50[8] = v51; /*0x8d63dc*/
          v74 = v85; /*0x8d63e3*/
        }
        v99 = v79 | 0x80000000; /*0x8d63ff*/
        sub_8B18C0((int)v8, v74, 0, v79); /*0x8d640d*/
        v52 = 0; /*0x8d6416*/
        v117 = 3.4028235e38; /*0x8d641d*/
        v86 = 0; /*0x8d6428*/
        if ( v77 > 0 ) /*0x8d642c*/
        {
          do /*0x8d6588*/
          {
            v53 = *(_DWORD *)(v83 + 4 * v52); /*0x8d6436*/
            v74[*(unsigned __int16 *)(v53 + 0x8C)] = 1; /*0x8d6444*/
            v54 = 0; /*0x8d644b*/
            v80 = 0; /*0x8d644f*/
            if ( *(int *)(v53 + 0x3C) > 0 ) /*0x8d6453*/
            {
              while ( 1 ) /*0x8d6463*/
              {
                v55 = (int *)(*(_DWORD *)(v53 + 0x38) + 8 * v54); /*0x8d6463*/
                v56 = v55[1]; /*0x8d6466*/
                v57 = *(_DWORD *)(v56 + 0x10); /*0x8d6469*/
                v58 = *(_DWORD *)(v57 + v56 + 0x54); /*0x8d646c*/
                v59 = v56 + v57; /*0x8d6470*/
                if ( v58 != v88 || !v74[*(unsigned __int16 *)(v59 + 0x8C)] ) /*0x8d6485*/
                {
                  v60 = *v55; /*0x8d648f*/
                  v61 = *(_DWORD *)v49; /*0x8d6491*/
                  v115[0] = v116; /*0x8d649a*/
                  v117 = 3.4028235e38; /*0x8d64a1*/
                  v118 = 0; /*0x8d64ac*/
                  v62 = 0x3C * *(char *)(v60 + 8) + v61 + 0x1A14; /*0x8d64be*/
                  *(_DWORD *)(v49 + 0x28) = v62; /*0x8d64cd*/
                  *(_BYTE *)(v49 + 0xC) = *(_BYTE *)(v62 + 0x10); /*0x8d64d5*/
                  sub_8E6D10(v60, v49, (int)v115); /*0x8d64d8*/
                  v63 = unk_BA7D98; /*0x8d64dd*/
                  v64 = *(_DWORD *)(unk_BA7D98 + 0x14) + *(_DWORD *)(unk_BA7D98 + 0x28); /*0x8d64e9*/
                  v65 = *(_DWORD *)(unk_BA7D98 + 8); /*0x8d64eb*/
                  if ( v65 <= v64 || (LODWORD(v96[0]) = v65 - v64, v65 == v64) ) /*0x8d64f7*/
                  {
                    *(_DWORD *)(v63 + 4) = 1; /*0x8d64fd*/
                    v63 = unk_BA7D98; /*0x8d6504*/
                  }
                  if ( *(_DWORD *)(v63 + 4) == 1 ) /*0x8d650e*/
                  {
                    v68 = *(_DWORD **)(v75 + 0x19C); /*0x8d65da*/
                    v41 = v74 == (char *)v68[0xA]; /*0x8d65e4*/
                    v68[8] = v74; /*0x8d65e7*/
                    if ( v41 ) /*0x8d65ea*/
                      (*(void (__thiscall **)(_DWORD *, char *))(*v68 + 0x10))(v68, v74); /*0x8d65ef*/
                    if ( v99 >= 0 ) /*0x8d65fb*/
                      sub_8A75D0(*(_DWORD *)(v75 + 0x19C), v74, v99 & 0x3FFFFFFF, 0x14); /*0x8d6610*/
                    v8 = v87; /*0x8d6615*/
                    v9 = a2; /*0x8d6619*/
                    goto LABEL_60; /*0x8d6619*/
                  }
                  if ( (_BYTE *)v115[0] != v116 ) /*0x8d6524*/
                    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD *))(**(_DWORD **)(v60 + 0x10) + 0x14))( /*0x8d653c*/
                      *(_DWORD *)(v60 + 0x10),
                      *(_DWORD *)(v60 + 0x14),
                      *(_DWORD *)(v60 + 0x18),
                      v49,
                      v115);
                  if ( v117 < (double)flt_A9A020 ) /*0x8d6551*/
                    sub_8D3600(this, (int)v115, (_DWORD *)v60); /*0x8d6560*/
                }
                v54 = ++v80; /*0x8d656c*/
                if ( v80 >= *(_DWORD *)(v53 + 0x3C) ) /*0x8d6573*/
                {
                  v52 = v86; /*0x8d6579*/
                  break; /*0x8d6579*/
                }
              }
            }
            v86 = ++v52; /*0x8d6584*/
          }
          while ( v52 < v77 ); /*0x8d6588*/
          v8 = v87; /*0x8d658e*/
          v9 = a2; /*0x8d6592*/
        }
        v66 = v75; /*0x8d6595*/
        v67 = *(_DWORD **)(v75 + 0x19C); /*0x8d6599*/
        v41 = v74 == (char *)v67[0xA]; /*0x8d65a3*/
        v67[8] = v74; /*0x8d65a6*/
        if ( v41 ) /*0x8d65a9*/
          (*(void (__thiscall **)(_DWORD *, char *))(*v67 + 0x10))(v67, v74); /*0x8d65ae*/
        if ( v99 >= 0 ) /*0x8d65ba*/
          sub_8A75D0(*(_DWORD *)(v75 + 0x19C), v74, v99 & 0x3FFFFFFF, 0x14); /*0x8d65cf*/
      }
      if ( v113 >= 0 ) /*0x8d6629*/
        sub_8A75D0(*(_DWORD *)(v66 + 0x19C), (_DWORD *)v111, 4 * v113, 0x14); /*0x8d6644*/
      v69 = *(_DWORD **)(v66 + 0x19C); /*0x8d6649*/
      v41 = v81 == (char *)v69[0xA]; /*0x8d6653*/
      v69[8] = v81; /*0x8d6656*/
      if ( v41 ) /*0x8d6659*/
        (*(void (__thiscall **)(_DWORD *, char *))(*v69 + 0x10))(v69, v81); /*0x8d665e*/
      (*(void (__thiscall **)(_DWORD, float *, const void **, signed int *))(*(_DWORD *)*(this + 8) + 0x18))( /*0x8d6674*/
        *(this + 8),
        a3,
        v8,
        v93);
      v41 = (*(_DWORD *)(v9 + 0x88))-- == 1; /*0x8d6677*/
      if ( v41 ) /*0x8d667d*/
      {
        if ( *(_DWORD *)(v9 + 0x84) ) /*0x8d667f*/
        {
          if ( !*(_BYTE *)(v9 + 0x90) ) /*0x8d6689*/
            sub_899210(v9); /*0x8d6695*/
        }
      }
      LODWORD(v5) = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8d66a7*/
      if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8d66b6*/
      {
        v70 = *(_DWORD **)(v66 + 0x1A4); /*0x8d66b8*/
        *v70 = "lt"; /*0x8d66be*/
        v5 = __rdtsc(); /*0x8d66c4*/
        v70[1] = v5; /*0x8d66ce*/
        *(_DWORD *)(v66 + 0x1A4) = v70 + 3; /*0x8d66d4*/
      }
    }
  }
  return v5; /*0x8d66da*/
}
