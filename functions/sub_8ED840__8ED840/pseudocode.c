int __thiscall sub_8ED840(__m128 *this, __m128 *a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  int v12; // edi
  __m128 v13; // xmm0
  __int32 v14; // edx
  double v15; // st7
  long double v16; // st7
  long double v17; // st7
  int v18; // edx
  double v19; // st7
  long double v20; // st7
  double v21; // st7
  unsigned int v22; // ebx
  long double v23; // st7
  long double v24; // st7
  double v25; // st7
  _DWORD *v26; // ecx
  unsigned __int64 v27; // rax
  double v28; // st7
  __int32 v29; // eax
  double v30; // st7
  _DWORD *v31; // ecx
  __m128 v32; // xmm2
  __m128 v33; // xmm0
  int v34; // ecx
  int v35; // ecx
  double v36; // st7
  int v37; // eax
  double v38; // st7
  __m128 v39; // xmm2
  __m128 v40; // xmm0
  int v41; // edi
  unsigned int v42; // eax
  int v43; // esi
  _DWORD *v44; // ecx
  double v45; // st7
  char v46; // dl
  int v47; // ebx
  int v48; // edi
  long double v49; // st7
  int v50; // edi
  double v51; // st7
  int v52; // eax
  double v53; // st7
  unsigned __int32 v54; // ecx
  unsigned __int32 v55; // eax
  int v56; // edi
  int v57; // ebx
  __m128 v58; // xmm0
  int v59; // ecx
  int v60; // edi
  double v61; // st7
  double v62; // st6
  double v63; // st7
  double v64; // st6
  double v65; // st4
  double v66; // st5
  double v67; // st5
  __int32 v68; // edx
  int v69; // ebx
  __int32 v70; // edx
  double v71; // st7
  double v72; // st7
  double v73; // st6
  bool v74; // zf
  bool v75; // sf
  bool v76; // of
  double v77; // st7
  __m128 v78; // xmm0
  __m128 v79; // xmm1
  __m128 v80; // xmm0
  float v81; // xmm2_4
  __m128 v82; // xmm3
  __m128 v83; // xmm0
  void (__thiscall **v84)(int, int, __m128 *); // edx
  __m128 v85; // xmm0
  double v86; // st7
  float v87; // ecx
  double v88; // st7
  int v89; // ecx
  _DWORD *v90; // ecx
  _DWORD *v91; // ecx
  __int32 v92; // edx
  _BYTE *v93; // eax
  __int32 v94; // edx
  __int32 v95; // edx
  double v96; // st7
  double v97; // st7
  double v98; // st7
  double v99; // st6
  double v100; // st7
  int v101; // edx
  double v102; // st7
  double v103; // st7
  __m128 v104; // xmm0
  __m128 v105; // xmm1
  __m128 v106; // xmm0
  float v107; // xmm2_4
  __m128 v108; // xmm3
  __m128 v109; // xmm0
  unsigned int v110; // eax
  void (__thiscall **v111)(int, int, __m128 *); // edx
  __m128 v112; // xmm0
  int v114; // [esp+18h] [ebp-144h]
  unsigned int v115; // [esp+2Ch] [ebp-130h]
  float v116; // [esp+2Ch] [ebp-130h]
  unsigned int v117; // [esp+2Ch] [ebp-130h]
  float v118; // [esp+2Ch] [ebp-130h]
  float v119; // [esp+2Ch] [ebp-130h]
  float v120; // [esp+2Ch] [ebp-130h]
  float v121; // [esp+2Ch] [ebp-130h]
  float v122; // [esp+2Ch] [ebp-130h]
  float v123; // [esp+2Ch] [ebp-130h]
  float v124; // [esp+2Ch] [ebp-130h]
  float v125; // [esp+2Ch] [ebp-130h]
  float v126; // [esp+2Ch] [ebp-130h]
  int v127; // [esp+30h] [ebp-12Ch] BYREF
  int v128; // [esp+34h] [ebp-128h]
  int v129; // [esp+38h] [ebp-124h]
  int v130; // [esp+3Ch] [ebp-120h]
  int j; // [esp+40h] [ebp-11Ch]
  int v132; // [esp+44h] [ebp-118h]
  int i; // [esp+48h] [ebp-114h]
  float v134; // [esp+4Ch] [ebp-110h]
  float v135; // [esp+50h] [ebp-10Ch]
  float v136; // [esp+54h] [ebp-108h]
  float v137; // [esp+58h] [ebp-104h]
  float v138; // [esp+5Ch] [ebp-100h]
  int v139; // [esp+60h] [ebp-FCh]
  int v140; // [esp+64h] [ebp-F8h]
  _DWORD v141[5]; // [esp+68h] [ebp-F4h]
  float v142; // [esp+7Ch] [ebp-E0h] BYREF
  float v143; // [esp+80h] [ebp-DCh]
  float v144; // [esp+84h] [ebp-D8h]
  float v145; // [esp+88h] [ebp-D4h]
  float v146; // [esp+8Ch] [ebp-D0h]
  float v147; // [esp+90h] [ebp-CCh]
  float v148; // [esp+94h] [ebp-C8h]
  __m128 v149; // [esp+9Ch] [ebp-C0h]
  float v150; // [esp+ACh] [ebp-B0h]
  float v151[7]; // [esp+B0h] [ebp-ACh]
  __int128 v152; // [esp+CCh] [ebp-90h] BYREF
  __m128 v153; // [esp+DCh] [ebp-80h]
  __m128 v154; // [esp+ECh] [ebp-70h] BYREF
  unsigned int v155; // [esp+FCh] [ebp-60h]
  float v156[7]; // [esp+100h] [ebp-5Ch]
  float v157; // [esp+11Ch] [ebp-40h]
  __m128 v158; // [esp+12Ch] [ebp-30h] BYREF
  int v159; // [esp+13Ch] [ebp-20h]
  int v160; // [esp+140h] [ebp-1Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtrcHeightFild";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = *a2;
  v11 = *(this + 3);
  v153 = _mm_add_ps(_mm_mul_ps(_mm_add_ps(*a2, *(this + 4)), v11), (__m128)xmmword_A97DD0);
  v12 = (__int16)((unsigned __int32)v153.m128_i32[0] >> 6);
  *(__m128 *)&v141[1] = _mm_mul_ps(v10, v11);
  v13 = a2[1];
  v14 = this->m128_i32[0];
  i = (__int16)((unsigned __int32)v153.m128_i32[2] >> 6);
  j = v12;
  *(__m128 *)&v151[3] = _mm_mul_ps(v13, v11);
  (*(void (__thiscall **)(__m128 *, int *))(v14 + 0x28))(this, &v127);
  v141[4] = v141[2];
  v151[6] = v151[4];
  if ( (_BYTE)v127 )
  {
    *(float *)&v141[2] = *(float *)&v141[1] - *(float *)&v141[3];
    v15 = v151[3] - v151[5];
  }
  else
  {
    *(float *)&v141[2] = *(float *)&v141[3] + *(float *)&v141[1];
    v15 = v151[5] + v151[3];
  }
  v151[4] = v15;
  v16 = v151[3] - *(float *)&v141[1];
  *(float *)&v129 = v16;
  v17 = fabs(v16);
  v157 = v17;
  if ( v17 >= flt_A9B0D8 )
  {
    v19 = fConstant_1 / *(float *)&v129;
    v153.m128_f32[0] = v19;
    if ( *(float *)&v129 >= (double)*(float *)&SrcStr )
    {
      ++v12;
      v146 = v19;
      v18 = 1;
      j = v12;
    }
    else
    {
      v18 = 0xFFFFFFFF;
      v146 = -v19;
    }
    v142 = ((double)j - *(float *)&v141[1]) * v19;
  }
  else
  {
    v146 = 0.0;
    v18 = 0xFFFFFFFF;
    v142 = 3.4028235e38;
  }
  v139 = v18;
  v20 = v151[4] - *(float *)&v141[2];
  *(float *)&v129 = v20;
  if ( fabs(v20) >= flt_A9B0D8 )
  {
    v21 = fConstant_1 / *(float *)&v129;
    if ( *(float *)&v129 >= (double)*(float *)&SrcStr )
    {
      v147 = v21;
      v140 = 1;
      ++v132;
    }
    else
    {
      v140 = 0xFFFFFFFF;
      v147 = -v21;
    }
    v143 = ((double)v132 - *(float *)&v141[2]) * v21;
  }
  else
  {
    v147 = 0.0;
    v140 = 0xFFFFFFFF;
    v143 = 3.4028235e38;
  }
  v22 = i;
  v23 = v151[5] - *(float *)&v141[3];
  *(float *)&v129 = v23;
  v24 = fabs(v23);
  v150 = v24;
  if ( v24 >= flt_A9B0D8 )
  {
    v25 = fConstant_1 / *(float *)&v129;
    v153.m128_f32[2] = v25;
    if ( *(float *)&v129 >= (double)*(float *)&SrcStr )
    {
      v22 = i + 1;
      v148 = v25;
      v141[0] = 1;
      ++i;
    }
    else
    {
      v141[0] = 0xFFFFFFFF;
      v148 = -v25;
    }
    v144 = ((double)i - *(float *)&v141[3]) * v25;
  }
  else
  {
    v148 = 0.0;
    v141[0] = 0xFFFFFFFF;
    v144 = 3.4028235e38;
  }
  if ( *(float *)&SrcStr == v148 + v146 || *(float *)&SrcStr == v147 + v146 || *(float *)&SrcStr == v147 + v148 )
  {
    if ( v12 >= (unsigned int)(this->m128_i32[3] - 1) || v22 >= *((_DWORD *)this + 4) - 1 )
    {
      v90 = NtCurrentTeb()->ThreadLocalStoragePointer;
      LODWORD(v27) = v90[TlsIndex];
      if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) )
        return v27;
      goto LABEL_172;
    }
    v92 = this->m128_i32[0];
    v130 = 0x3F800000;
    v136 = *(float *)&v141[3] - (double)i;
    v156[0] = 1.0;
    v154 = _mm_shuffle_ps((__m128)0x3F800000u, (__m128)0x3F800000u, 0);
    v135 = *(float *)&v141[1] - (double)j;
    v93 = (_BYTE *)(*(int (__thiscall **)(__m128 *, char *))(v92 + 0x28))(this, (char *)&v152 + 0xF);
    v94 = this->m128_i32[0];
    if ( *v93 )
    {
      v137 = ((double (__thiscall *)(__m128 *, int))*(_DWORD *)(v94 + 0x24))(this, v12);
      *(float *)&v128 = ((double (__thiscall *)(__m128 *, int, unsigned int))*(_DWORD *)(this->m128_i32[0] + 0x24))(
                          this,
                          v12 + 1,
                          v22 + 1);
      v95 = this->m128_i32[0];
      if ( v135 > (double)v136 )
      {
        v96 = ((double (__thiscall *)(__m128 *, int, unsigned int))*(_DWORD *)(v95 + 0x24))(this, v12 + 1, v22);
        v123 = v96 - v137;
        *(float *)&v128 = *(float *)&v128 - v96;
        v97 = v123 * v135 + *(float *)&v128 * v136 + v137;
LABEL_157:
        v101 = 1;
        v154.m128_f32[0] = -v123;
        v99 = *(float *)&v128;
        goto LABEL_160;
      }
      v98 = ((double (__thiscall *)(__m128 *, int, unsigned int))*(_DWORD *)(v95 + 0x24))(this, v12, v22 + 1);
      v124 = *(float *)&v128 - v98;
      *(float *)&v128 = v98 - v137;
      v97 = v124 * v135 + *(float *)&v128 * v136 + v137;
      v154.m128_f32[0] = -v124;
      v99 = *(float *)&v128;
    }
    else
    {
      v134 = ((double (__thiscall *)(__m128 *, int))*(_DWORD *)(v94 + 0x24))(this, v12 + 1);
      v125 = ((double (__thiscall *)(__m128 *, int, unsigned int))*(_DWORD *)(this->m128_i32[0] + 0x24))(
               this,
               v12,
               v22 + 1);
      if ( v135 + v136 > fConstant_1 )
      {
        v100 = ((double (__thiscall *)(__m128 *, int, unsigned int))*(_DWORD *)(this->m128_i32[0] + 0x24))(
                 this,
                 v12 + 1,
                 v22 + 1);
        v123 = v100 - v125;
        *(float *)&v128 = v100 - v134;
        v97 = (v135 - fConstant_1) * v123 + *(float *)&v128 * v136 + v134;
        goto LABEL_157;
      }
      v102 = ((double (__thiscall *)(__m128 *, int, unsigned int))*(_DWORD *)(this->m128_i32[0] + 0x24))(this, v12, v22);
      *(float *)&v128 = v134 - v102;
      v126 = v125 - v102;
      v97 = v102 + *(float *)&v128 * v135 + v126 * v136;
      v154.m128_f32[0] = -*(float *)&v128;
      v99 = v126;
    }
    v101 = 0;
