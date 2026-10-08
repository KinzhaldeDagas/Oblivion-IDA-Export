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

  v4 = a2[0xC]; /*0x8eebcf*/
  v6 = *(this + 9); /*0x8eebda*/
  v7 = v6 < *(float *)&SrcStr; /*0x8eebde*/
  v8 = v6 == *(float *)&SrcStr; /*0x8eebde*/
  qmemcpy(v161, a2, sizeof(v161)); /*0x8eebfc*/
  if ( !v7 && !v8 ) /*0x8eebfe*/
    v4 = -v4; /*0x8eec03*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8eec0f*/
  v10 = MEMORY[0xBA9DE4]; /*0x8eec18*/
  v139 = a2[0xD]; /*0x8eec1e*/
  v11 = ThreadLocalStoragePointer[v10]; /*0x8eec22*/
  v161[0].m128_f32[1] = v161[0].m128_f32[1] + v4; /*0x8eec25*/
  v12 = *(_DWORD *)(v11 + 0x1A4); /*0x8eec33*/
  v13 = *(_DWORD *)(v11 + 0x1A8); /*0x8eec39*/
  v133 = 1; /*0x8eec43*/
  v161[1].m128_f32[1] = v161[1].m128_f32[1] + v4; /*0x8eec48*/
  if ( v12 < v13 ) /*0x8eec51*/
  {
    v14 = v11; /*0x8eec53*/
    v15 = *(_DWORD **)(v11 + 0x1A4); /*0x8eec55*/
    *v15 = "TtrcHeightFild"; /*0x8eec5b*/
    v16 = __rdtsc(); /*0x8eec61*/
    v128 = *(float *)&v16; /*0x8eec63*/
    v15[1] = v16; /*0x8eec6b*/
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3; /*0x8eec71*/
  }
  v17 = *(__m128 *)(this + 0xC); /*0x8eec77*/
  v18 = *(_DWORD *)this; /*0x8eec8e*/
  *(__m128 *)&v160[3] = _mm_add_ps( /*0x8eec9c*/
                          _mm_mul_ps(_mm_add_ps(v161[0], *(__m128 *)(this + 0x10)), v17),
                          (__m128)xmmword_A97DD0);
  v19 = (__int16)(LODWORD(v160[3]) >> 6); /*0x8eecb8*/
  i = (__int16)(LODWORD(v160[5]) >> 6); /*0x8eecc1*/
  *(__m128 *)&v146[1] = _mm_mul_ps(v161[0], v17); /*0x8eecc5*/
  j = v19; /*0x8eecdc*/
  v157 = _mm_mul_ps(v161[1], v17); /*0x8eece0*/
  (*(void (__thiscall **)(float *, int *))(v18 + 0x28))(this, &v127); /*0x8eece8*/
  v146[4] = v146[2]; /*0x8eecfc*/
  v157.m128_i32[3] = v157.m128_i32[1]; /*0x8eed00*/
  if ( (_BYTE)v127 ) /*0x8eed07*/
  {
    *(float *)&v146[2] = *(float *)&v146[1] - *(float *)&v146[3]; /*0x8eed2d*/
    v20 = v157.m128_f32[0] - v157.m128_f32[2]; /*0x8eed38*/
  }
  else
  {
    *(float *)&v146[2] = *(float *)&v146[3] + *(float *)&v146[1]; /*0x8eed11*/
    v20 = v157.m128_f32[2] + v157.m128_f32[0]; /*0x8eed1c*/
  }
  v157.m128_f32[1] = v20; /*0x8eed3f*/
  v21 = v157.m128_f32[0] - *(float *)&v146[1]; /*0x8eed50*/
  *(float *)&v130 = v21; /*0x8eed54*/
  v22 = fabs(v21); /*0x8eed58*/
  v162 = v22; /*0x8eed5a*/
  if ( v22 >= flt_A9B0D8 ) /*0x8eed6c*/
  {
    v24 = fConstant_1 / *(float *)&v130; /*0x8eed8b*/
    v160[3] = v24; /*0x8eed8f*/
    if ( *(float *)&v130 >= (double)*(float *)&SrcStr ) /*0x8eeda5*/
    {
      ++v19; /*0x8eedb6*/
      v150 = v24; /*0x8eedb7*/
      v23 = 1; /*0x8eedbe*/
      j = v19; /*0x8eedc3*/
    }
    else
    {
      v23 = 0xFFFFFFFF; /*0x8eeda9*/
      v150 = -v24; /*0x8eedad*/
    }
    v147 = ((double)j - *(float *)&v146[1]) * v24; /*0x8eedd1*/
  }
  else
  {
    v150 = 0.0; /*0x8eed6e*/
    v23 = 0xFFFFFFFF; /*0x8eed79*/
    v147 = 3.4028235e38; /*0x8eed7b*/
  }
  v144 = v23; /*0x8eedde*/
  v25 = v157.m128_f32[1] - *(float *)&v146[2]; /*0x8eede2*/
  *(float *)&v130 = v25; /*0x8eede6*/
  if ( fabs(v25) >= flt_A9B0D8 ) /*0x8eedf7*/
  {
    v26 = fConstant_1 / *(float *)&v130; /*0x8eee18*/
    if ( *(float *)&v130 >= (double)*(float *)&SrcStr ) /*0x8eee2b*/
    {
      v151 = v26; /*0x8eee42*/
      v145 = 1; /*0x8eee4a*/
      ++v135; /*0x8eee52*/
    }
    else
    {
      v145 = 0xFFFFFFFF; /*0x8eee2f*/
      v151 = -v26; /*0x8eee35*/
    }
    v148 = ((double)v135 - *(float *)&v146[2]) * v26; /*0x8eee60*/
  }
  else
  {
    v151 = 0.0; /*0x8eedf9*/
    v145 = 0xFFFFFFFF; /*0x8eee04*/
    v148 = 3.4028235e38; /*0x8eee08*/
  }
  v27 = i; /*0x8eee6d*/
  v28 = v157.m128_f32[2] - *(float *)&v146[3]; /*0x8eee71*/
  *(float *)&v130 = v28; /*0x8eee75*/
  v29 = fabs(v28); /*0x8eee79*/
  v156 = v29; /*0x8eee7b*/
  if ( v29 >= flt_A9B0D8 ) /*0x8eee8d*/
  {
    v30 = fConstant_1 / *(float *)&v130; /*0x8eeeae*/
    v160[5] = v30; /*0x8eeeb2*/
    if ( *(float *)&v130 >= (double)*(float *)&SrcStr ) /*0x8eeec8*/
    {
      v27 = i + 1; /*0x8eeedb*/
      v152 = v30; /*0x8eeedc*/
      v146[0] = 1; /*0x8eeee3*/
      ++i; /*0x8eeeeb*/
    }
    else
    {
      v146[0] = 0xFFFFFFFF; /*0x8eeecc*/
      v152 = -v30; /*0x8eeed2*/
    }
    v149 = ((double)i - *(float *)&v146[3]) * v30; /*0x8eeef9*/
  }
  else
  {
    v152 = 0.0; /*0x8eee8f*/
    v146[0] = 0xFFFFFFFF; /*0x8eee9a*/
    v149 = 3.4028235e38; /*0x8eee9e*/
  }
  if ( *(float *)&SrcStr == v152 + v150 || *(float *)&SrcStr == v151 + v150 || *(float *)&SrcStr == v151 + v152 ) /*0x8eef5c*/
  {
    if ( v19 >= (unsigned int)(*((_DWORD *)this + 3) - 1) || v27 >= *((_DWORD *)this + 4) - 1 ) /*0x8efc62*/
    {
      v100 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f007d*/
      LODWORD(v32) = v100[MEMORY[0xBA9DE4]]; /*0x8f008a*/
      if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) ) /*0x8f0099*/
        return v32; /*0x8f0099*/
