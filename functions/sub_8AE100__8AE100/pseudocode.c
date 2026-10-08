// TES4 authoritative: character support check. Builds support/contact candidates, classifies support against up direction/slope tolerance, and writes support status/normal data to output block.
int __thiscall bhkCharacterProxy_CheckSupport(__m128 *this, __m128 *a2, __m128 *a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // edi
  int v11; // eax
  _DWORD *v12; // ecx
  int v13; // edx
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  _DWORD *v22; // ecx
  int v23; // edi
  char *v24; // edx
  char *v25; // ebx
  char *v26; // eax
  _DWORD *v27; // ecx
  int v28; // edi
  int v29; // edi
  int v30; // eax
  unsigned int v31; // ebx
  unsigned int v32; // edx
  unsigned int v33; // ecx
  int v34; // edi
  int v35; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // edi
  int v39; // ecx
  int v40; // edi
  int v41; // edi
  int v42; // edx
  __m128 v43; // xmm0
  int v44; // eax
  int v45; // ecx
  __m128 v46; // xmm0
  __m128 v47; // xmm2
  __m128 v48; // xmm3
  __m128 v49; // xmm0
  double v50; // st7
  float v51; // xmm1_4
  __m128 v52; // xmm4
  __m128 v53; // xmm0
  __m128 v54; // xmm0
  __m128 v55; // xmm0
  __m128 *v56; // ecx
  __m128 *v57; // esi
  char *v58; // ebx
  int v59; // edi
  __m128 v60; // xmm0
  __m128 v61; // xmm1
  __m128 v62; // xmm0
  double v63; // st7
  float v64; // xmm2_4
  __m128 v65; // xmm3
  __m128 v66; // xmm0
  __m128 v67; // xmm0
  int v68; // eax
  int v69; // esi
  _DWORD *v70; // ecx
  unsigned __int64 v71; // rax
  _DWORD *v72; // ecx
  int v73; // eax
  bool v74; // zf
  int v75; // ecx
  _DWORD *v76; // ecx
  char *v77; // eax
  int v78; // ecx
  _DWORD *v79; // ecx
  int v80; // eax
  int result; // eax
  int v82; // ecx
  int v83; // [esp+24h] [ebp-CCh]
  float v84; // [esp+24h] [ebp-CCh]
  unsigned int v85; // [esp+24h] [ebp-CCh]
  int v86; // [esp+28h] [ebp-C8h]
  int v87; // [esp+28h] [ebp-C8h]
  __int64 v88; // [esp+2Ch] [ebp-C4h] BYREF
  signed int v89; // [esp+34h] [ebp-BCh]
  int v90; // [esp+38h] [ebp-B8h]
  int v91; // [esp+3Ch] [ebp-B4h]
  __int64 v92; // [esp+40h] [ebp-B0h] BYREF
  int v93; // [esp+48h] [ebp-A8h]
  int v94; // [esp+4Ch] [ebp-A4h]
  char *v95; // [esp+50h] [ebp-A0h] BYREF
  int v96; // [esp+54h] [ebp-9Ch]
  signed int v97; // [esp+58h] [ebp-98h]
  char *v98; // [esp+5Ch] [ebp-94h]
  __m128 v99; // [esp+60h] [ebp-90h]
  __m128 v100[4]; // [esp+70h] [ebp-80h] BYREF
  __int64 v101; // [esp+B0h] [ebp-40h]
  __int64 v102; // [esp+B8h] [ebp-38h]
  __m128 v103; // [esp+C0h] [ebp-30h] BYREF
  __m128 v104; // [esp+D0h] [ebp-20h]
  char *v105; // [esp+E4h] [ebp-Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ae10d*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ae11d*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8ae12d*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ae12f*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8ae131*/
    *v8 = "TtcheckSupport";                     // Profiler label 'TtcheckSupport'; confirms this routine is the controller support-ground classification pass. /*0x8ae137*/
    v9 = __rdtsc(); /*0x8ae13d*/
    v8[1] = v9; /*0x8ae147*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x8ae14d*/
  }
  hkpCharacterProxy_CollectSupportContacts(this->m128_f32, a4); /*0x8ae159*/
  v10 = *((_DWORD *)this + 0x19) + *((_DWORD *)this + 0x1E) + 0xA; /*0x8ae16a*/
  v11 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ae16e*/
  v12 = *(_DWORD **)(v11 + 0x19C); /*0x8ae171*/
  v88 = 0; /*0x8ae17b*/
  v89 = 0x80000000; /*0x8ae183*/
  v91 = v11; /*0x8ae18b*/
  if ( !v12 ) /*0x8ae18f*/
    v12 = (_DWORD *)unk_BA7D9C; /*0x8ae191*/
  v13 = v12[8]; /*0x8ae197*/
  v14 = v13 + (((v10 << 6) + 0x10) & 0xFFFFFFF0); /*0x8ae1a5*/
  if ( v14 > v12[0xB] ) /*0x8ae1ab*/
  {
    v15 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v12 + 0xC))(v12, ((v10 << 6) + 0x10) & 0xFFFFFFF0); /*0x8ae1b7*/
  }
  else
  {
    v12[8] = v14; /*0x8ae1ad*/
    v15 = v13; /*0x8ae1b0*/
  }
  LODWORD(v88) = v15; /*0x8ae1ba*/
  v90 = v15; /*0x8ae1be*/
  v16 = *((_DWORD *)this + 0x1E); /*0x8ae1c2*/
  v17 = 0; /*0x8ae1cb*/
  v89 = v10 | 0x80000000; /*0x8ae1cf*/
  HIDWORD(v88) = v16; /*0x8ae1d3*/
  if ( v16 > 0 ) /*0x8ae1d7*/
  {
    v83 = 0; /*0x8ae1db*/
    v86 = 0; /*0x8ae1df*/
    do /*0x8ae236*/
    {
      (*(void (__thiscall **)(__m128 *, int, _DWORD, _DWORD))(this->m128_i32[0] + 0xC))( /*0x8ae1fe*/
        this,
        v83 + *((_DWORD *)this + 0x1D),
        v88 + v86,
        0);
      hkpCharacterProxy_ProjectManifoldContactToSurfaceConstraint( /*0x8ae212*/
        v17++,
        (const void **)&v88,
        *((float *)this + 0x29),
        this + 4);
      v86 += 0x40; /*0x8ae22e*/
      v83 += 0x30; /*0x8ae232*/
    }
    while ( v17 < *((_DWORD *)this + 0x1E) ); /*0x8ae236*/
    v16 = HIDWORD(v88); /*0x8ae238*/
  }
  v18 = *((_DWORD *)this + 0x19); /*0x8ae240*/
  v19 = v89 & 0x3FFFFFFF; /*0x8ae243*/
  if ( (v89 & 0x3FFFFFFF) - v16 < v18 ) /*0x8ae24f*/
  {
    v20 = v16 + v18; /*0x8ae251*/
    if ( v19 < v20 ) /*0x8ae255*/
    {
      v21 = 2 * v19; /*0x8ae257*/
      if ( v20 >= 2 * v19 ) /*0x8ae25c*/
        v21 = v20; /*0x8ae25e*/
      sub_8A6E40((const void **)&v88, v21, 0x40); /*0x8ae268*/
      v16 = HIDWORD(v88); /*0x8ae26d*/
    }
  }
  v22 = *(_DWORD **)(v91 + 0x19C); /*0x8ae27b*/
  v23 = v16 + *((_DWORD *)this + 0x19); /*0x8ae281*/
  v95 = 0; /*0x8ae287*/
  v96 = 0; /*0x8ae28b*/
  v97 = 0x80000000; /*0x8ae28f*/
  if ( !v22 ) /*0x8ae297*/
    v22 = (_DWORD *)unk_BA7D9C; /*0x8ae299*/
  v24 = (char *)v22[8]; /*0x8ae29f*/
  v25 = &v24[0x10 * v23 + 0x10]; /*0x8ae2ab*/
  if ( (unsigned int)v25 > v22[0xB] ) /*0x8ae2b1*/
  {
    v26 = (char *)(*(int (__thiscall **)(_DWORD *, int))(*v22 + 0xC))(v22, 0x10 * (v23 + 1)); /*0x8ae2bd*/
  }
  else
  {
    v22[8] = v25; /*0x8ae2b3*/
    v26 = v24; /*0x8ae2b6*/
  }
  v27 = *(_DWORD **)(v91 + 0x19C); /*0x8ae2c8*/
  v97 = v23 | 0x80000000; /*0x8ae2d4*/
  v28 = *((_DWORD *)this + 0x19); /*0x8ae2d8*/
  v95 = v26; /*0x8ae2db*/
  v98 = v26; /*0x8ae2df*/
  v29 = HIDWORD(v88) + v28; /*0x8ae2e5*/
  v92 = 0; /*0x8ae2e9*/
  v93 = 0x80000000; /*0x8ae2f1*/
  if ( !v27 ) /*0x8ae2f9*/
    v27 = (_DWORD *)unk_BA7D9C; /*0x8ae2fb*/
  v30 = v27[8]; /*0x8ae301*/
  v31 = v30 + 0x10 * (v29 + 1); /*0x8ae30d*/
  if ( v31 > v27[0xB] ) /*0x8ae313*/
    v30 = (*(int (__thiscall **)(_DWORD *, int))(*v27 + 0xC))(v27, 0x10 * (v29 + 1)); /*0x8ae31d*/
  else
    v27[8] = v31; /*0x8ae315*/
  v102 = v88; /*0x8ae327*/
  v99 = 0; /*0x8ae331*/
  v100[0] = 0; /*0x8ae336*/
  v32 = *((_DWORD *)this + 0x1A); /*0x8ae33e*/
  v100[1] = *a2; /*0x8ae347*/
  v33 = v29 | 0x80000000; /*0x8ae350*/
  v34 = *((_DWORD *)this + 0x21) - 1; /*0x8ae358*/
  v100[3] = *(this + 4); /*0x8ae359*/
  LODWORD(v92) = v30; /*0x8ae36f*/
  v94 = v30; /*0x8ae373*/
  v35 = HIDWORD(v88); /*0x8ae377*/
  v93 = v33; /*0x8ae37f*/
  v101 = 0x3C8888893C888889LL; /*0x8ae38a*/
  v100[2] = _mm_shuffle_ps((__m128)v32, (__m128)v32, 0); /*0x8ae3a0*/
  v105 = v95; /*0x8ae3a8*/
  if ( v34 >= 0 ) /*0x8ae3af*/
  {
    do /*0x8ae3c9*/
    {
      v36 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * v34); /*0x8ae3ba*/
      (*(void (__thiscall **)(int, char *, __m128 *))(*(_DWORD *)v36 + 4))(v36, (char *)this + 0x74, v100); /*0x8ae3c5*/
      --v34; /*0x8ae3c8*/
    }
    while ( v34 >= 0 ); /*0x8ae3c9*/
    v33 = v93; /*0x8ae3cb*/
    v35 = HIDWORD(v102); /*0x8ae3cf*/
  }
  v37 = v33 & 0x3FFFFFFF; /*0x8ae3d6*/
  v38 = v35; /*0x8ae3de*/
  if ( v37 < v35 ) /*0x8ae3e0*/
  {
    v39 = 2 * v37; /*0x8ae3e2*/
    if ( v35 < v39 ) /*0x8ae3e6*/
      v35 = v39; /*0x8ae3e8*/
    sub_8A6E40((const void **)&v92, v35, 0x10); /*0x8ae3f2*/
    v35 = HIDWORD(v102); /*0x8ae3f7*/
  }
  HIDWORD(v92) = v38; /*0x8ae40d*/
  v40 = v35; /*0x8ae411*/
  if ( (v97 & 0x3FFFFFFF) < v35 ) /*0x8ae413*/
  {
    if ( v35 < 2 * (v97 & 0x3FFFFFFF) ) /*0x8ae419*/
      v35 = 2 * (v97 & 0x3FFFFFFF); /*0x8ae41b*/
    sub_8A6E40((const void **)&v95, v35, 0x10); /*0x8ae425*/
    v35 = HIDWORD(v102); /*0x8ae42a*/
  }
  v96 = v40; /*0x8ae440*/
  v41 = v35; /*0x8ae444*/
  if ( (v89 & 0x3FFFFFFF) < v35 ) /*0x8ae446*/
  {
    if ( v35 < 2 * (v89 & 0x3FFFFFFF) ) /*0x8ae44c*/
      v35 = 2 * (v89 & 0x3FFFFFFF); /*0x8ae44e*/
    sub_8A6E40((const void **)&v88, v35, 0x40); /*0x8ae458*/
    v35 = HIDWORD(v102); /*0x8ae45d*/
  }
  v42 = 0; /*0x8ae467*/
  HIDWORD(v88) = v41; /*0x8ae46b*/
  if ( v35 > 0 ) /*0x8ae46f*/
  {
    v43 = v99; /*0x8ae471*/
    v44 = 0; /*0x8ae476*/
    v45 = 0; /*0x8ae478*/
    do /*0x8ae4aa*/
    {
      *(_OWORD *)(v45 + v92) = *(_OWORD *)(v44 + v88 + 0x10); /*0x8ae48d*/
      *(__m128 *)(v44 + v88 + 0x10) = v43; /*0x8ae495*/
      ++v42; /*0x8ae4a1*/
      v45 += 0x10; /*0x8ae4a2*/
      v44 += 0x40; /*0x8ae4a5*/
    }
    while ( v42 < SHIDWORD(v102) ); /*0x8ae4aa*/
  }
  hkSurfaceConstraintUtil_CalcSupportMotion(v100, &v103);// Runs active-surface solver over projected support constraints; result is used only for support status 0/1/2 classification, not a mantle snap. /*0x8ae4b9*/
  v46 = v99; /*0x8ae4c1*/
  v47 = v104; /*0x8ae4c9*/
  a3[2] = v99;                                  // Initializes output support vectors: out+0x20 and out+0x10 start as zero before support classification. /*0x8ae4d1*/
  a3[1] = v46; /*0x8ae4d5*/
  v48 = *a2;                                    // Begin support-motion classification: a2 is the up/support basis vector passed by the controller; v104 is the surface-constraint solver output. /*0x8ae4d9*/
  if ( (_mm_movemask_ps( /*0x8ae50b*/
          _mm_cmplt_ps(
            _mm_shuffle_ps((__m128)0x3A83126Fu, (__m128)0x3A83126Fu, 0),
            _mm_and_ps(_mm_sub_ps(v47, *a2), (__m128)xmmword_A372D0)))
      & 7) == 0 )
    goto LABEL_58;                              // If the support-motion vector is effectively unchanged from the up vector (all xyz deltas <= 0.001), no usable support is reported. /*0x8ae50b*/
  v49 = _mm_mul_ps(v47, v47); /*0x8ae514*/
  if ( (float)(_mm_shuffle_ps(v49, v49, 0xAA).m128_f32[0] /*0x8ae544*/
             + (float)(_mm_shuffle_ps(v49, v49, 0x55).m128_f32[0] + v49.m128_f32[0])) < (double)flt_A37080 )
    goto LABEL_49;                              // If the support-motion vector length squared is below 0.001, treat support as accepted status 2 without slope rejection. /*0x8ae544*/
  v50 = *((float *)this + 0x29);                // Loads proxy+0xA4 max-slope cosine, computed as cos(cinfo+0x64) by 0x8AC1E0. /*0x8ae54d*/
  v51 = _mm_shuffle_ps(v49, v49, 0x55).m128_f32[0] + v49.m128_f32[0]; /*0x8ae557*/
  v52 = _mm_shuffle_ps(v49, v49, 0xAA); /*0x8ae55e*/
  v53 = v52; /*0x8ae562*/
  v53.m128_f32[0] = v52.m128_f32[0] + v51; /*0x8ae565*/
  v99 = v53; /*0x8ae569*/
  v99.m128_f32[0] = 1.0 / fsqrt(v52.m128_f32[0] + v51); /*0x8ae572*/
  v54 = (__m128)0x3F000000u; /*0x8ae59f*/
  v54.m128_f32[0] = (float)(0.5 * v99.m128_f32[0]) /*0x8ae5a9*/
                  * (float)(3.0 - (float)((float)((float)(v52.m128_f32[0] + v51) * v99.m128_f32[0]) * v99.m128_f32[0]));
  v104 = _mm_mul_ps(_mm_shuffle_ps(v54, v54, 0), v47); /*0x8ae5ba*/
  v55 = _mm_mul_ps(v104, v48); /*0x8ae5c2*/
  v84 = _mm_shuffle_ps(v55, v55, 0xAA).m128_f32[0] /*0x8ae5df*/
      + (float)(_mm_shuffle_ps(v55, v55, 0x55).m128_f32[0] + v55.m128_f32[0]);
  if ( v50 * v50 <= fConstant_1 - v84 * v84 )   // Support status slope decision: accepts status 2 when cos(maxSlope)^2 <= 1 - dot(normalizedSupportMotion, up)^2; otherwise status 1. Equivalent to support-motion tilt staying within the configured max slope relation. /*0x8ae5fe*/
