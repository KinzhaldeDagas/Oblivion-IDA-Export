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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ed85b*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ed869*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8ed87b*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ed87d*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8ed87f*/
    *v8 = "TtrcHeightFild"; /*0x8ed885*/
    v9 = __rdtsc(); /*0x8ed88b*/
    v8[1] = v9; /*0x8ed895*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x8ed89b*/
  }
  v10 = *a2; /*0x8ed8a4*/
  v11 = *(this + 3); /*0x8ed8a7*/
  v153 = _mm_add_ps(_mm_mul_ps(_mm_add_ps(*a2, *(this + 4)), v11), (__m128)xmmword_A97DD0); /*0x8ed8c2*/
  v12 = (__int16)((unsigned __int32)v153.m128_i32[0] >> 6); /*0x8ed8e4*/
  *(__m128 *)&v141[1] = _mm_mul_ps(v10, v11); /*0x8ed8e7*/
  v13 = a2[1]; /*0x8ed8ec*/
  v14 = this->m128_i32[0]; /*0x8ed8f0*/
  i = (__int16)((unsigned __int32)v153.m128_i32[2] >> 6); /*0x8ed8f6*/
  j = v12; /*0x8ed900*/
  *(__m128 *)&v151[3] = _mm_mul_ps(v13, v11); /*0x8ed904*/
  (*(void (__thiscall **)(__m128 *, int *))(v14 + 0x28))(this, &v127); /*0x8ed90c*/
  v141[4] = v141[2]; /*0x8ed920*/
  v151[6] = v151[4]; /*0x8ed924*/
  if ( (_BYTE)v127 ) /*0x8ed92b*/
  {
    *(float *)&v141[2] = *(float *)&v141[1] - *(float *)&v141[3]; /*0x8ed951*/
    v15 = v151[3] - v151[5]; /*0x8ed95c*/
  }
  else
  {
    *(float *)&v141[2] = *(float *)&v141[3] + *(float *)&v141[1]; /*0x8ed935*/
    v15 = v151[5] + v151[3]; /*0x8ed940*/
  }
  v151[4] = v15; /*0x8ed963*/
  v16 = v151[3] - *(float *)&v141[1]; /*0x8ed974*/
  *(float *)&v129 = v16; /*0x8ed978*/
  v17 = fabs(v16); /*0x8ed97c*/
  v157 = v17; /*0x8ed97e*/
  if ( v17 >= flt_A9B0D8 ) /*0x8ed990*/
  {
    v19 = fConstant_1 / *(float *)&v129; /*0x8ed9ac*/
    v153.m128_f32[0] = v19; /*0x8ed9b0*/
    if ( *(float *)&v129 >= (double)*(float *)&SrcStr ) /*0x8ed9c6*/
    {
      ++v12; /*0x8ed9d4*/
      v146 = v19; /*0x8ed9d5*/
      v18 = 1; /*0x8ed9d9*/
      j = v12; /*0x8ed9de*/
    }
    else
    {
      v18 = 0xFFFFFFFF; /*0x8ed9ca*/
      v146 = -v19; /*0x8ed9ce*/
    }
    v142 = ((double)j - *(float *)&v141[1]) * v19; /*0x8ed9ec*/
  }
  else
  {
    v146 = 0.0; /*0x8ed992*/
    v18 = 0xFFFFFFFF; /*0x8ed99a*/
    v142 = 3.4028235e38; /*0x8ed99c*/
  }
  v139 = v18; /*0x8ed9f9*/
  v20 = v151[4] - *(float *)&v141[2]; /*0x8ed9fd*/
  *(float *)&v129 = v20; /*0x8eda01*/
  if ( fabs(v20) >= flt_A9B0D8 ) /*0x8eda12*/
  {
    v21 = fConstant_1 / *(float *)&v129; /*0x8eda30*/
    if ( *(float *)&v129 >= (double)*(float *)&SrcStr ) /*0x8eda43*/
    {
      v147 = v21; /*0x8eda57*/
      v140 = 1; /*0x8eda5c*/
      ++v132; /*0x8eda64*/
    }
    else
    {
      v140 = 0xFFFFFFFF; /*0x8eda47*/
      v147 = -v21; /*0x8eda4d*/
    }
    v143 = ((double)v132 - *(float *)&v141[2]) * v21; /*0x8eda72*/
  }
  else
  {
    v147 = 0.0; /*0x8eda14*/
    v140 = 0xFFFFFFFF; /*0x8eda1c*/
    v143 = 3.4028235e38; /*0x8eda20*/
  }
  v22 = i; /*0x8eda7f*/
  v23 = v151[5] - *(float *)&v141[3]; /*0x8eda83*/
  *(float *)&v129 = v23; /*0x8eda87*/
  v24 = fabs(v23); /*0x8eda8b*/
  v150 = v24; /*0x8eda8d*/
  if ( v24 >= flt_A9B0D8 ) /*0x8eda9f*/
  {
    v25 = fConstant_1 / *(float *)&v129; /*0x8edabd*/
    v153.m128_f32[2] = v25; /*0x8edac1*/
    if ( *(float *)&v129 >= (double)*(float *)&SrcStr ) /*0x8edad7*/
    {
      v22 = i + 1; /*0x8edae7*/
      v148 = v25; /*0x8edae8*/
      v141[0] = 1; /*0x8edaec*/
      ++i; /*0x8edaf4*/
    }
    else
    {
      v141[0] = 0xFFFFFFFF; /*0x8edadb*/
      v148 = -v25; /*0x8edae1*/
    }
    v144 = ((double)i - *(float *)&v141[3]) * v25; /*0x8edb02*/
  }
  else
  {
    v148 = 0.0; /*0x8edaa1*/
    v141[0] = 0xFFFFFFFF; /*0x8edaa9*/
    v144 = 3.4028235e38; /*0x8edaad*/
  }
  if ( *(float *)&SrcStr == v148 + v146 || *(float *)&SrcStr == v147 + v146 || *(float *)&SrcStr == v147 + v148 ) /*0x8edb53*/
  {
    if ( v12 >= (unsigned int)(this->m128_i32[3] - 1) || v22 >= *((_DWORD *)this + 4) - 1 ) /*0x8ee7a7*/
    {
      v90 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8eeb5b*/
      LODWORD(v27) = v90[MEMORY[0xBA9DE4]]; /*0x8eeb68*/
      if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) ) /*0x8eeb77*/
        return v27; /*0x8eeb77*/
      goto LABEL_172; /*0x8eeb77*/
    }
    v92 = this->m128_i32[0]; /*0x8ee7b1*/
    v130 = 0x3F800000; /*0x8ee7ba*/
    v136 = *(float *)&v141[3] - (double)i; /*0x8ee7d1*/
    v156[0] = 1.0; /*0x8ee7db*/
    v154 = _mm_shuffle_ps((__m128)0x3F800000u, (__m128)0x3F800000u, 0); /*0x8ee7e6*/
    v135 = *(float *)&v141[1] - (double)j; /*0x8ee7f2*/
    v93 = (_BYTE *)(*(int (__thiscall **)(__m128 *, char *))(v92 + 0x28))(this, (char *)&v152 + 0xF); /*0x8ee7f6*/
    v94 = this->m128_i32[0]; /*0x8ee7fb*/
    if ( *v93 ) /*0x8ee7f9*/
    {
      v137 = ((double (__thiscall *)(__m128 *, int))*(_DWORD *)(v94 + 0x24))(this, v12); /*0x8ee80c*/
      *(float *)&v128 = ((double (__thiscall *)(__m128 *, int, unsigned int))*(_DWORD *)(this->m128_i32[0] + 0x24))( /*0x8ee81f*/
                          this,
                          v12 + 1,
                          v22 + 1);
      v95 = this->m128_i32[0]; /*0x8ee827*/
      if ( v135 > (double)v136 ) /*0x8ee834*/
      {
        v96 = ((double (__thiscall *)(__m128 *, int, unsigned int))*(_DWORD *)(v95 + 0x24))(this, v12 + 1, v22); /*0x8ee83b*/
        v123 = v96 - v137; /*0x8ee844*/
        *(float *)&v128 = *(float *)&v128 - v96; /*0x8ee84e*/
        v97 = v123 * v135 + *(float *)&v128 * v136 + v137; /*0x8ee866*/
LABEL_157:
        v101 = 1; /*0x8ee922*/
        v154.m128_f32[0] = -v123; /*0x8ee92d*/
        v99 = *(float *)&v128; /*0x8ee934*/
        goto LABEL_160; /*0x8ee938*/
      }
      v98 = ((double (__thiscall *)(__m128 *, int, unsigned int))*(_DWORD *)(v95 + 0x24))(this, v12, v22 + 1); /*0x8ee874*/
      v124 = *(float *)&v128 - v98; /*0x8ee87d*/
      *(float *)&v128 = v98 - v137; /*0x8ee885*/
      v97 = v124 * v135 + *(float *)&v128 * v136 + v137; /*0x8ee89b*/
      v154.m128_f32[0] = -v124; /*0x8ee8a5*/
      v99 = *(float *)&v128; /*0x8ee8ac*/
    }
    else
    {
      v134 = ((double (__thiscall *)(__m128 *, int))*(_DWORD *)(v94 + 0x24))(this, v12 + 1); /*0x8ee8bc*/
      v125 = ((double (__thiscall *)(__m128 *, int, unsigned int))*(_DWORD *)(this->m128_i32[0] + 0x24))( /*0x8ee8cc*/
               this,
               v12,
               v22 + 1);
      if ( v135 + v136 > fConstant_1 ) /*0x8ee8e5*/
      {
        v100 = ((double (__thiscall *)(__m128 *, int, unsigned int))*(_DWORD *)(this->m128_i32[0] + 0x24))( /*0x8ee8f1*/
                 this,
                 v12 + 1,
                 v22 + 1);
        v123 = v100 - v125; /*0x8ee8fa*/
        *(float *)&v128 = v100 - v134; /*0x8ee902*/
        v97 = (v135 - fConstant_1) * v123 + *(float *)&v128 * v136 + v134; /*0x8ee91e*/
        goto LABEL_157; /*0x8ee91e*/
      }
      v102 = ((double (__thiscall *)(__m128 *, int, unsigned int))*(_DWORD *)(this->m128_i32[0] + 0x24))(this, v12, v22); /*0x8ee93e*/
      *(float *)&v128 = v134 - v102; /*0x8ee947*/
      v126 = v125 - v102; /*0x8ee951*/
      v97 = v102 + *(float *)&v128 * v135 + v126 * v136; /*0x8ee967*/
      v154.m128_f32[0] = -*(float *)&v128; /*0x8ee96f*/
      v99 = v126; /*0x8ee976*/
    }
    v101 = 0; /*0x8ee97a*/
