int __thiscall sub_8EEBC0(float *this, float *a2, int a3, int a4)
{
  double v4; // st7
  double v6; // st6
  bool v7; // c0
  bool v8; // c3
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v10; // edx
  int v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // edi
  int v14; // esi
  _DWORD *v15; // ecx
  unsigned __int64 v16; // rax
  __m128 v17; // xmm0
  int v18; // edx
  int v19; // esi
  double v20; // st7
  long double v21; // st7
  long double v22; // st7
  int v23; // edx
  double v24; // st7
  long double v25; // st7
  double v26; // st7
  unsigned int v27; // edi
  long double v28; // st7
  long double v29; // st7
  double v30; // st7
  _DWORD *v31; // ecx
  unsigned __int64 v32; // rax
  double v33; // st7
  int v34; // eax
  double v35; // st7
  _DWORD *v36; // ecx
  int v37; // esi
  _DWORD *v38; // ecx
  __m128 v39; // xmm2
  __m128 v40; // xmm0
  int v41; // edi
  int v42; // edi
  double v43; // st7
  int v44; // eax
  double v45; // st7
  __m128 v46; // xmm2
  __m128 v47; // xmm0
  int v48; // esi
  unsigned int v49; // eax
  double v50; // st7
  char v51; // dl
  int v52; // ecx
  int v53; // esi
  long double v54; // st7
  int v55; // esi
  double v56; // st7
  int v57; // eax
  double v58; // st7
  unsigned int v59; // ecx
  unsigned int v60; // eax
  int v61; // edi
  float v62; // edx
  int v63; // esi
  __m128 v64; // xmm0
  int v65; // ecx
  int v66; // edi
  double v67; // st7
  double v68; // st6
  double v69; // st7
  double v70; // st7
  double v71; // st7
  double v72; // st6
  double v73; // st6
  double v74; // st6
  bool v75; // c0
  bool v76; // c3
  int v77; // edx
  int v78; // esi
  int v79; // edx
  double v80; // st7
  double v81; // st7
  double v82; // st6
  bool v83; // zf
  bool v84; // sf
  bool v85; // of
  double v86; // st7
  __m128 v87; // xmm0
  __m128 v88; // xmm1
  __m128 v89; // xmm0
  float v90; // xmm2_4
  __m128 v91; // xmm3
  __m128 v92; // xmm0
  void (__thiscall **v93)(int, int, __m128 *); // edx
  __m128 v94; // xmm0
  double v95; // st7
  float v96; // ecx
  double v97; // st7
  int v98; // ecx
  _DWORD *v99; // ecx
  _DWORD *v100; // ecx
  int v101; // edx
  _BYTE *v102; // eax
  int v103; // edx
  int v104; // edx
  double v105; // st7
  double v106; // st7
  double v107; // st7
  double v108; // st6
  double v109; // st7
  int v110; // edx
  double v111; // st7
  double v113; // st7
  unsigned __int8 v114; // c0
  unsigned __int8 v115; // c2
  double v116; // st7
  __m128 v117; // xmm0
  void (__thiscall **v118)(int, int, __m128 *); // eax
  __m128 v119; // xmm1
  __m128 v120; // xmm0
  float v121; // xmm2_4
  __m128 v122; // xmm3
  __m128 v123; // xmm0
  __m128 v124; // xmm0
  int v126; // [esp+18h] [ebp-154h]
  int v127; // [esp+2Ch] [ebp-140h] BYREF
  float v128; // [esp+30h] [ebp-13Ch]
  int v129; // [esp+34h] [ebp-138h]
  int v130; // [esp+38h] [ebp-134h]
  int v131; // [esp+3Ch] [ebp-130h]
  float v132; // [esp+40h] [ebp-12Ch]
  char v133; // [esp+47h] [ebp-125h] BYREF
  int j; // [esp+48h] [ebp-124h]
  int v135; // [esp+4Ch] [ebp-120h]
  int i; // [esp+50h] [ebp-11Ch]
  float v137; // [esp+54h] [ebp-118h]
  float v138; // [esp+58h] [ebp-114h]
  float v139; // [esp+5Ch] [ebp-110h]
  float v140; // [esp+60h] [ebp-10Ch]
  float v141; // [esp+64h] [ebp-108h]
  float v142; // [esp+68h] [ebp-104h]
  float v143; // [esp+6Ch] [ebp-100h]
  int v144; // [esp+70h] [ebp-FCh]
  int v145; // [esp+74h] [ebp-F8h]
  signed int v146[6]; // [esp+78h] [ebp-F4h]
  float v147; // [esp+90h] [ebp-DCh] BYREF
  float v148; // [esp+94h] [ebp-D8h]
  float v149; // [esp+98h] [ebp-D4h]
  float v150; // [esp+9Ch] [ebp-D0h]
  float v151; // [esp+A0h] [ebp-CCh]
  float v152; // [esp+A4h] [ebp-C8h]
  __m128 v153; // [esp+ACh] [ebp-C0h]
  float v154; // [esp+C0h] [ebp-ACh]
  char v155; // [esp+C4h] [ebp-A8h]
  float v156; // [esp+C8h] [ebp-A4h]
  __m128 v157; // [esp+CCh] [ebp-A0h]
  __m128 v158; // [esp+DCh] [ebp-90h] BYREF
  unsigned int v159; // [esp+ECh] [ebp-80h]
  float v160[11]; // [esp+F0h] [ebp-7Ch]
  __m128 v161[3]; // [esp+11Ch] [ebp-50h] BYREF
  float v162; // [esp+14Ch] [ebp-20h]

  v4 = a2[0xC];
  v6 = *(this + 9);
  v7 = v6 < *(float *)&SrcStr;
  v8 = v6 == *(float *)&SrcStr;
  qmemcpy(v161, a2, sizeof(v161));
  if ( !v7 && !v8 )
    v4 = -v4;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v10 = TlsIndex;
  v139 = a2[0xD];
  v11 = ThreadLocalStoragePointer[v10];
  v161[0].m128_f32[1] = v161[0].m128_f32[1] + v4;
  v12 = *(_DWORD *)(v11 + 0x1A4);
  v13 = *(_DWORD *)(v11 + 0x1A8);
  v133 = 1;
  v161[1].m128_f32[1] = v161[1].m128_f32[1] + v4;
  if ( v12 < v13 )
  {
    v14 = v11;
    v15 = *(_DWORD **)(v11 + 0x1A4);
    *v15 = "TtrcHeightFild";
    v16 = __rdtsc();
    v128 = *(float *)&v16;
    v15[1] = v16;
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3;
  }
  v17 = *(__m128 *)(this + 0xC);
  v18 = *(_DWORD *)this;
  *(__m128 *)&v160[3] = _mm_add_ps(
                          _mm_mul_ps(_mm_add_ps(v161[0], *(__m128 *)(this + 0x10)), v17),
                          (__m128)xmmword_A97DD0);
  v19 = (__int16)(LODWORD(v160[3]) >> 6);
  i = (__int16)(LODWORD(v160[5]) >> 6);
  *(__m128 *)&v146[1] = _mm_mul_ps(v161[0], v17);
  j = v19;
  v157 = _mm_mul_ps(v161[1], v17);
  (*(void (__thiscall **)(float *, int *))(v18 + 0x28))(this, &v127);
  v146[4] = v146[2];
  v157.m128_i32[3] = v157.m128_i32[1];
  if ( (_BYTE)v127 )
  {
    *(float *)&v146[2] = *(float *)&v146[1] - *(float *)&v146[3];
    v20 = v157.m128_f32[0] - v157.m128_f32[2];
  }
  else
  {
    *(float *)&v146[2] = *(float *)&v146[3] + *(float *)&v146[1];
    v20 = v157.m128_f32[2] + v157.m128_f32[0];
  }
  v157.m128_f32[1] = v20;
  v21 = v157.m128_f32[0] - *(float *)&v146[1];
  *(float *)&v130 = v21;
  v22 = fabs(v21);
  v162 = v22;
  if ( v22 >= flt_A9B0D8 )
  {
    v24 = fConstant_1 / *(float *)&v130;
    v160[3] = v24;
    if ( *(float *)&v130 >= (double)*(float *)&SrcStr )
    {
      ++v19;
      v150 = v24;
      v23 = 1;
      j = v19;
    }
    else
    {
      v23 = 0xFFFFFFFF;
      v150 = -v24;
    }
    v147 = ((double)j - *(float *)&v146[1]) * v24;
  }
  else
  {
    v150 = 0.0;
    v23 = 0xFFFFFFFF;
    v147 = 3.4028235e38;
  }
  v144 = v23;
  v25 = v157.m128_f32[1] - *(float *)&v146[2];
  *(float *)&v130 = v25;
  if ( fabs(v25) >= flt_A9B0D8 )
  {
    v26 = fConstant_1 / *(float *)&v130;
    if ( *(float *)&v130 >= (double)*(float *)&SrcStr )
    {
      v151 = v26;
      v145 = 1;
      ++v135;
    }
    else
    {
      v145 = 0xFFFFFFFF;
      v151 = -v26;
    }
    v148 = ((double)v135 - *(float *)&v146[2]) * v26;
  }
  else
  {
    v151 = 0.0;
    v145 = 0xFFFFFFFF;
    v148 = 3.4028235e38;
  }
  v27 = i;
  v28 = v157.m128_f32[2] - *(float *)&v146[3];
  *(float *)&v130 = v28;
  v29 = fabs(v28);
  v156 = v29;
  if ( v29 >= flt_A9B0D8 )
  {
    v30 = fConstant_1 / *(float *)&v130;
    v160[5] = v30;
    if ( *(float *)&v130 >= (double)*(float *)&SrcStr )
    {
      v27 = i + 1;
      v152 = v30;
      v146[0] = 1;
      ++i;
    }
    else
    {
      v146[0] = 0xFFFFFFFF;
      v152 = -v30;
    }
    v149 = ((double)i - *(float *)&v146[3]) * v30;
  }
  else
  {
    v152 = 0.0;
    v146[0] = 0xFFFFFFFF;
    v149 = 3.4028235e38;
  }
  if ( *(float *)&SrcStr == v152 + v150 || *(float *)&SrcStr == v151 + v150 || *(float *)&SrcStr == v151 + v152 )
  {
    if ( v19 >= (unsigned int)(*((_DWORD *)this + 3) - 1) || v27 >= *((_DWORD *)this + 4) - 1 )
    {
      v100 = NtCurrentTeb()->ThreadLocalStoragePointer;
      LODWORD(v32) = v100[TlsIndex];
      if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) )
        return v32;
LABEL_189:
      v37 = v100[TlsIndex];
      v38 = *(_DWORD **)(v32 + 0x1A4);
      *v38 = "Et";
      v32 = __rdtsc();
      v131 = v32;
      goto LABEL_190;
    }
    v101 = *(_DWORD *)this;
    v131 = 0x3F800000;
    v137 = *(float *)&v146[3] - (double)i;
    v160[0] = 1.0;
    v158 = _mm_shuffle_ps((__m128)0x3F800000u, (__m128)0x3F800000u, 0);
    v132 = *(float *)&v146[1] - (double)j;
    v102 = (_BYTE *)(*(int (__thiscall **)(float *, char *))(v101 + 0x28))(this, &v133);
    v103 = *(_DWORD *)this;
    if ( *v102 )
    {
      v140 = ((double (__thiscall *)(float *, int))*(_DWORD *)(v103 + 0x24))(this, v19);
      *(float *)&v129 = ((double (__thiscall *)(float *, int, unsigned int))*(_DWORD *)(*(_DWORD *)this + 0x24))(
                          this,
                          v19 + 1,
                          v27 + 1);
      v104 = *(_DWORD *)this;
      if ( v132 > (double)v137 )
      {
        v105 = ((double (__thiscall *)(float *, int, unsigned int))*(_DWORD *)(v104 + 0x24))(this, v19 + 1, v27);
        v128 = v105 - v140;
        *(float *)&v129 = *(float *)&v129 - v105;
        v106 = v128 * v132 + *(float *)&v129 * v137 + v140;
LABEL_168:
        v110 = 1;
        v158.m128_f32[0] = -v128;
        v108 = *(float *)&v129;
        goto LABEL_171;
      }
      v107 = ((double (__thiscall *)(float *, int, unsigned int))*(_DWORD *)(v104 + 0x24))(this, v19, v27 + 1);
      v128 = *(float *)&v129 - v107;
      *(float *)&v129 = v107 - v140;
      v106 = v128 * v132 + *(float *)&v129 * v137 + v140;
      v158.m128_f32[0] = -v128;
      v108 = *(float *)&v129;
    }
    else
    {
      v141 = ((double (__thiscall *)(float *, int))*(_DWORD *)(v103 + 0x24))(this, v19 + 1);
      v128 = ((double (__thiscall *)(float *, int, unsigned int))*(_DWORD *)(*(_DWORD *)this + 0x24))(
               this,
               v19,
               v27 + 1);
      if ( v132 + v137 > fConstant_1 )
      {
        v109 = ((double (__thiscall *)(float *, int, unsigned int))*(_DWORD *)(*(_DWORD *)this + 0x24))(
                 this,
                 v19 + 1,
                 v27 + 1);
        v128 = v109 - v128;
        *(float *)&v129 = v109 - v141;
        v106 = (v132 - fConstant_1) * v128 + *(float *)&v129 * v137 + v141;
        goto LABEL_168;
      }
      v111 = ((double (__thiscall *)(float *, int, unsigned int))*(_DWORD *)(*(_DWORD *)this + 0x24))(this, v19, v27);
      *(float *)&v129 = v141 - v111;
      v128 = v128 - v111;
      v106 = v111 + *(float *)&v129 * v132 + v128 * v137;
      v158.m128_f32[0] = -*(float *)&v129;
      v108 = v128;
    }
    v110 = 0;