LABEL_189:
      v37 = v100[MEMORY[0xBA9DE4]]; /*0x8f009b*/
      v38 = *(_DWORD **)(v32 + 0x1A4); /*0x8f009d*/
      *v38 = "Et"; /*0x8f00a3*/
      v32 = __rdtsc(); /*0x8f00a9*/
      v131 = v32; /*0x8f00ab*/
      goto LABEL_190; /*0x8f00ab*/
    }
    v101 = *(_DWORD *)this; /*0x8efc6c*/
    v131 = 0x3F800000; /*0x8efc72*/
    v137 = *(float *)&v146[3] - (double)i; /*0x8efc89*/
    v160[0] = 1.0; /*0x8efc93*/
    v158 = _mm_shuffle_ps((__m128)0x3F800000u, (__m128)0x3F800000u, 0); /*0x8efc9e*/
    v132 = *(float *)&v146[1] - (double)j; /*0x8efcaa*/
    v102 = (_BYTE *)(*(int (__thiscall **)(float *, char *))(v101 + 0x28))(this, &v133); /*0x8efcae*/
    v103 = *(_DWORD *)this; /*0x8efcb3*/
    if ( *v102 ) /*0x8efcb1*/
    {
      v140 = ((double (__thiscall *)(float *, int))*(_DWORD *)(v103 + 0x24))(this, v19); /*0x8efcc4*/
      *(float *)&v129 = ((double (__thiscall *)(float *, int, unsigned int))*(_DWORD *)(*(_DWORD *)this + 0x24))( /*0x8efcd7*/
                          this,
                          v19 + 1,
                          v27 + 1);
      v104 = *(_DWORD *)this; /*0x8efcdf*/
      if ( v132 > (double)v137 ) /*0x8efcec*/
      {
        v105 = ((double (__thiscall *)(float *, int, unsigned int))*(_DWORD *)(v104 + 0x24))(this, v19 + 1, v27); /*0x8efcf3*/
        v128 = v105 - v140; /*0x8efcfc*/
        *(float *)&v129 = *(float *)&v129 - v105; /*0x8efd06*/
        v106 = v128 * v132 + *(float *)&v129 * v137 + v140; /*0x8efd1e*/
LABEL_168:
        v110 = 1; /*0x8efdda*/
        v158.m128_f32[0] = -v128; /*0x8efde5*/
        v108 = *(float *)&v129; /*0x8efdec*/
        goto LABEL_171; /*0x8efdf0*/
      }
      v107 = ((double (__thiscall *)(float *, int, unsigned int))*(_DWORD *)(v104 + 0x24))(this, v19, v27 + 1); /*0x8efd2c*/
      v128 = *(float *)&v129 - v107; /*0x8efd35*/
      *(float *)&v129 = v107 - v140; /*0x8efd3d*/
      v106 = v128 * v132 + *(float *)&v129 * v137 + v140; /*0x8efd53*/
      v158.m128_f32[0] = -v128; /*0x8efd5d*/
      v108 = *(float *)&v129; /*0x8efd64*/
    }
    else
    {
      v141 = ((double (__thiscall *)(float *, int))*(_DWORD *)(v103 + 0x24))(this, v19 + 1); /*0x8efd74*/
      v128 = ((double (__thiscall *)(float *, int, unsigned int))*(_DWORD *)(*(_DWORD *)this + 0x24))( /*0x8efd84*/
               this,
               v19,
               v27 + 1);
      if ( v132 + v137 > fConstant_1 ) /*0x8efd9d*/
      {
        v109 = ((double (__thiscall *)(float *, int, unsigned int))*(_DWORD *)(*(_DWORD *)this + 0x24))( /*0x8efda9*/
                 this,
                 v19 + 1,
                 v27 + 1);
        v128 = v109 - v128; /*0x8efdb2*/
        *(float *)&v129 = v109 - v141; /*0x8efdba*/
        v106 = (v132 - fConstant_1) * v128 + *(float *)&v129 * v137 + v141; /*0x8efdd6*/
        goto LABEL_168; /*0x8efdd6*/
      }
      v111 = ((double (__thiscall *)(float *, int, unsigned int))*(_DWORD *)(*(_DWORD *)this + 0x24))(this, v19, v27); /*0x8efdf6*/
      *(float *)&v129 = v141 - v111; /*0x8efdff*/
      v128 = v128 - v111; /*0x8efe09*/
      v106 = v111 + *(float *)&v129 * v132 + v128 * v137; /*0x8efe1f*/
      v158.m128_f32[0] = -*(float *)&v129; /*0x8efe27*/
      v108 = v128; /*0x8efe2e*/
    }
    v110 = 0; /*0x8efe32*/