LABEL_160:
    v154.m128_f32[2] = -v99; /*0x8ee97c*/
    v137 = *(float *)&v141[4] - v97; /*0x8ee98b*/
    v134 = v151[6] - v97; /*0x8ee998*/
    if ( v134 <= (double)v137 ) /*0x8ee9ab*/
    {
      if ( v137 < (double)*(float *)&SrcStr || v134 >= (double)*(float *)&SrcStr ) /*0x8eea0c*/
      {
        v91 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8eeb20*/
        LODWORD(v27) = v91[MEMORY[0xBA9DE4]]; /*0x8eeb2d*/
        if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) ) /*0x8eeb3c*/
          return v27; /*0x8eeb3c*/
LABEL_148:
        v43 = v91[MEMORY[0xBA9DE4]]; /*0x8ee775*/
        v44 = *(_DWORD **)(v27 + 0x1A4); /*0x8ee777*/
        *v44 = "Et"; /*0x8ee77d*/
        v27 = __rdtsc(); /*0x8ee783*/
        v130 = v27; /*0x8ee785*/
        v44[1] = v27; /*0x8ee78d*/
LABEL_174:
        *(_DWORD *)(v43 + 0x1A4) = v44 + 3; /*0x8eeb94*/
        return v27; /*0x8eeb97*/
      }
      v103 = v137 / (v137 - v134); /*0x8eea1d*/
      if ( v103 < *(float *)(a4 + 4) ) /*0x8eea2b*/
      {
        v104 = *(this + 3); /*0x8eea31*/
        v156[0] = v103; /*0x8eea35*/
        v105 = _mm_mul_ps(v154, v104); /*0x8eea44*/
        v106 = _mm_mul_ps(v105, v105); /*0x8eea4a*/
        v107 = _mm_shuffle_ps(v106, v106, 0x55).m128_f32[0] + v106.m128_f32[0]; /*0x8eea54*/
        v108 = _mm_shuffle_ps(v106, v106, 0xAA); /*0x8eea5b*/
        v109 = v108; /*0x8eea5f*/
        v109.m128_f32[0] = v108.m128_f32[0] + v107; /*0x8eea62*/
        v153 = v109; /*0x8eea66*/
        v153.m128_f32[0] = 1.0 / fsqrt(v108.m128_f32[0] + v107); /*0x8eea72*/
        v110 = v101 + 2 * (v12 + (v22 << 0xF)); /*0x8eea90*/
        v111 = *(void (__thiscall ***)(int, int, __m128 *))a4; /*0x8eea93*/
        v155 = v110; /*0x8eeaa7*/
        v130 = 0x3F000000; /*0x8eeaae*/
        v112 = (__m128)0x3F000000u; /*0x8eeab6*/
        v112.m128_f32[0] = (float)(0.5 * v153.m128_f32[0]) /*0x8eeac7*/
                         * (float)(3.0
                                 - (float)((float)((float)(v108.m128_f32[0] + v107) * v153.m128_f32[0])
                                         * v153.m128_f32[0]));
        v154 = _mm_mul_ps(_mm_shuffle_ps(v112, v112, 0), v105); /*0x8eeada*/
        (*v111)(a4, a3, &v154); /*0x8eeae2*/
      }
      v90 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8eeae8*/
      LODWORD(v27) = v90[MEMORY[0xBA9DE4]]; /*0x8eeaf5*/
      if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) ) /*0x8eeb04*/
        return v27; /*0x8eeb04*/
    }
    else
    {
      v90 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ee9ad*/
      LODWORD(v27) = v90[MEMORY[0xBA9DE4]]; /*0x8ee9ba*/
      if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) ) /*0x8ee9c9*/
        return v27; /*0x8ee9c9*/
    }
    goto LABEL_172; /*0x8ee9c9*/
  }
  v149 = *(__m128 *)&v141[1]; /*0x8edb63*/
  v145 = *(float *)&v12; /*0x8edb87*/
  if ( v18 <= 0 ) /*0x8edb8b*/
  {
    v29 = this->m128_i32[3]; /*0x8edbf9*/
    if ( v12 > v29 - 2 ) /*0x8edc01*/
    {
      v30 = (double)(v29 - 1); /*0x8edc0c*/
      if ( v151[3] > v30 ) /*0x8edc1e*/
      {
        v31 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8edc20*/
        LODWORD(v27) = v31[MEMORY[0xBA9DE4]]; /*0x8edc2f*/
        if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) ) /*0x8edc3e*/
          return v27; /*0x8edc3e*/
        goto LABEL_61; /*0x8edc3e*/
      }
      v12 = v29 - 2; /*0x8edc68*/
      v28 = (*(float *)&v141[1] - v30) * v146; /*0x8edc6a*/
      goto LABEL_38; /*0x8edc6a*/
    }