LABEL_160:
    v154.m128_f32[2] = -v99;
    v137 = *(float *)&v141[4] - v97;
    v134 = v151[6] - v97;
    if ( v134 <= (double)v137 )
    {
      if ( v137 < (double)*(float *)&SrcStr || v134 >= (double)*(float *)&SrcStr )
      {
        v91 = NtCurrentTeb()->ThreadLocalStoragePointer;
        LODWORD(v27) = v91[TlsIndex];
        if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) )
          return v27;
LABEL_148:
        v43 = v91[TlsIndex];
        v44 = *(_DWORD **)(v27 + 0x1A4);
        *v44 = "Et";
        v27 = __rdtsc();
        v130 = v27;
        v44[1] = v27;
LABEL_174:
        *(_DWORD *)(v43 + 0x1A4) = v44 + 3;
        return v27;
      }
      v103 = v137 / (v137 - v134);
      if ( v103 < *(float *)(a4 + 4) )
      {
        v104 = *(this + 3);
        v156[0] = v103;
        v105 = _mm_mul_ps(v154, v104);
        v106 = _mm_mul_ps(v105, v105);
        v107 = _mm_shuffle_ps(v106, v106, 0x55).m128_f32[0] + v106.m128_f32[0];
        v108 = _mm_shuffle_ps(v106, v106, 0xAA);
        v109 = v108;
        v109.m128_f32[0] = v108.m128_f32[0] + v107;
        v153 = v109;
        v153.m128_f32[0] = 1.0 / fsqrt(v108.m128_f32[0] + v107);
        v110 = v101 + 2 * (v12 + (v22 << 0xF));
        v111 = *(void (__thiscall ***)(int, int, __m128 *))a4;
        v155 = v110;
        v130 = 0x3F000000;
        v112 = (__m128)0x3F000000u;
        v112.m128_f32[0] = (float)(0.5 * v153.m128_f32[0])
                         * (float)(3.0
                                 - (float)((float)((float)(v108.m128_f32[0] + v107) * v153.m128_f32[0])
                                         * v153.m128_f32[0]));
        v154 = _mm_mul_ps(_mm_shuffle_ps(v112, v112, 0), v105);
        (*v111)(a4, a3, &v154);
      }
      v90 = NtCurrentTeb()->ThreadLocalStoragePointer;
      LODWORD(v27) = v90[TlsIndex];
      if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) )
        return v27;
    }
    else
    {
      v90 = NtCurrentTeb()->ThreadLocalStoragePointer;
      LODWORD(v27) = v90[TlsIndex];
      if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) )
        return v27;
    }
    goto LABEL_172;
  }
  v149 = *(__m128 *)&v141[1];
  v145 = *(float *)&v12;
  if ( v18 <= 0 )
  {
    v29 = this->m128_i32[3];
    if ( v12 > v29 - 2 )
    {
      v30 = (double)(v29 - 1);
      if ( v151[3] > v30 )
      {
        v31 = NtCurrentTeb()->ThreadLocalStoragePointer;
        LODWORD(v27) = v31[TlsIndex];
        if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) )
          return v27;
        goto LABEL_61;
      }
      v12 = v29 - 2;
      v28 = (*(float *)&v141[1] - v30) * v146;
      goto LABEL_38;
    }