LABEL_171:
    v158.m128_f32[2] = -v108; /*0x8efe34*/
    v132 = *(float *)&v146[4] - v106; /*0x8efe43*/
    v140 = v157.m128_f32[3] - v106; /*0x8efe50*/
    if ( v140 > (double)v132 ) /*0x8efe63*/
    {
      v99 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8efe65*/
      LODWORD(v32) = v99[MEMORY[0xBA9DE4]]; /*0x8efe72*/
      if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) ) /*0x8efe81*/
        return v32; /*0x8efe81*/
      goto LABEL_187; /*0x8efe81*/
    }
    v113 = v132; /*0x8efeb1*/
    if ( v114 | v115 ) /*0x8efeb7*/
    {
      if ( v113 - v139 < v140 ) /*0x8efec9*/
      {
        v100 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8efecb*/
        LODWORD(v32) = v100[MEMORY[0xBA9DE4]]; /*0x8efed8*/
        if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) ) /*0x8efee7*/
          return v32; /*0x8efee7*/
        goto LABEL_189; /*0x8efee7*/
      }
      v116 = *(float *)&SrcStr; /*0x8eff06*/
    }
    else
    {
      if ( v113 < *(float *)&SrcStr || v140 >= (double)*(float *)&SrcStr ) /*0x8eff2e*/
      {
        v99 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f0042*/
        LODWORD(v32) = v99[MEMORY[0xBA9DE4]]; /*0x8f004f*/
        if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) ) /*0x8f005e*/
          return v32; /*0x8f005e*/
        goto LABEL_187; /*0x8f005e*/
      }
      v116 = v132 / (v132 - v140); /*0x8eff3c*/
    }
    if ( v116 < *(float *)(a4 + 4) ) /*0x8eff4d*/
    {
      v117 = *(__m128 *)(this + 0xC); /*0x8eff53*/
      v160[0] = v116; /*0x8eff57*/
      v118 = *(void (__thiscall ***)(int, int, __m128 *))a4; /*0x8eff66*/
      v119 = _mm_mul_ps(v158, v117); /*0x8eff68*/
      v120 = _mm_mul_ps(v119, v119); /*0x8eff6e*/
      v121 = _mm_shuffle_ps(v120, v120, 0x55).m128_f32[0] + v120.m128_f32[0]; /*0x8eff78*/
      v122 = _mm_shuffle_ps(v120, v120, 0xAA); /*0x8eff7f*/
      v123 = v122; /*0x8eff83*/
      v123.m128_f32[0] = v122.m128_f32[0] + v121; /*0x8eff86*/
      *(__m128 *)&v160[3] = v123; /*0x8eff8a*/
      v160[3] = 1.0 / fsqrt(v122.m128_f32[0] + v121); /*0x8eff96*/
      v159 = v110 + 2 * (v19 + (v27 << 0xF)); /*0x8effc9*/
      v131 = 0x3F000000; /*0x8effd0*/
      v124 = (__m128)0x3F000000u; /*0x8effd8*/
      v124.m128_f32[0] = (float)(0.5 * v160[3]) /*0x8effe9*/
                       * (float)(3.0 - (float)((float)((float)(v122.m128_f32[0] + v121) * v160[3]) * v160[3]));
      v158 = _mm_mul_ps(_mm_shuffle_ps(v124, v124, 0), v119); /*0x8efffc*/
      (*v118)(a4, a3, &v158); /*0x8f0004*/
    }
    v100 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f000a*/
    LODWORD(v32) = v100[MEMORY[0xBA9DE4]]; /*0x8f0017*/
    if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) ) /*0x8f0026*/
      return v32; /*0x8f0026*/
    goto LABEL_189; /*0x8f0026*/
  }
  v153 = *(__m128 *)&v146[1]; /*0x8eef6c*/
  v141 = *(float *)&v19; /*0x8eef90*/
  if ( v23 <= 0 ) /*0x8eef94*/
  {
    v34 = *((_DWORD *)this + 3); /*0x8ef008*/
    if ( v19 > v34 - 2 ) /*0x8ef010*/
    {
      LODWORD(v128) = v34 - 1; /*0x8ef017*/
      v35 = (double)(v34 - 1); /*0x8ef01b*/
      if ( v157.m128_f32[0] > v35 ) /*0x8ef02d*/
      {
        v36 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ef02f*/
        LODWORD(v32) = v36[MEMORY[0xBA9DE4]]; /*0x8ef03e*/
        if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) ) /*0x8ef04d*/
          return v32; /*0x8ef04d*/
        goto LABEL_38; /*0x8ef04d*/
      }
      v19 = v34 - 2; /*0x8ef074*/
      v33 = (*(float *)&v146[1] - v35) * v150; /*0x8ef076*/
      goto LABEL_40; /*0x8ef076*/
    }
