unsigned int __cdecl sub_8FF2C0(float *a1, __m128 *a2, __m128 *a3, __m128 *a4, __m128 *a5)
{
  int v5; // ecx
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v7; // eax
  int v8; // edi
  _DWORD *v9; // esi
  unsigned __int64 v10; // rax
  int v11; // eax
  int v12; // edi
  _DWORD *v13; // esi
  unsigned __int64 v14; // rax
  int v15; // eax
  unsigned __int8 *v16; // edi
  int v17; // edx
  int i; // eax
  int v19; // edx
  int j; // eax
  double v21; // st7
  double v22; // st6
  double v23; // st5
  double v24; // st7
  double v25; // st6
  int v26; // eax
  _DWORD *v27; // ecx
  unsigned __int64 v28; // rax
  int v29; // eax
  _DWORD *v30; // ecx
  unsigned __int64 v31; // rax
  int v32; // eax
  _DWORD *v33; // edx
  int v34; // ecx
  int v35; // eax
  int v36; // ebx
  _DWORD *v37; // ecx
  unsigned __int64 v38; // rax
  int *v39; // eax
  _DWORD *v40; // ebx
  int v41; // ecx
  int v42; // eax
  __m128 v43; // xmm0
  unsigned __int8 v44; // al
  double v45; // st7
  __m128 *v46; // eax
  int v47; // edx
  __m128 v48; // xmm1
  __m128 v49; // xmm2
  __m128 v50; // xmm3
  __m128 v51; // xmm4
  int v52; // ebx
  __m128 *v53; // ecx
  char *v54; // ebx
  __m128 *v55; // eax
  int v56; // edx
  __m128 v57; // xmm1
  __m128 v58; // xmm2
  __m128 v59; // xmm3
  __m128 v60; // xmm4
  __m128 *v61; // ecx
  unsigned __int8 v62; // al
  __int32 v63; // ecx
  int v64; // ecx
  unsigned __int8 v65; // al
  _DWORD *v66; // ebx
  int v67; // ecx
  double v68; // st7
  __m128 *v69; // eax
  int v70; // edx
  __m128 v71; // xmm1
  __m128 v72; // xmm2
  __m128 v73; // xmm3
  __m128 v74; // xmm4
  int v75; // ebx
  __m128 *v76; // ecx
  char *v77; // ebx
  __m128 *v78; // eax
  int v79; // edx
  __m128 v80; // xmm1
  __m128 v81; // xmm2
  __m128 v82; // xmm3
  __m128 v83; // xmm4
  __m128 *v84; // ecx
  __m128 *v85; // ebx
  int v86; // ecx
  int v87; // eax
  double v88; // st7
  signed int v89; // eax
  __m128 ***v90; // ecx
  __m128 **v91; // eax
  __int16 v92; // ax
  __int32 v93; // eax
  int v94; // eax
  _DWORD *v95; // esi
  unsigned __int64 v96; // rax
  int v97; // eax
  int v98; // ebx
  _DWORD *v99; // esi
  unsigned __int64 v100; // rax
  float *v102; // [esp+1Ch] [ebp-15Ch]
  float v103; // [esp+1Ch] [ebp-15Ch]
  int v104; // [esp+1Ch] [ebp-15Ch]
  int v105; // [esp+1Ch] [ebp-15Ch]
  int v106; // [esp+1Ch] [ebp-15Ch]
  float v107; // [esp+20h] [ebp-158h]
  float v108; // [esp+20h] [ebp-158h]
  int v109; // [esp+20h] [ebp-158h]
  float *v110; // [esp+20h] [ebp-158h]
  int v111; // [esp+24h] [ebp-154h]
  int v112; // [esp+24h] [ebp-154h]
  signed int v113; // [esp+24h] [ebp-154h]
  float v114; // [esp+28h] [ebp-150h]
  __m128 *v115; // [esp+28h] [ebp-150h]
  int v116; // [esp+2Ch] [ebp-14Ch]
  int *v117; // [esp+2Ch] [ebp-14Ch]
  int v118; // [esp+30h] [ebp-148h]
  _DWORD v119[5]; // [esp+34h] [ebp-144h] BYREF
  __m128 v120; // [esp+48h] [ebp-130h] BYREF
  char v121[256]; // [esp+58h] [ebp-120h] BYREF
  __m128 v122; // [esp+158h] [ebp-20h]
  float v123; // [esp+168h] [ebp-10h]
  float v124; // [esp+16Ch] [ebp-Ch]
  float v125; // [esp+170h] [ebp-8h]
  float v126; // [esp+174h] [ebp-4h]

  v5 = MEMORY[0xBA9DE4]; /*0x8ff2cc*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ff2d3*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ff2da*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x8ff2eb*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ff2ed*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x8ff2ef*/
    *v9 = "TtPredGskf3"; /*0x8ff2f5*/
    v10 = __rdtsc(); /*0x8ff2fb*/
    v9[1] = v10; /*0x8ff305*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x8ff30b*/
  }
  v11 = ThreadLocalStoragePointer[v5]; /*0x8ff311*/
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) ) /*0x8ff320*/
  {
    v12 = ThreadLocalStoragePointer[v5]; /*0x8ff322*/
    v13 = *(_DWORD **)(v11 + 0x1A4); /*0x8ff324*/
    *v13 = "Ltintern"; /*0x8ff32a*/
    v13[3] = "init"; /*0x8ff330*/
    v14 = __rdtsc(); /*0x8ff337*/
    v13[1] = v14; /*0x8ff341*/
    *(_DWORD *)(v12 + 0x1A4) = v13 + 4; /*0x8ff347*/
  }
  v15 = *(_DWORD *)(*((_DWORD *)a1 + 2) + 0x28); /*0x8ff356*/
  v107 = a1[0x14]; /*0x8ff35c*/
  v16 = &a3->m128_u8[0xC]; /*0x8ff363*/
  v102 = (float *)v15; /*0x8ff368*/
  if ( *(_BYTE *)(v15 + 0x10) ) /*0x8ff360*/
  {
    v17 = *(_DWORD *)a1; /*0x8ff372*/
    for ( i = *(_DWORD *)(*(_DWORD *)a1 + 0xC); i; i = *(_DWORD *)(i + 0xC) ) /*0x8ff379*/
      v17 = i; /*0x8ff380*/
    v111 = *(int *)(v17 + 0x20); /*0x8ff38c*/
    v19 = *((_DWORD *)a1 + 1); /*0x8ff390*/
    for ( j = *(_DWORD *)(v19 + 0xC); j; j = *(_DWORD *)(j + 0xC) ) /*0x8ff398*/
      v19 = j; /*0x8ff3a0*/
    if ( *(float *)&v111 >= (double)*(float *)(v19 + 0x20) ) /*0x8ff3b7*/
      v114 = *(float *)(v19 + 0x20); /*0x8ff3c5*/
    else
      v114 = *(float *)&v111; /*0x8ff3bf*/
    v21 = a4->m128_f32[3]; /*0x8ff3cc*/
    v22 = v114 * v102[6] + v21; /*0x8ff3da*/
    v23 = v114 * v102[5]; /*0x8ff3e0*/
    *(float *)&v112 = v23; /*0x8ff3e3*/
    if ( v23 >= v22 ) /*0x8ff3ee*/
      *(float *)&v112 = v22; /*0x8ff3fc*/
    if ( v107 < (double)*(float *)&v112 ) /*0x8ff40d*/
    {
      v24 = v21 + v114 * v102[0xA]; /*0x8ff41a*/
      v25 = v114 * v102[9]; /*0x8ff420*/
      if ( v25 >= v24 ) /*0x8ff42e*/
      {
        v108 = v24; /*0x8ff43c*/
      }
      else
      {
        v103 = v25; /*0x8ff423*/
        v108 = v103; /*0x8ff436*/
      }
      v26 = ThreadLocalStoragePointer[v5]; /*0x8ff440*/
      if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) ) /*0x8ff44f*/
      {
        v116 = ThreadLocalStoragePointer[v5]; /*0x8ff453*/
        v27 = *(_DWORD **)(v26 + 0x1A4); /*0x8ff457*/
        *v27 = "Sttoi"; /*0x8ff45d*/
        v28 = __rdtsc(); /*0x8ff463*/
        v27[1] = v28; /*0x8ff471*/
        *(_DWORD *)(v116 + 0x1A4) = v27 + 3; /*0x8ff477*/
      }
      sub_93DE40((int ***)a1, v114, v112, SLODWORD(v108), (char *)a3, a4, a5); /*0x8ff499*/
      v5 = MEMORY[0xBA9DE4]; /*0x8ff49e*/
      goto LABEL_22; /*0x8ff49e*/
    }
    v15 = *(_DWORD *)(*((_DWORD *)a1 + 2) + 0x28); /*0x8ff54d*/
  }
  if ( v107 > (double)*(float *)(v15 + 0xC) ) /*0x8ff55f*/
  {
    a4->m128_f32[3] = v107; /*0x8ff56c*/
    if ( !a3->m128_i8[0xE] ) /*0x8ff574*/
      goto LABEL_73; /*0x8ff574*/
    v35 = ThreadLocalStoragePointer[v5]; /*0x8ff57a*/
    if ( *(_DWORD *)(v35 + 0x1A4) < *(_DWORD *)(v35 + 0x1A8) ) /*0x8ff589*/
    {
      v36 = ThreadLocalStoragePointer[v5]; /*0x8ff58b*/
      v37 = *(_DWORD **)(v35 + 0x1A4); /*0x8ff58d*/
      *v37 = "StgetPoints"; /*0x8ff593*/
      v38 = __rdtsc(); /*0x8ff599*/
      v37[1] = v38; /*0x8ff5a3*/
      *(_DWORD *)(v36 + 0x1A4) = v37 + 3; /*0x8ff5a9*/
    }
    v39 = *((int **)a1 + 1); /*0x8ff5b5*/
    v40 = *(_DWORD **)a1; /*0x8ff5b8*/
    v125 = *(float *)(*((_DWORD *)a1 + 2) + 8); /*0x8ff5ba*/
    v41 = *v40; /*0x8ff5c1*/
    v117 = v39; /*0x8ff5c6*/
    v42 = *v39; /*0x8ff5ca*/
    v123 = *(float *)(*v40 + 0xC); /*0x8ff5cc*/
    v43 = *a4; /*0x8ff5dd*/
    v109 = v42; /*0x8ff5e0*/
    v124 = *(float *)(v42 + 0xC); /*0x8ff5e7*/
    v44 = a3->m128_u8[0xE]; /*0x8ff5f5*/
    v45 = v123 + v124 + v125; /*0x8ff5fa*/
    v122 = v43; /*0x8ff601*/
    v126 = v45 * v45; /*0x8ff60d*/
    if ( v44 ) /*0x8ff616*/
    {
      v105 = (int)&v16[8 * v44 + 4]; /*0x8ff625*/
      (*(void (__thiscall **)(int, int, _DWORD, char *))(*(_DWORD *)v41 + 0x28))(v41, v105, *v16, v121); /*0x8ff637*/
      v46 = (__m128 *)v40[2]; /*0x8ff63a*/
      v47 = *v16; /*0x8ff63d*/
      v48 = *v46; /*0x8ff640*/
      v49 = v46[1]; /*0x8ff643*/
      v50 = v46[2]; /*0x8ff647*/
      v51 = v46[3]; /*0x8ff64b*/
      v52 = v47; /*0x8ff64f*/
      v53 = (__m128 *)v121; /*0x8ff651*/
      do /*0x8ff691*/
      {
        *v53 = _mm_add_ps( /*0x8ff688*/
                 _mm_add_ps(
                   _mm_mul_ps(v48, _mm_shuffle_ps(*v53, *v53, 0)),
                   _mm_mul_ps(v49, _mm_shuffle_ps(*v53, *v53, 0x55))),
                 _mm_add_ps(_mm_mul_ps(v50, _mm_shuffle_ps(*v53, *v53, 0xAA)), v51));
        ++v53; /*0x8ff68b*/
        --v52; /*0x8ff68e*/
      }
      while ( v52 > 0 ); /*0x8ff691*/
      v54 = &v121[0x10 * v47]; /*0x8ff69c*/
      (*(void (__thiscall **)(int, int, _DWORD, char *))(*(_DWORD *)v109 + 0x28))( /*0x8ff6b4*/
        v109,
        v105 + 2 * v47,
        a3->m128_u8[0xD],
        v54);
      v55 = (__m128 *)v117[2]; /*0x8ff6bb*/
      v56 = a3->m128_u8[0xD]; /*0x8ff6be*/
      v57 = *v55; /*0x8ff6c2*/
      v58 = v55[1]; /*0x8ff6c5*/
      v59 = v55[2]; /*0x8ff6c9*/
      v60 = v55[3]; /*0x8ff6cd*/
      v61 = (__m128 *)v54; /*0x8ff6d1*/
      do /*0x8ff70f*/
      {
        *v61 = _mm_add_ps( /*0x8ff706*/
                 _mm_add_ps(
                   _mm_mul_ps(v57, _mm_shuffle_ps(*v61, *v61, 0)),
                   _mm_mul_ps(v58, _mm_shuffle_ps(*v61, *v61, 0x55))),
                 _mm_add_ps(_mm_mul_ps(v59, _mm_shuffle_ps(*v61, *v61, 0xAA)), v60));
        ++v61; /*0x8ff709*/
        --v56; /*0x8ff70c*/
      }
      while ( v56 > 0 ); /*0x8ff70f*/
    }
    sub_939BB0(v16, (__m128 *)v121, 0, (__m128 **)a5, *((_DWORD *)a1 + 3)); /*0x8ff721*/
    v62 = a3->m128_u8[0xE]; /*0x8ff726*/
    if ( v62 ) /*0x8ff72e*/
    {
      v63 = a5[0x304].m128_i32[0]; /*0x8ff734*/
      if ( v63 ) /*0x8ff73c*/
      {
        **(_DWORD **)(v63 + 4) = a5->m128_i32[0] - 0x30 * v62; /*0x8ff752*/
        *(_DWORD *)(a5[0x304].m128_i32[0] + 4) += 4; /*0x8ff75a*/
      }
    }
    goto LABEL_71; /*0x8ff75e*/
  }