LABEL_41:
    v35 = i;
    goto LABEL_42;
  }
  if ( v12 > 0 )
    goto LABEL_41;
  if ( v151[3] < (double)*(float *)&SrcStr )
  {
    v26 = NtCurrentTeb()->ThreadLocalStoragePointer;
    LODWORD(v27) = v26[TlsIndex];
    if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) )
      goto LABEL_58;
    return v27;
  }
  v12 = 1;
  v28 = -(v146 * *(float *)&v141[1]);
LABEL_38:
  v32 = (__m128)xmmword_A6DFE0;
  j = v12;
  v142 = v146 + v28;
  *(float *)&v115 = v28;
  v33 = _mm_shuffle_ps((__m128)v115, (__m128)v115, 0);
  v116 = v28 * v150;
  v149 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v32, v33), *(__m128 *)&v141[1]), _mm_mul_ps(v33, *(__m128 *)&v151[3]));
  v128 = (int)v116;
  v34 = i + v141[0] * v128 - 2;
  for ( i = v34; (double)v34 <= v149.m128_f32[2]; i = v34 )
    ++v34;
  v35 = (v141[0] >> 1) + v34;
  i = v35;
  v144 = ((double)v35 - *(float *)&v141[3]) * v153.m128_f32[2];
LABEL_42:
  if ( v141[0] <= 0 )
  {
    v37 = *((_DWORD *)this + 4);
    if ( v35 <= v37 - 2 )
      goto LABEL_56;
    v38 = (double)(v37 - 1);
    if ( v151[5] > v38 )
    {
      v31 = NtCurrentTeb()->ThreadLocalStoragePointer;
      LODWORD(v27) = v31[TlsIndex];
      if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) )
        return v27;
      goto LABEL_61;
    }
    v35 = v37 - 2;
    v36 = (*(float *)&v141[3] - v38) * v148;
  }
  else
  {
    if ( v35 > 0 )
      goto LABEL_56;
    if ( v151[5] < (double)*(float *)&SrcStr )
    {
      v26 = NtCurrentTeb()->ThreadLocalStoragePointer;
      LODWORD(v27) = v26[TlsIndex];
      if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) )
        goto LABEL_58;
      return v27;
    }
    v35 = 1;
    v36 = -(v148 * *(float *)&v141[3]);
  }
  v39 = (__m128)xmmword_A6DFE0;
  i = v35;
  v144 = v148 + v36;
  *(float *)&v117 = v36;
  v40 = _mm_shuffle_ps((__m128)v117, (__m128)v117, 0);
  v118 = v36 * v157;
  v149 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v39, v40), *(__m128 *)&v141[1]), _mm_mul_ps(v40, *(__m128 *)&v151[3]));
  v128 = (int)v118;
  v41 = v18 * v128 + LODWORD(v145) - 2;
  for ( j = v41; (double)v41 <= v149.m128_f32[0]; j = v41 )
    ++v41;
  v12 = (v18 >> 1) + v41;
  j = v12;
  v142 = ((double)v12 - *(float *)&v141[1]) * v153.m128_f32[0];