LABEL_41:
    v35 = i; /*0x8edd24*/
    goto LABEL_42; /*0x8edd24*/
  }
  if ( v12 > 0 ) /*0x8edb8f*/
    goto LABEL_41; /*0x8edb8f*/
  if ( v151[3] < (double)*(float *)&SrcStr ) /*0x8edba7*/
  {
    v26 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8edba9*/
    LODWORD(v27) = v26[MEMORY[0xBA9DE4]]; /*0x8edbb6*/
    if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) ) /*0x8edbc5*/
      goto LABEL_58; /*0x8edbc5*/
    return v27; /*0x8edbc5*/
  }
  v12 = 1; /*0x8edbec*/
  v28 = -(v146 * *(float *)&v141[1]); /*0x8edbf5*/
LABEL_38:
  v32 = (__m128)xmmword_A6DFE0; /*0x8edc6e*/
  j = v12; /*0x8edc7b*/
  v142 = v146 + v28; /*0x8edc7f*/
  *(float *)&v115 = v28; /*0x8edc83*/
  v33 = _mm_shuffle_ps((__m128)v115, (__m128)v115, 0); /*0x8edc94*/
  v116 = v28 * v150; /*0x8edca3*/
  v149 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v32, v33), *(__m128 *)&v141[1]), _mm_mul_ps(v33, *(__m128 *)&v151[3])); /*0x8edcb2*/
  v128 = (int)v116; /*0x8edcbe*/
  v34 = i + v141[0] * v128 - 2; /*0x8edcd1*/
  for ( i = v34; (double)v34 <= v149.m128_f32[2]; i = v34 ) /*0x8edce9*/
    ++v34; /*0x8edcf0*/
  v35 = (v141[0] >> 1) + v34; /*0x8edd09*/
  i = v35; /*0x8edd0b*/
  v144 = ((double)v35 - *(float *)&v141[3]) * v153.m128_f32[2]; /*0x8edd1e*/