LABEL_49:
    a3->m128_i32[0] = 2;                        // Support status 2: accepted support/ground result. 0x896000 can turn this into flag 0x100 when byte +0x250 is clear. /*0x8ae608*/
  else
    a3->m128_i32[0] = 1;                        // Support status 1: contact/support motion exists but fails the max-slope acceptance test. /*0x8ae600*/
  v87 = 0; /*0x8ae617*/
  if ( SHIDWORD(v102) <= 0 ) /*0x8ae61f*/
    goto LABEL_58; /*0x8ae61f*/
  v56 = (__m128 *)v92; /*0x8ae625*/
  v57 = (__m128 *)v88; /*0x8ae62d*/
  v58 = &v95[-v92]; /*0x8ae631*/
  v59 = HIDWORD(v102); /*0x8ae633*/
  do /*0x8ae6a2*/
  {                                             // Per-contact accumulation loop only considers contacts marked usable by the support solver.
    if ( v56->m128_i8[(_DWORD)v58] ) /*0x8ae635*/
    {
      v60 = _mm_mul_ps(*v57, *a2); /*0x8ae647*/
      if ( (float)(_mm_shuffle_ps(v60, v60, 0xAA).m128_f32[0] /*0x8ae677*/
                 + (float)(_mm_shuffle_ps(v60, v60, 0x55).m128_f32[0] + v60.m128_f32[0])) < (double)flt_A97C9C )// Only contacts whose normal has dot(contactNormal, up) < -0.08 are accumulated into output support normal/point. Havok contact normal orientation is opposite the controller up for supporting contacts.
      {
        a3[1] = _mm_add_ps(a3[1], *v57);        // Accumulates support normal into out+0x10 for accepted support candidates. /*0x8ae684*/
        a3[2] = _mm_add_ps(a3[2], *v56);        // Accumulates support point/vector into out+0x20 for accepted support candidates. /*0x8ae693*/
        ++v87; /*0x8ae697*/
      }
    }
    v57 += 4; /*0x8ae69b*/
    ++v56; /*0x8ae69e*/
    --v59; /*0x8ae6a1*/
  }
  while ( v59 ); /*0x8ae6a2*/
  if ( v87 > 0 ) /*0x8ae6aa*/
  {
    v61 = a3[1]; /*0x8ae6b4*/
    v62 = _mm_mul_ps(v61, v61); /*0x8ae6bb*/
    v63 = fConstant_1 / (double)v87; /*0x8ae6be*/
    v64 = _mm_shuffle_ps(v62, v62, 0x55).m128_f32[0] + v62.m128_f32[0]; /*0x8ae6cb*/
    v65 = _mm_shuffle_ps(v62, v62, 0xAA); /*0x8ae6d2*/
    v66 = v65; /*0x8ae6d6*/
    v66.m128_f32[0] = v65.m128_f32[0] + v64; /*0x8ae6d9*/
    v99 = v66; /*0x8ae6dd*/
    v99.m128_f32[0] = 1.0 / fsqrt(v65.m128_f32[0] + v64); /*0x8ae6e6*/
    v67 = (__m128)0x3F000000u; /*0x8ae713*/
    v67.m128_f32[0] = (float)(0.5 * v99.m128_f32[0]) /*0x8ae71d*/
                    * (float)(3.0 - (float)((float)((float)(v65.m128_f32[0] + v64) * v99.m128_f32[0]) * v99.m128_f32[0]));
    a3[1] = _mm_mul_ps(_mm_shuffle_ps(v67, v67, 0), v61);// Normalizes accumulated support normal at out+0x10. /*0x8ae72b*/
    *(float *)&v85 = v63; /*0x8ae733*/
    a3[2] = _mm_mul_ps(_mm_shuffle_ps((__m128)v85, (__m128)v85, 0), a3[2]);// Averages accumulated support point/vector at out+0x20 by accepted contact count. /*0x8ae747*/
  }
  else
  {
LABEL_58:
    a3->m128_i32[0] = 0;                        // Writes support status 0: no usable support contact. /*0x8ae74d*/
  }
  v68 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8ae760*/
  v69 = v91; /*0x8ae76f*/
  if ( *(_DWORD *)(v68 + 0x1A4) < *(_DWORD *)(v68 + 0x1A8) ) /*0x8ae773*/
  {
    v70 = *(_DWORD **)(v91 + 0x1A4); /*0x8ae775*/
    *v70 = "Et"; /*0x8ae77b*/
    v71 = __rdtsc(); /*0x8ae781*/
    v70[1] = v71; /*0x8ae78b*/
    *(_DWORD *)(v69 + 0x1A4) = v70 + 3; /*0x8ae791*/
  }
  v72 = *(_DWORD **)(v69 + 0x19C); /*0x8ae797*/
  v73 = v94; /*0x8ae79f*/
  if ( !v72 ) /*0x8ae7a3*/
    v72 = (_DWORD *)unk_BA7D9C; /*0x8ae7a5*/
  v74 = v94 == v72[0xA]; /*0x8ae7ab*/
  v72[8] = v94; /*0x8ae7ae*/
  if ( v74 ) /*0x8ae7b1*/
    (*(void (__thiscall **)(_DWORD *, int))(*v72 + 0x10))(v72, v73); /*0x8ae7b6*/
  if ( v93 >= 0 ) /*0x8ae7bf*/
  {
    v75 = *(_DWORD *)(v69 + 0x19C); /*0x8ae7c1*/
    if ( !v75 ) /*0x8ae7c9*/
      v75 = unk_BA7D9C; /*0x8ae7cb*/
    sub_8A75D0(v75, (_DWORD *)v92, 0x10 * v93, 0x14); /*0x8ae7e1*/
  }
  v76 = *(_DWORD **)(v69 + 0x19C); /*0x8ae7e6*/
  v77 = v98; /*0x8ae7ee*/
  if ( !v76 ) /*0x8ae7f2*/
    v76 = (_DWORD *)unk_BA7D9C; /*0x8ae7f4*/
  v74 = v98 == (char *)v76[0xA]; /*0x8ae7fa*/
  v76[8] = v98; /*0x8ae7fd*/
  if ( v74 ) /*0x8ae800*/
    (*(void (__thiscall **)(_DWORD *, char *))(*v76 + 0x10))(v76, v77); /*0x8ae805*/
  if ( v97 >= 0 ) /*0x8ae80e*/
  {
    v78 = *(_DWORD *)(v69 + 0x19C); /*0x8ae810*/
    if ( !v78 ) /*0x8ae818*/
      v78 = unk_BA7D9C; /*0x8ae81a*/
    sub_8A75D0(v78, v95, 0x10 * v97, 0x14); /*0x8ae830*/
  }
  v79 = *(_DWORD **)(v69 + 0x19C); /*0x8ae835*/
  v80 = v90; /*0x8ae83d*/
  if ( !v79 ) /*0x8ae841*/
    v79 = (_DWORD *)unk_BA7D9C; /*0x8ae843*/
  v74 = v90 == v79[0xA]; /*0x8ae849*/
  v79[8] = v90; /*0x8ae84c*/
  if ( v74 ) /*0x8ae84f*/
    (*(void (__thiscall **)(_DWORD *, int))(*v79 + 0x10))(v79, v80); /*0x8ae854*/
  result = v89; /*0x8ae857*/
  if ( v89 >= 0 ) /*0x8ae85d*/
  {
    v82 = *(_DWORD *)(v69 + 0x19C); /*0x8ae85f*/
    if ( !v82 ) /*0x8ae867*/
      v82 = unk_BA7D9C; /*0x8ae869*/
    return sub_8A75D0(v82, (_DWORD *)v88, v89 << 6, 0x14); /*0x8ae87f*/
  }
  return result; /*0x8ae884*/
}