LABEL_43:
    v42 = i; /*0x8ef134*/
    goto LABEL_44; /*0x8ef134*/
  }
  if ( v19 > 0 ) /*0x8eef98*/
    goto LABEL_43; /*0x8eef98*/
  if ( v157.m128_f32[0] < (double)*(float *)&SrcStr ) /*0x8eefb0*/
  {
    v31 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8eefb2*/
    LODWORD(v32) = v31[MEMORY[0xBA9DE4]]; /*0x8eefbf*/
    if ( *(_DWORD *)(v32 + 0x1A4) < *(_DWORD *)(v32 + 0x1A8) ) /*0x8eefce*/
      goto LABEL_63; /*0x8eefce*/
    return v32; /*0x8eefce*/
  }
  v19 = 1; /*0x8eeffb*/
  v33 = -(v150 * *(float *)&v146[1]); /*0x8ef004*/
LABEL_40:
  v39 = (__m128)xmmword_A6DFE0; /*0x8ef07d*/
  j = v19; /*0x8ef08d*/
  v147 = v150 + v33; /*0x8ef091*/
  v128 = v33; /*0x8ef095*/
  v40 = _mm_shuffle_ps((__m128)LODWORD(v128), (__m128)LODWORD(v128), 0); /*0x8ef0a6*/
  v128 = v33 * v156; /*0x8ef0b5*/
  v153 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v39, v40), *(__m128 *)&v146[1]), _mm_mul_ps(v40, v157)); /*0x8ef0c4*/
  v129 = (int)v128; /*0x8ef0d0*/
  v41 = i + v146[0] * v129 - 2; /*0x8ef0e3*/
  for ( i = v41; (double)v41 <= v153.m128_f32[2]; i = v41 ) /*0x8ef0fb*/
    ++v41; /*0x8ef100*/
  v42 = (v146[0] >> 1) + v41; /*0x8ef119*/
  i = v42; /*0x8ef11b*/
  v149 = ((double)v42 - *(float *)&v146[3]) * v160[5]; /*0x8ef12e*/
LABEL_44:
  if ( v146[0] > 0 ) /*0x8ef13e*/
  {
    if ( v42 > 0 ) /*0x8ef142*/
      goto LABEL_58; /*0x8ef142*/
    if ( v157.m128_f32[2] < (double)*(float *)&SrcStr ) /*0x8ef15a*/
    {
      v31 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ef15c*/
      LODWORD(v32) = v31[MEMORY[0xBA9DE4]]; /*0x8ef169*/
      if ( *(_DWORD *)(v32 + 0x1A4) < *(_DWORD *)(v32 + 0x1A8) ) /*0x8ef178*/
        goto LABEL_63; /*0x8ef178*/
      return v32; /*0x8ef178*/
    }
    v42 = 1; /*0x8ef1a5*/
    v43 = -(v152 * *(float *)&v146[3]); /*0x8ef1ae*/
    goto LABEL_55; /*0x8ef1b0*/
  }
  v44 = *((_DWORD *)this + 4); /*0x8ef1b2*/
  if ( v42 <= v44 - 2 ) /*0x8ef1ba*/
    goto LABEL_58; /*0x8ef1ba*/
  LODWORD(v128) = v44 - 1; /*0x8ef1c1*/
  v45 = (double)(v44 - 1); /*0x8ef1c5*/
  if ( v157.m128_f32[2] > v45 ) /*0x8ef1d7*/
  {
    v36 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ef1d9*/
    LODWORD(v32) = v36[MEMORY[0xBA9DE4]]; /*0x8ef1e8*/
    if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) ) /*0x8ef1f7*/
      return v32; /*0x8ef1f7*/
LABEL_38:
    v37 = v36[MEMORY[0xBA9DE4]]; /*0x8ef053*/
    v38 = *(_DWORD **)(v32 + 0x1A4); /*0x8ef055*/
    *v38 = "Et"; /*0x8ef05b*/
    v32 = __rdtsc(); /*0x8ef061*/
    v139 = *(float *)&v32; /*0x8ef063*/
LABEL_190:
    v38[1] = v32; /*0x8f00b3*/
    goto LABEL_191; /*0x8f00b3*/
  }
  v42 = v44 - 2; /*0x8ef21e*/
  v43 = (*(float *)&v146[3] - v45) * v152; /*0x8ef220*/