LABEL_42:
  if ( v141[0] <= 0 ) /*0x8edd2e*/
  {
    v37 = *((_DWORD *)this + 4); /*0x8edd9c*/
    if ( v35 <= v37 - 2 ) /*0x8edda4*/
      goto LABEL_56; /*0x8edda4*/
    v38 = (double)(v37 - 1); /*0x8eddaf*/
    if ( v151[5] > v38 ) /*0x8eddc1*/
    {
      v31 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8eddc3*/
      LODWORD(v27) = v31[MEMORY[0xBA9DE4]]; /*0x8eddd2*/
      if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) ) /*0x8edde1*/
        return v27; /*0x8edde1*/
      goto LABEL_61; /*0x8edde1*/
    }
    v35 = v37 - 2; /*0x8ede0b*/
    v36 = (*(float *)&v141[3] - v38) * v148; /*0x8ede0d*/
  }
  else
  {
    if ( v35 > 0 ) /*0x8edd32*/
      goto LABEL_56; /*0x8edd32*/
    if ( v151[5] < (double)*(float *)&SrcStr ) /*0x8edd4a*/
    {
      v26 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8edd4c*/
      LODWORD(v27) = v26[MEMORY[0xBA9DE4]]; /*0x8edd59*/
      if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) ) /*0x8edd68*/
        goto LABEL_58; /*0x8edd68*/
      return v27; /*0x8edd68*/
    }
    v35 = 1; /*0x8edd8f*/
    v36 = -(v148 * *(float *)&v141[3]); /*0x8edd98*/
  }
  v39 = (__m128)xmmword_A6DFE0; /*0x8ede15*/
  i = v35; /*0x8ede1e*/
  v144 = v148 + v36; /*0x8ede22*/
  *(float *)&v117 = v36; /*0x8ede26*/
  v40 = _mm_shuffle_ps((__m128)v117, (__m128)v117, 0); /*0x8ede37*/
  v118 = v36 * v157; /*0x8ede46*/
  v149 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v39, v40), *(__m128 *)&v141[1]), _mm_mul_ps(v40, *(__m128 *)&v151[3])); /*0x8ede55*/
  v128 = (int)v118; /*0x8ede61*/
  v41 = v18 * v128 + LODWORD(v145) - 2; /*0x8ede70*/
  for ( j = v41; (double)v41 <= v149.m128_f32[0]; j = v41 ) /*0x8ede88*/
    ++v41; /*0x8ede90*/
  v12 = (v18 >> 1) + v41; /*0x8edea9*/
  j = v12; /*0x8edeab*/
  v142 = ((double)v12 - *(float *)&v141[1]) * v153.m128_f32[0]; /*0x8edebe*/