LABEL_171:
    v158.m128_f32[2] = -v108;
    v132 = *(float *)&v146[4] - v106;
    v140 = v157.m128_f32[3] - v106;
    if ( v140 > (double)v132 )
    {
      v99 = NtCurrentTeb()->ThreadLocalStoragePointer;
      LODWORD(v32) = v99[TlsIndex];
      if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) )
        return v32;
      goto LABEL_187;
    }
    v113 = v132;
    if ( v114 | v115 )
    {
      if ( v113 - v139 < v140 )
      {
        v100 = NtCurrentTeb()->ThreadLocalStoragePointer;
        LODWORD(v32) = v100[TlsIndex];
        if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) )
          return v32;
        goto LABEL_189;
      }
      v116 = *(float *)&SrcStr;
    }
    else
    {
      if ( v113 < *(float *)&SrcStr || v140 >= (double)*(float *)&SrcStr )
      {
        v99 = NtCurrentTeb()->ThreadLocalStoragePointer;
        LODWORD(v32) = v99[TlsIndex];
        if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) )
          return v32;
        goto LABEL_187;
      }
      v116 = v132 / (v132 - v140);
    }
    if ( v116 < *(float *)(a4 + 4) )
    {
      v117 = *(__m128 *)(this + 0xC);
      v160[0] = v116;
      v118 = *(void (__thiscall ***)(int, int, __m128 *))a4;
      v119 = _mm_mul_ps(v158, v117);
      v120 = _mm_mul_ps(v119, v119);
      v121 = _mm_shuffle_ps(v120, v120, 0x55).m128_f32[0] + v120.m128_f32[0];
      v122 = _mm_shuffle_ps(v120, v120, 0xAA);
      v123 = v122;
      v123.m128_f32[0] = v122.m128_f32[0] + v121;
      *(__m128 *)&v160[3] = v123;
      v160[3] = 1.0 / fsqrt(v122.m128_f32[0] + v121);
      v159 = v110 + 2 * (v19 + (v27 << 0xF));
      v131 = 0x3F000000;
      v124 = (__m128)0x3F000000u;
      v124.m128_f32[0] = (float)(0.5 * v160[3])
                       * (float)(3.0 - (float)((float)((float)(v122.m128_f32[0] + v121) * v160[3]) * v160[3]));
      v158 = _mm_mul_ps(_mm_shuffle_ps(v124, v124, 0), v119);
      (*v118)(a4, a3, &v158);
    }
    v100 = NtCurrentTeb()->ThreadLocalStoragePointer;
    LODWORD(v32) = v100[TlsIndex];
    if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) )
      return v32;
    goto LABEL_189;
  }
  v153 = *(__m128 *)&v146[1];
  v141 = *(float *)&v19;
  if ( v23 <= 0 )
  {
    v34 = *((_DWORD *)this + 3);
    if ( v19 > v34 - 2 )
    {
      LODWORD(v128) = v34 - 1;
      v35 = (double)(v34 - 1);
      if ( v157.m128_f32[0] > v35 )
      {
        v36 = NtCurrentTeb()->ThreadLocalStoragePointer;
        LODWORD(v32) = v36[TlsIndex];
        if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) )
          return v32;
        goto LABEL_38;
      }
      v19 = v34 - 2;
      v33 = (*(float *)&v146[1] - v35) * v150;
      goto LABEL_40;
    }