LABEL_55:
  v46 = (__m128)xmmword_A6DFE0; /*0x8ef227*/
  i = v42; /*0x8ef237*/
  v149 = v152 + v43; /*0x8ef23b*/
  v128 = v43; /*0x8ef23f*/
  v47 = _mm_shuffle_ps((__m128)LODWORD(v128), (__m128)LODWORD(v128), 0); /*0x8ef250*/
  v128 = v43 * v162; /*0x8ef25f*/
  v153 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v46, v47), *(__m128 *)&v146[1]), _mm_mul_ps(v47, v157)); /*0x8ef26e*/
  v129 = (int)v128; /*0x8ef27a*/
  v48 = v23 * v129 + LODWORD(v141) - 2; /*0x8ef289*/
  for ( j = v48; (double)v48 <= v153.m128_f32[0]; j = v48 ) /*0x8ef2a1*/
    ++v48; /*0x8ef2a3*/
  v19 = (v23 >> 1) + v48; /*0x8ef2bc*/
  j = v19; /*0x8ef2be*/
  v147 = ((double)v19 - *(float *)&v146[1]) * v160[3]; /*0x8ef2d1*/
LABEL_58:
  v49 = *((_DWORD *)this + 3); /*0x8ef2d5*/
  if ( v19 >= v49 ) /*0x8ef2da*/
  {
    v31 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ef2dc*/
    LODWORD(v32) = v31[MEMORY[0xBA9DE4]]; /*0x8ef2e9*/
    if ( *(_DWORD *)(v32 + 0x1A4) < *(_DWORD *)(v32 + 0x1A8) ) /*0x8ef2f8*/
      goto LABEL_63; /*0x8ef2f8*/
    return v32; /*0x8ef2f8*/
  }
  if ( v19 - v144 < v49 ) /*0x8ef328*/
  {
    v50 = *(float *)&SrcStr; /*0x8ef36c*/
    v51 = ((_BYTE)v127 != 0) ^ ((v144 ^ v146[0]) >= 0); /*0x8ef393*/
    v155 = v51; /*0x8ef398*/
    if ( v151 == v50 ) /*0x8ef39f*/
    {
      v155 = 0; /*0x8ef3a1*/
      v51 = 0; /*0x8ef3a9*/
    }
    v52 = 2; /*0x8ef3b6*/
    LODWORD(v140) = 2; /*0x8ef3bb*/
    if ( (_BYTE)v127 ) /*0x8ef3bf*/
      v53 = v19 - v42; /*0x8ef3c5*/
    else
      v53 = v42 + v19; /*0x8ef3c1*/
    v135 = v53; /*0x8ef3c9*/
    v54 = v153.m128_f32[1] - (double)v53; /*0x8ef3d1*/
    if ( v51 ) /*0x8ef3d8*/
    {
      if ( fabs(v54) <= fConstant_1 ) /*0x8ef3e7*/
      {
        v52 = 0; /*0x8ef3ef*/
        v140 = 0.0; /*0x8ef3f1*/
        goto LABEL_76; /*0x8ef3f5*/
      }
      v55 = v53 - v145; /*0x8ef3e9*/
    }
    else
    {
      if ( (double)v145 * v54 <= *(float *)&SrcStr ) /*0x8ef40a*/
        goto LABEL_76; /*0x8ef40a*/
      v52 = 0; /*0x8ef410*/
      v140 = 0.0; /*0x8ef412*/
      v55 = v145 + v53; /*0x8ef416*/
    }
    v135 = v55; /*0x8ef418*/
LABEL_76:
    if ( v151 == *(float *)&SrcStr ) /*0x8ef430*/
      v148 = 3.4028235e38; /*0x8ef44b*/
    else
      v148 = ((double)v135 - *(float *)&v146[2]) * (double)v145 * v151; /*0x8ef445*/
    if ( v150 == *(float *)&SrcStr ) /*0x8ef467*/
      v56 = flt_A3B888; /*0x8ef469*/
    else
      v56 = v147 - v150; /*0x8ef475*/
    if ( v151 == *(float *)&SrcStr ) /*0x8ef490*/
      v153.m128_i32[1] = 0xFF7FFFFF; /*0x8ef492*/
    else
      v153.m128_f32[1] = v148 - v151; /*0x8ef4aa*/
    if ( v152 == *(float *)&SrcStr ) /*0x8ef4c5*/
      v153.m128_i32[2] = 0xFF7FFFFF; /*0x8ef4c7*/
    else
      v153.m128_f32[2] = v149 - v152; /*0x8ef4df*/
    if ( v51 ) /*0x8ef4e8*/
    {
      if ( !v52 ) /*0x8ef4ec*/
      {
LABEL_90:
        v57 = 1; /*0x8ef4f0*/
LABEL_101:
        v58 = *(&v147 + v57) - *(&v150 + v57); /*0x8ef561*/
        *(&j + v57) -= *(&v144 + v57); /*0x8ef576*/
        v59 = j; /*0x8ef57a*/
        *(&v147 + v57) = v58; /*0x8ef57e*/
        v130 = v57; /*0x8ef582*/
        v60 = *((_DWORD *)this + 3); /*0x8ef586*/
        v132 = 3.4028235e38; /*0x8ef58b*/
        v154 = 0.0; /*0x8ef593*/
        v143 = -1.0; /*0x8ef59e*/
        if ( v59 < v60 ) /*0x8ef5a6*/
        {
          do /*0x8ef5b0*/
          {
            if ( (unsigned int)i >= *((_DWORD *)this + 4) ) /*0x8ef5b7*/
              break; /*0x8ef5b7*/
            if ( v143 > (double)*(float *)(a4 + 4) ) /*0x8ef5cc*/
            {
              v99 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8efbd3*/
              LODWORD(v32) = v99[MEMORY[0xBA9DE4]]; /*0x8efbe0*/
              if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) ) /*0x8efbef*/
                return v32; /*0x8efbef*/
              goto LABEL_187; /*0x8efbef*/
            }
            v61 = v130; /*0x8ef5d2*/
            v62 = *(&v147 + v130); /*0x8ef5d6*/
            v131 = (int)(&v147 + v130); /*0x8ef5de*/
            v137 = v62; /*0x8ef5ec*/
            sub_535AA0(&v158, v62); /*0x8ef5f0*/
            v63 = j; /*0x8ef5f5*/
            v64 = _mm_shuffle_ps(v158, v158, 0); /*0x8ef60c*/
            v65 = i; /*0x8ef61e*/
            v153 = _mm_add_ps( /*0x8ef630*/
                     _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v64), *(__m128 *)&v146[1]),
                     _mm_mul_ps(v64, v157));
            LODWORD(v142) = j - v144; /*0x8ef638*/
            if ( v61 ) /*0x8ef63c*/
            {
              v83 = v61 == 2; /*0x8ef678*/
              v66 = i; /*0x8ef67b*/
              if ( v83 ) /*0x8ef67f*/
              {
                v128 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(*(_DWORD *)this + 0x24))( /*0x8ef68a*/
                         this,
                         j - v144,
                         i);
                v67 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(*(_DWORD *)this + 0x24))(this, v63, v66); /*0x8ef694*/
                v68 = fabs(v153.m128_f32[0] - (double)j) * (v128 - v67); /*0x8ef6aa*/
              }
              else
              {
                v141 = *(float *)&i; /*0x8ef6bb*/
                *(float *)&v129 = fabs(v153.m128_f32[0] - (double)j); /*0x8ef6c8*/
                if ( v155 ) /*0x8ef6cc*/
                  LODWORD(v141) = i - v146[0]; /*0x8ef6d4*/
                else
                  v65 = i - v146[0]; /*0x8ef6e0*/
                v128 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(*(_DWORD *)this + 0x24))( /*0x8ef6eb*/
                         this,
                         j - v144,
                         v65);
                v67 = ((double (__thiscall *)(float *, int, _DWORD))*(_DWORD *)(*(_DWORD *)this + 0x24))( /*0x8ef6f9*/
                        this,
                        v63,
                        LODWORD(v141));
                v68 = (v128 - v67) * *(float *)&v129; /*0x8ef702*/
              }
            }
            else
            {
              v128 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(*(_DWORD *)this + 0x24))( /*0x8ef64d*/
                       this,
                       j,
                       i - v146[0]);
              v66 = i; /*0x8ef651*/
              v67 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(*(_DWORD *)this + 0x24))(this, v63, i); /*0x8ef65b*/
              v68 = fabs(v153.m128_f32[2] - (double)i) * (v128 - v67); /*0x8ef671*/
            }
            v138 = v68 + v67; /*0x8ef70e*/
            if ( v133 ) /*0x8ef721*/
            {
              if ( v153.m128_f32[3] >= (double)v138 ) /*0x8ef726*/
                goto LABEL_139; /*0x8ef726*/
              v69 = v154 - v132; /*0x8ef733*/
              if ( v69 - (v137 - v143) * v139 <= v153.m128_f32[3] - v138 ) /*0x8ef757*/
                goto LABEL_139; /*0x8ef757*/
              if ( v69 <= *(float *)&SrcStr ) /*0x8ef768*/
              {
                v70 = sub_8AC0D0(0.0, v143); /*0x8ef771*/
                v141 = v70; /*0x8ef776*/
                goto LABEL_126; /*0x8ef77d*/
              }
            }
            else if ( v153.m128_f32[3] >= (double)v138 || v154 < (double)v132 ) /*0x8ef79b*/
            {
LABEL_139:
              v132 = v138; /*0x8efaad*/
              v154 = v153.m128_f32[3]; /*0x8efac0*/
              v143 = v137; /*0x8efac7*/
              goto LABEL_140; /*0x8efac7*/
            }
            v71 = v153.m128_f32[3] - v138; /*0x8ef7a8*/
            if ( v143 < (double)*(float *)&SrcStr ) /*0x8ef7bb*/
            {
              v73 = v137 / (v137 - v143); /*0x8ef7e8*/
              v74 = *(float *)&v146[4] - ((fConstant_1 - v73) * v138 + v73 * v132); /*0x8ef800*/
              if ( v74 < *(float *)&SrcStr ) /*0x8ef80f*/
              {
                if ( !v133 ) /*0x8ef815*/
                  goto LABEL_139; /*0x8ef815*/
                v74 = *(float *)&SrcStr; /*0x8ef81b*/
              }
              v72 = v74 / (v74 - v71) * v137; /*0x8ef829*/
            }
            else
            {
              v72 = (v154 - v132) / (v154 - v132 - v71) * (v137 - v143) + v143; /*0x8ef7da*/
            }
            v141 = v72; /*0x8ef82d*/
            v70 = v72; /*0x8ef831*/