LABEL_56:
  v42 = this->m128_u32[3]; /*0x8edec2*/
  if ( v12 < v42 ) /*0x8edec7*/
  {
    if ( v12 - v139 >= v42 ) /*0x8edf12*/
    {
      v31 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8edf14*/
      LODWORD(v27) = v31[MEMORY[0xBA9DE4]]; /*0x8edf21*/
      if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) ) /*0x8edf30*/
        return v27; /*0x8edf30*/
LABEL_61:
      v43 = v31[MEMORY[0xBA9DE4]]; /*0x8edf36*/
      v44 = *(_DWORD **)(v27 + 0x1A4); /*0x8edf38*/
      *v44 = "Et"; /*0x8edf3e*/
      v27 = __rdtsc(); /*0x8edf44*/
      v44[1] = v27; /*0x8edf4e*/
      goto LABEL_174; /*0x8edf51*/
    }
    v45 = *(float *)&SrcStr; /*0x8edf5a*/
    v46 = ((_BYTE)v127 != 0) ^ ((v139 ^ v141[0]) >= 0); /*0x8edf78*/
    LOBYTE(v151[1]) = v46; /*0x8edf7c*/
    if ( v147 == v45 ) /*0x8edf86*/
    {
      LOBYTE(v151[1]) = 0; /*0x8edf88*/
      v46 = 0; /*0x8edf90*/
    }
    v47 = 2; /*0x8edf9d*/
    LODWORD(v137) = 2; /*0x8edfa2*/
    if ( (_BYTE)v127 ) /*0x8edfa6*/
      v48 = v12 - v35; /*0x8edfac*/
    else
      v48 = v35 + v12; /*0x8edfa8*/
    v132 = v48; /*0x8edfb0*/
    v49 = v149.m128_f32[1] - (double)v48; /*0x8edfb8*/
    if ( v46 ) /*0x8edfbf*/
    {
      if ( fabs(v49) <= fConstant_1 ) /*0x8edfce*/
      {
        v47 = 0; /*0x8edfd6*/
        v137 = 0.0; /*0x8edfd8*/
        goto LABEL_74; /*0x8edfdc*/
      }
      v50 = v48 - v140; /*0x8edfd0*/
    }
    else
    {
      if ( (double)v140 * v49 <= *(float *)&SrcStr ) /*0x8edff1*/
        goto LABEL_74; /*0x8edff1*/
      v47 = 0; /*0x8edff7*/
      v137 = 0.0; /*0x8edff9*/
      v50 = v140 + v48; /*0x8edffd*/
    }
    v132 = v50; /*0x8edfff*/
