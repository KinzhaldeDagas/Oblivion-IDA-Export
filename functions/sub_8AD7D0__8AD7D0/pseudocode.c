// TES4 authoritative: low-level character proxy move loop uses the same active-surface solver for sliding/corrected motion after manifold constraints are built.
int __thiscall hkpCharacterProxy_MoveAndUpdateManifold(
        __m128 *this,
        int moveInput,
        __m128 *contextVec,
        int *collector,
        int collectorState)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // edi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  double v11; // st7
  __m128 v12; // xmm0
  double v13; // st6
  _DWORD *v14; // ecx
  int v15; // eax
  int v16; // edi
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  __m128 v19; // xmm1
  int v20; // ecx
  _DWORD *v21; // ecx
  int v22; // eax
  _DWORD *v23; // ecx
  unsigned __int64 v24; // rax
  int v25; // edi
  int v26; // eax
  _DWORD *v27; // ecx
  int v28; // edx
  unsigned int v29; // ebx
  int v30; // eax
  int v31; // eax
  int v32; // ebx
  int v33; // ecx
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  _DWORD *v38; // ecx
  unsigned __int64 v39; // rax
  int v40; // edi
  _DWORD *v41; // ecx
  __m128 v42; // xmm2
  _DWORD *v43; // edx
  _DWORD *v44; // ebx
  int v45; // eax
  double v46; // st7
  __m128 v47; // xmm0
  __m128 v48; // xmm0
  float v49; // xmm1_4
  __m128 v50; // xmm3
  __m128 v51; // xmm0
  float v52; // edx
  int v53; // edi
  int v54; // ecx
  _DWORD *v55; // edi
  int v56; // ebx
  _DWORD *v57; // ecx
  unsigned __int64 v58; // rax
  _DWORD *v59; // ecx
  unsigned __int64 v60; // rax
  __m128 v61; // xmm1
  __m128 v62; // xmm2
  __m128 v63; // xmm0
  int v64; // ecx
  int v65; // ebx
  int v66; // ecx
  int v67; // ecx
  int v68; // eax
  int v69; // eax
  int v70; // ecx
  bool v71; // zf
  int v72; // edx
  int v73; // eax
  __int128 v74; // xmm0
  int v75; // eax
  double v76; // st7
  _DWORD *v77; // ecx
  int v78; // ecx
  _DWORD *v79; // ecx
  int v80; // eax
  int v81; // ecx
  bool v82; // c0
  bool v83; // c3
  int v84; // ecx
  _DWORD *v85; // ecx
  unsigned __int64 v86; // rax
  int v87; // esi
  _DWORD *v88; // ecx
  float v90; // [esp+3Ch] [ebp-144h]
  float v91; // [esp+3Ch] [ebp-144h]
  int v92; // [esp+4Ch] [ebp-134h]
  int v93; // [esp+4Ch] [ebp-134h]
  int j; // [esp+4Ch] [ebp-134h]
  float v95; // [esp+50h] [ebp-130h]
  int v96; // [esp+54h] [ebp-12Ch]
  _DWORD *v97; // [esp+54h] [ebp-12Ch]
  int v98; // [esp+58h] [ebp-128h]
  __int64 v99; // [esp+5Ch] [ebp-124h] BYREF
  signed int v100; // [esp+64h] [ebp-11Ch]
  int v101; // [esp+68h] [ebp-118h]
  int v102; // [esp+6Ch] [ebp-114h]
  __m128 currentPos; // [esp+70h] [ebp-110h] BYREF
  int v104; // [esp+88h] [ebp-F8h]
  __m128 targetPos; // [esp+90h] [ebp-F0h] BYREF
  float v107[13]; // [esp+A0h] [ebp-E0h]
  float v108; // [esp+D4h] [ebp-ACh]
  float v109; // [esp+D8h] [ebp-A8h]
  int v110; // [esp+DCh] [ebp-A4h]
  __m128 moveDir; // [esp+E0h] [ebp-A0h] BYREF
  __int128 v112; // [esp+F0h] [ebp-90h]
  float v113; // [esp+100h] [ebp-80h]
  _DWORD *v114; // [esp+104h] [ebp-7Ch]
  _QWORD v115[3]; // [esp+108h] [ebp-78h] BYREF
  __int128 v116; // [esp+120h] [ebp-60h]
  __m128 i; // [esp+130h] [ebp-50h]
  __int128 v118; // [esp+140h] [ebp-40h]
  float v119; // [esp+150h] [ebp-30h]
  float v120; // [esp+154h] [ebp-2Ch]
  __int64 v121; // [esp+158h] [ebp-28h]
  __m128 v122; // [esp+160h] [ebp-20h]
  signed int v123; // [esp+178h] [ebp-8h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ad7e6*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ad7ed*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x8ad7ff*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ad801*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x8ad803*/
    *v9 = "LtupdateCharacter"; /*0x8ad809*/
    v9[3] = "Cast"; /*0x8ad80f*/
    v10 = __rdtsc(); /*0x8ad816*/
    v102 = v10; /*0x8ad818*/
    v9[1] = v10; /*0x8ad820*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4; /*0x8ad826*/
  }
  v11 = *(float *)(moveInput + 8); /*0x8ad82f*/
  v95 = *(float *)(moveInput + 8); /*0x8ad838*/
  v12 = *(__m128 *)(*(_DWORD *)(*((_DWORD *)this + 0xC) + 0x1C) + 0x30); /*0x8ad83f*/
  v13 = *((float *)this + 0x17) + *((float *)this + 0x16); /*0x8ad843*/
  currentPos = v12; /*0x8ad846*/
  v107[0] = 0.0099999998; /*0x8ad84b*/
  v102 = 0; /*0x8ad853*/
  v107[1] = v13; /*0x8ad85b*/
  if ( v11 > flt_A97BCC ) /*0x8ad86a*/
  {
    while ( v102 < dword_B2EFB8 ) /*0x8ad880*/
    {
      v14 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ad890*/
      v15 = v14[MEMORY[0xBA9DE4]]; /*0x8ad89d*/
      if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) ) /*0x8ad8ac*/
      {
        v16 = v14[MEMORY[0xBA9DE4]]; /*0x8ad8ae*/
        v17 = *(_DWORD **)(v15 + 0x1A4); /*0x8ad8b0*/
        *v17 = "StInitialCast"; /*0x8ad8b6*/
        v18 = __rdtsc(); /*0x8ad8bc*/
        LODWORD(v107[8]) = v18; /*0x8ad8be*/
        v17[1] = v18; /*0x8ad8cc*/
        v12 = currentPos; /*0x8ad8cf*/
        *(_DWORD *)(v16 + 0x1A4) = v17 + 3; /*0x8ad8d7*/
      }
      v19 = *(this + 2); /*0x8ad8e0*/
      collector[5] = 0; /*0x8ad8ea*/
      collector[1] = 0x7F7FFFFF; /*0x8ad8f2*/
      *(_DWORD *)(collectorState + 0x14) = 0; /*0x8ad8fa*/
      *(_DWORD *)(collectorState + 4) = 0x7F7FFFFF; /*0x8ad8fd*/
      v20 = *((_DWORD *)this + 0xC); /*0x8ad900*/
      targetPos = _mm_add_ps(v12, v19); /*0x8ad90b*/
      (*(void (__thiscall **)(int, __m128 *, __m128 *, int *, int))(*(_DWORD *)v20 + 0x30))( /*0x8ad913*/
        v20,
        &currentPos,
        &targetPos,
        collector,
        collectorState);
      if ( collector[5] > 0 ) /*0x8ad91b*/
      {
        hkpCdPointCollector_SortHitsByDistance(collector);// Initial cast returned hits: sort by entry+0x1C, then rewrite hit keys relative to movement direction. /*0x8ad91f*/
        hkpCdPointHits_RewriteSortKeyFromMoveNormal(collector[4], collector[5], this + 2); /*0x8ad932*/
      }
      v21 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ad93d*/
      if ( *(_DWORD *)(v21[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v21[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x8ad953*/
      {
        v22 = v21[MEMORY[0xBA9DE4]]; /*0x8ad95a*/
        v23 = *(_DWORD **)(v22 + 0x1A4); /*0x8ad95d*/
        v92 = v22; /*0x8ad963*/
        *v23 = "StUpdateManifold"; /*0x8ad967*/
        v24 = __rdtsc(); /*0x8ad96d*/
        LODWORD(v107[6]) = v24; /*0x8ad96f*/
        v23[1] = v24; /*0x8ad97b*/
        *(_DWORD *)(v92 + 0x1A4) = v23 + 3; /*0x8ad981*/
      }
      (*(void (__thiscall **)(__m128 *, int, int *))(this->m128_i32[0] + 8))(this, collectorState, collector);// Virtual manifold update consumes the sorted/rekeyed collector hits. /*0x8ad98d*/
      v25 = *((_DWORD *)this + 0x19) + *((_DWORD *)this + 0x1E) + 0xA; /*0x8ad996*/
      v26 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8ad9a6*/
      v27 = *(_DWORD **)(v26 + 0x19C); /*0x8ad9a9*/
      v99 = 0; /*0x8ad9b3*/
      v100 = 0x80000000; /*0x8ad9bb*/
      v98 = v26; /*0x8ad9c3*/
      if ( !v27 ) /*0x8ad9c7*/
        v27 = (_DWORD *)unk_BA7D9C; /*0x8ad9c9*/
      v28 = v27[8]; /*0x8ad9cf*/
      v29 = v28 + (((v25 << 6) + 0x10) & 0xFFFFFFF0); /*0x8ad9dd*/
      if ( v29 > v27[0xB] ) /*0x8ad9e3*/
      {
        v30 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v27 + 0xC))(v27, ((v25 << 6) + 0x10) & 0xFFFFFFF0); /*0x8ad9ef*/
      }
      else
      {
        v27[8] = v29; /*0x8ad9e5*/
        v30 = v28; /*0x8ad9e8*/
      }
      LODWORD(v99) = v30; /*0x8ad9f2*/
      v101 = v30; /*0x8ad9f6*/
      v31 = *((_DWORD *)this + 0x1E); /*0x8ad9fa*/
      v32 = 0; /*0x8ada03*/
      v100 = v25 | 0x80000000; /*0x8ada07*/
      HIDWORD(v99) = v31; /*0x8ada0b*/
      if ( v31 > 0 ) /*0x8ada0f*/
      {
        v93 = 0; /*0x8ada13*/
        v96 = 0; /*0x8ada17*/
        do /*0x8ada7f*/
        {
          v90 = *(float *)(moveInput + 8) - v95; /*0x8ada37*/
          (*(void (__thiscall **)(__m128 *, int, _DWORD, _DWORD))(this->m128_i32[0] + 0xC))( /*0x8ada47*/
            this,
            v93 + *((_DWORD *)this + 0x1D),
            v99 + v96,
            LODWORD(v90));
          hkpCharacterProxy_ProjectManifoldContactToSurfaceConstraint( /*0x8ada5b*/
            v32++,
            (const void **)&v99,
            *((float *)this + 0x29),
            this + 4);
          v96 += 0x40; /*0x8ada77*/
          v93 += 0x30; /*0x8ada7b*/
        }
        while ( v32 < *((_DWORD *)this + 0x1E) ); /*0x8ada7f*/
      }
      v33 = *((_DWORD *)this + 0x19); /*0x8ada89*/
      v34 = v100 & 0x3FFFFFFF; /*0x8ada8c*/
      if ( (v100 & 0x3FFFFFFF) - HIDWORD(v99) < v33 ) /*0x8ada97*/
      {
        v35 = HIDWORD(v99) + v33; /*0x8ada99*/
        if ( v34 < v35 ) /*0x8ada9d*/
        {
          v36 = 2 * v34; /*0x8ada9f*/
          if ( v35 >= v36 ) /*0x8adaa3*/
            v36 = v35; /*0x8adaa5*/
          sub_8A6E40((const void **)&v99, v36, 0x40); /*0x8adaaf*/
        }
      }
      v37 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8adac3*/
      if ( *(_DWORD *)(v37 + 0x1A4) < *(_DWORD *)(v37 + 0x1A8) ) /*0x8adad6*/
      {
        v38 = *(_DWORD **)(v98 + 0x1A4); /*0x8adad8*/
        *v38 = "StSlexMove"; /*0x8adade*/
        v39 = __rdtsc(); /*0x8adae4*/
        LODWORD(v107[7]) = v39; /*0x8adae6*/
        v38[1] = v39; /*0x8adaee*/
        *(_DWORD *)(v98 + 0x1A4) = v38 + 3; /*0x8adaf4*/
      }
      v40 = HIDWORD(v99) + *((_DWORD *)this + 0x19); /*0x8adb01*/
      v41 = *(_DWORD **)(v98 + 0x19C); /*0x8adb03*/
      v107[9] = 0.00000011920929; /*0x8adb0b*/
      v42 = 0; /*0x8adb1f*/
      v118 = 0x3F80000000000000uLL; /*0x8adb26*/
      i = _mm_shuffle_ps((__m128)0x34000000u, (__m128)0x34000000u, 0); /*0x8adb52*/
      v122 = 0; /*0x8adb5a*/
      *(_OWORD *)&v115[1] = 0; /*0x8adb62*/
      if ( !v41 ) /*0x8adb6a*/
        v41 = (_DWORD *)unk_BA7D9C; /*0x8adb6c*/
      v43 = (_DWORD *)v41[8]; /*0x8adb72*/
      v44 = &v43[4 * v40 + 4]; /*0x8adb7e*/
      if ( (unsigned int)v44 > v41[0xB] ) /*0x8adb84*/
      {
        v45 = (*(int (__thiscall **)(_DWORD *, int))(*v41 + 0xC))(v41, 0x10 * (v40 + 1)); /*0x8adb92*/
        v42 = v122; /*0x8adb95*/
        v97 = (_DWORD *)v45; /*0x8adb9d*/
      }
      else
      {
        v41[8] = v44; /*0x8adb86*/
        v97 = v43; /*0x8adb89*/
      }
      v46 = *(float *)&SrcStr; /*0x8adba5*/
      v116 = *((_OWORD *)this + 1); /*0x8adbb7*/
      v47 = _mm_mul_ps(*(this + 1), *(this + 1)); /*0x8adbc3*/
      v121 = v99; /*0x8adbc6*/
      v109 = _mm_shuffle_ps(v47, v47, 0xAA).m128_f32[0] /*0x8adbea*/
           + (float)(_mm_shuffle_ps(v47, v47, 0x55).m128_f32[0] + v47.m128_f32[0]);
      v123 = v40 | 0x80000000; /*0x8adbfd*/
      v119 = v95; /*0x8adc0b*/
      if ( v109 == v46 ) /*0x8adc17*/
      {
        v120 = 0.0; /*0x8adc19*/
      }
      else
      {
        v48 = _mm_mul_ps(*(this + 1), *(this + 1)); /*0x8adc2d*/
        v49 = _mm_shuffle_ps(v48, v48, 0x55).m128_f32[0] + v48.m128_f32[0]; /*0x8adc37*/
        v50 = _mm_shuffle_ps(v48, v48, 0xAA); /*0x8adc3e*/
        v51 = v50; /*0x8adc42*/
        v51.m128_f32[0] = v50.m128_f32[0] + v49; /*0x8adc45*/
        v122 = v51; /*0x8adc49*/
        v122.m128_f32[0] = 1.0 / fsqrt(v50.m128_f32[0] + v49); /*0x8adc55*/
        v107[0xC] = 3.0; /*0x8adc6e*/
        v107[5] = 0.5; /*0x8adc86*/
        v108 = (float)(0.5 * v122.m128_f32[0]) /*0x8adca3*/
             * (float)(3.0 - (float)((float)((float)(v50.m128_f32[0] + v49) * v122.m128_f32[0]) * v122.m128_f32[0]));
        v120 = v108 * *((float *)this + 0x16) * kHeadBodyNormalMatchRadius; /*0x8adcb7*/
      }
      v52 = *((float *)this + 0x1A); /*0x8adcbe*/
      v53 = *((_DWORD *)this + 0x21) - 1; /*0x8adccb*/
      v118 = *((_OWORD *)this + 4); /*0x8adccc*/
      v107[0xA] = v52; /*0x8adcd4*/
      *(__m128 *)&v115[1] = v42; /*0x8adce8*/
      for ( i = _mm_shuffle_ps((__m128)LODWORD(v52), (__m128)LODWORD(v52), 0); v53 >= 0; --v53 ) /*0x8adcf8*/
      {
        v54 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * v53); /*0x8add06*/
        (*(void (__thiscall **)(int, char *, _QWORD *))(*(_DWORD *)v54 + 4))(v54, (char *)this + 0x74, &v115[1]); /*0x8add14*/
      }
      v114 = v97; /*0x8add2e*/
      hkSurfaceConstraintUtil_CalcSupportMotion((__m128 *)&v115[1], &moveDir);// Corrected movement path: active-surface solver computes sliding motion from manifold surface constraints. /*0x8add35*/
      v55 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8add3a*/
      v56 = MEMORY[0xBA9DE4]; /*0x8add41*/
      if ( *(_DWORD *)(v55[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v55[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x8add5b*/
      {
        v57 = *(_DWORD **)(v98 + 0x1A4); /*0x8add61*/
        *v57 = "StApplySurf"; /*0x8add67*/
        v58 = __rdtsc(); /*0x8add6d*/
        LODWORD(v107[0xB]) = v58; /*0x8add6f*/
        v57[1] = v58; /*0x8add81*/
        *(_DWORD *)(v98 + 0x1A4) = v57 + 3; /*0x8add87*/
      }
      hkpCharacterProxy_ApplyContactEntityInteractions(this, moveInput, contextVec);// Applies entity/contact interactions after surface constraint motion is computed and before corrected cast move. /*0x8add97*/
      if ( *(_DWORD *)(v55[v56] + 0x1A4) < *(_DWORD *)(v55[v56] + 0x1A8) ) /*0x8addab*/
      {
        v59 = *(_DWORD **)(v98 + 0x1A4); /*0x8addb1*/
        *v59 = "StCastMove"; /*0x8addb7*/
        v60 = __rdtsc(); /*0x8addbd*/
        v110 = v60; /*0x8addbf*/
        v59[1] = v60; /*0x8addcd*/
        *(_DWORD *)(v98 + 0x1A4) = v59 + 3; /*0x8addd3*/
      }
      v61 = moveDir;                            // After surface solve, compares requested movement against solved movement; only then performs a corrected cast if the vector changed enough. /*0x8adde0*/
      v62 = _mm_and_ps(_mm_sub_ps(*(this + 2), moveDir), (__m128)xmmword_A372D0); /*0x8addef*/
      v104 = 0x3A83126F; /*0x8addf2*/
      if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_shuffle_ps((__m128)0x3A83126Fu, (__m128)0x3A83126Fu, 0), v62)) & 7) != 0 ) /*0x8ade14*/
      {
        v63 = currentPos; /*0x8ade21*/
        collector[5] = 0; /*0x8ade2d*/
        collector[1] = 0x7F7FFFFF; /*0x8ade34*/
        v64 = *((_DWORD *)this + 0xC); /*0x8ade3b*/
        targetPos = _mm_add_ps(v63, v61); /*0x8ade46*/
        (*(void (__thiscall **)(int, __m128 *, __m128 *, int *, _DWORD))(*(_DWORD *)v64 + 0x30))( /*0x8ade4e*/
          v64,
          &currentPos,
          &targetPos,
          collector,
          0);
        if ( collector[5] > 0 ) /*0x8ade56*/
        {
          hkpCdPointCollector_SortHitsByDistance(collector); /*0x8ade5e*/
          hkpCdPointHits_RewriteSortKeyFromMoveNormal(collector[4], collector[5], &moveDir); /*0x8ade75*/
          v65 = collector[4]; /*0x8ade7a*/
          if ( hkpCharacterProxy_FindMatchingManifoldContact(this->m128_f32, (__m128 *)v65) == 0xFFFFFFFF )// If the corrected cast hit does not match an existing manifold entry, vanilla appends the first 0x30-byte hit to the manifold. /*0x8ade88*/
          {
            for ( j = *((_DWORD *)this + 0x21) - 1; j >= 0; --j ) /*0x8ade99*/
            {
              v66 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * j); /*0x8adeaa*/
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v66 + 8))(v66, v65); /*0x8adeb0*/
            }
            if ( *((_DWORD *)this + 0x1E) == (*((_DWORD *)this + 0x1F) & 0x3FFFFFFF) ) /*0x8adec7*/
              sub_8A6EE0((const void **)this + 0x1D, 0x30); /*0x8adecf*/
            v67 = *((_DWORD *)this + 0x1E); /*0x8aded7*/
            v68 = *((_DWORD *)this + 0x1D) + 0x30 * v67; /*0x8adee3*/
            *((_DWORD *)this + 0x1E) = v67 + 1; /*0x8adee6*/
            *(_OWORD *)v68 = *(_OWORD *)v65; /*0x8adeec*/
            *(_OWORD *)(v68 + 0x10) = *(_OWORD *)(v65 + 0x10);// Copies full 0x30-byte contact entry into manifold, including normal, collidable refs, and shape/filter keys. /*0x8adef3*/
            *(_DWORD *)(v68 + 0x20) = *(_DWORD *)(v65 + 0x20); /*0x8adefa*/
            *(_DWORD *)(v68 + 0x24) = *(_DWORD *)(v65 + 0x24); /*0x8adf00*/
            *(_DWORD *)(v68 + 0x28) = *(_DWORD *)(v65 + 0x28); /*0x8adf06*/
            *(_DWORD *)(v68 + 0x2C) = *(_DWORD *)(v65 + 0x2C); /*0x8adf0c*/
          }
          if ( hkpCharacterProxy_FindMatchingManifoldContact(this->m128_f32, (__m128 *)collector[4]) == 0xFFFFFFFF ) /*0x8adf1d*/
          {
LABEL_56:
            v76 = v95 /*0x8adf84*/
                - hkpCharacterProxy_ComputeCastMoveFraction(
                    this->m128_f32,
                    &moveDir,
                    (int)collector,
                    &targetPos,
                    &currentPos);
            v61 = moveDir; /*0x8adfa2*/
            goto LABEL_57; /*0x8adfa2*/
          }
          while ( 1 ) /*0x8adf24*/
          {
            v69 = collector[5] - 1; /*0x8adf24*/
            v70 = 0; /*0x8adf26*/
            v71 = collector[5] == 1; /*0x8adf28*/
            collector[5] = v69; /*0x8adf2a*/
            if ( v69 >= 0 && !v71 ) /*0x8adf2d*/
            {
              v72 = 0; /*0x8adf2f*/
              do /*0x8adf67*/
              {
                v73 = collector[4]; /*0x8adf31*/
                v74 = *(_OWORD *)(v73 + v72 + 0x30); /*0x8adf34*/
                v75 = v72 + v73; /*0x8adf39*/
                *(_OWORD *)v75 = v74; /*0x8adf3b*/
                *(_OWORD *)(v75 + 0x10) = *(_OWORD *)(v75 + 0x40); /*0x8adf42*/
                *(_DWORD *)(v75 + 0x20) = *(_DWORD *)(v75 + 0x50); /*0x8adf49*/
                *(_DWORD *)(v75 + 0x24) = *(_DWORD *)(v75 + 0x54); /*0x8adf4f*/
                *(_DWORD *)(v75 + 0x28) = *(_DWORD *)(v75 + 0x58); /*0x8adf55*/
                *(_DWORD *)(v75 + 0x2C) = *(_DWORD *)(v75 + 0x5C); /*0x8adf5b*/
                ++v70; /*0x8adf61*/
                v72 += 0x30; /*0x8adf62*/
              }
              while ( v70 < collector[5] ); /*0x8adf67*/
            }
            if ( collector[5] <= 0 ) /*0x8adf6e*/
              break; /*0x8adf6e*/
            if ( hkpCharacterProxy_FindMatchingManifoldContact(this->m128_f32, (__m128 *)collector[4]) == 0xFFFFFFFF ) /*0x8adf82*/
              goto LABEL_56; /*0x8adf82*/
          }
        }
        v61 = moveDir; /*0x8ae0da*/
      }
      v76 = v95 - v113; /*0x8ae0eb*/
      currentPos = _mm_add_ps(currentPos, v61); // Final low-level position advances by the solved constrained motion vector; no separate ledge step-up/mantle helper is invoked here. /*0x8ae0f5*/
