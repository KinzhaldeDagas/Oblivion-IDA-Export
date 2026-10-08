void __userpurge sub_8E24A0(__m128 *a1@<ecx>, double a2@<st1>, __m128 *a3, unsigned int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  __m128 v7; // xmm5
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // esi
  int v11; // esi
  _DWORD *v12; // ecx
  unsigned __int64 v13; // rax
  _DWORD *v14; // ecx
  _BYTE *v15; // esi
  unsigned __int32 v16; // eax
  __int32 v17; // eax
  _OWORD *v18; // ecx
  __int32 v19; // edx
  _OWORD *v20; // eax
  _DWORD *v21; // ecx
  unsigned __int64 v22; // rax
  __int8 *v23; // edi
  char v24; // cl
  __int64 v25; // rax
  unsigned int v26; // edi
  unsigned int v27; // ebx
  unsigned __int16 *k; // eax
  int v29; // edx
  unsigned int v30; // ebx
  unsigned __int16 *j; // eax
  int v32; // edx
  int v33; // eax
  _DWORD *v34; // edi
  unsigned __int64 v35; // rax
  _DWORD *v36; // ecx
  int v37; // ebx
  unsigned __int32 v38; // eax
  __int32 v39; // eax
  __m128 *v40; // edi
  __int32 v41; // ecx
  unsigned __int32 v42; // edx
  _BYTE *v43; // eax
  __int32 v44; // edi
  __int32 v45; // edi
  __int32 v46; // edi
  __int32 v47; // edi
  int v48; // eax
  _DWORD *v49; // ecx
  unsigned __int64 v50; // rax
  int v51; // eax
  int v52; // edi
  int v53; // ebx
  __m128 *v54; // ecx
  __m128 v55; // xmm0
  __int32 v56; // edx
  __int32 v57; // eax
  __m128 *v58; // edx
  long double v59; // st6
  double v60; // st6
  double v61; // st5
  double v62; // st6
  double v63; // st6
  int v64; // eax
  int v65; // ecx
  int v66; // eax
  int v67; // ebx
  double v68; // st6
  char mm; // dl
  _WORD *v70; // edi
  int v71; // eax
  unsigned __int8 v72; // cl
  int v73; // eax
  int v74; // edx
  bool v75; // zf
  unsigned int v76; // edi
  int *v77; // eax
  int v78; // ecx
  bool v79; // cc
  _DWORD *v80; // edx
  _DWORD *v81; // ecx
  unsigned __int64 v82; // rax
  _DWORD *v83; // ecx
  _DWORD *v84; // ecx
  int v85; // [esp+30h] [ebp-C0h]
  float *v86; // [esp+30h] [ebp-C0h]
  unsigned int n; // [esp+34h] [ebp-BCh]
  unsigned int ii; // [esp+34h] [ebp-BCh]
  unsigned int jj; // [esp+34h] [ebp-BCh]
  unsigned int kk; // [esp+34h] [ebp-BCh]
  float v91; // [esp+34h] [ebp-BCh]
  int i; // [esp+38h] [ebp-B8h]
  _DWORD *v93; // [esp+38h] [ebp-B8h]
  __int64 v94; // [esp+38h] [ebp-B8h]
  int *v95; // [esp+3Ch] [ebp-B4h]
  _BYTE *v96; // [esp+3Ch] [ebp-B4h]
  _DWORD *v97; // [esp+40h] [ebp-B0h]
  float v98; // [esp+40h] [ebp-B0h]
  _DWORD *v99; // [esp+44h] [ebp-ACh]
  int v100; // [esp+44h] [ebp-ACh]
  _DWORD *v101; // [esp+48h] [ebp-A8h]
  float v102; // [esp+48h] [ebp-A8h]
  int v103; // [esp+50h] [ebp-A0h]
  unsigned __int32 v105; // [esp+58h] [ebp-98h]
  int v106; // [esp+58h] [ebp-98h]
  int m; // [esp+5Ch] [ebp-94h]
  __m128 v108; // [esp+60h] [ebp-90h] BYREF
  float v109; // [esp+74h] [ebp-7Ch] BYREF
  float v110; // [esp+78h] [ebp-78h]
  float v111; // [esp+7Ch] [ebp-74h]
  int v112; // [esp+80h] [ebp-70h]
  __int16 v113; // [esp+86h] [ebp-6Ah]
  float v114; // [esp+88h] [ebp-68h] BYREF
  _WORD *v115; // [esp+8Ch] [ebp-64h]
  _WORD *v116; // [esp+90h] [ebp-60h]
  int v117; // [esp+94h] [ebp-5Ch]
  int v118; // [esp+98h] [ebp-58h]
  int v119; // [esp+9Ch] [ebp-54h]
  int v120; // [esp+A0h] [ebp-50h]
  _DWORD v121[3]; // [esp+A4h] [ebp-4Ch]
  float v122[4]; // [esp+B0h] [ebp-40h] BYREF
  float v123[5]; // [esp+C0h] [ebp-30h] BYREF
  int v124[3]; // [esp+D4h] [ebp-1Ch] BYREF
  __m128 v125; // [esp+E0h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8e24d0*/
  v7 = _mm_add_ps( /*0x8e24eb*/
         _mm_max_ps(
           _mm_min_ps(_mm_mul_ps(_mm_add_ps(*a3, a1[1]), a1[3]), (__m128)xmmword_B2FC70),
           (__m128)xmmword_A9A660),
         (__m128)xmmword_A9A650);
  v108.m128_u64[1] = v7.m128_u64[1]; /*0x8e24ee*/
  v108.m128_i32[0] = (unsigned __int16)((unsigned __int32)v7.m128_i32[0] >> 7); /*0x8e2515*/
  v108.m128_i32[1] = (unsigned __int16)((unsigned __int32)v7.m128_i32[1] >> 7); /*0x8e251f*/
  v8 = MEMORY[0xBA9DE4]; /*0x8e2523*/
  v108.m128_i32[3] = (unsigned __int16)((unsigned __int32)v7.m128_i32[3] >> 7); /*0x8e2529*/
  v9 = ThreadLocalStoragePointer[v8]; /*0x8e252d*/
  v113 = (unsigned __int32)v7.m128_i32[3] >> 7; /*0x8e2530*/
  v10 = *(_DWORD *)(v9 + 0x1A8); /*0x8e2535*/
  v108.m128_i32[2] = (unsigned __int16)((unsigned __int32)v7.m128_i32[2] >> 7); /*0x8e253b*/
  if ( *(_DWORD *)(v9 + 0x1A4) < v10 ) /*0x8e2547*/
  {
    v11 = v9; /*0x8e2549*/
    v12 = *(_DWORD **)(v9 + 0x1A4); /*0x8e254b*/
    *v12 = "Lthk3AxisSweep"; /*0x8e2551*/
    v12[3] = "memory"; /*0x8e2557*/
    v13 = __rdtsc(); /*0x8e255e*/
    v12[1] = v13; /*0x8e2568*/
    *(_DWORD *)(v11 + 0x1A4) = v12 + 4; /*0x8e256e*/
  }
  v14 = *(_DWORD **)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] + 0x19C); /*0x8e257d*/
  v15 = (_BYTE *)v14[8]; /*0x8e2583*/
  v103 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8e2586*/
  v16 = (a1[4].m128_i32[1] + 0x20) & 0xFFFFFFF0; /*0x8e2590*/
  if ( (unsigned int)&v15[v16] > v14[0xB] ) /*0x8e2599*/
    v15 = (_BYTE *)(*(int (__thiscall **)(_DWORD *, unsigned __int32))(*v14 + 0xC))( /*0x8e25a6*/
                     v14,
                     (a1[4].m128_i32[1] + 0x20) & 0xFFFFFFF0);
  else
    v14[8] = &v15[v16]; /*0x8e259b*/
  v17 = a1[4].m128_i32[1] >> 4; /*0x8e25ab*/
  v18 = v15; /*0x8e25b3*/
  if ( v17 >= 0 ) /*0x8e25b5*/
  {
    v19 = v17 + 1; /*0x8e25b7*/
    do /*0x8e25c9*/
    {
      v20 = v18++; /*0x8e25c0*/
      --v19; /*0x8e25c5*/
      *v20 = 0; /*0x8e25c6*/
    }
    while ( v19 ); /*0x8e25c9*/
  }
  if ( *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] /*0x8e25df*/
                                                                                    + 0x1A8) )
  {
    v21 = *(_DWORD **)(v103 + 0x1A4); /*0x8e25e5*/
    *v21 = "Stbitfield"; /*0x8e25eb*/
    v22 = __rdtsc(); /*0x8e25f1*/
    v21[1] = v22; /*0x8e25fb*/
    *(_DWORD *)(v103 + 0x1A4) = v21 + 3; /*0x8e2601*/
  }
  if ( a3[1].m128_i32[3] ) /*0x8e260a*/
    v23 = (__int8 *)a3[1].m128_i32[3]; /*0x8e2611*/
  else
    v23 = &a1[4].m128_i8[0xC]; /*0x8e2615*/
  v24 = 0x11; /*0x8e2618*/
  v95 = (int *)v23; /*0x8e261d*/
  for ( i = 0; i < 3; ++i ) /*0x8e2621*/
  {
    v25 = *(_QWORD *)v95; /*0x8e2637*/
    v26 = v108.m128_u32[i]; /*0x8e263d*/
    if ( v26 >= *(unsigned __int16 *)(*v95 + 4 * (v95[1] >> 1)) ) /*0x8e264b*/
    {
      v30 = v25 + 0x10; /*0x8e26ab*/
      for ( j = (unsigned __int16 *)(v25 + 4 * HIDWORD(v25) - 8); (unsigned int)j >= v30; j += 0xFFFFFFF8 ) /*0x8e26b4*/
      {
        if ( j[0xFFFFFFFA] <= v26 ) /*0x8e26bc*/
          break; /*0x8e26bc*/
        v15[j[1]] ^= v24; /*0x8e26c2*/
        v15[j[0xFFFFFFFF]] ^= v24; /*0x8e26cb*/
        v15[j[0xFFFFFFFD]] ^= v24; /*0x8e26d4*/
        v15[j[0xFFFFFFFB]] ^= v24; /*0x8e26dd*/
      }
      for ( ; *j > v26; v15[v32] ^= v24 ) /*0x8e26ee*/
      {
        v32 = j[1]; /*0x8e26f0*/
        j += 0xFFFFFFFE; /*0x8e26fb*/
      }
      k = j + 2; /*0x8e2707*/
    }
    else
    {
      v27 = v25 + 4 * HIDWORD(v25) - 0x10; /*0x8e264d*/
      for ( k = (unsigned __int16 *)(v25 + 4); (unsigned int)k < v27; k += 8 ) /*0x8e2656*/
      {
        if ( k[6] > v26 ) /*0x8e265e*/
          break; /*0x8e265e*/
        v15[k[1]] ^= v24; /*0x8e2664*/
        v15[k[3]] ^= v24; /*0x8e266d*/
        v15[k[5]] ^= v24; /*0x8e2676*/
        v15[k[7]] ^= v24; /*0x8e267f*/
      }
      for ( ; *k <= v26; v15[v29] ^= v24 ) /*0x8e2690*/
      {
        v29 = k[1]; /*0x8e2692*/
        k += 2; /*0x8e269d*/
      }
    }
    v121[i] = k; /*0x8e2712*/
    v24 *= 2; /*0x8e271f*/
    v95 += 3; /*0x8e2724*/
  }
  v33 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e273e*/
  if ( *(_DWORD *)(v33 + 0x1A4) < *(_DWORD *)(v33 + 0x1A8) ) /*0x8e2753*/
  {
    v34 = *(_DWORD **)(v103 + 0x1A4); /*0x8e2755*/
    *v34 = "StStartOverlaps"; /*0x8e275b*/
    v35 = __rdtsc(); /*0x8e2761*/
    v34[1] = v35; /*0x8e276b*/
    *(_DWORD *)(v103 + 0x1A4) = v34 + 3; /*0x8e2771*/
  }
  v36 = *(_DWORD **)(v103 + 0x19C); /*0x8e277d*/
  v37 = v36[8]; /*0x8e2783*/
  v38 = (4 * a3[1].m128_i32[0] + 0x10) & 0xFFFFFFF0; /*0x8e2790*/
  if ( v37 + v38 > v36[0xB] ) /*0x8e2798*/
    v37 = (*(int (__thiscall **)(_DWORD *, unsigned __int32))(*v36 + 0xC))( /*0x8e27a5*/
            v36,
            (4 * a3[1].m128_i32[0] + 0x10) & 0xFFFFFFF0);
  else
    v36[8] = v37 + v38; /*0x8e279a*/
  v39 = 0; /*0x8e27ad*/
  for ( m = v37; v39 < a3[1].m128_i32[0]; ++v39 ) /*0x8e27b5*/
    *(_DWORD *)(v37 + 4 * v39) = 0x3F800000; /*0x8e27c0*/
  v40 = a1; /*0x8e27cf*/
  v41 = a1[4].m128_i32[0]; /*0x8e27d6*/
  v42 = (unsigned __int32)&v15[4 * (a1[4].m128_i32[1] >> 2) + 4]; /*0x8e27dc*/
  v43 = v15; /*0x8e27e2*/
  v96 = v15; /*0x8e27e4*/
  v105 = v42; /*0x8e27e8*/
  if ( (unsigned int)v15 < v42 ) /*0x8e27ec*/
  {
    v93 = (_DWORD *)(v41 + 0x3C); /*0x8e27f5*/
    v97 = (_DWORD *)(v41 + 0x2C); /*0x8e27fc*/
    v99 = (_DWORD *)(v41 + 0xC); /*0x8e2806*/
    v101 = (_DWORD *)(v41 + 0x1C); /*0x8e280a*/
    do /*0x8e2ab5*/
    {
      if ( ((*(_DWORD *)v43 + 0x1010101) & 0x8080808) != 0 ) /*0x8e282e*/
      {
        if ( *v43 == 0x77 && (*(_BYTE *)v99 & 1) == 0 ) /*0x8e28c6*/
        {
          v44 = 0; /*0x8e28d1*/
          for ( n = a4; v44 < a3[1].m128_i32[0]; n += a5 ) /*0x8e28d9*/
          {
            (*(void (__thiscall **)(unsigned int, _DWORD, __int32))(*(_DWORD *)n + 4))(n, *v99, v44); /*0x8e28ee*/
            if ( *(float *)(v37 + 4 * v44) < a2 ) /*0x8e28ff*/
              a2 = *(float *)(v37 + 4 * v44); /*0x8e2903*/
            *(float *)(v37 + 4 * v44++) = a2; /*0x8e290a*/
          }
        }
        if ( v96[1] == 0x77 && (*(_BYTE *)v101 & 1) == 0 ) /*0x8e2933*/
        {
          v45 = 0; /*0x8e293e*/
          for ( ii = a4; v45 < a3[1].m128_i32[0]; ii += a5 ) /*0x8e2946*/
          {
            (*(void (__thiscall **)(unsigned int, _DWORD, __int32))(*(_DWORD *)ii + 4))(ii, *v101, v45); /*0x8e295e*/
            if ( *(float *)(v37 + 4 * v45) < a2 ) /*0x8e296f*/
              a2 = *(float *)(v37 + 4 * v45); /*0x8e2973*/
            *(float *)(v37 + 4 * v45++) = a2; /*0x8e297a*/
          }
        }
        if ( v96[2] == 0x77 && (*(_BYTE *)v97 & 1) == 0 ) /*0x8e29a3*/
        {
          v46 = 0; /*0x8e29ae*/
          for ( jj = a4; v46 < a3[1].m128_i32[0]; jj += a5 ) /*0x8e29b6*/
          {
            (*(void (__thiscall **)(unsigned int, _DWORD, __int32))(*(_DWORD *)jj + 4))(jj, *v97, v46); /*0x8e29ce*/
            if ( *(float *)(v37 + 4 * v46) < a2 ) /*0x8e29df*/
              a2 = *(float *)(v37 + 4 * v46); /*0x8e29e3*/
            *(float *)(v37 + 4 * v46++) = a2; /*0x8e29ea*/
          }
        }
        if ( v96[3] == 0x77 && (*(_BYTE *)v93 & 1) == 0 ) /*0x8e2a13*/
        {
          v47 = 0; /*0x8e2a1e*/
          for ( kk = a4; v47 < a3[1].m128_i32[0]; kk += a5 ) /*0x8e2a26*/
          {
            (*(void (__thiscall **)(unsigned int, _DWORD, __int32))(*(_DWORD *)kk + 4))(kk, *v93, v47); /*0x8e2a3e*/
            if ( *(float *)(v37 + 4 * v47) < a2 ) /*0x8e2a4f*/
              a2 = *(float *)(v37 + 4 * v47); /*0x8e2a53*/
            *(float *)(v37 + 4 * v47++) = a2; /*0x8e2a5a*/
          }
        }
        v99 += 0x10; /*0x8e2a85*/
        v43 = v96 + 4; /*0x8e2a97*/
        v97 += 0x10; /*0x8e2a9a*/
        v42 = v105; /*0x8e2a9e*/
        v93 += 0x10; /*0x8e2aa2*/
        v101 += 0x10; /*0x8e2aa6*/
        v96 += 4; /*0x8e2aaa*/
      }
      else if ( ((*((_DWORD *)v43 + 1) + 0x1010101) & 0x8080808) != 0 ) /*0x8e2843*/
      {
        v99 += 0x10; /*0x8e289e*/
        v101 += 0x10; /*0x8e28a2*/
        v97 += 0x10; /*0x8e28a6*/
        v93 += 0x10; /*0x8e28aa*/
        v43 += 4; /*0x8e28ae*/
        v96 = v43; /*0x8e28b1*/
      }
      else
      {
        if ( ((*((_DWORD *)v43 + 2) + 0x1010101) & 0x8080808) != 0 ) /*0x8e2854*/
        {
          v99 += 0x20; /*0x8e287d*/
          v101 += 0x20; /*0x8e2881*/
          v97 += 0x20; /*0x8e2885*/
          v93 += 0x20; /*0x8e2889*/
          v43 += 8; /*0x8e288d*/
        }
        else
        {
          v99 += 0x30; /*0x8e2856*/
          v101 += 0x30; /*0x8e285a*/
          v97 += 0x30; /*0x8e285e*/
          v43 += 0xC; /*0x8e2868*/
          v93 += 0x30; /*0x8e286b*/
        }
        v96 = v43; /*0x8e286f*/
      }
    }
    while ( (unsigned int)v43 < v42 ); /*0x8e2ab5*/
    v40 = a1; /*0x8e2abb*/
  }
  v48 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e2acb*/
  *v15 = 0x88; /*0x8e2ace*/
  if ( *(_DWORD *)(v48 + 0x1A4) < *(_DWORD *)(v48 + 0x1A8) ) /*0x8e2add*/
  {
    v49 = *(_DWORD **)(v103 + 0x1A4); /*0x8e2ae3*/
    *v49 = "StWalk"; /*0x8e2ae9*/
    v50 = __rdtsc(); /*0x8e2aef*/
    v49[1] = v50; /*0x8e2af9*/
    *(_DWORD *)(v103 + 0x1A4) = v49 + 3; /*0x8e2aff*/
  }
  v94 = a4; /*0x8e2b0e*/
  v51 = a3[1].m128_i32[0]; /*0x8e2b12*/
  v112 = v40[4].m128_i32[1]; /*0x8e2b17*/
  if ( v51 > 0 ) /*0x8e2b23*/
  {
    v120 = (char *)&v125 - (char *)a3; /*0x8e2b34*/
    v118 = (char *)&v108 - (char *)a3; /*0x8e2b41*/
    v119 = (char *)v124 - (char *)a3; /*0x8e2b4e*/
    v117 = (char *)&v114 - (char *)a3; /*0x8e2b58*/
    v100 = (char *)v123 - (char *)a3; /*0x8e2b65*/
    v106 = (char *)v122 - (char *)a3; /*0x8e2b72*/
    do /*0x8e2b99*/
    {
      v98 = *(float *)(m + 4 * HIDWORD(v94)); /*0x8e2b99*/
      v114 = *(float *)v121; /*0x8e2b9d*/
      v116 = (_WORD *)v121[2]; /*0x8e2ba8*/
      v52 = v117; /*0x8e2bac*/
      v53 = v119; /*0x8e2bb0*/
      v115 = (_WORD *)v121[1]; /*0x8e2bb4*/
      v54 = a3; /*0x8e2bb8*/
      v55 = *a3; /*0x8e2bbe*/
      v56 = a3[1].m128_i32[1] + HIDWORD(v94) * a3[1].m128_i32[2]; /*0x8e2bc4*/
      v108.m128_u64[0] = *(_QWORD *)v56; /*0x8e2bc9*/
      v57 = *(_DWORD *)(v56 + 8); /*0x8e2bd4*/
      v108.m128_i32[3] = *(_DWORD *)(v56 + 0xC); /*0x8e2bda*/
      v108.m128_i32[2] = v57; /*0x8e2be2*/
      v125 = _mm_sub_ps(v108, v55); /*0x8e2bee*/
      v58 = a1 + 3; /*0x8e2bf6*/
      v85 = 3; /*0x8e2bf9*/
      do /*0x8e2cc6*/
      {
        v59 = *(float *)((char *)v54->m128_f32 + v120) * v58->m128_f32[0]; /*0x8e2c0b*/
        v91 = v59; /*0x8e2c0d*/
        v60 = fabs(v59); /*0x8e2c11*/
        v61 = (v58[0xFFFFFFFE].m128_f32[0] + v54->m128_f32[0]) * v58->m128_f32[0]; /*0x8e2c18*/
        if ( v60 < v61 * flt_A9A648 /*0x8e2c4a*/
          || v60 < (*(float *)((char *)v54->m128_f32 + v118) + v58[0xFFFFFFFE].m128_f32[0])
                 * v58->m128_f32[0]
                 * flt_A9A648 )
        {
          *(__int32 *)((char *)v54->m128_i32 + v100) = 0; /*0x8e2ca5*/
          *(__int32 *)((char *)v54->m128_i32 + v106) = 0xC0000000; /*0x8e2cb0*/
        }
        else
        {
          v62 = fConstant_1; /*0x8e2c4c*/
          *(__int32 *)((char *)v54->m128_i32 + v53) = 4; /*0x8e2c52*/
          v63 = v62 / v91; /*0x8e2c59*/
          if ( v91 < (double)*(float *)&SrcStr ) /*0x8e2c6c*/
          {
            v64 = *(__int32 *)((char *)v54->m128_i32 + v52); /*0x8e2c6e*/
            *(__int32 *)((char *)v54->m128_i32 + v53) = 0xFFFFFFFC; /*0x8e2c74*/
            *(__int32 *)((char *)v54->m128_i32 + v52) = v64 - 4; /*0x8e2c7b*/
          }
          *(float *)((char *)v54->m128_f32 + v100) = v63; /*0x8e2c84*/
          v102 = v61; /*0x8e2c1a*/
          *(float *)((char *)v54->m128_f32 + v106) = (v102 - a1[7].m128_f32[3]) * v63; /*0x8e2c98*/
        }
        v54 = (__m128 *)((char *)v54 + 4); /*0x8e2cbb*/
        v58 = (__m128 *)((char *)v58 + 4); /*0x8e2cbe*/
        --v85; /*0x8e2cc2*/
      }
      while ( v85 ); /*0x8e2cc6*/
      v65 = (unsigned __int16)*v115; /*0x8e2cd7*/
      v66 = (unsigned __int16)*v116; /*0x8e2ce6*/
      v109 = (double)(unsigned __int16)*(_WORD *)LODWORD(v114) * v123[0] - v122[0]; /*0x8e2cfb*/
      v110 = (double)v65 * v123[1] - v122[1]; /*0x8e2d15*/
      v111 = (double)v66 * v123[2] - v122[2]; /*0x8e2d2b*/
      while ( 1 ) /*0x8e2d3d*/
      {
LABEL_85:
        if ( v109 >= (double)v110 ) /*0x8e2d3d*/
        {
          v67 = 1; /*0x8e2d56*/
          if ( v110 < (double)v111 ) /*0x8e2d64*/
            goto LABEL_90; /*0x8e2d64*/
        }
        else if ( v109 < (double)v111 ) /*0x8e2d4c*/
        {
          v67 = 0; /*0x8e2d4e*/
          goto LABEL_90; /*0x8e2d50*/
        }
        v67 = 2; /*0x8e2d66*/
LABEL_90:
        v68 = *(&v109 + v67); /*0x8e2d6b*/
        v86 = &v109 + v67; /*0x8e2d77*/
        if ( v68 > v98 ) /*0x8e2d80*/
          break; /*0x8e2d80*/
        for ( mm = 0x10 << v67; ; mm = 0x10 << v67 ) /*0x8e2d8a*/
        {
          v70 = *((_WORD **)&v114 + v67); /*0x8e2d90*/
          v71 = (unsigned __int16)v70[1]; /*0x8e2d94*/
          v72 = mm ^ v15[v71]; /*0x8e2d9b*/
          v15[v71] = v72; /*0x8e2da0*/
          if ( v72 >= 0x70u ) /*0x8e2da3*/
          {
            if ( !v71 ) /*0x8e2da7*/
            {
              *v86 = 2.0; /*0x8e2e05*/
              goto LABEL_85; /*0x8e2e0b*/
            }
            v73 = *(_DWORD *)(a1[4].m128_i32[0] + 0x10 * v71 + 0xC); /*0x8e2db5*/
            if ( (v73 & 1) == 0 ) /*0x8e2dba*/
            {
              (*(void (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)v94 + 4))(v94, v73, HIDWORD(v94)); /*0x8e2dcc*/
              if ( v98 >= v68 ) /*0x8e2dda*/
                v98 = v68; /*0x8e2ddc*/
            }
          }
          v74 = v124[v67]; /*0x8e2de4*/
          v75 = *v70 == *(_WORD *)((char *)v70 + v74); /*0x8e2dee*/
          *((_DWORD *)&v114 + v67) = (char *)v70 + v74; /*0x8e2df5*/
          if ( !v75 ) /*0x8e2df9*/
            break; /*0x8e2df9*/
        }
        *v86 = (double)*(unsigned __int16 *)((char *)v70 + v74) * v123[v67] - v122[v67]; /*0x8e2e2d*/
      }
      if ( SHIDWORD(v94) < a3[1].m128_i32[0] - 1 ) /*0x8e2e41*/
      {
        v76 = (unsigned int)&v15[4 * (v112 >> 2) + 4]; /*0x8e2e4a*/
        v77 = (int *)v15; /*0x8e2e50*/
        if ( (unsigned int)v15 < v76 ) /*0x8e2e52*/
        {
          do /*0x8e2e7d*/
          {
            v78 = v77[1] & 0xF0F0F0F | (0x10 * (v77[1] & 0xF0F0F0F)); /*0x8e2e71*/
            *v77 = *v77 & 0xF0F0F0F | (0x10 * (*v77 & 0xF0F0F0F)); /*0x8e2e73*/
            v77[1] = v78; /*0x8e2e75*/
            v77 += 2; /*0x8e2e78*/
          }
          while ( (unsigned int)v77 < v76 ); /*0x8e2e7d*/
        }
      }
      v79 = HIDWORD(v94) + 1 < a3[1].m128_i32[0]; /*0x8e2e93*/
      LODWORD(v94) = a5 + v94; /*0x8e2e95*/
      ++HIDWORD(v94); /*0x8e2e99*/
    }
    while ( v79 ); /*0x8e2b99*/
  }
  v80 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8e2ea3*/
  if ( *(_DWORD *)(v80[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v80[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x8e2ec2*/
  {
    v81 = *(_DWORD **)(v103 + 0x1A4); /*0x8e2ec4*/
    *v81 = "lt"; /*0x8e2eca*/
    v82 = __rdtsc(); /*0x8e2ed0*/
    v112 = v82; /*0x8e2ed2*/
    v81[1] = v82; /*0x8e2eda*/
    *(_DWORD *)(v103 + 0x1A4) = v81 + 3; /*0x8e2ee0*/
  }
  v83 = *(_DWORD **)(v103 + 0x19C); /*0x8e2ee6*/
  v75 = m == v83[0xA]; /*0x8e2ef0*/
  v83[8] = m; /*0x8e2ef3*/
  if ( v75 ) /*0x8e2ef6*/
    (*(void (__thiscall **)(_DWORD *, int))(*v83 + 0x10))(v83, m); /*0x8e2efb*/
  v84 = *(_DWORD **)(v103 + 0x19C); /*0x8e2efe*/
  v75 = v15 == (_BYTE *)v84[0xA]; /*0x8e2f04*/
  v84[8] = v15; /*0x8e2f07*/
  if ( v75 ) /*0x8e2f0a*/
    (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v84 + 0x10))(v84, v15); /*0x8e2f0f*/
}