LABEL_56:
  v42 = this->m128_u32[3];
  if ( v12 < v42 )
  {
    if ( v12 - v139 >= v42 )
    {
      v31 = NtCurrentTeb()->ThreadLocalStoragePointer;
      LODWORD(v27) = v31[TlsIndex];
      if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) )
        return v27;
LABEL_61:
      v43 = v31[TlsIndex];
      v44 = *(_DWORD **)(v27 + 0x1A4);
      *v44 = "Et";
      v27 = __rdtsc();
      v44[1] = v27;
      goto LABEL_174;
    }
    v45 = *(float *)&SrcStr;
    v46 = ((_BYTE)v127 != 0) ^ ((v139 ^ v141[0]) >= 0);
    LOBYTE(v151[1]) = v46;
    if ( v147 == v45 )
    {
      LOBYTE(v151[1]) = 0;
      v46 = 0;
    }
    v47 = 2;
    LODWORD(v137) = 2;
    if ( (_BYTE)v127 )
      v48 = v12 - v35;
    else
      v48 = v35 + v12;
    v132 = v48;
    v49 = v149.m128_f32[1] - (double)v48;
    if ( v46 )
    {
      if ( fabs(v49) <= fConstant_1 )
      {
        v47 = 0;
        v137 = 0.0;
        goto LABEL_74;
      }
      v50 = v48 - v140;
    }
    else
    {
      if ( (double)v140 * v49 <= *(float *)&SrcStr )
        goto LABEL_74;
      v47 = 0;
      v137 = 0.0;
      v50 = v140 + v48;
    }
    v132 = v50;