LABEL_74:
    if ( v147 == *(float *)&SrcStr ) /*0x8ee014*/
      v143 = 3.4028235e38; /*0x8ee02c*/
    else
      v143 = ((double)v132 - *(float *)&v141[2]) * (double)v140 * v147; /*0x8ee026*/
    if ( v146 == *(float *)&SrcStr ) /*0x8ee045*/
      v51 = flt_A3B888; /*0x8ee047*/
    else
      v51 = v142 - v146; /*0x8ee053*/
    if ( v147 == *(float *)&SrcStr ) /*0x8ee068*/
      v149.m128_i32[1] = 0xFF7FFFFF; /*0x8ee06a*/
    else
      v149.m128_f32[1] = v143 - v147; /*0x8ee07f*/
    if ( v148 == *(float *)&SrcStr ) /*0x8ee097*/
      v149.m128_i32[2] = 0xFF7FFFFF; /*0x8ee099*/
    else
      v149.m128_f32[2] = v144 - v148; /*0x8ee0ae*/
    if ( v46 ) /*0x8ee0b7*/
    {
      if ( !v47 ) /*0x8ee0bb*/
      {
LABEL_88:
        v52 = 1; /*0x8ee0bf*/
LABEL_99:
        v53 = *(&v142 + v52) - *(&v146 + v52); /*0x8ee130*/
        *(&j + v52) -= *(&v139 + v52); /*0x8ee142*/
        v54 = j; /*0x8ee146*/
        *(&v142 + v52) = v53; /*0x8ee14a*/
        v129 = v52; /*0x8ee14e*/
        v55 = this->m128_u32[3]; /*0x8ee152*/
        v151[0] = 3.4028235e38; /*0x8ee157*/
        v151[2] = 0.0; /*0x8ee162*/
        v135 = -1.0; /*0x8ee16d*/
        if ( v54 < v55 ) /*0x8ee175*/
        {
          while ( 1 ) /*0x8ee180*/
          {
            if ( (unsigned int)i >= *((_DWORD *)this + 4) ) /*0x8ee187*/
              goto LABEL_143; /*0x8ee187*/
            if ( v135 > (double)*(float *)(a4 + 4) ) /*0x8ee19c*/
            {
              v90 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ee718*/
              LODWORD(v27) = v90[MEMORY[0xBA9DE4]]; /*0x8ee725*/
              if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) ) /*0x8ee734*/
                return v27; /*0x8ee734*/
              goto LABEL_172; /*0x8ee734*/
            }
            v56 = v129; /*0x8ee1a2*/
            v136 = *(&v142 + v129); /*0x8ee1b0*/
            v130 = (int)(&v142 + v129); /*0x8ee1bc*/
            sub_535AA0(&v154, v136); /*0x8ee1c0*/
            v57 = j; /*0x8ee1c5*/
            v58 = _mm_shuffle_ps(v154, v154, 0); /*0x8ee1dc*/
            v59 = i; /*0x8ee1ee*/
            v149 = _mm_add_ps( /*0x8ee200*/
                     _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v58), *(__m128 *)&v141[1]),
                     _mm_mul_ps(v58, *(__m128 *)&v151[3]));
            LODWORD(v138) = j - v139; /*0x8ee208*/
            if ( v56 ) /*0x8ee20c*/
            {
              v74 = v56 == 2; /*0x8ee248*/
              v60 = i; /*0x8ee24b*/
              if ( v74 ) /*0x8ee24f*/
              {
                v120 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(this->m128_i32[0] + 0x24))( /*0x8ee25a*/
                         this,
                         j - v139,
                         i);
                v61 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(this->m128_i32[0] + 0x24))(this, v57, v60); /*0x8ee264*/
                v62 = fabs(v149.m128_f32[0] - (double)j) * (v120 - v61); /*0x8ee27a*/
              }
              else
              {
                v134 = *(float *)&i; /*0x8ee28b*/
                *(float *)&v128 = fabs(v149.m128_f32[0] - (double)j); /*0x8ee298*/
                if ( LOBYTE(v151[1]) ) /*0x8ee29c*/
                  LODWORD(v134) = i - v141[0]; /*0x8ee2a4*/
                else
                  v59 = i - v141[0]; /*0x8ee2b0*/
                v121 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(this->m128_i32[0] + 0x24))( /*0x8ee2bb*/
                         this,
                         j - v139,
                         v59);
                v61 = ((double (__thiscall *)(__m128 *, int, _DWORD))*(_DWORD *)(this->m128_i32[0] + 0x24))( /*0x8ee2c9*/
                        this,
                        v57,
                        LODWORD(v134));
                v62 = (v121 - v61) * *(float *)&v128; /*0x8ee2d2*/
              }
            }
            else
            {
              v119 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(this->m128_i32[0] + 0x24))( /*0x8ee21d*/
                       this,
                       j,
                       i - v141[0]);
              v60 = i; /*0x8ee221*/
              v61 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(this->m128_i32[0] + 0x24))(this, v57, i); /*0x8ee22b*/
              v62 = fabs(v149.m128_f32[2] - (double)i) * (v119 - v61); /*0x8ee241*/
            }
            v63 = v61 + v62; /*0x8ee2d6*/
            if ( v149.m128_f32[3] < v63 && v151[2] >= (double)v151[0] ) /*0x8ee2ff*/
            {
              v64 = v149.m128_f32[3] - v63; /*0x8ee30c*/
              if ( v135 >= (double)*(float *)&SrcStr ) /*0x8ee31d*/
              {
                v65 = (v151[2] - v151[0]) / (v151[2] - v151[0] - v64) * (v136 - v135) + v135; /*0x8ee33d*/
                goto LABEL_116; /*0x8ee341*/
              }
              v66 = v136 / (v136 - v135); /*0x8ee34b*/
              v67 = *(float *)&v141[4] - ((fConstant_1 - v66) * v63 + v66 * v151[0]); /*0x8ee364*/
              if ( v67 >= *(float *)&SrcStr ) /*0x8ee373*/
                break; /*0x8ee373*/
            }
            v151[0] = v63; /*0x8ee604*/
            v151[2] = v149.m128_f32[3]; /*0x8ee60f*/
            v135 = v136; /*0x8ee616*/
LABEL_129:
            v86 = *(&v146 + v129); /*0x8ee61a*/
            v87 = v137; /*0x8ee62a*/
            *(&j + v129) += *(&v139 + v129); /*0x8ee630*/
            v88 = v86 + *(float *)v130; /*0x8ee638*/
            v89 = LODWORD(v87) ^ 2; /*0x8ee63f*/
            v137 = *(float *)&v89; /*0x8ee641*/
            *(float *)v130 = v88; /*0x8ee645*/
            if ( LOBYTE(v151[1]) ) /*0x8ee650*/
            {
              if ( *(float *)&v89 == 0.0 ) /*0x8ee654*/
                goto LABEL_131; /*0x8ee654*/
              if ( v142 >= (double)v144 ) /*0x8ee66d*/
                goto LABEL_141; /*0x8ee66d*/
              *(float *)&v129 = 0.0; /*0x8ee66f*/
            }
            else
            {
              if ( v157 < (double)v150 ) /*0x8ee68c*/
              {
                if ( *(float *)&v89 != 0.0 ) /*0x8ee690*/
                  goto LABEL_141; /*0x8ee690*/
                if ( v142 < (double)v143 ) /*0x8ee69f*/
                {
                  *(float *)&v129 = 0.0; /*0x8ee6a1*/
                  goto LABEL_142; /*0x8ee6a5*/
                }
LABEL_131:
                v129 = 1; /*0x8ee656*/
                goto LABEL_142; /*0x8ee65e*/
              }
              if ( *(float *)&v89 == 0.0 ) /*0x8ee6a9*/
              {
                v129 = 1; /*0x8ee6b9*/
                if ( v143 >= (double)v144 ) /*0x8ee6ca*/
LABEL_141:
                  v129 = 2; /*0x8ee6cc*/
              }
              else
              {
                *(float *)&v129 = 0.0; /*0x8ee6ab*/
              }
            }
