void __userpurge sub_8E2F20(__m128 *a1@<ecx>, double a2@<st1>, __m128 *a3, int a4)
{
  __m128 v5; // xmm6
  __m128 v6; // xmm5
  __m128 v7; // xmm4
  __m128 *v8; // ebx
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  __m128 v11; // xmm3
  __m128 v12; // xmm2
  __m128 v13; // xmm0
  int v14; // esi
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v16; // eax
  _DWORD *v17; // ebx
  unsigned __int64 v18; // rax
  __int32 v19; // eax
  _DWORD *v20; // ecx
  _BYTE *v21; // esi
  unsigned int v22; // eax
  __int32 v23; // eax
  _OWORD *v24; // ecx
  __int32 v25; // eax
  _OWORD *v26; // edx
  __int8 *v27; // ebx
  __int8 *v28; // edi
  int v29; // ebx
  char v30; // cl
  int v31; // edx
  int v32; // eax
  unsigned int v33; // ebx
  unsigned int v34; // edi
  unsigned __int16 *i; // eax
  int v36; // ebx
  unsigned int v37; // edx
  unsigned int v38; // edi
  unsigned int v39; // edx
  unsigned int v40; // edi
  unsigned int v41; // edi
  unsigned __int16 *v42; // eax
  unsigned int v43; // ebx
  unsigned int v44; // edi
  unsigned int v45; // edx
  unsigned int v46; // edx
  int v47; // eax
  int v48; // edi
  _DWORD *v49; // ecx
  unsigned __int64 v50; // rax
  _BYTE *v51; // ebx
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // edi
  _DWORD *v57; // ecx
  unsigned __int64 v58; // rax
  __m128 *v59; // edi
  float *m128_f32; // edx
  int j; // ecx
  long double v62; // st6
  double v63; // st6
  float v64; // eax
  double v65; // st5
  float v66; // ebx
  __int32 v67; // eax
  int v68; // eax
  int v69; // ebx
  float v70; // eax
  double v71; // st6
  int v72; // ecx
  int v73; // eax
  int v74; // edx
  double v75; // st6
  int v76; // ecx
  double v77; // st6
  int v78; // eax
  double v79; // st6
  int v80; // ebx
  double v81; // st6
  int v82; // edi
  int v83; // eax
  unsigned __int8 v84; // cl
  int v85; // eax
  _WORD *v86; // eax
  bool v87; // zf
  float v88; // eax
  int v89; // edi
  unsigned __int8 v90; // cl
  __int16 v91; // dx
  _WORD *v92; // eax
  int v93; // eax
  int v94; // edi
  _DWORD *v95; // ecx
  unsigned __int64 v96; // rax
  _DWORD *v97; // ecx
  unsigned int v98; // [esp+28h] [ebp-F8h]
  _DWORD *v99; // [esp+28h] [ebp-F8h]
  int v100; // [esp+28h] [ebp-F8h]
  int v101; // [esp+2Ch] [ebp-F4h]
  float v102; // [esp+2Ch] [ebp-F4h]
  unsigned int v103; // [esp+30h] [ebp-F0h]
  char *v104; // [esp+30h] [ebp-F0h]
  float *v105; // [esp+30h] [ebp-F0h]
  __int8 *v106; // [esp+38h] [ebp-E8h]
  float v107; // [esp+38h] [ebp-E8h]
  float *v108; // [esp+38h] [ebp-E8h]
  unsigned __int8 v109; // [esp+3Fh] [ebp-E1h]
  float v110; // [esp+40h] [ebp-E0h] BYREF
  float v111; // [esp+44h] [ebp-DCh]
  float v112; // [esp+48h] [ebp-D8h]
  int v113; // [esp+4Ch] [ebp-D4h]
  float v114; // [esp+50h] [ebp-D0h] BYREF
  float v115; // [esp+54h] [ebp-CCh]
  float v116; // [esp+58h] [ebp-C8h]
  int v117; // [esp+5Ch] [ebp-C4h]
  int v118; // [esp+6Ch] [ebp-B4h]
  __m128 v119; // [esp+70h] [ebp-B0h]
  __m128 *v120; // [esp+84h] [ebp-9Ch]
  _DWORD v121[3]; // [esp+88h] [ebp-98h]
  float v122[3]; // [esp+94h] [ebp-8Ch]
  float v123; // [esp+A0h] [ebp-80h]
  float v124; // [esp+A4h] [ebp-7Ch]
  float v125; // [esp+A8h] [ebp-78h]
  float v126[8]; // [esp+B0h] [ebp-70h]
  __m128 v127; // [esp+D0h] [ebp-50h]
  int v128[2]; // [esp+E4h] [ebp-3Ch]
  _DWORD v129[9]; // [esp+ECh] [ebp-34h]
  __m128 v130; // [esp+110h] [ebp-10h]

  v120 = a1; /*0x8e2f31*/
  v5 = (__m128)xmmword_B2FC70; /*0x8e2f35*/
  v6 = (__m128)xmmword_A9A660; /*0x8e2f3c*/
  v7 = (__m128)xmmword_A9A650; /*0x8e2f43*/
  v8 = a3; /*0x8e2f4a*/
  v9 = a3[2]; /*0x8e2f4d*/
  v10 = _mm_add_ps(*a3, v9); /*0x8e2f5a*/
  v127 = _mm_sub_ps(*a3, v9); /*0x8e2f5d*/
  v11 = a1[1]; /*0x8e2f65*/
  v12 = a1[3]; /*0x8e2f69*/
  v13 = _mm_add_ps(_mm_max_ps(_mm_min_ps(_mm_mul_ps(_mm_add_ps(v127, v11), v12), v5), v6), v7); /*0x8e2f79*/
  *(__m128 *)&v129[1] = v10; /*0x8e2f9a*/
  LODWORD(v114) = (unsigned __int16)((unsigned __int32)v13.m128_i32[0] >> 7); /*0x8e2fa2*/
  v117 = (unsigned __int16)((unsigned __int32)v13.m128_i32[3] >> 7); /*0x8e2fb8*/
  v119 = _mm_add_ps(_mm_max_ps(_mm_min_ps(_mm_mul_ps(_mm_add_ps(v10, v11), v12), v5), v6), v7); /*0x8e2fc8*/
  LODWORD(v115) = (unsigned __int16)((unsigned __int32)v13.m128_i32[1] >> 7); /*0x8e2fd1*/
  LODWORD(v116) = (unsigned __int16)((unsigned __int32)v13.m128_i32[2] >> 7); /*0x8e2fe8*/
  LODWORD(v110) = (unsigned __int16)((unsigned __int32)v119.m128_i32[0] >> 7); /*0x8e2ffc*/
  v14 = MEMORY[0xBA9DE4]; /*0x8e300b*/
  LODWORD(v111) = (unsigned __int16)((unsigned __int32)v119.m128_i32[1] >> 7); /*0x8e3011*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8e3015*/
  v113 = (unsigned __int16)((unsigned __int32)v119.m128_i32[3] >> 7); /*0x8e301c*/
  v16 = ThreadLocalStoragePointer[v14]; /*0x8e3020*/
  LODWORD(v112) = (unsigned __int16)((unsigned __int32)v119.m128_i32[2] >> 7); /*0x8e3023*/
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x8e3033*/
  {
    v17 = *(_DWORD **)(v16 + 0x1A4); /*0x8e3035*/
    *v17 = "Lthk3AxisSweep"; /*0x8e303b*/
    v17[3] = "bitfield"; /*0x8e3041*/
    v18 = __rdtsc(); /*0x8e3048*/
    v17[1] = v18; /*0x8e3052*/
    *(_DWORD *)(ThreadLocalStoragePointer[v14] + 0x1A4) = v17 + 4; /*0x8e305b*/
    v8 = a3; /*0x8e3061*/
  }
  v19 = a1[4].m128_i32[1]; /*0x8e3067*/
  v118 = ThreadLocalStoragePointer[v14]; /*0x8e306a*/
  v20 = *(_DWORD **)(v118 + 0x19C); /*0x8e306e*/
  v21 = (_BYTE *)v20[8]; /*0x8e3074*/
  v22 = (v19 + 0x20) & 0xFFFFFFF0; /*0x8e307a*/
  if ( (unsigned int)&v21[v22] > v20[0xB] ) /*0x8e3083*/
    v21 = (_BYTE *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v20 + 0xC))(v20, v22); /*0x8e3090*/
  else
    v20[8] = &v21[v22]; /*0x8e3085*/
  v23 = a1[4].m128_i32[1] >> 4; /*0x8e3095*/
  v24 = v21; /*0x8e309d*/
  if ( v23 >= 0 ) /*0x8e309f*/
  {
    v25 = v23 + 1; /*0x8e30a1*/
    do /*0x8e30ab*/
    {
      v26 = v24++; /*0x8e30a2*/
      --v25; /*0x8e30a7*/
      *v26 = 0; /*0x8e30a8*/
    }
    while ( v25 ); /*0x8e30ab*/
  }
  v27 = (__int8 *)v8[3].m128_i32[0]; /*0x8e30ad*/
  if ( v27 ) /*0x8e30b2*/
    v28 = v27; /*0x8e30b4*/
  else
    v28 = &a1[4].m128_i8[0xC]; /*0x8e30b8*/
  v29 = 0; /*0x8e30bb*/
  v30 = 1; /*0x8e30bd*/
  v106 = v28; /*0x8e30c2*/
  v101 = 0; /*0x8e30c6*/
  do /*0x8e3252*/
  {
    v31 = *((_DWORD *)v106 + 1); /*0x8e30d4*/
    v32 = *(_DWORD *)v106; /*0x8e30d7*/
    v33 = *(_DWORD *)((char *)&v114 + v29); /*0x8e30d9*/
    v98 = v33; /*0x8e30e7*/
    if ( v33 >= *(unsigned __int16 *)(*(_DWORD *)v106 + 4 * (v31 >> 1)) ) /*0x8e30eb*/
    {
      v41 = v32 + 0x10; /*0x8e3191*/
      v42 = (unsigned __int16 *)(v32 + 4 * v31 - 8); /*0x8e3194*/
      if ( (unsigned int)v42 >= v41 ) /*0x8e319a*/
      {
        v43 = *(_DWORD *)((char *)&v110 + v101); /*0x8e31a0*/
        do /*0x8e31d5*/
        {
          if ( v42[0xFFFFFFFA] <= v43 ) /*0x8e31aa*/
            break; /*0x8e31aa*/
          v21[v42[1]] ^= v30; /*0x8e31b0*/
          v21[v42[0xFFFFFFFF]] ^= v30; /*0x8e31b9*/
          v21[v42[0xFFFFFFFD]] ^= v30; /*0x8e31c2*/
          v21[v42[0xFFFFFFFB]] ^= v30; /*0x8e31cb*/
          v42 += 0xFFFFFFF8; /*0x8e31d0*/
        }
        while ( (unsigned int)v42 >= v41 ); /*0x8e31d5*/
      }
      v36 = v101; /*0x8e31d7*/
      v44 = *(_DWORD *)((char *)&v110 + v101); /*0x8e31de*/
      if ( *v42 > v44 ) /*0x8e31e4*/
      {
        do /*0x8e31f8*/
        {
          v21[v42[1]] ^= v30; /*0x8e31ea*/
          v45 = v42[0xFFFFFFFE]; /*0x8e31ef*/
          v42 += 0xFFFFFFFE; /*0x8e31f3*/
        }
        while ( v45 > v44 ); /*0x8e31f8*/
      }
      *(_DWORD *)((char *)v121 + v101) = v42 + 2; /*0x8e3201*/
      if ( *v42 > v98 ) /*0x8e320a*/
      {
        do /*0x8e322f*/
        {
          v21[v42[1]] ^= v30 & (unsigned __int8)-(*(_BYTE *)v42 & 1); /*0x8e3220*/
          v46 = v42[0xFFFFFFFE]; /*0x8e3222*/
          v42 += 0xFFFFFFFE; /*0x8e322a*/
        }
        while ( v46 > v98 ); /*0x8e322f*/
      }
      *(_DWORD *)((char *)v122 + v101) = v42 + 2; /*0x8e3234*/
    }
    else
    {
      v34 = v32 + 4 * v31 - 0x10; /*0x8e30f1*/
      for ( i = (unsigned __int16 *)(v32 + 4); (unsigned int)i < v34; i += 8 ) /*0x8e30fa*/
      {
        if ( i[6] > v33 ) /*0x8e3106*/
          break; /*0x8e3106*/
        v21[i[1]] ^= v30; /*0x8e310c*/
        v21[i[3]] ^= v30; /*0x8e3115*/
        v21[i[5]] ^= v30; /*0x8e311e*/
        v21[i[7]] ^= v30; /*0x8e3127*/
      }
      v36 = v101; /*0x8e313c*/
      if ( *i <= v98 ) /*0x8e3140*/
      {
        do /*0x8e3154*/
        {
          v21[i[1]] ^= v30; /*0x8e3146*/
          v37 = i[2]; /*0x8e314b*/
          i += 2; /*0x8e314f*/
        }
        while ( v37 <= v98 ); /*0x8e3154*/
      }
      v38 = *i; /*0x8e3156*/
      v39 = *(_DWORD *)((char *)&v110 + v101); /*0x8e3159*/
      *(_DWORD *)((char *)v122 + v101) = i; /*0x8e315f*/
      if ( v38 <= v39 ) /*0x8e3166*/
      {
        do /*0x8e3182*/
        {
          v21[i[1]] ^= v30 & (unsigned __int8)((*(_BYTE *)i & 1) - 1); /*0x8e3177*/
          v40 = i[2]; /*0x8e3179*/
          i += 2; /*0x8e317d*/
        }
        while ( v40 <= v39 ); /*0x8e3182*/
        v36 = v101; /*0x8e3184*/
      }
      *(_DWORD *)((char *)v121 + v36) = i; /*0x8e3188*/
    }
    v29 = v36 + 4; /*0x8e323f*/
    v30 *= 2; /*0x8e3245*/
    v106 += 0xC; /*0x8e324a*/
    v101 = v29; /*0x8e324e*/
  }
  while ( v29 < 0xC ); /*0x8e3252*/
  v47 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e3264*/
  if ( *(_DWORD *)(v47 + 0x1A4) < *(_DWORD *)(v47 + 0x1A8) ) /*0x8e3273*/
  {
    v48 = v118; /*0x8e3275*/
    v49 = *(_DWORD **)(v118 + 0x1A4); /*0x8e3279*/
    *v49 = "StStartOverlaps"; /*0x8e327f*/
    v50 = __rdtsc(); /*0x8e3285*/
    v49[1] = v50; /*0x8e328f*/
    *(_DWORD *)(v48 + 0x1A4) = v49 + 3; /*0x8e3295*/
  }
  v102 = 1.0; /*0x8e32b1*/
  v51 = v21; /*0x8e32b9*/
  v103 = (unsigned int)&v21[4 * (v120[4].m128_i32[1] >> 2) + 4]; /*0x8e32bb*/
  if ( (unsigned int)v21 < v103 ) /*0x8e32bf*/
  {
    v99 = (_DWORD *)(v120[4].m128_i32[0] + 0x1C); /*0x8e32c8*/
    do /*0x8e33b4*/
    {
      if ( ((*(_DWORD *)v51 + 0x1010101) & 0x8080808) != 0 ) /*0x8e32dc*/
      {
        if ( *v51 == 7 ) /*0x8e32e5*/
        {
          v52 = v99[0xFFFFFFFC]; /*0x8e32eb*/
          if ( (v52 & 1) == 0 ) /*0x8e32f0*/
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a4 + 4))(a4, v52, 0); /*0x8e32f9*/
            if ( v102 >= a2 ) /*0x8e3307*/
              v102 = a2; /*0x8e3309*/
          }
        }
        if ( v51[1] == 7 && (*v99 & 1) == 0 ) /*0x8e331f*/
        {
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a4 + 4))(a4, *v99, 0); /*0x8e3328*/
          if ( v102 >= a2 ) /*0x8e3336*/
            v102 = a2; /*0x8e3338*/
        }
        if ( v51[2] == 7 ) /*0x8e3344*/
        {
          v53 = v99[4]; /*0x8e334a*/
          if ( (v53 & 1) == 0 ) /*0x8e334f*/
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a4 + 4))(a4, v53, 0); /*0x8e3358*/
            if ( v102 >= a2 ) /*0x8e3366*/
              v102 = a2; /*0x8e3368*/
          }
        }
        if ( v51[3] == 7 ) /*0x8e3374*/
        {
          v54 = v99[8]; /*0x8e337a*/
          if ( (v54 & 1) == 0 ) /*0x8e337f*/
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a4 + 4))(a4, v54, 0); /*0x8e3388*/
            if ( v102 >= a2 ) /*0x8e3396*/
              v102 = a2; /*0x8e3398*/
          }
        }
      }
      v51 += 4; /*0x8e33ab*/
      v99 += 0x10; /*0x8e33b0*/
    }
    while ( (unsigned int)v51 < v103 ); /*0x8e33b4*/
  }
  v55 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e33c6*/
  if ( *(_DWORD *)(v55 + 0x1A4) < *(_DWORD *)(v55 + 0x1A8) ) /*0x8e33d5*/
  {
    v56 = v118; /*0x8e33d7*/
    v57 = *(_DWORD **)(v118 + 0x1A4); /*0x8e33db*/
    *v57 = "StWalk"; /*0x8e33e1*/
    v58 = __rdtsc(); /*0x8e33e7*/
    v57[1] = v58; /*0x8e33f1*/
    *(_DWORD *)(v56 + 0x1A4) = v57 + 3; /*0x8e33f7*/
  }
  v59 = v120; /*0x8e3400*/
  v130 = _mm_sub_ps(a3[1], *a3); /*0x8e3410*/
  m128_f32 = v120[3].m128_f32; /*0x8e3418*/
  v104 = (char *)((char *)a3 - (char *)v120); /*0x8e341b*/
  for ( j = 0; j < 3; ++j ) /*0x8e341f*/
  {
    v62 = v130.m128_f32[j] * *m128_f32; /*0x8e3437*/
    v107 = v62; /*0x8e3439*/
    v63 = fabs(v62); /*0x8e343d*/
    if ( v107 <= (double)*(float *)&SrcStr ) /*0x8e344e*/
    {
      v64 = v122[j]; /*0x8e3473*/
      v65 = v127.m128_f32[j]; /*0x8e347a*/
      v126[j + 5] = NAN; /*0x8e3481*/
      v66 = *(float *)&v121[j]; /*0x8e3488*/
      *(float *)&v121[j] = v64; /*0x8e348c*/
      v67 = v129[j + 1]; /*0x8e3490*/
      *(float *)&v129[j + 1] = v65; /*0x8e3497*/
      v127.m128_i32[j] = v67; /*0x8e349e*/
      v68 = *(_DWORD *)((char *)&v114 + j * 4); /*0x8e34a5*/
      v122[j] = v66; /*0x8e34a9*/
      v69 = *(_DWORD *)((char *)&v110 + j * 4); /*0x8e34b0*/
      *(_DWORD *)((char *)&v110 + j * 4) = v68; /*0x8e34b4*/
      v70 = v122[j]; /*0x8e34b8*/
      *(_DWORD *)((char *)&v114 + j * 4) = v69; /*0x8e34bf*/
      LODWORD(v122[j]) = LODWORD(v70) - 4; /*0x8e34ca*/
      v121[j] -= 4; /*0x8e34d1*/
      v128[j] = 1; /*0x8e34d5*/
      v129[j + 6] = 0; /*0x8e34e0*/
    }
    else
    {
      LODWORD(v126[j + 5]) = 4; /*0x8e3450*/
      v128[j] = 0; /*0x8e345b*/
      v129[j + 6] = 1; /*0x8e3466*/
    }
    if ( v63 < (m128_f32[0xFFFFFFF8] + v127.m128_f32[j]) * *m128_f32 * flt_A9A648 /*0x8e3524*/
      || v63 < (*(float *)&v104[(_DWORD)m128_f32 - 0x20] + m128_f32[0xFFFFFFF8]) * *m128_f32 * flt_A9A648 )
    {
      *(float *)((char *)&v123 + j * 4) = 0.0; /*0x8e356f*/
      v119.m128_i32[j] = 0xC0000000; /*0x8e357a*/
      v126[j] = -2.0; /*0x8e357e*/
    }
    else
    {
      v71 = fConstant_1 / v107; /*0x8e352c*/
      *(float *)((char *)&v123 + j * 4) = v71; /*0x8e3530*/
      v119.m128_f32[j] = ((m128_f32[0xFFFFFFF8] + v127.m128_f32[j]) * *m128_f32 - v59[7].m128_f32[3]) * v71; /*0x8e3548*/
      v126[j] = ((*(float *)&v129[j + 1] + m128_f32[0xFFFFFFF8]) * *m128_f32 - v59[7].m128_f32[3]) * v71; /*0x8e355d*/
    }
    ++m128_f32; /*0x8e3588*/
  }
  v72 = (unsigned __int16)*(_WORD *)LODWORD(v122[1]); /*0x8e35a5*/
  v73 = (unsigned __int16)*(_WORD *)LODWORD(v122[2]); /*0x8e35b7*/
  v74 = *(unsigned __int16 *)v121[0]; /*0x8e35c9*/
  v110 = (double)(unsigned __int16)*(_WORD *)LODWORD(v122[0]) * v123 - v119.m128_f32[0]; /*0x8e35d0*/
  v75 = (double)v72; /*0x8e35d4*/
  v76 = *(unsigned __int16 *)v121[1]; /*0x8e35e0*/
  v111 = v75 * v124 - v119.m128_f32[1]; /*0x8e35ee*/
  v77 = (double)v73; /*0x8e35f2*/
  v78 = *(unsigned __int16 *)v121[2]; /*0x8e3601*/
  v79 = v77 * v125; /*0x8e3604*/
  *v21 = 8; /*0x8e360b*/
  v112 = v79 - v119.m128_f32[2]; /*0x8e3612*/
  v114 = (double)v74 * v123 - v126[0]; /*0x8e3631*/
  v115 = (double)v76 * v124 - v126[1]; /*0x8e364b*/
  v116 = (double)v78 * v125 - v126[2]; /*0x8e3661*/
  if ( v110 >= (double)v111 ) /*0x8e3672*/
  {
    v100 = 1; /*0x8e3691*/
    if ( v111 < (double)v112 ) /*0x8e36a2*/
      goto LABEL_71; /*0x8e36a2*/
LABEL_70:
    v100 = 2; /*0x8e36a4*/
    goto LABEL_71; /*0x8e36a4*/
  }
  if ( v110 >= (double)v112 ) /*0x8e3681*/
    goto LABEL_70; /*0x8e3681*/
  v100 = 0; /*0x8e3683*/