LABEL_43:
    v42 = i;
    goto LABEL_44;
  }
  if ( v19 > 0 )
    goto LABEL_43;
  if ( v157.m128_f32[0] < (double)*(float *)&SrcStr )
  {
    v31 = NtCurrentTeb()->ThreadLocalStoragePointer;
    LODWORD(v32) = v31[TlsIndex];
    if ( *(_DWORD *)(v32 + 0x1A4) < *(_DWORD *)(v32 + 0x1A8) )
      goto LABEL_63;
    return v32;
  }
  v19 = 1;
  v33 = -(v150 * *(float *)&v146[1]);
LABEL_40:
  v39 = (__m128)xmmword_A6DFE0;
  j = v19;
  v147 = v150 + v33;
  v128 = v33;
  v40 = _mm_shuffle_ps((__m128)LODWORD(v128), (__m128)LODWORD(v128), 0);
  v128 = v33 * v156;
  v153 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v39, v40), *(__m128 *)&v146[1]), _mm_mul_ps(v40, v157));
  v129 = (int)v128;
  v41 = i + v146[0] * v129 - 2;
  for ( i = v41; (double)v41 <= v153.m128_f32[2]; i = v41 )
    ++v41;
  v42 = (v146[0] >> 1) + v41;
  i = v42;
  v149 = ((double)v42 - *(float *)&v146[3]) * v160[5];