LABEL_126:
            v132 = v138; /*0x8ef833*/
            v75 = v70 < *(float *)(a4 + 4); /*0x8ef849*/
            v76 = v70 == *(float *)(a4 + 4); /*0x8ef849*/
            v154 = v153.m128_f32[3]; /*0x8ef84c*/
            v143 = v137; /*0x8ef853*/
            if ( !v75 && !v76 ) /*0x8ef859*/
            {
              v100 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8efc15*/
              LODWORD(v32) = v100[MEMORY[0xBA9DE4]]; /*0x8efc22*/
              if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) ) /*0x8efc31*/
                return v32; /*0x8efc31*/
              goto LABEL_189; /*0x8efc31*/
            }
            v77 = *(_DWORD *)this; /*0x8ef871*/
            v78 = i - v146[0]; /*0x8ef873*/
            v161[1].m128_i32[1] = 0x3F800000; /*0x8ef877*/
            v161[0].m128_i32[3] = 0; /*0x8ef882*/
            v161[0].m128_i32[1] = 0x3F800000; /*0x8ef88d*/
            v126 = i - v146[0]; /*0x8ef89a*/
            if ( v155 ) /*0x8ef89b*/
            {
              *(float *)&v129 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(v77 + 0x24))(this, j, v126); /*0x8ef8a5*/
              v138 = ((double (__thiscall *)(float *, _DWORD, int))*(_DWORD *)(*(_DWORD *)this + 0x24))( /*0x8ef8b6*/
                       this,
                       LODWORD(v142),
                       v66);
              v79 = *(_DWORD *)this; /*0x8ef8bf*/
              if ( v130 != 1 ) /*0x8ef8c3*/
              {
                v142 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(v79 + 0x24))(this, j, v66); /*0x8ef8ec*/
                v85 = __OFSUB__(v66, v78); /*0x8ef8f4*/
                v83 = v66 == v78; /*0x8ef8f4*/
                v84 = v66 - v78 < 0; /*0x8ef8f4*/
                v81 = v138 - v142; /*0x8ef8f6*/
                v82 = *(float *)&v129 - v142; /*0x8ef8fe*/
                goto LABEL_137; /*0x8ef902*/
              }
              v80 = ((double (__thiscall *)(float *, _DWORD, int))*(_DWORD *)(v79 + 0x24))(this, LODWORD(v142), v78); /*0x8ef8cb*/
              v142 = v80; /*0x8ef8ce*/
              v81 = v80 - *(float *)&v129; /*0x8ef8d2*/
              v82 = v142 - v138; /*0x8ef8da*/
            }
            else
            {
              v138 = ((double (__thiscall *)(float *, _DWORD, int))*(_DWORD *)(v77 + 0x24))(this, LODWORD(v142), v126); /*0x8ef90f*/
              v128 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(*(_DWORD *)this + 0x24))(this, j, v66); /*0x8ef920*/
              if ( *(float *)&v130 != 0.0 && (v130 != 1 || v162 >= (double)v156) ) /*0x8ef944*/
              {
                v86 = ((double (__thiscall *)(float *, _DWORD, int))*(_DWORD *)(*(_DWORD *)this + 0x24))( /*0x8ef950*/
                        this,
                        LODWORD(v142),
                        v66);
                *(float *)&v129 = v86; /*0x8ef953*/
                v81 = v86 - v128; /*0x8ef957*/
                v85 = __OFSUB__(v66, v78); /*0x8ef95b*/
                v83 = v66 == v78; /*0x8ef95b*/
                v84 = v66 - v78 < 0; /*0x8ef95b*/
                v82 = v138 - *(float *)&v129; /*0x8ef961*/
                goto LABEL_137; /*0x8ef965*/
              }
              *(float *)&v129 = ((double (__thiscall *)(float *, int, int))*(_DWORD *)(*(_DWORD *)this + 0x24))( /*0x8ef974*/
                                  this,
                                  j,
                                  v78);
              v81 = v138 - *(float *)&v129; /*0x8ef97c*/
              v82 = *(float *)&v129 - v128; /*0x8ef984*/
            }
            v85 = __OFSUB__(v78, v66); /*0x8ef988*/
            v83 = v78 == v66; /*0x8ef988*/
            v84 = v78 - v66 < 0; /*0x8ef988*/