LABEL_71:
  if ( v114 >= (double)v115 ) /*0x8e36b5*/
  {
    v80 = 1; /*0x8e36ce*/
    if ( v115 < (double)v116 ) /*0x8e36dc*/
      goto LABEL_76; /*0x8e36dc*/
  }
  else if ( v114 < (double)v116 ) /*0x8e36c4*/
  {
    v80 = 0; /*0x8e36c6*/
    goto LABEL_76; /*0x8e36c8*/
  }
LABEL_75:
  v80 = 2; /*0x8e36de*/
LABEL_76:
  while ( 2 ) /*0x8e36e3*/
  {
    v108 = &v114 + v80; /*0x8e36e3*/
    v105 = &v110 + v100; /*0x8e36fb*/
    if ( *v108 < (double)*v105 ) /*0x8e3704*/
    {
      v81 = *(&v114 + v80); /*0x8e370a*/
      if ( v81 > v102 ) /*0x8e3715*/
        break; /*0x8e3715*/
      while ( 1 ) /*0x8e3720*/
      {
        v82 = v121[v80]; /*0x8e3720*/
        v83 = *(unsigned __int16 *)(v82 + 2); /*0x8e372d*/
        v84 = ((LOBYTE(v129[v80 + 6]) ^ *(_BYTE *)v82 & 1) << v80) ^ v21[v83]; /*0x8e373d*/
        v21[v83] = v84; /*0x8e3742*/
        if ( v84 >= 7u ) /*0x8e3745*/
        {
          if ( !v83 ) /*0x8e3749*/
          {
            *v108 = 2.0; /*0x8e37e3*/
LABEL_85:
            if ( v114 >= (double)v115 ) /*0x8e37c3*/
            {
              if ( v115 >= (double)v116 ) /*0x8e37f8*/
                goto LABEL_75; /*0x8e37f8*/
              v80 = 1; /*0x8e37fe*/
            }
            else
            {
              if ( v114 >= (double)v116 ) /*0x8e37d2*/
                goto LABEL_75; /*0x8e37d2*/
              v80 = 0; /*0x8e37d8*/
            }
            goto LABEL_76; /*0x8e37da*/
          }
          v85 = *(_DWORD *)(v120[4].m128_i32[0] + 0x10 * v83 + 0xC); /*0x8e375b*/
          if ( (v85 & 1) == 0 ) /*0x8e3760*/
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a4 + 4))(a4, v85, 0); /*0x8e376a*/
            if ( v102 >= v81 ) /*0x8e3778*/
              v102 = v81; /*0x8e377a*/
          }
        }
        v86 = (_WORD *)(v82 + LODWORD(v126[v80 + 5])); /*0x8e378c*/
        v87 = *(_WORD *)v82 == *v86; /*0x8e378e*/
        v121[v80] = v86; /*0x8e3791*/
        if ( !v87 ) /*0x8e3795*/
        {
          *v108 = (double)(unsigned __int16)*v86 * *(&v123 + v80) - v126[v80]; /*0x8e37b4*/
          goto LABEL_85; /*0x8e37b4*/
        }
      }
    }
    if ( *(&v110 + v100) <= (double)v102 ) /*0x8e3813*/
    {
      v109 = v128[v100]; /*0x8e3820*/
      while ( 1 ) /*0x8e3834*/
      {
        v88 = v122[v100]; /*0x8e3834*/
        v89 = *(unsigned __int16 *)(LODWORD(v88) + 2); /*0x8e3841*/
        v90 = ((v109 ^ *(_BYTE *)LODWORD(v88) & 1) << v100) ^ v21[v89]; /*0x8e3853*/
        v21[v89] = v90; /*0x8e3858*/
        if ( v90 > 8u ) /*0x8e385b*/
          break; /*0x8e385b*/
        v91 = *(_WORD *)LODWORD(v88); /*0x8e3861*/
        v92 = (_WORD *)(LODWORD(v126[v100 + 5]) + LODWORD(v88)); /*0x8e386b*/
        v87 = v91 == *v92; /*0x8e386d*/
        LODWORD(v122[v100]) = v92; /*0x8e3870*/
        if ( !v87 ) /*0x8e3877*/
        {
          *v105 = (double)(unsigned __int16)*v92 * *(&v123 + v100) - v119.m128_f32[v100]; /*0x8e3893*/
          goto LABEL_97; /*0x8e3895*/
        }
      }
      *v105 = 2.0; /*0x8e389b*/
LABEL_97:
      if ( v110 >= (double)v111 ) /*0x8e38ae*/
      {
        if ( v111 < (double)v112 ) /*0x8e38e6*/
        {
          v100 = 1; /*0x8e38e8*/
          continue; /*0x8e38f0*/
        }
      }
      else if ( v110 < (double)v112 ) /*0x8e38bd*/
      {
        v100 = 0; /*0x8e38bf*/
        continue; /*0x8e38c7*/
      }
      v100 = 2; /*0x8e38cc*/
      continue; /*0x8e38d4*/
    }
    break;
  }
  v93 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e38f5*/
  v94 = v118; /*0x8e3911*/
  if ( *(_DWORD *)(v93 + 0x1A4) < *(_DWORD *)(v93 + 0x1A8) ) /*0x8e3915*/
  {
    v95 = *(_DWORD **)(v118 + 0x1A4); /*0x8e3917*/
    *v95 = "lt"; /*0x8e391d*/
    v96 = __rdtsc(); /*0x8e3923*/
    v95[1] = v96; /*0x8e392d*/
    *(_DWORD *)(v94 + 0x1A4) = v95 + 3; /*0x8e3933*/
  }
  v97 = *(_DWORD **)(v94 + 0x19C); /*0x8e3939*/
  v87 = v21 == (_BYTE *)v97[0xA]; /*0x8e393f*/
  v97[8] = v21; /*0x8e3942*/
  if ( v87 ) /*0x8e3945*/
    (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v97 + 0x10))(v97, v21); /*0x8e394a*/
}