LABEL_142:
            if ( (unsigned int)j >= this->m128_i32[3] ) /*0x8ee6d7*/
              goto LABEL_143; /*0x8ee6d7*/
          }
          v65 = v67 / (v67 - v64) * v136; /*0x8ee37f*/
LABEL_116:
          v134 = v65; /*0x8ee383*/
          v135 = v136; /*0x8ee399*/
          v151[0] = v63; /*0x8ee39d*/
          v151[2] = v149.m128_f32[3]; /*0x8ee3a8*/
          if ( v134 > (double)*(float *)(a4 + 4) ) /*0x8ee3b7*/
          {
            v91 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ee753*/
            LODWORD(v27) = v91[MEMORY[0xBA9DE4]]; /*0x8ee760*/
            if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) ) /*0x8ee76f*/
              return v27; /*0x8ee76f*/
            goto LABEL_148; /*0x8ee76f*/
          }
          v68 = this->m128_i32[0]; /*0x8ee3cc*/
          v69 = i - v141[0]; /*0x8ee3ce*/
          v160 = 0x3F800000; /*0x8ee3d2*/
          v158.m128_i32[3] = 0; /*0x8ee3dd*/
          v158.m128_i32[1] = 0x3F800000; /*0x8ee3e8*/
          v114 = i - v141[0]; /*0x8ee3f5*/
          if ( LOBYTE(v151[1]) ) /*0x8ee3f6*/
          {
            *(float *)&v128 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(v68 + 0x24))(this, j, v114); /*0x8ee400*/
            v145 = ((double (__thiscall *)(__m128 *, _DWORD, int))*(_DWORD *)(this->m128_i32[0] + 0x24))( /*0x8ee411*/
                     this,
                     LODWORD(v138),
                     v60);
            v70 = this->m128_i32[0]; /*0x8ee41a*/
            if ( v129 == 1 ) /*0x8ee41e*/
            {
              v71 = ((double (__thiscall *)(__m128 *, _DWORD, int))*(_DWORD *)(v70 + 0x24))(this, LODWORD(v138), v69); /*0x8ee426*/
              v138 = v71; /*0x8ee429*/
              v72 = v71 - *(float *)&v128; /*0x8ee42d*/
              v73 = v138 - v145; /*0x8ee435*/
LABEL_126:
              v76 = __OFSUB__(v69, v60); /*0x8ee4e3*/
              v74 = v69 == v60; /*0x8ee4e3*/
              v75 = v69 - v60 < 0; /*0x8ee4e3*/
              goto LABEL_127; /*0x8ee4e3*/
            }
            v138 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(v70 + 0x24))(this, j, v60); /*0x8ee447*/
            v76 = __OFSUB__(v60, v69); /*0x8ee44f*/
            v74 = v60 == v69; /*0x8ee44f*/
            v75 = v60 - v69 < 0; /*0x8ee44f*/
            v72 = v145 - v138; /*0x8ee451*/
            v73 = *(float *)&v128 - v138; /*0x8ee459*/
          }
          else
          {
            v145 = ((double (__thiscall *)(__m128 *, _DWORD, int))*(_DWORD *)(v68 + 0x24))(this, LODWORD(v138), v114); /*0x8ee46a*/
            v122 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(this->m128_i32[0] + 0x24))(this, j, v60); /*0x8ee47b*/
            if ( *(float *)&v129 == 0.0 || v129 == 1 && v157 < (double)v150 ) /*0x8ee49f*/
            {
              *(float *)&v128 = ((double (__thiscall *)(__m128 *, int, int))*(_DWORD *)(this->m128_i32[0] + 0x24))( /*0x8ee4cf*/
                                  this,
                                  j,
                                  v69);
              v72 = v145 - *(float *)&v128; /*0x8ee4d7*/
              v73 = *(float *)&v128 - v122; /*0x8ee4df*/
              goto LABEL_126; /*0x8ee4df*/
            }
            v77 = ((double (__thiscall *)(__m128 *, _DWORD, int))*(_DWORD *)(this->m128_i32[0] + 0x24))( /*0x8ee4ab*/
                    this,
                    LODWORD(v138),
                    v60);
            *(float *)&v128 = v77; /*0x8ee4ae*/
            v72 = v77 - v122; /*0x8ee4b2*/
            v76 = __OFSUB__(v60, v69); /*0x8ee4b6*/
            v74 = v60 == v69; /*0x8ee4b6*/
            v75 = v60 - v69 < 0; /*0x8ee4b6*/
            v73 = v145 - *(float *)&v128; /*0x8ee4bc*/
          }