LABEL_74:
    if ( v147 == *(float *)&SrcStr )
      v143 = 3.4028235e38;
    else
      v143 = ((double)v132 - *(float *)&v141[2]) * (double)v140 * v147;
    if ( v146 == *(float *)&SrcStr )
      v51 = flt_A3B888;
    else
      v51 = v142 - v146;
    if ( v147 == *(float *)&SrcStr )
      v149.m128_i32[1] = 0xFF7FFFFF;
    else
      v149.m128_f32[1] = v143 - v147;
    if ( v148 == *(float *)&SrcStr )
      v149.m128_i32[2] = 0xFF7FFFFF;
    else
      v149.m128_f32[2] = v144 - v148;
    if ( v46 )
    {
      if ( !v47 )
      {
LABEL_88:
        v52 = 1;
LABEL_99:
        v53 = *(&v142 + v52) - *(&v146 + v52);
        *(&j + v52) -= *(&v139 + v52);
        v54 = j;
        *(&v142 + v52) = v53;
        v129 = v52;
        v55 = this->m128_u32[3];
        v151[0] = 3.4028235e38;
        v151[2] = 0.0;
        v135 = -1.0;
        if ( v54 < v55 )
        {
          while ( 1 )
          {
            if ( (unsigned int)i >= *((_DWORD *)this + 4) )
              goto LABEL_143;
            if ( v135 > (double)*(float *)(a4 + 4) )
            {
              v90 = NtCurrentTeb()->ThreadLocalStoragePointer;
              LODWORD(v27) = v90[TlsIndex];
              if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) )
                return v27;
              goto LABEL_172;
            }
            v56 = v129;
            v136 = *(&v142 + v129);
            v130 = (int)(&v142 + v129);
            sub_535AA0(&v154, v136);
            v57 = j;
            v58 = _mm_shuffle_ps(v154, v154, 0);
            v59 = i;
            v149 = _mm_add_ps(
                     _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v58), *(__m128 *)&v141[1]),
                     _mm_mul_ps(v58, *(__m128 *)&v151[3]));
            LODWORD(v138) = j - v139;
            if ( v56 )
            {
              v74 = v56 == 2;
              v60 = i;
              if ( v74 )
              {
                v120 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(this->m128_i32[0] + 0x24))(
                         this,
                         j - v139,
                         i);
                v61 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(this->m128_i32[0] + 0x24))(this, v57, v60);
                v62 = fabs(v149.m128_f32[0] - (double)j) * (v120 - v61);
              }
              else
              {
                v134 = *(float *)&i;
                *(float *)&v128 = fabs(v149.m128_f32[0] - (double)j);
                if ( LOBYTE(v151[1]) )
                  LODWORD(v134) = i - v141[0];
                else
                  v59 = i - v141[0];
                v121 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(this->m128_i32[0] + 0x24))(
                         this,
                         j - v139,
                         v59);
                v61 = ((double (__thiscall *)(__m128 *, int, _DWORD))*(_DWORD *)(this->m128_i32[0] + 0x24))(
                        this,
                        v57,
                        LODWORD(v134));
                v62 = (v121 - v61) * *(float *)&v128;
              }
            }
            else
            {
              v119 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(this->m128_i32[0] + 0x24))(
                       this,
                       j,
                       i - v141[0]);
              v60 = i;
              v61 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(this->m128_i32[0] + 0x24))(this, v57, i);
              v62 = fabs(v149.m128_f32[2] - (double)i) * (v119 - v61);
            }
            v63 = v61 + v62;
            if ( v149.m128_f32[3] < v63 && v151[2] >= (double)v151[0] )
            {
              v64 = v149.m128_f32[3] - v63;
              if ( v135 >= (double)*(float *)&SrcStr )
              {
                v65 = (v151[2] - v151[0]) / (v151[2] - v151[0] - v64) * (v136 - v135) + v135;
                goto LABEL_116;
              }
              v66 = v136 / (v136 - v135);
              v67 = *(float *)&v141[4] - ((fConstant_1 - v66) * v63 + v66 * v151[0]);
              if ( v67 >= *(float *)&SrcStr )
                break;
            }
            v151[0] = v63;
            v151[2] = v149.m128_f32[3];
            v135 = v136;