LABEL_57:
      v95 = v76; /*0x8adfaa*/
      *(this + 2) = v61; /*0x8adfb2*/
      v77 = *(_DWORD **)(v98 + 0x19C); /*0x8adfb6*/
      if ( !v77 ) /*0x8adfbe*/
        v77 = (_DWORD *)unk_BA7D9C; /*0x8adfc0*/
      v71 = v97 == (_DWORD *)v77[0xA]; /*0x8adfca*/
      v77[8] = v97; /*0x8adfcd*/
      if ( v71 ) /*0x8adfd0*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v77 + 0x10))(v77, v97); /*0x8adfd5*/
      if ( v123 >= 0 ) /*0x8adfe1*/
      {
        v78 = *(_DWORD *)(v98 + 0x19C); /*0x8adfe3*/
        if ( !v78 ) /*0x8adfeb*/
          v78 = unk_BA7D9C; /*0x8adfed*/
        sub_8A75D0(v78, v97, 0x10 * v123, 0x14); /*0x8adfff*/
      }
      v79 = *(_DWORD **)(v98 + 0x19C); /*0x8ae004*/
      v80 = v101; /*0x8ae00c*/
      if ( !v79 ) /*0x8ae010*/
        v79 = (_DWORD *)unk_BA7D9C; /*0x8ae012*/
      v71 = v101 == v79[0xA]; /*0x8ae018*/
      v79[8] = v101; /*0x8ae01b*/
      if ( v71 ) /*0x8ae01e*/
        (*(void (__thiscall **)(_DWORD *, int))(*v79 + 0x10))(v79, v80); /*0x8ae023*/
      if ( v100 >= 0 ) /*0x8ae02c*/
      {
        v81 = *(_DWORD *)(v98 + 0x19C); /*0x8ae02e*/
        if ( !v81 ) /*0x8ae036*/
          v81 = unk_BA7D9C; /*0x8ae038*/
        sub_8A75D0(v81, (_DWORD *)v99, v100 << 6, 0x14); /*0x8ae04e*/
      }
      v82 = v95 < (double)flt_A97BCC; /*0x8ae05b*/
      v83 = v95 == flt_A97BCC; /*0x8ae05b*/
      ++v102; /*0x8ae062*/
      if ( v82 || v83 ) /*0x8ae068*/
        break; /*0x8ae06b*/
      v12 = currentPos; /*0x8ad872*/
    }
  }
  v91 = v107[1]; /*0x8ae071*/
  v84 = *((_DWORD *)this + 0xC); /*0x8ae07e*/
  *((__int128 *)this + 1) = v112; /*0x8ae086*/
  sub_8ABAC0(v84, &currentPos, v91); /*0x8ae08a*/
  v85 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ae08f*/
  LODWORD(v86) = v85[MEMORY[0xBA9DE4]]; /*0x8ae09c*/
  if ( *(_DWORD *)(v86 + 0x1A4) < *(_DWORD *)(v86 + 0x1A8) ) /*0x8ae0ab*/
  {
    v87 = v85[MEMORY[0xBA9DE4]]; /*0x8ae0ad*/
    v88 = *(_DWORD **)(v86 + 0x1A4); /*0x8ae0af*/
    *v88 = "lt"; /*0x8ae0b5*/
    v86 = __rdtsc(); /*0x8ae0bb*/
    v104 = v86; /*0x8ae0bd*/
    v88[1] = v86; /*0x8ae0c5*/
    *(_DWORD *)(v87 + 0x1A4) = v88 + 3; /*0x8ae0cb*/
  }
  return v86; /*0x8ae0d1*/
}