LABEL_44:
  if ( v146[0] > 0 )
  {
    if ( v42 > 0 )
      goto LABEL_58;
    if ( v157.m128_f32[2] < (double)*(float *)&SrcStr )
    {
      v31 = NtCurrentTeb()->ThreadLocalStoragePointer;
      LODWORD(v32) = v31[TlsIndex];
      if ( *(_DWORD *)(v32 + 0x1A4) < *(_DWORD *)(v32 + 0x1A8) )
        goto LABEL_63;
      return v32;
    }
    v42 = 1;
    v43 = -(v152 * *(float *)&v146[3]);
    goto LABEL_55;
  }
  v44 = *((_DWORD *)this + 4);
  if ( v42 <= v44 - 2 )
    goto LABEL_58;
  LODWORD(v128) = v44 - 1;
  v45 = (double)(v44 - 1);
  if ( v157.m128_f32[2] > v45 )
  {
    v36 = NtCurrentTeb()->ThreadLocalStoragePointer;
    LODWORD(v32) = v36[TlsIndex];
    if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) )
      return v32;
LABEL_38:
    v37 = v36[TlsIndex];
    v38 = *(_DWORD **)(v32 + 0x1A4);
    *v38 = "Et";
    v32 = __rdtsc();
    v139 = *(float *)&v32;
