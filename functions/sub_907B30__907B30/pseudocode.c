int __thiscall sub_907B30(_DWORD *this, _DWORD *a2, _DWORD *a3, float *a4, int a5)
{
  int v5; // edx
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  __m128 *v11; // eax
  __m128 *v12; // edi
  __m128 *v13; // esi
  bool v14; // zf
  double v15; // st7
  double v16; // st6
  __m128 v17; // xmm0
  double v18; // st5
  double v19; // st4
  __m128 v20; // xmm3
  __m128 v21; // xmm5
  char v22; // al
  __m128 v23; // xmm4
  __m128 v24; // xmm0
  __m128 *v25; // eax
  __m128 v26; // xmm4
  __m128 v27; // xmm0
  __m128 v28; // xmm1
  __m128 v29; // xmm5
  __m128 v30; // xmm2
  __m128 v31; // xmm0
  __m128 v32; // xmm1
  __m128 v33; // xmm2
  __m128 v34; // xmm5
  __m128 v35; // xmm0
  __m128 v36; // xmm6
  __m128 v37; // xmm3
  __m128 v38; // xmm2
  __m128 *v39; // eax
  __m128 v40; // xmm1
  __m128 v41; // xmm4
  __m128 v42; // xmm2
  __m128 v43; // xmm4
  int v44; // ecx
  int v45; // edi
  const void **v46; // esi
  int v47; // ecx
  char *v48; // edx
  char *v49; // eax
  char *v50; // ebx
  int v51; // eax
  char *v52; // edx
  unsigned int v53; // edx
  signed int v54; // eax
  int v55; // ecx
  _DWORD *v56; // ecx
  const void *v57; // eax
  char *v58; // edi
  char *v59; // ecx
  int v60; // ebx
  int v61; // edi
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // edi
  _DWORD *v66; // edx
  char *v67; // edi
  int v68; // ecx
  int v69; // ebx
  int v70; // eax
  int v71; // ecx
  int v72; // ebx
  int v73; // eax
  int v74; // ecx
  int (__stdcall ***v75)(char); // eax
  int v76; // edx
  _DWORD *v77; // edi
  char *v78; // ebx
  _DWORD *v79; // ecx
  int v80; // eax
  _DWORD *v81; // eax
  int v82; // esi
  unsigned int v83; // edx
  int v84; // eax
  int v85; // eax
  int v86; // ecx
  bool v87; // cc
  int v88; // esi
  int v89; // ecx
  int v90; // esi
  int v91; // ecx
  int v92; // eax
  int v93; // ecx
  int v94; // esi
  int v95; // eax
  int v96; // ecx
  int v97; // eax
  _DWORD *i; // esi
  int v99; // eax
  int v100; // esi
  int v101; // eax
  float v102; // edi
  int v103; // esi
  int v104; // eax
  int v105; // ecx
  _DWORD *v106; // esi
  int v107; // edx
  int v108; // eax
  int v109; // ecx
  int v110; // ecx
  _DWORD *v111; // eax
  _DWORD *v112; // esi
  _DWORD *v113; // eax
  _DWORD *v114; // ecx
  _DWORD *v115; // edi
  int v116; // esi
  _DWORD *v117; // ecx
  int v118; // eax
  int v119; // ecx
  int v120; // ecx
  int *v121; // esi
  int *v122; // ebx
  int v123; // eax
  _DWORD *v124; // edx
  bool v125; // cf
  int v126; // edx
  _DWORD *v127; // edi
  unsigned __int64 v128; // rax
  int k; // edi
  int v130; // eax
  int v131; // ecx
  _DWORD *v132; // ecx
  unsigned __int64 v133; // rax
  int v134; // esi
  _DWORD *v135; // ecx
  float v137; // [esp+2Ch] [ebp-708h]
  float v138; // [esp+2Ch] [ebp-708h]
  __m128 *v139; // [esp+30h] [ebp-704h]
  unsigned int v140; // [esp+48h] [ebp-6ECh]
  unsigned int v141; // [esp+48h] [ebp-6ECh]
  unsigned int v142; // [esp+48h] [ebp-6ECh]
  unsigned int v143; // [esp+48h] [ebp-6ECh]
  unsigned int v144; // [esp+48h] [ebp-6ECh]
  char *j; // [esp+48h] [ebp-6ECh]
  int v146; // [esp+48h] [ebp-6ECh]
  int v147; // [esp+48h] [ebp-6ECh]
  int v148; // [esp+48h] [ebp-6ECh]
  char *v149; // [esp+4Ch] [ebp-6E8h]
  char *v150; // [esp+4Ch] [ebp-6E8h]
  _DWORD *v151; // [esp+4Ch] [ebp-6E8h]
  float v152; // [esp+50h] [ebp-6E4h]
  int v153; // [esp+50h] [ebp-6E4h]
  int v154; // [esp+50h] [ebp-6E4h]
  int v155; // [esp+50h] [ebp-6E4h]
  int v156; // [esp+50h] [ebp-6E4h]
  int v157; // [esp+54h] [ebp-6E0h]
  char *v158; // [esp+54h] [ebp-6E0h]
  int v159; // [esp+54h] [ebp-6E0h]
  _DWORD v160[9]; // [esp+58h] [ebp-6DCh] BYREF
  _DWORD *v161; // [esp+7Ch] [ebp-6B8h]
  _DWORD *v162; // [esp+80h] [ebp-6B4h]
  _DWORD v163[4]; // [esp+84h] [ebp-6B0h] BYREF
  __m128 v164; // [esp+94h] [ebp-6A0h] BYREF
  __m128 v165; // [esp+A4h] [ebp-690h]
  __m128 v166[4]; // [esp+B4h] [ebp-680h] BYREF
  char *v167; // [esp+F4h] [ebp-640h] BYREF
  int v168; // [esp+F8h] [ebp-63Ch]
  int v169; // [esp+FCh] [ebp-638h]
  char v170; // [esp+100h] [ebp-634h] BYREF
  int v171; // [esp+304h] [ebp-430h]
  int v172; // [esp+308h] [ebp-42Ch] BYREF
  int v173; // [esp+30Ch] [ebp-428h]
  int v174; // [esp+310h] [ebp-424h]
  _DWORD *v175; // [esp+314h] [ebp-420h]
  _BYTE v176[512]; // [esp+324h] [ebp-410h] BYREF
  char v177[524]; // [esp+524h] [ebp-210h] BYREF

  v5 = TlsIndex;
  v162 = this;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[v5];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "LtBvTree";
    v9[3] = "QueryTree";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4;
  }
  v11 = (__m128 *)a3[2];
  v139 = (__m128 *)a2[2];
  v167 = &v170;
  v168 = 0;
  v169 = 0x80000080;
  sub_8B1FF0(v166, v11, v139);
  v12 = (__m128 *)a2[2];
  v13 = (__m128 *)a3[2];
  v14 = byte_B2FDE0 == 0;
  v15 = a4[6] * v12[5].m128_f32[3];
  v16 = a4[6] * v13[5].m128_f32[3];
  *(float *)&v140 = v15;
  v17 = (__m128)v140;
  *(float *)&v141 = v16;
  v18 = v13[0xA].m128_f32[0] * v13[9].m128_f32[3] * v16;
  v19 = v12[0xA].m128_f32[0] * v12[9].m128_f32[3] * v15;
  *(__m128 *)&v160[3] = _mm_add_ps(
                          _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), _mm_sub_ps(v12[4], v12[5])),
                          _mm_mul_ps(_mm_shuffle_ps((__m128)v141, (__m128)v141, 0), _mm_sub_ps(v13[5], v13[4])));
  *(float *)&v160[6] = v18 + v19;
  if ( v14 )
    v160[2] = 0;
  else
    v160[2] = v162 + 8;
  v20 = v13[2];
  v21 = v13[1];
  v22 = *(_BYTE *)(*((_DWORD *)a4 + 0xA) + 0x10);
  v23 = _mm_shuffle_ps(v20, v20, 0x44);
  v24 = _mm_shuffle_ps(*v13, v21, 0x44);
  *(__m128 *)&v160[3] = _mm_add_ps(
                          _mm_add_ps(
                            _mm_mul_ps(
                              _mm_shuffle_ps(v24, v23, 0x88),
                              _mm_shuffle_ps(*(__m128 *)&v160[3], *(__m128 *)&v160[3], 0)),
                            _mm_mul_ps(
                              _mm_shuffle_ps(v24, v23, 0xDD),
                              _mm_shuffle_ps(*(__m128 *)&v160[3], *(__m128 *)&v160[3], 0x55))),
                          _mm_mul_ps(
                            _mm_shuffle_ps(_mm_shuffle_ps(*v13, v21, 0xEE), _mm_shuffle_ps(v20, v20, 0xEE), 0x88),
                            _mm_shuffle_ps(*(__m128 *)&v160[3], *(__m128 *)&v160[3], 0xAA)));
  if ( v22 )
  {
    v152 = v13[0xA].m128_f32[0] * v13[9].m128_f32[3] * v13[9].m128_f32[3];
    v137 = (v12[9].m128_f32[3] + v13[9].m128_f32[3]) * v12[0xA].m128_f32[0] + v152 + a4[2] * flt_A3D65C;
    (*(void (__stdcall **)(__m128 *, _DWORD, __m128 *))(*(_DWORD *)*a2 + 0xC))(v166, LODWORD(v137), &v164);
    v25 = (__m128 *)a3[2];
    v26 = v25[2];
    v27 = _mm_sub_ps(v12[5], v25[3]);
    v28 = _mm_shuffle_ps(*v25, v25[1], 0x44);
    *(float *)&v142 = a4[2] * flt_A3D65C + v12[0xA].m128_f32[0] + v152;
    v29 = _mm_shuffle_ps(v26, v26, 0x44);
    v30 = _mm_shuffle_ps((__m128)v142, (__m128)v142, 0);
    v31 = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v28, v29, 0x88), _mm_shuffle_ps(v27, v27, 0)),
              _mm_mul_ps(_mm_shuffle_ps(v28, v29, 0xDD), _mm_shuffle_ps(v27, v27, 0x55))),
            _mm_mul_ps(
              _mm_shuffle_ps(_mm_shuffle_ps(*v25, v25[1], 0xEE), _mm_shuffle_ps(v26, v26, 0xEE), 0x88),
              _mm_shuffle_ps(v27, v27, 0xAA)));
    v32 = _mm_max_ps(v164, _mm_sub_ps(v31, v30));
    v33 = _mm_min_ps(v165, _mm_add_ps(v31, v30));
    v164 = v32;
    v165 = v33;
    v34 = _mm_sub_ps(v33, v32);
    if ( v13[9].m128_f32[3] <= (double)*(float *)&SrcStr )
    {
      v36 = *(__m128 *)&v160[3];
    }
    else
    {
      v35 = _mm_sub_ps(v31, v13[8]);
      *(float *)&v143 = v13[5].m128_f32[3] * a4[6];
      v36 = _mm_add_ps(
              *(__m128 *)&v160[3],
              _mm_mul_ps(
                _mm_shuffle_ps((__m128)v143, (__m128)v143, 0),
                _mm_sub_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v35, v35, 0xC9), _mm_shuffle_ps(v13[9], v13[9], 0xD2)),
                  _mm_mul_ps(_mm_shuffle_ps(v35, v35, 0xD2), _mm_shuffle_ps(v13[9], v13[9], 0xC9)))));
      *(__m128 *)&v160[3] = v36;
    }
    v37 = _mm_add_ps(v32, _mm_min_ps((__m128)0LL, v36));
    v38 = _mm_add_ps(v33, _mm_max_ps((__m128)0LL, v36));
    v164 = v37;
    v165 = v38;
  }
  else
  {
    v138 = a4[2] * flt_A3D65C;
    (*(void (__stdcall **)(__m128 *, _DWORD, __m128 *))(*(_DWORD *)*a2 + 0xC))(v166, LODWORD(v138), &v164);
    v38 = v165;
    v37 = v164;
    v36 = *(__m128 *)&v160[3];
    v34 = _mm_sub_ps(v165, v164);
  }
  v39 = (__m128 *)v160[2];
  if ( v160[2] )
  {
    if ( ((unsigned __int8)_mm_movemask_ps(_mm_cmple_ps(v38, *(__m128 *)(v160[2] + 0x10)))
        & (unsigned __int8)_mm_movemask_ps(_mm_cmple_ps(*(__m128 *)v160[2], v37))
        & 7) == 7 )
    {
      if ( v169 >= 0 )
      {
        v51 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
        if ( !v51 )
          v51 = dword_BA7D9C;
        sub_8A75D0(v51, v167, 4 * v169, 0x14);
      }
      goto LABEL_119;
    }
    *(float *)&v144 = a4[2] * flt_A3D65C;
    v40 = _mm_shuffle_ps((__m128)v144, (__m128)v144, 0);
    v41 = _mm_add_ps(v38, v40);
    v42 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3ECCCCCDu, (__m128)0x3ECCCCCDu, 0), v34);
    v43 = _mm_add_ps(
            v41,
            _mm_min_ps(
              _mm_mul_ps(
                _mm_shuffle_ps((__m128)0xC0000000, (__m128)0xC0000000, 0),
                _mm_min_ps((__m128)0LL, *(__m128 *)&v160[3])),
              v42));
    v164 = _mm_add_ps(
             _mm_sub_ps(v37, v40),
             _mm_max_ps(
               _mm_mul_ps(_mm_shuffle_ps((__m128)0xC0000000, (__m128)0xC0000000, 0), _mm_max_ps((__m128)0LL, v36)),
               _mm_xor_ps(v42, (__m128)xmmword_A965C0)));
    v165 = v43;
    *(__m128 *)v160[2] = v164;
    v39[1] = v43;
  }
  (*(void (__thiscall **)(_DWORD, __m128 *, char **))(*(_DWORD *)*a3 + 0x24))(*a3, &v164, &v167);
  v44 = a3[2];
  v171 = *(_DWORD *)(*a3 + 0xC);
  v14 = byte_BA81CD == 0;
  v175 = a3;
  v174 = v44;
  if ( v14 )
  {
    v76 = v168;
    LOBYTE(v157) = 0;
    if ( v168 > 1 )
    {
      sub_8F6580((int)v167, 0, v168 - 1, v157);
      v76 = v168;
    }
    v77 = (_DWORD *)v162[3];
    v78 = v167;
    v147 = v162[2];
    v79 = &v77[3 * v162[4]];
    v160[2] = &v167[4 * v76];
    v160[3] = 0;
    v160[4] = 0;
    v80 = TlsIndex;
    v161 = v79;
    v156 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v80);
    v81 = *(_DWORD **)(v156 + 0x19C);
    v82 = v76;
    v160[5] = 0x80000000;
    if ( !v81 )
      v81 = (_DWORD *)dword_BA7D9C;
    v83 = (0xC * v76 + 0x10) & 0xFFFFFFF0;
    v159 = v81[8];
    if ( v83 + v159 > v81[0xB] )
    {
      v84 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v81 + 0xC))(v81, v83);
    }
    else
    {
      v81[8] = v83 + v159;
      v84 = v159;
    }
    v160[3] = v84;
    v160[5] = v82 | 0x80000000;
    v160[6] = v84;
    v85 = v168;
    v86 = v82 & 0x3FFFFFFF;
    v87 = (v82 & 0x3FFFFFFF) < v168;
    v88 = v168;
    if ( v87 )
    {
      v89 = 2 * v86;
      if ( v168 < v89 )
        v85 = v89;
      sub_8A6E40((const void **)&v160[3], v85, 0xC);
    }
    v160[4] = v88;
    v151 = (_DWORD *)v160[3];
    if ( v77 != v161 )
    {
      while ( v78 != (char *)v160[2] )
      {
        v90 = *(_DWORD *)v78;
        if ( *(_DWORD *)v78 == *v77 )
        {
          *v151 = *v77;
          v151[1] = v77[1];
          v91 = v77[2];
          v77 += 3;
          v151[2] = v91;
          v151 += 3;
          v78 += 4;
        }
        else if ( *(_DWORD *)v78 >= *v77 )
        {
          v97 = v77[2];
          if ( v97 )
            (*(void (**)(void))(*(_DWORD *)v97 + 0x18))();
          v77 += 3;
        }
        else
        {
          v92 = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v171 + 0x28))(v171, v90, v176);
          v173 = v90;
          v172 = v92;
          if ( *(_BYTE *)(***((int (__thiscall ****)(int, char *, float *, _DWORD *, int *, int, _DWORD))a4 + 1))(
                           *((_DWORD *)a4 + 1),
                           (char *)v160 + 3,
                           a4,
                           a2,
                           &v172,
                           v171,
                           *(_DWORD *)v78) )
          {
            v93 = *a2;
            *(float *)&v160[1] = *a4;
            v94 = (*(int (__thiscall **)(int))(*(_DWORD *)v93 + 8))(v93);
            v95 = (*(int (__thiscall **)(int))(*(_DWORD *)v172 + 8))(v172);
            if ( *((_BYTE *)a4 + 0xC) )
              v96 = v160[1] + 0x590;
            else
              v96 = v160[1] + 0x190;
            v151[2] = (*(int (__cdecl **)(_DWORD *, int *, float *, int))(v160[1]
                                                                        + 0x14
                                                                        * *(unsigned __int8 *)(v95 + 0x20 * v94 + v96)
                                                                        + 0x990))(
                        a2,
                        &v172,
                        a4,
                        v147);
          }
          else
          {
            v151[2] = sub_8E0970();
          }
          *v151 = *(_DWORD *)v78;
          v151 += 3;
          v78 += 4;
        }
        if ( v77 == v161 )
          goto LABEL_88;
      }
      for ( i = v161; v77 != i; v77 += 3 )
      {
        v99 = v77[2];
        if ( v99 )
          (*(void (**)(void))(*(_DWORD *)v99 + 0x18))();
      }
    }