LABEL_129:
            v86 = *(&v146 + v129);
            v87 = v137;
            *(&j + v129) += *(&v139 + v129);
            v88 = v86 + *(float *)v130;
            v89 = LODWORD(v87) ^ 2;
            v137 = *(float *)&v89;
            *(float *)v130 = v88;
            if ( LOBYTE(v151[1]) )
            {
              if ( *(float *)&v89 == 0.0 )
                goto LABEL_131;
              if ( v142 >= (double)v144 )
                goto LABEL_141;
              *(float *)&v129 = 0.0;
            }
            else
            {
              if ( v157 < (double)v150 )
              {
                if ( *(float *)&v89 != 0.0 )
                  goto LABEL_141;
                if ( v142 < (double)v143 )
                {
                  *(float *)&v129 = 0.0;
                  goto LABEL_142;
                }
LABEL_131:
                v129 = 1;
                goto LABEL_142;
              }
              if ( *(float *)&v89 == 0.0 )
              {
                v129 = 1;
                if ( v143 >= (double)v144 )
LABEL_141:
                  v129 = 2;
              }
              else
              {
                *(float *)&v129 = 0.0;
              }
            }
LABEL_142:
            if ( (unsigned int)j >= this->m128_i32[3] )
              goto LABEL_143;
          }
          v65 = v67 / (v67 - v64) * v136;