LABEL_190:
    v38[1] = v32;
    goto LABEL_191;
  }
  v42 = v44 - 2;
  v43 = (*(float *)&v146[3] - v45) * v152;
LABEL_55:
  v46 = (__m128)xmmword_A6DFE0;
  i = v42;
  v149 = v152 + v43;
  v128 = v43;
  v47 = _mm_shuffle_ps((__m128)LODWORD(v128), (__m128)LODWORD(v128), 0);
  v128 = v43 * v162;
  v153 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v46, v47), *(__m128 *)&v146[1]), _mm_mul_ps(v47, v157));
  v129 = (int)v128;
  v48 = v23 * v129 + LODWORD(v141) - 2;
  for ( j = v48; (double)v48 <= v153.m128_f32[0]; j = v48 )
    ++v48;
  v19 = (v23 >> 1) + v48;
  j = v19;
  v147 = ((double)v19 - *(float *)&v146[1]) * v160[3];
LABEL_58:
  v49 = *((_DWORD *)this + 3);
  if ( v19 >= v49 )
  {
    v31 = NtCurrentTeb()->ThreadLocalStoragePointer;
    LODWORD(v32) = v31[TlsIndex];
    if ( *(_DWORD *)(v32 + 0x1A4) < *(_DWORD *)(v32 + 0x1A8) )
      goto LABEL_63;
    return v32;
  }
  if ( v19 - v144 < v49 )
  {
    v50 = *(float *)&SrcStr;
    v51 = ((_BYTE)v127 != 0) ^ ((v144 ^ v146[0]) >= 0);
    v155 = v51;
    if ( v151 == v50 )
    {
      v155 = 0;
      v51 = 0;
    }
    v52 = 2;
    LODWORD(v140) = 2;
    if ( (_BYTE)v127 )
      v53 = v19 - v42;
    else
      v53 = v42 + v19;
    v135 = v53;
    v54 = v153.m128_f32[1] - (double)v53;
    if ( v51 )
    {
      if ( fabs(v54) <= fConstant_1 )
      {
        v52 = 0;
        v140 = 0.0;
        goto LABEL_76;
      }
      v55 = v53 - v145;
    }
    else
    {
      if ( (double)v145 * v54 <= *(float *)&SrcStr )
        goto LABEL_76;
      v52 = 0;
      v140 = 0.0;
      v55 = v145 + v53;
    }
    v135 = v55;
LABEL_76:
    if ( v151 == *(float *)&SrcStr )
      v148 = 3.4028235e38;
    else
      v148 = ((double)v135 - *(float *)&v146[2]) * (double)v145 * v151;
    if ( v150 == *(float *)&SrcStr )
      v56 = flt_A3B888;
    else
      v56 = v147 - v150;
    if ( v151 == *(float *)&SrcStr )
      v153.m128_i32[1] = 0xFF7FFFFF;
    else
      v153.m128_f32[1] = v148 - v151;
    if ( v152 == *(float *)&SrcStr )
      v153.m128_i32[2] = 0xFF7FFFFF;
    else
      v153.m128_f32[2] = v149 - v152;
    if ( v51 )
    {
      if ( !v52 )
      {
LABEL_90:
        v57 = 1;
LABEL_101:
        v58 = *(&v147 + v57) - *(&v150 + v57);
        *(&j + v57) -= *(&v144 + v57);
        v59 = j;
        *(&v147 + v57) = v58;
        v130 = v57;
        v60 = *((_DWORD *)this + 3);
        v132 = 3.4028235e38;
        v154 = 0.0;
        v143 = -1.0;
        if ( v59 < v60 )
        {
          do
          {
            if ( (unsigned int)i >= *((_DWORD *)this + 4) )
              break;
            if ( v143 > (double)*(float *)(a4 + 4) )
            {
              v99 = NtCurrentTeb()->ThreadLocalStoragePointer;
              LODWORD(v32) = v99[TlsIndex];
              if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) )
                return v32;
              goto LABEL_187;
            }
            v61 = v130;
            v62 = *(&v147 + v130);
            v131 = (int)(&v147 + v130);
            v137 = v62;
            sub_535AA0(&v158, v62);
            v63 = j;
            v64 = _mm_shuffle_ps(v158, v158, 0);
            v65 = i;
            v153 = _mm_add_ps(
                     _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v64), *(__m128 *)&v146[1]),
                     _mm_mul_ps(v64, v157));
            LODWORD(v142) = j - v144;
            if ( v61 )
            {
              v83 = v61 == 2;
              v66 = i;
              if ( v83 )
              {
                v128 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(*(_DWORD *)this + 0x24))(
                         this,
                         j - v144,
                         i);
                v67 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(*(_DWORD *)this + 0x24))(this, v63, v66);
                v68 = fabs(v153.m128_f32[0] - (double)j) * (v128 - v67);
              }
              else
              {
                v141 = *(float *)&i;
                *(float *)&v129 = fabs(v153.m128_f32[0] - (double)j);
                if ( v155 )
                  LODWORD(v141) = i - v146[0];
                else
                  v65 = i - v146[0];
                v128 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(*(_DWORD *)this + 0x24))(
                         this,
                         j - v144,
                         v65);
                v67 = ((double (__thiscall *)(float *, int, _DWORD))*(_DWORD *)(*(_DWORD *)this + 0x24))(
                        this,
                        v63,
                        LODWORD(v141));
                v68 = (v128 - v67) * *(float *)&v129;
              }
            }
            else
            {
              v128 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(*(_DWORD *)this + 0x24))(
                       this,
                       j,
                       i - v146[0]);
              v66 = i;
              v67 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(*(_DWORD *)this + 0x24))(this, v63, i);
              v68 = fabs(v153.m128_f32[2] - (double)i) * (v128 - v67);
            }
            v138 = v68 + v67;
            if ( v133 )
            {
              if ( v153.m128_f32[3] >= (double)v138 )
                goto LABEL_139;
              v69 = v154 - v132;
              if ( v69 - (v137 - v143) * v139 <= v153.m128_f32[3] - v138 )
                goto LABEL_139;
              if ( v69 <= *(float *)&SrcStr )
              {
                v70 = sub_8AC0D0(0.0, v143);
                v141 = v70;
                goto LABEL_126;
              }
            }
            else if ( v153.m128_f32[3] >= (double)v138 || v154 < (double)v132 )
            {
LABEL_139:
              v132 = v138;
              v154 = v153.m128_f32[3];
              v143 = v137;
              goto LABEL_140;
            }
            v71 = v153.m128_f32[3] - v138;
            if ( v143 < (double)*(float *)&SrcStr )
            {
              v73 = v137 / (v137 - v143);
              v74 = *(float *)&v146[4] - ((fConstant_1 - v73) * v138 + v73 * v132);
              if ( v74 < *(float *)&SrcStr )
              {
                if ( !v133 )
                  goto LABEL_139;
                v74 = *(float *)&SrcStr;
              }
              v72 = v74 / (v74 - v71) * v137;
            }
            else
            {
              v72 = (v154 - v132) / (v154 - v132 - v71) * (v137 - v143) + v143;
            }
            v141 = v72;
            v70 = v72;
