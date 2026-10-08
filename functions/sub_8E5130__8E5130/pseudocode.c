_DWORD *__thiscall sub_8E5130(const void **this, int *a2, _DWORD *a3, const void **a4)
{
  _DWORD *result; // eax
  const void **v5; // edi
  int v6; // eax
  int v7; // ecx
  const void *v8; // esi
  int v9; // eax
  int v10; // eax
  const void *v11; // edx
  unsigned int v12; // eax
  int v13; // ecx
  const void *v14; // edx
  char *v15; // ebx
  int v16; // eax
  int v17; // eax
  char *v18; // eax
  char *v19; // edx
  unsigned int v20; // eax
  const void *v21; // edx
  char *v22; // ebx
  int v23; // eax
  int v24; // eax
  char *v25; // eax
  char *v26; // edx
  unsigned int v27; // eax
  const void *v28; // edx
  char *v29; // ebx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  _WORD *v33; // ecx
  _WORD *v34; // edx
  __m128 v35; // xmm0
  __m128 v36; // xmm3
  __m128 v37; // xmm2
  __m128 v38; // xmm1
  __m128 *v39; // esi
  __m128 v40; // xmm4
  __m128 v41; // xmm5
  int v42; // esi
  _DWORD *v43; // esi
  int v44; // edi
  int v45; // edi
  int i; // esi
  int v47; // ebx
  int v48; // eax
  _DWORD *v49; // ecx
  int v50; // edx
  unsigned int v51; // esi
  int v52; // esi
  _DWORD *v53; // ecx
  bool v54; // zf
  int v55; // eax
  int v56; // ecx
  int v57; // edx
  int v58; // eax
  _DWORD *v59; // ecx
  int v60; // esi
  int v61; // ebx
  unsigned int v62; // eax
  int v63; // ebx
  int v64; // ebx
  _OWORD *v65; // eax
  int v66; // edx
  _OWORD *v67; // ecx
  int v68; // edx
  _DWORD *v69; // ecx
  int v70; // [esp+14h] [ebp-8Ch]
  const void *v71; // [esp+14h] [ebp-8Ch]
  int v72; // [esp+14h] [ebp-8Ch]
  _DWORD *v73; // [esp+14h] [ebp-8Ch]
  const void *v74; // [esp+18h] [ebp-88h]
  const void *v75; // [esp+18h] [ebp-88h]
  int v76; // [esp+18h] [ebp-88h]
  int v77; // [esp+18h] [ebp-88h]
  int v78; // [esp+1Ch] [ebp-84h]
  int v80; // [esp+20h] [ebp-80h]
  int v81; // [esp+24h] [ebp-7Ch]
  int v82; // [esp+24h] [ebp-7Ch]
  int v83; // [esp+28h] [ebp-78h]
  int v84; // [esp+28h] [ebp-78h]
  int v85; // [esp+2Ch] [ebp-74h]
  int v86; // [esp+30h] [ebp-70h]
  char *v87; // [esp+34h] [ebp-6Ch]
  char *v88; // [esp+38h] [ebp-68h]
  int v89; // [esp+3Ch] [ebp-64h]
  __int16 v90; // [esp+40h] [ebp-60h]
  __int16 v91; // [esp+42h] [ebp-5Eh]
  int v92; // [esp+44h] [ebp-5Ch]
  unsigned __int16 v93; // [esp+4Ah] [ebp-56h]
  unsigned __int16 v94; // [esp+4Ch] [ebp-54h]
  int v95; // [esp+50h] [ebp-50h]
  _DWORD v96[3]; // [esp+54h] [ebp-4Ch]
  unsigned int v97; // [esp+60h] [ebp-40h]
  int v98; // [esp+64h] [ebp-3Ch]
  int v99; // [esp+68h] [ebp-38h]
  int v100; // [esp+70h] [ebp-30h]
  int v101; // [esp+74h] [ebp-2Ch]
  int v102; // [esp+78h] [ebp-28h]
  __m128 v103; // [esp+80h] [ebp-20h]
  __m128 v104; // [esp+90h] [ebp-10h]

  result = a3; /*0x8e513c*/
  v5 = this; /*0x8e5142*/
  if ( (int)a3[1] >= 1 ) /*0x8e514c*/
  {
    v6 = (int)*(this + 0x12); /*0x8e515b*/
    v81 = (int)*(this + 0x11); /*0x8e5161*/
    v7 = a2[1]; /*0x8e5165*/
    v8 = (const void *)(v7 + v81); /*0x8e5168*/
    v9 = v6 & 0x3FFFFFFF; /*0x8e516a*/
    v78 = v7; /*0x8e5171*/
    if ( v9 < v7 + v81 ) /*0x8e5175*/
    {
      v10 = 2 * v9; /*0x8e5177*/
      if ( (int)v8 >= v10 ) /*0x8e517b*/
        v10 = v7 + v81; /*0x8e517d*/
      sub_8A6E40(v5 + 0x10, v10, 0x10); /*0x8e5183*/
      v7 = v78; /*0x8e5188*/
    }
    v5[0x11] = v8; /*0x8e518f*/
    v11 = v5[0x17]; /*0x8e5195*/
    v96[0] = v5[0x14]; /*0x8e5198*/
    v96[2] = v5[0x1A]; /*0x8e51a2*/
    v12 = (unsigned int)v5[0x15]; /*0x8e51a6*/
    v13 = 2 * v7; /*0x8e51a9*/
    v96[1] = v11; /*0x8e51ab*/
    v14 = v5[0x14]; /*0x8e51af*/
    v15 = (char *)v14 + v13; /*0x8e51b2*/
    v16 = v12 & 0x3FFFFFFF; /*0x8e51b5*/
    v74 = v14; /*0x8e51bc*/
    v70 = v13; /*0x8e51c0*/
    if ( v16 < (int)v14 + v13 ) /*0x8e51c4*/
    {
      v17 = 2 * v16; /*0x8e51c6*/
      if ( (int)v15 >= v17 ) /*0x8e51ca*/
        v17 = (int)v14 + v13; /*0x8e51cc*/
      sub_8A6E40(v5 + 0x13, v17, 4); /*0x8e51d2*/
      v13 = v70; /*0x8e51d7*/
      v14 = v74; /*0x8e51db*/
    }
    v18 = (char *)v5[0x13]; /*0x8e51e2*/
    v5[0x14] = v15; /*0x8e51e4*/
    v19 = &v18[4 * (_DWORD)v14]; /*0x8e51e7*/
    v20 = (unsigned int)v5[0x18]; /*0x8e51ea*/
    v87 = v19; /*0x8e51f0*/
    v21 = v5[0x17]; /*0x8e51f4*/
    v22 = (char *)v21 + v13; /*0x8e51f7*/
    v23 = v20 & 0x3FFFFFFF; /*0x8e51fa*/
    v75 = v21; /*0x8e5201*/
    if ( v23 < (int)v21 + v13 ) /*0x8e5205*/
    {
      v24 = 2 * v23; /*0x8e5207*/
      if ( (int)v22 >= v24 ) /*0x8e520b*/
        v24 = (int)v21 + v13; /*0x8e520d*/
      sub_8A6E40(v5 + 0x16, v24, 4); /*0x8e5213*/
      v13 = v70; /*0x8e5218*/
      v21 = v75; /*0x8e521c*/
    }
    v25 = (char *)v5[0x16]; /*0x8e5223*/
    v5[0x17] = v22; /*0x8e5225*/
    v26 = &v25[4 * (_DWORD)v21]; /*0x8e5228*/
    v27 = (unsigned int)v5[0x1B]; /*0x8e522b*/
    v88 = v26; /*0x8e5231*/
    v28 = v5[0x1A]; /*0x8e5235*/
    v29 = (char *)v28 + v13; /*0x8e5238*/
    v30 = v27 & 0x3FFFFFFF; /*0x8e523b*/
    v71 = v28; /*0x8e5242*/
    if ( v30 < (int)v28 + v13 ) /*0x8e5246*/
    {
      v31 = 2 * v30; /*0x8e5248*/
      if ( (int)v29 >= v31 ) /*0x8e524c*/
        v31 = (int)v28 + v13; /*0x8e524e*/
      sub_8A6E40(v5 + 0x19, v31, 4); /*0x8e5254*/
      v28 = v71; /*0x8e5259*/
    }
    v89 = (int)v5[0x19] + 4 * (_DWORD)v28; /*0x8e5269*/
    v5[0x1A] = v29; /*0x8e5271*/
    v85 = 0; /*0x8e5274*/
    if ( v78 > 0 ) /*0x8e5278*/
    {
      v32 = v81; /*0x8e5286*/
      v72 = 0; /*0x8e5290*/
      v95 = v88 - v87; /*0x8e5294*/
      v76 = 0x10 * v81; /*0x8e52a3*/
      v33 = v87 + 4; /*0x8e52a7*/
      v83 = v89 - (_DWORD)v87; /*0x8e52ae*/
      v34 = v88 + 6; /*0x8e52b6*/
      v86 = v89 - (_DWORD)v88; /*0x8e52bb*/
      do /*0x8e546b*/
      {
        v35 = *((__m128 *)v5 + 3); /*0x8e52c4*/
        v36 = (__m128)xmmword_B2FC70; /*0x8e52c8*/
        v37 = (__m128)xmmword_A9A660; /*0x8e52cf*/
        v38 = (__m128)xmmword_A9A650; /*0x8e52d6*/
        v39 = (__m128 *)(v72 + *a3); /*0x8e52ea*/
        v40 = *((__m128 *)v5 + 2); /*0x8e52ef*/
        v103 = _mm_add_ps( /*0x8e52ff*/
                 _mm_max_ps(
                   _mm_min_ps(_mm_mul_ps(_mm_add_ps(*v39, *((__m128 *)v5 + 1)), v35), (__m128)xmmword_B2FC70),
                   (__m128)xmmword_A9A660),
                 (__m128)xmmword_A9A650);
        v41 = v39[1]; /*0x8e5307*/
        v90 = (unsigned __int32)v103.m128_i32[0] >> 7; /*0x8e5315*/
        v91 = (unsigned __int32)v103.m128_i32[1] >> 7; /*0x8e5324*/
        LOWORD(v92) = (unsigned __int32)v103.m128_i32[2] >> 7; /*0x8e5333*/
        v104 = _mm_add_ps(_mm_max_ps(_mm_min_ps(_mm_mul_ps(_mm_add_ps(v41, v40), v35), v36), v37), v38); /*0x8e5347*/
        v93 = (unsigned __int32)v104.m128_i32[1] >> 7; /*0x8e5366*/
        v100 = (unsigned __int16)((unsigned __int32)v104.m128_i32[0] >> 7) | 1; /*0x8e5378*/
        v94 = (unsigned __int32)v104.m128_i32[2] >> 7; /*0x8e5381*/
        v101 = v93 | 1; /*0x8e5393*/
        v97 = ((unsigned __int32)v103.m128_i32[0] >> 7) & 0xFFFE; /*0x8e539c*/
        v98 = ((unsigned __int32)v103.m128_i32[1] >> 7) & 0xFFFE; /*0x8e53ad*/
        v102 = v94 | 1; /*0x8e53b5*/
        v42 = *a2; /*0x8e53bc*/
        v99 = ((unsigned __int32)v103.m128_i32[2] >> 7) & 0xFFFE; /*0x8e53c4*/
        v43 = *(_DWORD **)(v42 + 4 * v85); /*0x8e53cc*/
        *(_DWORD *)((char *)v5[0x10] + v76 + 0xC) = v43; /*0x8e53d8*/
        v44 = v95; /*0x8e53dc*/
        *v43 = v32; /*0x8e53e0*/
        v33[0xFFFFFFFE] = v97; /*0x8e53e7*/
        LOWORD(v43) = v100; /*0x8e53eb*/
        v33[0xFFFFFFFF] = v32; /*0x8e53f0*/
        *v33 = (_WORD)v43; /*0x8e53f4*/
        LOWORD(v43) = v98; /*0x8e53f7*/
        v33[1] = v32; /*0x8e53fc*/
        v34[0xFFFFFFFD] = (_WORD)v43; /*0x8e5400*/
        LOWORD(v43) = v101; /*0x8e5404*/
        v34[0xFFFFFFFE] = v32; /*0x8e5409*/
        *(_WORD *)((char *)v33 + v44) = (_WORD)v43; /*0x8e540d*/
        *v34 = v32; /*0x8e5411*/
        v45 = v89; /*0x8e5414*/
        *(_WORD *)(v89 + 8 * v85) = v99; /*0x8e5421*/
        *(_WORD *)(v45 + 8 * v85 + 2) = v32; /*0x8e5429*/
        *(_WORD *)((char *)v33 + v83) = v102; /*0x8e5433*/
        *(_WORD *)((char *)v34 + v86) = v32; /*0x8e543f*/
        v72 += 0x20; /*0x8e544e*/
        ++v32; /*0x8e5456*/
        v33 += 4; /*0x8e5457*/
        v34 += 4; /*0x8e545a*/
        v5 = this; /*0x8e545f*/
        ++v85; /*0x8e5463*/
        v76 += 0x10; /*0x8e5467*/
      }
      while ( v85 < v78 ); /*0x8e546b*/
    }
    v84 = (int)v5[0x10]; /*0x8e5474*/
    for ( i = 0; i < 3; ++i ) /*0x8e5478*/
    {
      v47 = 2 * v78; /*0x8e5484*/
      LOBYTE(v86) = 0; /*0x8e5489*/
      if ( 2 * v78 > 1 ) /*0x8e548e*/
        sub_8E1200((int)(&v87)[i], 0, v47 - 1, v86); /*0x8e54a0*/
    }
    v48 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e54ba*/
    v49 = *(_DWORD **)(v48 + 0x19C); /*0x8e54bd*/
    v80 = v48; /*0x8e54c7*/
    v50 = v49[8]; /*0x8e54d2*/
    v51 = v50 + ((4 * v96[0] + 0x10) & 0xFFFFFFF0); /*0x8e54d8*/
    if ( v51 > v49[0xB] ) /*0x8e54de*/
    {
      v77 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v49 + 0xC))(v49, (4 * v96[0] + 0x10) & 0xFFFFFFF0); /*0x8e54ef*/
    }
    else
    {
      v49[8] = v51; /*0x8e54e0*/
      v77 = v50; /*0x8e54e3*/
    }
    v52 = 0; /*0x8e54f6*/
    v73 = v5 + 0x13; /*0x8e54f8*/
    do /*0x8e5529*/
    {
      sub_8E0C90(v73, v84, v96[v52], v47, v52, v77); /*0x8e5515*/
      ++v52; /*0x8e551e*/
      v73 += 3; /*0x8e5525*/
    }
    while ( v52 < 3 ); /*0x8e5529*/
    v53 = *(_DWORD **)(v80 + 0x19C); /*0x8e552f*/
    v54 = v77 == v53[0xA]; /*0x8e5539*/
    v53[8] = v77; /*0x8e553c*/
    if ( v54 ) /*0x8e553f*/
      (*(void (__thiscall **)(_DWORD *, int))(*v53 + 0x10))(v53, v77); /*0x8e5544*/
    v55 = (int)v5[0x1C]; /*0x8e5547*/
    if ( v55 ) /*0x8e554c*/
    {
      v56 = 0; /*0x8e554e*/
      if ( v55 > 0 ) /*0x8e5552*/
      {
        v57 = 0; /*0x8e5554*/
        do /*0x8e5574*/
        {
          v58 = (int)v5[0x10] + 0x10 * *(unsigned __int16 *)((char *)v5[0x1E] + v57); /*0x8e5560*/
          v57 += 0x10; /*0x8e5563*/
          *(_WORD *)(v58 + 4) += v47; /*0x8e5566*/
          *(_WORD *)(v58 + 6) += v47; /*0x8e556a*/
          ++v56; /*0x8e5571*/
        }
        while ( v56 < (int)v5[0x1C] ); /*0x8e5574*/
      }
    }
    v59 = *(_DWORD **)(v80 + 0x19C); /*0x8e5579*/
    v60 = v59[8]; /*0x8e557f*/
    v61 = (int)v5[0x11]; /*0x8e5582*/
    v62 = (4 * (v61 >> 5) + 0x30) & 0xFFFFFFF0; /*0x8e558e*/
    v63 = v61 >> 3; /*0x8e5594*/
    if ( v60 + v62 > v59[0xB] ) /*0x8e559a*/
      v60 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v59 + 0xC))(v59, v62); /*0x8e55a7*/
    else
      v59[8] = v60 + v62; /*0x8e559c*/
    v64 = v63 >> 4; /*0x8e55a9*/
    v65 = (_OWORD *)v60; /*0x8e55b1*/
    if ( v64 >= 0 ) /*0x8e55b3*/
    {
      v66 = v64 + 1; /*0x8e55b5*/
      do /*0x8e55c1*/
      {
        v67 = v65++; /*0x8e55b8*/
        --v66; /*0x8e55bd*/
        *v67 = 0; /*0x8e55be*/
      }
      while ( v66 ); /*0x8e55c1*/
    }
    if ( v78 > 0 ) /*0x8e55c9*/
    {
      v68 = v81; /*0x8e55cb*/
      v82 = v78; /*0x8e55cf*/
      do /*0x8e55f1*/
      {
        *(_DWORD *)(v60 + 4 * (v68 >> 5)) ^= 1 << (v68 & 0x1F); /*0x8e55e4*/
        ++v68; /*0x8e55eb*/
        --v82; /*0x8e55ed*/
      }
      while ( v82 ); /*0x8e55f1*/
    }
    result = (_DWORD *)sub_8E4BC0(v5, v60, a4, 1); /*0x8e5600*/
    v69 = *(_DWORD **)(v80 + 0x19C); /*0x8e5609*/
    v54 = v60 == v69[0xA]; /*0x8e560f*/
    v69[8] = v60; /*0x8e5612*/
    if ( v54 ) /*0x8e5615*/
      return (*(_DWORD *(__thiscall **)(_DWORD *, int))(*v69 + 0x10))(v69, v60); /*0x8e561a*/
  }
  return result; /*0x8e561d*/
}