LABEL_22:
  v29 = ThreadLocalStoragePointer[v5]; /*0x8ff4a7*/
  if ( *(_DWORD *)(v29 + 0x1A4) < *(_DWORD *)(v29 + 0x1A8) ) /*0x8ff4b6*/
  {
    v104 = ThreadLocalStoragePointer[v5]; /*0x8ff4ba*/
    v30 = *(_DWORD **)(v29 + 0x1A4); /*0x8ff4be*/
    *v30 = "Stprocess"; /*0x8ff4c4*/
    v31 = __rdtsc(); /*0x8ff4ca*/
    v30[1] = v31; /*0x8ff4d8*/
    *(_DWORD *)(v104 + 0x1A4) = v30 + 3; /*0x8ff4de*/
  }
  v32 = *(_DWORD *)a1; /*0x8ff4e4*/
  v33 = *((_DWORD **)a1 + 1); /*0x8ff4e8*/
  v119[2] = **(_DWORD **)a1; /*0x8ff4eb*/
  v119[3] = *v33; /*0x8ff4f1*/
  v34 = *((_DWORD *)a1 + 2); /*0x8ff4f5*/
  v119[0] = a1 + 4; /*0x8ff4fb*/
  v119[1] = *(_DWORD *)(v32 + 8); /*0x8ff502*/
  v119[4] = *(_DWORD *)(v34 + 8); /*0x8ff511*/
  if ( sub_93D4A0((int)v119, (char *)a3, a4, &v120) == 1 ) /*0x8ff52a*/
  {
    if ( a3->m128_i8[0xE] ) /*0x8ff530*/
      sub_939B60(v16, *((_DWORD *)a1 + 3)); /*0x8ff540*/
    goto LABEL_72; /*0x8ff548*/
  }
  v64 = (unsigned __int8)sub_93A620(v16, (int)a3); /*0x8ff76d*/
  v65 = a3->m128_u8[0xE]; /*0x8ff775*/
  v115 = (__m128 *)a5->m128_i32[0]; /*0x8ff778*/
  v113 = v64; /*0x8ff784*/
  if ( v65 > v64 ) /*0x8ff78c*/
  {
    v66 = *(_DWORD **)a1; /*0x8ff79d*/
    v118 = *((_DWORD *)a1 + 1); /*0x8ff79f*/
    v125 = *(float *)(*((_DWORD *)a1 + 2) + 8); /*0x8ff7a3*/
    v67 = *v66; /*0x8ff7ac*/
    v110 = *(float **)v118; /*0x8ff7ae*/
    v123 = *(float *)(*v66 + 0xC); /*0x8ff7b5*/
    v124 = v110[3]; /*0x8ff7c3*/
    v122 = *a4; /*0x8ff7de*/
    v68 = v124 + v123 + v125; /*0x8ff7e6*/
    v126 = v68 * v68; /*0x8ff7f1*/
    if ( v65 ) /*0x8ff7fa*/
    {
      v106 = (int)&v16[8 * v65 + 4]; /*0x8ff80a*/
      (*(void (__thiscall **)(int, int, _DWORD, char *))(*(_DWORD *)v67 + 0x28))(v67, v106, *v16, v121); /*0x8ff81c*/
      v69 = (__m128 *)v66[2]; /*0x8ff81f*/
      v70 = *v16; /*0x8ff822*/
      v71 = *v69; /*0x8ff825*/
      v72 = v69[1]; /*0x8ff828*/
      v73 = v69[2]; /*0x8ff82c*/
      v74 = v69[3]; /*0x8ff830*/
      v75 = v70; /*0x8ff834*/
      v76 = (__m128 *)v121; /*0x8ff836*/
      do /*0x8ff87c*/
      {
        *v76 = _mm_add_ps( /*0x8ff873*/
                 _mm_add_ps(
                   _mm_mul_ps(v71, _mm_shuffle_ps(*v76, *v76, 0)),
                   _mm_mul_ps(v72, _mm_shuffle_ps(*v76, *v76, 0x55))),
                 _mm_add_ps(_mm_mul_ps(v73, _mm_shuffle_ps(*v76, *v76, 0xAA)), v74));
        ++v76; /*0x8ff876*/
        --v75; /*0x8ff879*/
      }
      while ( v75 > 0 ); /*0x8ff87c*/
      v77 = &v121[0x10 * v70]; /*0x8ff887*/
      (*(void (__thiscall **)(float *, int, _DWORD, char *))(*(_DWORD *)v110 + 0x28))( /*0x8ff89f*/
        v110,
        v106 + 2 * v70,
        a3->m128_u8[0xD],
        v77);
      v78 = *(__m128 **)(v118 + 8); /*0x8ff8a6*/
      v79 = a3->m128_u8[0xD]; /*0x8ff8a9*/
      v80 = *v78; /*0x8ff8ad*/
      v81 = v78[1]; /*0x8ff8b0*/
      v82 = v78[2]; /*0x8ff8b4*/
      v83 = v78[3]; /*0x8ff8b8*/
      v84 = (__m128 *)v77; /*0x8ff8bc*/
      do /*0x8ff8fc*/
      {
        *v84 = _mm_add_ps( /*0x8ff8f3*/
                 _mm_add_ps(
                   _mm_mul_ps(v80, _mm_shuffle_ps(*v84, *v84, 0)),
                   _mm_mul_ps(v81, _mm_shuffle_ps(*v84, *v84, 0x55))),
                 _mm_add_ps(_mm_mul_ps(v82, _mm_shuffle_ps(*v84, *v84, 0xAA)), v83));
        ++v84; /*0x8ff8f6*/
        --v79; /*0x8ff8f9*/
      }
      while ( v79 > 0 ); /*0x8ff8fc*/
    }
    sub_939BB0(v16, (__m128 *)v121, v113, (__m128 **)a5, *((_DWORD *)a1 + 3)); /*0x8ff911*/
    v64 = v113; /*0x8ff916*/
  }
  v85 = (__m128 *)a5->m128_i32[0]; /*0x8ff922*/
  *v85 = v120; /*0x8ff92c*/
  v85[1] = *a4; /*0x8ff932*/
  if ( v64 ) /*0x8ff936*/
  {
    v85[2].m128_i16[0] = a3[1].m128_i16[1]; /*0x8ff93c*/
    a5->m128_i32[0] += 0x30; /*0x8ff942*/
    goto LABEL_68; /*0x8ff945*/
  }
  v86 = *((_DWORD *)a1 + 2); /*0x8ff955*/
  v87 = *(_DWORD *)(v86 + 0x28); /*0x8ff95d*/
  if ( a3->m128_i8[8] + a3->m128_i8[9] == 4 ) /*0x8ff960*/
    v88 = *(float *)(v87 + 4); /*0x8ff962*/
  else
    v88 = *(float *)(v87 + 8); /*0x8ff967*/
  if ( v88 <= a4->m128_f32[3] ) /*0x8ff975*/
    goto LABEL_68; /*0x8ff975*/
  v89 = sub_93AB40(v16, *(_DWORD *)a1, *((_DWORD *)a1 + 1), v86, (int)a3, (int)v85, v115, *((_DWORD *)a1 + 3), 1); /*0x8ff994*/
  if ( v89 != 4 ) /*0x8ff99f*/
  {
    if ( v89 == 5 ) /*0x8ffa38*/
    {
      v85 = v115; /*0x8ffa3a*/
    }
    else if ( v89 == 6 ) /*0x8ffa43*/
    {
      v85 = v115; /*0x8ffa4a*/
      a5->m128_i32[0] -= 0x30; /*0x8ffa51*/
    }
    else
    {
      v85 = &v115[3 * v89]; /*0x8ffa5f*/
    }
    goto LABEL_68; /*0x8ffa3e*/
  }
  if ( v85[2].m128_i16[0] != (__int16)0xFFFF ) /*0x8ff9ae*/
  {
    a5->m128_i32[0] += 0x30; /*0x8ff9b0*/
    goto LABEL_68; /*0x8ff9b3*/
  }
  if ( a5[0x304].m128_i32[0] && a2 ) /*0x8ff9c7*/
  {
    if ( !(*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)a1 + 3) + 0xC))(*((_DWORD *)a1 + 3), 1) ) /*0x8ff9d0*/
    {
      v90 = (__m128 ***)a5[0x304].m128_i32[0]; /*0x8ff9da*/
      v91 = *v90; /*0x8ff9e0*/
      *v90 += 3; /*0x8ff9e5*/
      v91[1] = a2; /*0x8ff9ea*/
      *v91 = v85; /*0x8ff9f0*/
      v91[2] = a3; /*0x8ff9f2*/
      a5->m128_i32[0] += 0x30; /*0x8ff9f5*/
      goto LABEL_68; /*0x8ff9f8*/
    }
    goto LABEL_61; /*0x8ff9d5*/
  }
  v92 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, __m128 *))(**((_DWORD **)a1 + 3) + 8))( /*0x8ffa0b*/
          *((_DWORD *)a1 + 3),
          *(_DWORD *)a1,
          *((_DWORD *)a1 + 1),
          *((_DWORD *)a1 + 2),
          v85);
  v85[2].m128_i16[0] = v92; /*0x8ffa12*/
  if ( v92 == (__int16)0xFFFF ) /*0x8ffa16*/
  {
LABEL_61:
    sub_939B00(v16, 0); /*0x8ffa18*/
    v85 = v115; /*0x8ffa20*/
    goto LABEL_68; /*0x8ffa27*/
  }
  a3[1].m128_i16[1] = v92; /*0x8ffa2c*/
  a5->m128_i32[0] += 0x30; /*0x8ffa30*/