LABEL_88:
    while ( v78 != (char *)v160[2] )
    {
      v100 = *(_DWORD *)v78;
      v101 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v171 + 0x28))(v171, *(_DWORD *)v78, v176);
      v173 = v100;
      v172 = v101;
      if ( *(_BYTE *)(***((int (__thiscall ****)(int, char *, float *, _DWORD *, int *, int, _DWORD))a4 + 1))(
                       *((_DWORD *)a4 + 1),
                       (char *)v160 + 3,
                       a4,
                       a2,
                       &v172,
                       v171,
                       *(_DWORD *)v78) )
      {
        v102 = *a4;
        v103 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2);
        v104 = (*(int (__thiscall **)(int))(*(_DWORD *)v172 + 8))(v172);
        v105 = LODWORD(v102) + 0x590;
        if ( !*((_BYTE *)a4 + 0xC) )
          v105 = LODWORD(v102) + 0x190;
        v151[2] = (*(int (__cdecl **)(_DWORD *, int *, float *, int))(LODWORD(v102)
                                                                    + 0x14
                                                                    * *(unsigned __int8 *)(v104 + 0x20 * v103 + v105)
                                                                    + 0x990))(
                    a2,
                    &v172,
                    a4,
                    v147);
      }
      else
      {
        v151[2] = sub_8E0970();
      }
      *v151 = *(_DWORD *)v78;
      v151 += 3;
      v78 += 4;
    }
    v106 = v162;
    v107 = v160[4];
    v108 = v162[5] & 0x3FFFFFFF;
    if ( v108 < v160[4] )
    {
      if ( (int)v162[5] >= 0 )
      {
        v109 = *(_DWORD *)(v156 + 0x19C);
        if ( !v109 )
          v109 = dword_BA7D9C;
        sub_8A75D0(v109, (_DWORD *)v162[3], 0xC * v108, 0x14);
      }
      v110 = *(_DWORD *)(v156 + 0x19C);
      if ( !v110 )
        v110 = dword_BA7D9C;
      v111 = sub_8A7560(v110, 0xC * v160[4], 0x14);
      v107 = v160[4];
      v106[3] = v111;
      v106[5] = v107 | v106[5] & 0x40000000;
    }
    v106[4] = v107;
    v112 = (_DWORD *)v106[3];
    if ( v107 > 0 )
    {
      v113 = (_DWORD *)v160[3];
      v114 = v112;
      do
      {
        v115 = v114;
        *v114 = *v113;
        v114[1] = v113[1];
        v116 = v113[2];
        v113 += 3;
        v114 += 3;
        --v107;
        v115[2] = v116;
      }
      while ( v107 );
    }
    v117 = *(_DWORD **)(v156 + 0x19C);
    v118 = v160[6];
    if ( !v117 )
      v117 = (_DWORD *)dword_BA7D9C;
    v14 = v160[6] == v117[0xA];
    v117[8] = v160[6];
    if ( v14 )
      (*(void (__thiscall **)(_DWORD *, int))(*v117 + 0x10))(v117, v118);
    if ( v160[5] >= 0 )
    {
      v119 = *(_DWORD *)(v156 + 0x19C);
      if ( !v119 )
        v119 = dword_BA7D9C;
      sub_8A75D0(v119, (_DWORD *)v160[3], 0xC * (v160[5] & 0x3FFFFFFF), 0x14);
    }
    v48 = v167;
  }
  else
  {
    v45 = v162[3];
    v46 = (const void **)(v162 + 3);
    v47 = v45 + 0xC * v162[4];
    v161 = (_DWORD *)v162[2];
    v48 = v167;
    v49 = &v167[4 * v168];
    v160[1] = v47;
    v50 = v167;
    for ( j = v49; v45 != v160[1]; v45 += 0xC )
    {
      if ( v50 == v49 || *(_DWORD *)v45 != *(_DWORD *)v50 )
      {
        v50 = v48;
        v149 = v48;
        if ( v48 == v49 )
        {
LABEL_28:
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v45 + 8) + 0x18))(*(_DWORD *)(v45 + 8));
          v52 = (char *)*v46;
          v46[1] = (char *)v46[1] + 0xFFFFFFFF;
          v53 = (int)((unsigned __int64)(0x2AAAAAABLL * (v45 - (int)v52)) >> 0x20) >> 1;
          v54 = v53 + (v53 >> 0x1F);
          if ( v54 < (int)v46[1] )
          {
            v55 = 0xC * v54;
            v153 = 0xC * v54;
            do
            {
              v56 = (char *)*v46 + v55;
              *v56 = v56[3];
              v56[1] = v56[4];
              v56[2] = v56[5];
              ++v54;
              v55 = v153 + 0xC;
              v153 += 0xC;
            }
            while ( v54 < (int)v46[1] );
            v50 = v149;
          }
          v48 = v167;
          v45 -= 0xC;
          v160[1] -= 0xC;
          v49 = j;
        }
        else
        {
          while ( *(_DWORD *)v45 != *(_DWORD *)v50 )
          {
            v50 += 4;
            if ( v50 == v49 )
            {
              v149 = v50;
              goto LABEL_28;
            }
          }
          v50 += 4;
        }
      }
      else
      {
        v50 += 4;
      }
    }
    v57 = v46[1];
    if ( (const void *)v168 != v57 )
    {
      v58 = (char *)*v46;
      v154 = (int)*v46 + 0xC * (_DWORD)v57;
      v59 = v48;
      v150 = v48;
      v158 = &v48[4 * v168];
      if ( v48 != v158 )
      {
        do
        {
          if ( v58 == (char *)v154 || *(_DWORD *)v58 != *(_DWORD *)v59 )
          {
            v60 = (int)v57 + 1;
            v61 = (v59 - v48) >> 2;
            v146 = (int)v57 - v61;
            v62 = (unsigned int)v46[2] & 0x3FFFFFFF;
            v160[2] = v60;
            if ( v62 < v60 )
            {
              v63 = 2 * v62;
              if ( v60 >= v63 )
                v63 = v60;
              sub_8A6E40(v46, v63, 0xC);
            }
            v64 = 0xC * v61;
            v65 = (int)*v46 + 0xC * v61;
            if ( v146 - 1 >= 0 )
            {
              v66 = (_DWORD *)(v65 + 0xC + 0xC * (v146 - 1));
              v155 = v146;
              do
              {
                *v66 = v66[0xFFFFFFFD];
                v66[1] = v66[0xFFFFFFFE];
                v66[2] = v66[0xFFFFFFFF];
                v66 += 0xFFFFFFFD;
                --v155;
              }
              while ( v155 );
              v60 = v160[2];
            }
            v67 = (char *)*v46;
            v68 = v171;
            v46[1] = (const void *)v60;
            v69 = *(_DWORD *)v150;
            v58 = &v67[v64];
            v70 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v68 + 0x28))(v68, *(_DWORD *)v150, v176);
            v173 = v69;
            v172 = v70;
            if ( *(_BYTE *)(***((int (__thiscall ****)(int, char *, float *, _DWORD *, int *, int, _DWORD))a4 + 1))(
                             *((_DWORD *)a4 + 1),
                             (char *)v160 + 3,
                             a4,
                             a2,
                             &v172,
                             v171,
                             *(_DWORD *)v150) )
            {
              v71 = *a2;
              *(float *)&v160[1] = *a4;
              v72 = (*(int (__thiscall **)(int))(*(_DWORD *)v71 + 8))(v71);
              v73 = (*(int (__thiscall **)(int))(*(_DWORD *)v172 + 8))(v172);
              if ( *((_BYTE *)a4 + 0xC) )
                v74 = v160[1] + 0x590;
              else
                v74 = v160[1] + 0x190;
              v75 = (int (__stdcall ***)(char))(*(int (__cdecl **)(_DWORD *, int *, float *, _DWORD *))(v160[1] + 0x14 * *(unsigned __int8 *)(v73 + 0x20 * v72 + v74) + 0x990))(
                                                 a2,
                                                 &v172,
                                                 a4,
                                                 v161);
            }
            else
            {
              v75 = sub_8E0970();
            }
            *((_DWORD *)v58 + 2) = v75;
            *(_DWORD *)v58 = *(_DWORD *)v150;
            v57 = v46[1];
            v59 = v150;
            v154 = (int)*v46 + 0xC * (_DWORD)v57;
            v48 = v167;
          }
          v59 += 4;
          v58 += 0xC;
          v150 = v59;
        }
        while ( v59 != v158 );
      }
    }
  }
  if ( v169 >= 0 )
  {
    v120 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v120 )
      v120 = dword_BA7D9C;
    sub_8A75D0(v120, v48, 4 * v169, 0x14);
  }