LABEL_137:
            v87 = *(__m128 *)(this + 0xC); /*0x8ef98a*/
            v161[0].m128_f32[0] = (double)v144 * v81; /*0x8ef9a3*/
            v161[1].m128_f32[1] = v141; /*0x8ef9bd*/
            v161[0].m128_f32[2] = (double)v146[0] * v82; /*0x8ef9c8*/
            v88 = _mm_mul_ps(v161[0], v87); /*0x8ef9d7*/
            v89 = _mm_mul_ps(v88, v88); /*0x8ef9ea*/
            v90 = _mm_shuffle_ps(v89, v89, 0x55).m128_f32[0] + v89.m128_f32[0]; /*0x8ef9f4*/
            v91 = _mm_shuffle_ps(v89, v89, 0xAA); /*0x8ef9fb*/
            v92 = v91; /*0x8efa0a*/
            v92.m128_f32[0] = v91.m128_f32[0] + v90; /*0x8efa0d*/
            *(__m128 *)&v160[3] = v92; /*0x8efa11*/
            v160[3] = 1.0 / fsqrt(v91.m128_f32[0] + v90); /*0x8efa1d*/
            v93 = *(void (__thiscall ***)(int, int, __m128 *))a4; /*0x8efa3f*/
            v160[9] = 3.0; /*0x8efa41*/
            v161[1].m128_i32[0] = (((_BYTE)v127 != 0) ^ !(v84 ^ v85 | v83)) /*0x8efa59*/
                                + 2 * (j + ((i - (v146[0] >> 1) - 1) << 0xF) - (v144 >> 1))
                                - 2;
            v160[0xA] = 0.5; /*0x8efa60*/
            v94 = (__m128)0x3F000000u; /*0x8efa6b*/
            v94.m128_f32[0] = (float)(0.5 * v160[3]) /*0x8efa7f*/
                            * (float)(3.0 - (float)((float)((float)(v91.m128_f32[0] + v90) * v160[3]) * v160[3]));
            v161[0] = _mm_mul_ps(_mm_shuffle_ps(v94, v94, 0), v88); /*0x8efa92*/
            (*v93)(a4, a3, v161); /*0x8efa9a*/
            if ( v133 ) /*0x8efaa2*/
              v133 = 0; /*0x8efaa4*/