LABEL_116:
          v134 = v65;
          v135 = v136;
          v151[0] = v63;
          v151[2] = v149.m128_f32[3];
          if ( v134 > (double)*(float *)(a4 + 4) )
          {
            v91 = NtCurrentTeb()->ThreadLocalStoragePointer;
            LODWORD(v27) = v91[TlsIndex];
            if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) )
              return v27;
            goto LABEL_148;
          }
          v68 = this->m128_i32[0];
          v69 = i - v141[0];
          v160 = 0x3F800000;
          v158.m128_i32[3] = 0;
          v158.m128_i32[1] = 0x3F800000;
          v114 = i - v141[0];
          if ( LOBYTE(v151[1]) )
          {
            *(float *)&v128 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(v68 + 0x24))(this, j, v114);
            v145 = ((double (__thiscall *)(__m128 *, _DWORD, int))*(_DWORD *)(this->m128_i32[0] + 0x24))(
                     this,
                     LODWORD(v138),
                     v60);
            v70 = this->m128_i32[0];
            if ( v129 == 1 )
            {
              v71 = ((double (__thiscall *)(__m128 *, _DWORD, int))*(_DWORD *)(v70 + 0x24))(this, LODWORD(v138), v69);
              v138 = v71;
              v72 = v71 - *(float *)&v128;
              v73 = v138 - v145;
LABEL_126:
              v76 = __OFSUB__(v69, v60);
              v74 = v69 == v60;
              v75 = v69 - v60 < 0;
              goto LABEL_127;
            }
            v138 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(v70 + 0x24))(this, j, v60);
            v76 = __OFSUB__(v60, v69);
            v74 = v60 == v69;
            v75 = v60 - v69 < 0;
            v72 = v145 - v138;
            v73 = *(float *)&v128 - v138;
          }
          else
          {
            v145 = ((double (__thiscall *)(__m128 *, _DWORD, int))*(_DWORD *)(v68 + 0x24))(this, LODWORD(v138), v114);
            v122 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(this->m128_i32[0] + 0x24))(this, j, v60);
            if ( *(float *)&v129 == 0.0 || v129 == 1 && v157 < (double)v150 )
            {
              *(float *)&v128 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(this->m128_i32[0] + 0x24))(
                                  this,
                                  j,
                                  v69);
              v72 = v145 - *(float *)&v128;
              v73 = *(float *)&v128 - v122;
              goto LABEL_126;
            }
            v77 = ((double (__thiscall *)(__m128 *, _DWORD, int))*(_DWORD *)(this->m128_i32[0] + 0x24))(
                    this,
                    LODWORD(v138),
                    v60);
            *(float *)&v128 = v77;
            v72 = v77 - v122;
            v76 = __OFSUB__(v60, v69);
            v74 = v60 == v69;
            v75 = v60 - v69 < 0;
            v73 = v145 - *(float *)&v128;
          }