LABEL_119:
  v121 = (int *)v162[3];
  v122 = &v121[3 * v162[4]];
  v123 = TlsIndex;
  v163[2] = a3[2];
  v124 = NtCurrentTeb()->ThreadLocalStoragePointer;
  v125 = *(_DWORD *)(v124[v123] + 0x1A4) < *(_DWORD *)(v124[v123] + 0x1A8);
  v163[3] = a3;
  if ( v125 )
  {
    v126 = v124[TlsIndex];
    v127 = *(_DWORD **)(v126 + 0x1A4);
    v148 = v126;
    *v127 = "StNarrowPhase";
    v128 = __rdtsc();
    v127[1] = v128;
    *(_DWORD *)(v148 + 0x1A4) = v127 + 3;
  }
  for ( k = *(_DWORD *)(*a3 + 0xC); v121 != v122; v121 += 3 )
  {
    v130 = (*(int (__thiscall **)(int, int, char *))(*(_DWORD *)k + 0x28))(k, *v121, v177);
    v131 = *v121;
    v163[0] = v130;
    v163[1] = v131;
    (*(void (__thiscall **)(int, _DWORD *, _DWORD *, float *, int))(*(_DWORD *)v121[2] + 0x14))(
      v121[2],
      a2,
      v163,
      a4,
      a5);
  }
  v132 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v133) = v132[TlsIndex];
  if ( *(_DWORD *)(v133 + 0x1A4) < *(_DWORD *)(v133 + 0x1A8) )
  {
    v134 = v132[TlsIndex];
    v135 = *(_DWORD **)(v133 + 0x1A4);
    *v135 = "lt";
    v133 = __rdtsc();
    v135[1] = v133;
    *(_DWORD *)(v134 + 0x1A4) = v135 + 3;
  }
  return v133;
}