LABEL_127:
          v78 = *(this + 3); /*0x8ee4e5*/
          v158.m128_f32[0] = (double)v139 * v72; /*0x8ee4fe*/
          v160 = LODWORD(v134); /*0x8ee518*/
          v158.m128_f32[2] = (double)v141[0] * v73; /*0x8ee523*/
          v79 = _mm_mul_ps(v158, v78); /*0x8ee532*/
          v80 = _mm_mul_ps(v79, v79); /*0x8ee545*/
          v81 = _mm_shuffle_ps(v80, v80, 0x55).m128_f32[0] + v80.m128_f32[0]; /*0x8ee54f*/
          v82 = _mm_shuffle_ps(v80, v80, 0xAA); /*0x8ee556*/
          v83 = v82; /*0x8ee565*/
          v83.m128_f32[0] = v82.m128_f32[0] + v81; /*0x8ee568*/
          v153 = v83; /*0x8ee56c*/
          v153.m128_f32[0] = 1.0 / fsqrt(v82.m128_f32[0] + v81); /*0x8ee578*/
          v84 = *(void (__thiscall ***)(int, int, __m128 *))a4; /*0x8ee59a*/
          v156[6] = 3.0; /*0x8ee59c*/
          v159 = (((_BYTE)v127 != 0) ^ !(v75 ^ v76 | v74)) /*0x8ee5b4*/
               + 2 * (j + ((i - (v141[0] >> 1) - 1) << 0xF) - (v139 >> 1))
               - 2;
          v156[5] = 0.5; /*0x8ee5bb*/
          v85 = (__m128)0x3F000000u; /*0x8ee5c6*/
          v85.m128_f32[0] = (float)(0.5 * v153.m128_f32[0]) /*0x8ee5da*/
                          * (float)(3.0
                                  - (float)((float)((float)(v82.m128_f32[0] + v81) * v153.m128_f32[0]) * v153.m128_f32[0]));
          v158 = _mm_mul_ps(_mm_shuffle_ps(v85, v85, 0), v79); /*0x8ee5ed*/
          (*v84)(a4, a3, &v158); /*0x8ee5f5*/
          goto LABEL_129; /*0x8ee5f7*/
        }
LABEL_143:
        v90 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ee6dd*/
        LODWORD(v27) = v90[MEMORY[0xBA9DE4]]; /*0x8ee6ea*/
        if ( *(_DWORD *)(v27 + 0x1A4) >= *(_DWORD *)(v27 + 0x1A8) ) /*0x8ee6f9*/
          return v27; /*0x8ee6f9*/
LABEL_172:
        v43 = v90[MEMORY[0xBA9DE4]]; /*0x8eeb79*/
        v44 = *(_DWORD **)(v27 + 0x1A4); /*0x8eeb7b*/
        *v44 = "Et"; /*0x8eeb81*/
        v27 = __rdtsc(); /*0x8eeb87*/
        v130 = v27; /*0x8eeb89*/
        HIDWORD(v27) = v27; /*0x8eeb8d*/
        goto LABEL_173; /*0x8eeb8d*/
      }
      if ( v51 > v149.m128_f32[2] ) /*0x8ee0d2*/
      {
        *(float *)&v52 = 0.0; /*0x8ee0d4*/
        goto LABEL_99; /*0x8ee0d6*/
      }
    }
    else if ( v157 >= (double)v150 ) /*0x8ee0eb*/
    {
      if ( v47 ) /*0x8ee10b*/
      {
        *(float *)&v52 = 0.0; /*0x8ee10d*/
        goto LABEL_99; /*0x8ee10f*/
      }
      v52 = 1; /*0x8ee124*/
      if ( v149.m128_f32[1] > (double)v149.m128_f32[2] ) /*0x8ee129*/
        goto LABEL_99; /*0x8ee129*/
    }
    else if ( !v47 ) /*0x8ee0ef*/
    {
      if ( v51 > v149.m128_f32[1] ) /*0x8ee101*/
      {
        *(float *)&v52 = 0.0; /*0x8ee103*/
        goto LABEL_99; /*0x8ee105*/
      }
      goto LABEL_88; /*0x8ee101*/
    }
    v52 = 2; /*0x8ee12b*/
    goto LABEL_99; /*0x8ee12b*/
  }
  v26 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8edec9*/
  LODWORD(v27) = v26[MEMORY[0xBA9DE4]]; /*0x8eded6*/
  if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) ) /*0x8edee5*/
  {
LABEL_58:
    v43 = v26[MEMORY[0xBA9DE4]]; /*0x8edeeb*/
    v44 = *(_DWORD **)(v27 + 0x1A4); /*0x8edeed*/
    *v44 = "Et"; /*0x8edef3*/
    v27 = __rdtsc(); /*0x8edef9*/
    HIDWORD(v27) = v27; /*0x8edeff*/
LABEL_173:
    v44[1] = HIDWORD(v27); /*0x8eeb91*/
    goto LABEL_174; /*0x8eeb91*/
  }
  return v27; /*0x8eeb9d*/
}
