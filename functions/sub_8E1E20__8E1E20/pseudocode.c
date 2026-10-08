int __thiscall sub_8E1E20(__m128 *this, __m128 *a2, const void **a3)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // edi
  _DWORD *v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // eax
  int v13; // edi
  _OWORD *v14; // eax
  int v15; // edi
  _OWORD *v16; // ecx
  __m128 v17; // xmm0
  __int16 v18; // bx
  unsigned int v19; // ebx
  unsigned __int16 *v20; // eax
  int v21; // ecx
  unsigned __int16 *v22; // ebx
  unsigned __int16 *v23; // edi
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // edi
  int v28; // ebx
  int v29; // eax
  int v30; // ecx
  unsigned int v31; // edi
  unsigned int v32; // ecx
  int v33; // edi
  int v34; // edi
  int v35; // ebx
  int v36; // ecx
  unsigned __int16 v37; // cx
  int v38; // eax
  _DWORD *v39; // ecx
  unsigned __int64 v40; // rax
  int v41; // ebx
  unsigned __int16 *v42; // eax
  int v43; // edx
  int v44; // ebx
  int v45; // eax
  _DWORD *v46; // ecx
  unsigned __int64 v47; // rax
  unsigned int v48; // edx
  unsigned int v49; // edi
  unsigned int *v50; // ecx
  unsigned int v51; // eax
  _DWORD *v52; // edi
  int v53; // ebx
  const void *v54; // ecx
  _DWORD *v55; // edx
  int v56; // ebx
  const void *v57; // ecx
  _DWORD *v58; // edx
  int v59; // ebx
  const void *v60; // ecx
  _DWORD *v61; // edx
  int v62; // ebx
  const void *v63; // ecx
  _DWORD *v64; // edx
  _DWORD *v65; // ecx
  bool v66; // zf
  unsigned __int64 v67; // rax
  _DWORD *v68; // ecx
  unsigned int v70; // [esp+14h] [ebp-4Ch]
  unsigned int v71; // [esp+18h] [ebp-48h]
  int v72; // [esp+1Ch] [ebp-44h]
  int v73; // [esp+1Ch] [ebp-44h]
  __int16 v74; // [esp+1Ch] [ebp-44h]
  int v75; // [esp+1Ch] [ebp-44h]
  int v76; // [esp+20h] [ebp-40h]
  unsigned int i; // [esp+24h] [ebp-3Ch]
  int v78; // [esp+24h] [ebp-3Ch]
  int v79; // [esp+24h] [ebp-3Ch]
  unsigned int *v80; // [esp+24h] [ebp-3Ch]
  unsigned int v81; // [esp+28h] [ebp-38h]
  __m128 v82; // [esp+30h] [ebp-30h]
  __m128 v83; // [esp+30h] [ebp-30h]
  signed int v84; // [esp+40h] [ebp-20h]
  int v85; // [esp+44h] [ebp-1Ch]
  unsigned __int16 v86; // [esp+48h] [ebp-18h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8e1e2a*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8e1e3a*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8e1e4a*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8e1e4c*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8e1e4e*/
    *v7 = "LtquerySingleAabb"; /*0x8e1e54*/
    v7[3] = "marker"; /*0x8e1e5a*/
    v8 = __rdtsc(); /*0x8e1e61*/
    v7[1] = v8; /*0x8e1e6b*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 4; /*0x8e1e71*/
  }
  v9 = *((_DWORD *)this + 0x11); /*0x8e1e77*/
  v10 = *(_DWORD **)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] + 0x19C); /*0x8e1e83*/
  v76 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8e1e8e*/
  v11 = v10[8]; /*0x8e1e99*/
  v12 = (4 * (v9 >> 5) + 0x30) & 0xFFFFFFF0; /*0x8e1e9c*/
  if ( v11 + v12 > v10[0xB] ) /*0x8e1ea5*/
  {
    v71 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v10 + 0xC))(v10, v12); /*0x8e1eb6*/
    v11 = v71; /*0x8e1eba*/
  }
  else
  {
    v10[8] = v11 + v12; /*0x8e1ea7*/
    v71 = v11; /*0x8e1eaa*/
  }
  v13 = v9 >> 7; /*0x8e1ebc*/
  v14 = (_OWORD *)v11; /*0x8e1ec4*/
  if ( v13 >= 0 ) /*0x8e1ec6*/
  {
    v15 = v13 + 1; /*0x8e1ec8*/
    do /*0x8e1ed9*/
    {
      v16 = v14++; /*0x8e1ed0*/
      --v15; /*0x8e1ed5*/
      *v16 = 0; /*0x8e1ed6*/
    }
    while ( v15 ); /*0x8e1ed9*/
  }
  v17 = *(this + 3); /*0x8e1ee5*/
  v82 = _mm_add_ps( /*0x8e1f11*/
          _mm_max_ps(
            _mm_min_ps(_mm_mul_ps(_mm_add_ps(*a2, *(this + 1)), v17), (__m128)xmmword_B2FC70),
            (__m128)xmmword_A9A660),
          (__m128)xmmword_A9A650);
  v84 = ((unsigned __int32)v82.m128_i32[0] >> 7) & 0xFFFE; /*0x8e1f43*/
  v85 = ((unsigned __int32)v82.m128_i32[1] >> 7) & 0xFFFE; /*0x8e1f5f*/
  v18 = (unsigned __int32)v82.m128_i32[2] >> 7; /*0x8e1f63*/
  v83 = _mm_add_ps( /*0x8e1f6d*/
          _mm_max_ps(
            _mm_min_ps(_mm_mul_ps(_mm_add_ps(a2[1], *(this + 2)), v17), (__m128)xmmword_B2FC70),
            (__m128)xmmword_A9A660),
          (__m128)xmmword_A9A650);
  v86 = v18 & 0xFFFE; /*0x8e1f8a*/
  v19 = (unsigned __int16)((unsigned __int32)v83.m128_i32[0] >> 7) | 1; /*0x8e1fae*/
  v20 = (unsigned __int16 *)(*((_DWORD *)this + 0x13) + 4); /*0x8e1fb1*/
  if ( *((_DWORD *)this + 0x1C) ) /*0x8e1f94*/
  {
    v21 = 0x10 - *((_DWORD *)this + 0x1D); /*0x8e1fc8*/
    if ( v84 >> v21 > 0 ) /*0x8e1fd2*/
    {
      v22 = (unsigned __int16 *)(0x10 * (v84 >> v21) + *((_DWORD *)this + 0x1E) - 0x10); /*0x8e1fe3*/
      *(_DWORD *)(v11 + 4 * ((int)*v22 >> 5)) ^= 1 << (*v22 & 0x1F); /*0x8e1fff*/
      v23 = *((unsigned __int16 **)v22 + 1); /*0x8e2006*/
      if ( *((_DWORD *)v22 + 2) - 1 >= 0 ) /*0x8e2009*/
      {
        v72 = *((_DWORD *)v22 + 2); /*0x8e200c*/
        do /*0x8e2031*/
        {
          v24 = *v23++; /*0x8e2013*/
          *(_DWORD *)(v11 + 4 * (v24 >> 5)) ^= 1 << (v24 & 0x1F); /*0x8e202a*/
          --v72; /*0x8e202d*/
        }
        while ( v72 ); /*0x8e2031*/
      }
      v25 = *((_DWORD *)this + 0x10); /*0x8e203a*/
      v26 = 0x10 * *v22; /*0x8e203d*/
      v27 = *(unsigned __int16 *)(v26 + v25 + 8); /*0x8e2040*/
      v28 = *(unsigned __int16 *)(v26 + v25 + 0xA); /*0x8e2045*/
      v29 = v25 + v26; /*0x8e204a*/
      v30 = *((_DWORD *)this + 0x13); /*0x8e204c*/
      v31 = v30 + 4 * v27 + 4; /*0x8e204f*/
      v32 = v30 + 4 * v28; /*0x8e2053*/
      v73 = v29; /*0x8e2058*/
      for ( i = v32; v31 < v32; v31 += 4 ) /*0x8e2060*/
      {
        if ( (*(_BYTE *)v31 & 1) == 0 ) /*0x8e2065*/
        {
          *(_DWORD *)(v11 + 4 * ((int)*(unsigned __int16 *)(v31 + 2) >> 5)) &= ~(1 << (*(_WORD *)(v31 + 2) & 0x1F)); /*0x8e2081*/
          v32 = i; /*0x8e2084*/
          v29 = v73; /*0x8e2088*/
        }
      }
      v19 = (unsigned __int16)((unsigned __int32)v83.m128_i32[0] >> 7) | 1; /*0x8e209a*/
      v20 = (unsigned __int16 *)(*((_DWORD *)this + 0x13) + 4 * *(unsigned __int16 *)(v29 + 8) + 4); /*0x8e209e*/
    }
  }
  if ( *v20 < (unsigned int)v84 ) /*0x8e20a9*/
  {
    do /*0x8e20d5*/
    {
      v33 = v20[1]; /*0x8e20b4*/
      v20 += 2; /*0x8e20c6*/
      *(_DWORD *)(v11 + 4 * (v33 >> 5)) ^= 1 << (v33 & 0x1F); /*0x8e20cb*/
    }
    while ( *v20 < (unsigned int)v84 ); /*0x8e20d5*/
    v19 = (unsigned __int16)((unsigned __int32)v83.m128_i32[0] >> 7) | 1; /*0x8e20d7*/
  }
  v74 = *v20; /*0x8e20e0*/
  if ( *v20 < v19 ) /*0x8e20e9*/
  {
    do /*0x8e2128*/
    {
      if ( (v74 & 1) == 0 ) /*0x8e20f5*/
      {
        v34 = v20[1]; /*0x8e20fb*/
        v35 = 1 << (v34 & 0x1F); /*0x8e2105*/
        v34 >>= 5; /*0x8e2107*/
        v36 = v35 ^ *(_DWORD *)(v11 + 4 * v34); /*0x8e210d*/
        v19 = (unsigned __int16)((unsigned __int32)v83.m128_i32[0] >> 7) | 1; /*0x8e210f*/
        *(_DWORD *)(v11 + 4 * v34) = v36; /*0x8e2113*/
      }
      v37 = v20[2]; /*0x8e2118*/
      v20 += 2; /*0x8e211c*/
      LOBYTE(v74) = v37; /*0x8e211f*/
    }
    while ( v37 < v19 ); /*0x8e2128*/
  }
  v38 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e2136*/
  if ( *(_DWORD *)(v38 + 0x1A4) < *(_DWORD *)(v38 + 0x1A8) ) /*0x8e2145*/
  {
    v39 = *(_DWORD **)(v76 + 0x1A4); /*0x8e214b*/
    *v39 = "Styz-Axis"; /*0x8e2151*/
    v40 = __rdtsc(); /*0x8e2157*/
    v39[1] = v40; /*0x8e2161*/
    *(_DWORD *)(v76 + 0x1A4) = v39 + 3; /*0x8e2167*/
  }
  v41 = *((_DWORD *)this + 0x16); /*0x8e216d*/
  v78 = v41 + 4 * *((_DWORD *)this + 0x17) - 8; /*0x8e2186*/
  v83.m128_i16[0] = ((int)sub_8E0C30((unsigned __int16 *)(v41 + 4), v78, v85) - v41) >> 2; /*0x8e2198*/
  v42 = sub_8E0C30((unsigned __int16 *)(v41 + 4), v78, ((unsigned __int32)v83.m128_i32[1] >> 7) | 1); /*0x8e21a9*/
  v43 = 0xFFFFFFFC - v41; /*0x8e21b3*/
  v44 = *((_DWORD *)this + 0x19); /*0x8e21b5*/
  v83.m128_i16[2] = ((int)v42 + v43) >> 2; /*0x8e21c4*/
  v79 = v44 + 4 * *((_DWORD *)this + 0x1A) - 8; /*0x8e21d8*/
  v83.m128_i16[1] = ((int)sub_8E0C30((unsigned __int16 *)(v44 + 4), v79, v86) - v44) >> 2; /*0x8e21ea*/
  v83.m128_i16[3] = (int)((int)sub_8E0C30( /*0x8e2213*/
                                 (unsigned __int16 *)(v44 + 4),
                                 v79,
                                 ((unsigned __int32)v83.m128_i32[2] >> 7) | 1)
                        + 0xFFFFFFFC
                        - v44) >> 2;
  v45 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e221d*/
  if ( *(_DWORD *)(v45 + 0x1A4) < *(_DWORD *)(v45 + 0x1A8) ) /*0x8e222c*/
  {
    v46 = *(_DWORD **)(v76 + 0x1A4); /*0x8e2232*/
    *v46 = "StScanBitfield"; /*0x8e2238*/
    v47 = __rdtsc(); /*0x8e223e*/
    v46[1] = v47; /*0x8e2248*/
    *(_DWORD *)(v76 + 0x1A4) = v46 + 3; /*0x8e224e*/
  }
  v48 = v71; /*0x8e2257*/
  v49 = v71 + 4 * (*((int *)this + 0x11) >> 5) + 4; /*0x8e2261*/
  v50 = (unsigned int *)v71; /*0x8e2267*/
  v80 = (unsigned int *)v71; /*0x8e2269*/
  v81 = v49; /*0x8e226d*/
  if ( v71 < v49 ) /*0x8e2271*/
  {
    v75 = *((_DWORD *)this + 0x10) + 0x24; /*0x8e227d*/
    do /*0x8e242a*/
    {
      v51 = *v50; /*0x8e2281*/
      v70 = *v50; /*0x8e2285*/
      if ( *v50 ) /*0x8e2285*/
      {
        v52 = (_DWORD *)v75; /*0x8e228f*/
        do /*0x8e2402*/
        {
          if ( (v51 & 0xF) != 0 ) /*0x8e2295*/
          {
            if ( (v51 & 1) != 0 /*0x8e22b9*/
              && (((v52[0xFFFFFFF8] - v83.m128_i32[0]) | (v83.m128_i32[1] - v52[0xFFFFFFF7])) & 0x80008000) == 0 )
            {
              v53 = v52[0xFFFFFFFA]; /*0x8e22bb*/
              if ( (v53 & 1) == 0 ) /*0x8e22c1*/
              {
                if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) ) /*0x8e22d0*/
                  sub_8A6EE0(a3, 8); /*0x8e22d5*/
                v54 = a3[1]; /*0x8e22dd*/
                v55 = *a3; /*0x8e22e0*/
                v55[2 * (_DWORD)v54] = 0; /*0x8e22e4*/
                v55[2 * (_DWORD)v54 + 1] = v53; /*0x8e22e7*/
                a3[1] = (char *)a3[1] + 1; /*0x8e22eb*/
                v51 = v70; /*0x8e22ee*/
              }
            }
            if ( (v51 & 2) != 0 /*0x8e2310*/
              && (((v52[0xFFFFFFFC] - v83.m128_i32[0]) | (v83.m128_i32[1] - v52[0xFFFFFFFB])) & 0x80008000) == 0 )
            {
              v56 = v52[0xFFFFFFFE]; /*0x8e2312*/
              if ( (v56 & 1) == 0 ) /*0x8e2318*/
              {
                if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) ) /*0x8e2327*/
                  sub_8A6EE0(a3, 8); /*0x8e232c*/
                v57 = a3[1]; /*0x8e2334*/
                v58 = *a3; /*0x8e2337*/
                v58[2 * (_DWORD)v57] = 0; /*0x8e233b*/
                v58[2 * (_DWORD)v57 + 1] = v56; /*0x8e233e*/
                a3[1] = (char *)a3[1] + 1; /*0x8e2342*/
                v51 = v70; /*0x8e2345*/
              }
            }
            if ( (v51 & 4) != 0 && (((*v52 - v83.m128_i32[0]) | (v83.m128_i32[1] - v52[0xFFFFFFFF])) & 0x80008000) == 0 ) /*0x8e2366*/
            {
              v59 = v52[2]; /*0x8e2368*/
              if ( (v59 & 1) == 0 ) /*0x8e236e*/
              {
                if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) ) /*0x8e237d*/
                  sub_8A6EE0(a3, 8); /*0x8e2382*/
                v60 = a3[1]; /*0x8e238a*/
                v61 = *a3; /*0x8e238d*/
                v61[2 * (_DWORD)v60] = 0; /*0x8e2391*/
                v61[2 * (_DWORD)v60 + 1] = v59; /*0x8e2394*/
                a3[1] = (char *)a3[1] + 1; /*0x8e2398*/
              }
              v51 = v70; /*0x8e239b*/
            }
            if ( (v51 & 8) != 0 && (((v52[4] - v83.m128_i32[0]) | (v83.m128_i32[1] - v52[3])) & 0x80008000) == 0 ) /*0x8e23bd*/
            {
              v62 = v52[6]; /*0x8e23bf*/
              if ( (v62 & 1) == 0 ) /*0x8e23c5*/
              {
                if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) ) /*0x8e23d4*/
                  sub_8A6EE0(a3, 8); /*0x8e23d9*/
                v63 = a3[1]; /*0x8e23e1*/
                v64 = *a3; /*0x8e23e4*/
                v64[2 * (_DWORD)v63] = 0; /*0x8e23e8*/
                v64[2 * (_DWORD)v63 + 1] = v62; /*0x8e23eb*/
                a3[1] = (char *)a3[1] + 1; /*0x8e23ef*/
              }
              v51 = v70; /*0x8e23f2*/
            }
          }
          v51 >>= 4; /*0x8e23f6*/
          v52 += 0x10; /*0x8e23f9*/
          v70 = v51; /*0x8e23fe*/
        }
        while ( v51 ); /*0x8e2402*/
        v48 = v71; /*0x8e2408*/
        v49 = v81; /*0x8e240c*/
        v50 = v80; /*0x8e2410*/
      }
      ++v50; /*0x8e2418*/
      v75 += 0x200; /*0x8e2422*/
      v80 = v50; /*0x8e2426*/
    }
    while ( (unsigned int)v50 < v49 ); /*0x8e242a*/
  }
  v65 = *(_DWORD **)(v76 + 0x19C); /*0x8e2434*/
  v66 = v48 == v65[0xA]; /*0x8e243a*/
  v65[8] = v48; /*0x8e243d*/
  if ( v66 ) /*0x8e2440*/
    (*(void (__thiscall **)(_DWORD *, unsigned int))(*v65 + 0x10))(v65, v48); /*0x8e2445*/
  LODWORD(v67) = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e2455*/
  if ( *(_DWORD *)(v67 + 0x1A4) < *(_DWORD *)(v67 + 0x1A8) ) /*0x8e2464*/
  {
    v68 = *(_DWORD **)(v76 + 0x1A4); /*0x8e2466*/
    *v68 = "lt"; /*0x8e246c*/
    v67 = __rdtsc(); /*0x8e2472*/
    v68[1] = v67; /*0x8e247c*/
    *(_DWORD *)(v76 + 0x1A4) = v68 + 3; /*0x8e2482*/
  }
  return v67; /*0x8e2488*/
}