LABEL_140:
            v95 = *(&v150 + v130); /*0x8efacb*/
            v96 = v140; /*0x8efade*/
            *(&j + v130) += *(&v144 + v130); /*0x8efae4*/
            v97 = v95 + *(float *)v131; /*0x8efaec*/
            v98 = LODWORD(v96) ^ 2; /*0x8efaf3*/
            v140 = *(float *)&v98; /*0x8efaf5*/
            *(float *)v131 = v97; /*0x8efaf9*/
            if ( v155 ) /*0x8efb04*/
            {
              if ( *(float *)&v98 == 0.0 ) /*0x8efb08*/
                goto LABEL_142; /*0x8efb08*/
              if ( v147 >= (double)v149 ) /*0x8efb21*/
                goto LABEL_152; /*0x8efb21*/
              *(float *)&v130 = 0.0; /*0x8efb23*/
            }
            else
            {
              if ( v162 < (double)v156 ) /*0x8efb40*/
              {
                if ( *(float *)&v98 != 0.0 ) /*0x8efb44*/
                  goto LABEL_152; /*0x8efb44*/
                if ( v147 < (double)v148 ) /*0x8efb53*/
                {
                  *(float *)&v130 = 0.0; /*0x8efb55*/
                  continue; /*0x8efb59*/
                }
LABEL_142:
                v130 = 1; /*0x8efb0a*/
                continue; /*0x8efb12*/
              }
              if ( *(float *)&v98 == 0.0 ) /*0x8efb5d*/
              {
                v130 = 1; /*0x8efb6d*/
                if ( v148 >= (double)v149 ) /*0x8efb7e*/
LABEL_152:
                  v130 = 2; /*0x8efb80*/
              }
              else
              {
                *(float *)&v130 = 0.0; /*0x8efb5f*/
              }
            }
          }
          while ( (unsigned int)j < *((_DWORD *)this + 3) ); /*0x8ef5b0*/
        }
        v99 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8efb91*/
        LODWORD(v32) = v99[MEMORY[0xBA9DE4]]; /*0x8efb9e*/
        if ( *(_DWORD *)(v32 + 0x1A4) >= *(_DWORD *)(v32 + 0x1A8) ) /*0x8efbad*/
          return v32; /*0x8efbad*/
LABEL_187:
        v37 = v99[MEMORY[0xBA9DE4]]; /*0x8f0060*/
        v38 = *(_DWORD **)(v32 + 0x1A4); /*0x8f0062*/
        *v38 = "Et"; /*0x8f0068*/
        v32 = __rdtsc(); /*0x8f006e*/
        v131 = v32; /*0x8f0070*/
        v38[1] = v32; /*0x8f0078*/
        goto LABEL_191; /*0x8f007b*/
      }
      if ( v56 > v153.m128_f32[2] ) /*0x8ef503*/
      {
        *(float *)&v57 = 0.0; /*0x8ef505*/
        goto LABEL_101; /*0x8ef507*/
      }
    }
    else if ( v162 >= (double)v156 ) /*0x8ef51c*/
    {
      if ( v52 ) /*0x8ef53c*/
      {
        *(float *)&v57 = 0.0; /*0x8ef53e*/
        goto LABEL_101; /*0x8ef540*/
      }
      v57 = 1; /*0x8ef555*/
      if ( v153.m128_f32[1] > (double)v153.m128_f32[2] ) /*0x8ef55a*/
        goto LABEL_101; /*0x8ef55a*/
    }
    else if ( !v52 ) /*0x8ef520*/
    {
      if ( v56 > v153.m128_f32[1] ) /*0x8ef532*/
      {
        *(float *)&v57 = 0.0; /*0x8ef534*/
        goto LABEL_101; /*0x8ef536*/
      }
      goto LABEL_90; /*0x8ef532*/
    }
    v57 = 2; /*0x8ef55c*/
    goto LABEL_101; /*0x8ef55c*/
  }
  v31 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ef32a*/
  LODWORD(v32) = v31[MEMORY[0xBA9DE4]]; /*0x8ef337*/
  if ( *(_DWORD *)(v32 + 0x1A4) < *(_DWORD *)(v32 + 0x1A8) ) /*0x8ef346*/
  {
LABEL_63:
    v37 = v31[MEMORY[0xBA9DE4]]; /*0x8ef34c*/
    v38 = *(_DWORD **)(v32 + 0x1A4); /*0x8ef34e*/
    *v38 = "Et"; /*0x8ef354*/
    v32 = __rdtsc(); /*0x8ef35a*/
    v139 = *(float *)&v32; /*0x8ef35c*/
    v38[1] = v32; /*0x8ef364*/
LABEL_191:
    *(_DWORD *)(v37 + 0x1A4) = v38 + 3; /*0x8f00b6*/
  }
  return v32; /*0x8f00bf*/
}