LABEL_68:
  v93 = a5[0x304].m128_i32[0]; /*0x8ffa61*/
  if ( v93 ) /*0x8ffa6c*/
  {
    if ( (unsigned int)v85 < a5->m128_i32[0] ) /*0x8ffa70*/
    {
      **(_DWORD **)(v93 + 4) = v85; /*0x8ffa75*/
      *(_DWORD *)(a5[0x304].m128_i32[0] + 4) += 4; /*0x8ffa7d*/
    }
  }
LABEL_71:
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ffa81*/
LABEL_72:
  v5 = MEMORY[0xBA9DE4]; /*0x8ffa88*/
LABEL_73:
  a2->m128_i8[2] = a3->m128_i8[0xE]; /*0x8ffa8e*/
  v94 = ThreadLocalStoragePointer[v5]; /*0x8ffa97*/
  if ( *(_DWORD *)(v94 + 0x1A4) < *(_DWORD *)(v94 + 0x1A8) ) /*0x8ffaa6*/
  {
    v95 = *(_DWORD **)(v94 + 0x1A4); /*0x8ffaa8*/
    *v95 = "lt"; /*0x8ffaae*/
    v96 = __rdtsc(); /*0x8ffab4*/
    v95[1] = v96; /*0x8ffabe*/
    *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x1A4) = v95 + 3; /*0x8ffac7*/
  }
  v97 = ThreadLocalStoragePointer[v5]; /*0x8ffacd*/
  if ( *(_DWORD *)(v97 + 0x1A4) < *(_DWORD *)(v97 + 0x1A8) ) /*0x8ffadc*/
  {
    v98 = ThreadLocalStoragePointer[v5]; /*0x8ffade*/
    v99 = *(_DWORD **)(v97 + 0x1A4); /*0x8ffae0*/
    *v99 = "Et"; /*0x8ffae6*/
    v100 = __rdtsc(); /*0x8ffaec*/
    v99[1] = v100; /*0x8ffaf6*/
    *(_DWORD *)(v98 + 0x1A4) = v99 + 3; /*0x8ffafc*/
  }
  return (unsigned int)a3 + ((2 * (a3->m128_u8[0xC] + a3->m128_u8[0xD] + 4 * a3->m128_u8[0xE]) + 0x1F) & 0xFFFFFFF0); /*0x8ffb19*/
}