LABEL_126:
            v132 = v138;
            v75 = v70 < *(float *)(a4 + 4);
            v76 = v70 == *(float *)(a4 + 4);
            v154 = v153.m128_f32[3];
            v143 = v137;
            if ( !v75 && !v76 )
            {
              v100 = NtCurrentTeb()->ThreadLocalStoragePointer;
              LODWORD(v32) = v100[TlsIndex];
              if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) )
                return v32;
              goto LABEL_189;
            }
            v77 = *(_DWORD *)this;
            v78 = i - v146[0];
            v161[1].m128_i32[1] = 0x3F800000;
            v161[0].m128_i32[3] = 0;
            v161[0].m128_i32[1] = 0x3F800000;
            v126 = i - v146[0];
            if ( v155 )
            {
              *(float *)&v129 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(v77 + 0x24))(this, j, v126);
              v138 = ((double (__thiscall *)(float *, _DWORD, int))*(_DWORD *)(*(_DWORD *)this + 0x24))(
                       this,
                       LODWORD(v142),
                       v66);
              v79 = *(_DWORD *)this;
              if ( v130 != 1 )
              {
                v142 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(v79 + 0x24))(this, j, v66);
                v85 = __OFSUB__(v66, v78);
                v83 = v66 == v78;
                v84 = v66 - v78 < 0;
                v81 = v138 - v142;
                v82 = *(float *)&v129 - v142;
                goto LABEL_137;
              }
              v80 = ((double (__thiscall *)(float *, _DWORD, int))*(_DWORD *)(v79 + 0x24))(this, LODWORD(v142), v78);
              v142 = v80;
              v81 = v80 - *(float *)&v129;
              v82 = v142 - v138;
            }
            else
            {
              v138 = ((double (__thiscall *)(float *, _DWORD, int))*(_DWORD *)(v77 + 0x24))(this, LODWORD(v142), v126);
              v128 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(*(_DWORD *)this + 0x24))(this, j, v66);
              if ( *(float *)&v130 != 0.0 && (v130 != 1 || v162 >= (double)v156) )
              {
                v86 = ((double (__thiscall *)(float *, _DWORD, int))*(_DWORD *)(*(_DWORD *)this + 0x24))(
                        this,
                        LODWORD(v142),
                        v66);
                *(float *)&v129 = v86;
                v81 = v86 - v128;
                v85 = __OFSUB__(v66, v78);
                v83 = v66 == v78;
                v84 = v66 - v78 < 0;
                v82 = v138 - *(float *)&v129;
                goto LABEL_137;
              }
              *(float *)&v129 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(*(_DWORD *)this + 0x24))(
                                  this,
                                  j,
                                  v78);
              v81 = v138 - *(float *)&v129;
              v82 = *(float *)&v129 - v128;
            }
            v85 = __OFSUB__(v78, v66);
            v83 = v78 == v66;
            v84 = v78 - v66 < 0;