LABEL_127:
          v78 = *(this + 3);
          v158.m128_f32[0] = (double)v139 * v72;
          v160 = LODWORD(v134);
          v158.m128_f32[2] = (double)v141[0] * v73;
          v79 = _mm_mul_ps(v158, v78);
          v80 = _mm_mul_ps(v79, v79);
          v81 = _mm_shuffle_ps(v80, v80, 0x55).m128_f32[0] + v80.m128_f32[0];
          v82 = _mm_shuffle_ps(v80, v80, 0xAA);
          v83 = v82;
          v83.m128_f32[0] = v82.m128_f32[0] + v81;
          v153 = v83;
          v153.m128_f32[0] = 1.0 / fsqrt(v82.m128_f32[0] + v81);
          v84 = *(void (__thiscall ***)(int, int, __m128 *))a4;
          v156[6] = 3.0;
          v159 = (((_BYTE)v127 != 0) ^ !(v75 ^ v76 | v74))
               + 2 * (j + ((i - (v141[0] >> 1) - 1) << 0xF) - (v139 >> 1))
               - 2;
          v156[5] = 0.5;
          v85 = (__m128)0x3F000000u;
          v85.m128_f32[0] = (float)(0.5 * v153.m128_f32[0])
                          * (float)(3.0
                                  - (float)((float)((float)(v82.m128_f32[0] + v81) * v153.m128_f32[0]) * v153.m128_f32[0]));
          v158 = _mm_mul_ps(_mm_shuffle_ps(v85, v85, 0), v79);
          (*v84)(a4, a3, &v158);
          goto LABEL_129;
        }
LABEL_143:
        v90 = NtCurrentTeb()->ThreadLocalStoragePointer;
        LODWORD(v27) = v90[TlsIndex];
        if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) )
          return v27;
LABEL_172:
        v43 = v90[TlsIndex];
        v44 = *(_DWORD **)(v27 + 0x1A4);
        *v44 = "Et";
        v27 = __rdtsc();
        v130 = v27;
        HIDWORD(v27) = v27;
        goto LABEL_173;
      }
      if ( v51 > v149.m128_f32[2] )
      {
        *(float *)&v52 = 0.0;
        goto LABEL_99;
      }
    }
    else if ( v157 >= (double)v150 )
    {
      if ( v47 )
      {
        *(float *)&v52 = 0.0;
        goto LABEL_99;
      }
      v52 = 1;
      if ( v149.m128_f32[1] > (double)v149.m128_f32[2] )
        goto LABEL_99;
    }
    else if ( !v47 )
    {
      if ( v51 > v149.m128_f32[1] )
      {
        *(float *)&v52 = 0.0;
        goto LABEL_99;
      }
      goto LABEL_88;
    }
    v52 = 2;
    goto LABEL_99;
  }
  v26 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v27) = v26[TlsIndex];
  if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) )
  {
LABEL_58:
    v43 = v26[TlsIndex];
    v44 = *(_DWORD **)(v27 + 0x1A4);
    *v44 = "Et";
    v27 = __rdtsc();
    HIDWORD(v27) = v27;
LABEL_173:
    v44[1] = HIDWORD(v27);
    goto LABEL_174;
  }
  return v27;
}