LABEL_137:
            v87 = *(__m128 *)(this + 0xC);
            v161[0].m128_f32[0] = (double)v144 * v81;
            v161[1].m128_f32[1] = v141;
            v161[0].m128_f32[2] = (double)v146[0] * v82;
            v88 = _mm_mul_ps(v161[0], v87);
            v89 = _mm_mul_ps(v88, v88);
            v90 = _mm_shuffle_ps(v89, v89, 0x55).m128_f32[0] + v89.m128_f32[0];
            v91 = _mm_shuffle_ps(v89, v89, 0xAA);
            v92 = v91;
            v92.m128_f32[0] = v91.m128_f32[0] + v90;
            *(__m128 *)&v160[3] = v92;
            v160[3] = 1.0 / fsqrt(v91.m128_f32[0] + v90);
            v93 = *(void (__thiscall ***)(int, int, __m128 *))a4;
            v160[9] = 3.0;
            v161[1].m128_i32[0] = (((_BYTE)v127 != 0) ^ !(v84 ^ v85 | v83))
                                + 2 * (j + ((i - (v146[0] >> 1) - 1) << 0xF) - (v144 >> 1))
                                - 2;
            v160[0xA] = 0.5;
            v94 = (__m128)0x3F000000u;
            v94.m128_f32[0] = (float)(0.5 * v160[3])
                            * (float)(3.0 - (float)((float)((float)(v91.m128_f32[0] + v90) * v160[3]) * v160[3]));
            v161[0] = _mm_mul_ps(_mm_shuffle_ps(v94, v94, 0), v88);
            (*v93)(a4, a3, v161);
            if ( v133 )
              v133 = 0;
LABEL_140:
            v95 = *(&v150 + v130);
            v96 = v140;
            *(&j + v130) += *(&v144 + v130);
            v97 = v95 + *(float *)v131;
            v98 = LODWORD(v96) ^ 2;
            v140 = *(float *)&v98;
            *(float *)v131 = v97;
            if ( v155 )
            {
              if ( *(float *)&v98 == 0.0 )
                goto LABEL_142;
              if ( v147 >= (double)v149 )
                goto LABEL_152;
              *(float *)&v130 = 0.0;
            }
            else
            {
              if ( v162 < (double)v156 )
              {
                if ( *(float *)&v98 != 0.0 )
                  goto LABEL_152;
                if ( v147 < (double)v148 )
                {
                  *(float *)&v130 = 0.0;
                  continue;
                }
LABEL_142:
                v130 = 1;
                continue;
              }
              if ( *(float *)&v98 == 0.0 )
              {
                v130 = 1;
                if ( v148 >= (double)v149 )
LABEL_152:
                  v130 = 2;
              }
              else
              {
                *(float *)&v130 = 0.0;
              }
            }
          }
          while ( (unsigned int)j < *((_DWORD *)this + 3) );
        }
        v99 = NtCurrentTeb()->ThreadLocalStoragePointer;
        LODWORD(v32) = v99[TlsIndex];
        if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) )
          return v32;
LABEL_187:
        v37 = v99[TlsIndex];
        v38 = *(_DWORD **)(v32 + 0x1A4);
        *v38 = "Et";
        v32 = __rdtsc();
        v131 = v32;
        v38[1] = v32;
        goto LABEL_191;
      }
      if ( v56 > v153.m128_f32[2] )
      {
        *(float *)&v57 = 0.0;
        goto LABEL_101;
      }
    }
    else if ( v162 >= (double)v156 )
    {
      if ( v52 )
      {
        *(float *)&v57 = 0.0;
        goto LABEL_101;
      }
      v57 = 1;
      if ( v153.m128_f32[1] > (double)v153.m128_f32[2] )
        goto LABEL_101;
    }
    else if ( !v52 )
    {
      if ( v56 > v153.m128_f32[1] )
      {
        *(float *)&v57 = 0.0;
        goto LABEL_101;
      }
      goto LABEL_90;
    }
    v57 = 2;
    goto LABEL_101;
  }
  v31 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v32) = v31[TlsIndex];
  if ( *(_DWORD *)(v32 + 0x1A4) < *(_DWORD *)(v32 + 0x1A8) )
  {
LABEL_63:
    v37 = v31[TlsIndex];
    v38 = *(_DWORD **)(v32 + 0x1A4);
    *v38 = "Et";
    v32 = __rdtsc();
    v139 = *(float *)&v32;
    v38[1] = v32;
LABEL_191:
    *(_DWORD *)(v37 + 0x1A4) = v38 + 3;
  }
  return v32;
}
