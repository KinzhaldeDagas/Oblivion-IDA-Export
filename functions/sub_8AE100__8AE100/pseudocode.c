int __thiscall sub_8AE100(__m128 *this, __m128 *a2, __m128 *a3, int a4)
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
  _OWORD v100[4]; // [esp+70h] [ebp-80h] BYREF
  __int64 v101; // [esp+B0h] [ebp-40h]
  __int64 v102; // [esp+B8h] [ebp-38h]
  __m128 v103; // [esp+C0h] [ebp-30h] BYREF
  __m128 v104; // [esp+D0h] [ebp-20h]
  char *v105; // [esp+E4h] [ebp-Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtcheckSupport";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  sub_8AD070(this->m128_f32, a4);
  v10 = *((_DWORD *)this + 0x19) + *((_DWORD *)this + 0x1E) + 0xA;
  v11 = ThreadLocalStoragePointer[TlsIndex];
  v12 = *(_DWORD **)(v11 + 0x19C);
  v88 = 0;
  v89 = 0x80000000;
  v91 = v11;
  if ( !v12 )
    v12 = (_DWORD *)dword_BA7D9C;
  v13 = v12[8];
  v14 = v13 + (((v10 << 6) + 0x10) & 0xFFFFFFF0);
  if ( v14 > v12[0xB] )
  {
    v15 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v12 + 0xC))(v12, ((v10 << 6) + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v12[8] = v14;
    v15 = v13;
  }
  LODWORD(v88) = v15;
  v90 = v15;
  v16 = *((_DWORD *)this + 0x1E);
  v17 = 0;
  v89 = v10 | 0x80000000;
  HIDWORD(v88) = v16;
  if ( v16 > 0 )
  {
    v83 = 0;
    v86 = 0;
    do
    {
      (*(void (__thiscall **)(__m128 *, int, _DWORD, _DWORD))(this->m128_i32[0] + 0xC))(
        this,
        v83 + *((_DWORD *)this + 0x1D),
        v88 + v86,
        0);
      sub_8AC3C0(v17++, (const void **)&v88, *((float *)this + 0x29), this + 4);
      v86 += 0x40;
      v83 += 0x30;
    }
    while ( v17 < *((_DWORD *)this + 0x1E) );
    v16 = HIDWORD(v88);
  }
  v18 = *((_DWORD *)this + 0x19);
  v19 = v89 & 0x3FFFFFFF;
  if ( (v89 & 0x3FFFFFFF) - v16 < v18 )
  {
    v20 = v16 + v18;
    if ( v19 < v20 )
    {
      v21 = 2 * v19;
      if ( v20 >= 2 * v19 )
        v21 = v20;
      sub_8A6E40((const void **)&v88, v21, 0x40);
      v16 = HIDWORD(v88);
    }
  }
  v22 = *(_DWORD **)(v91 + 0x19C);
  v23 = v16 + *((_DWORD *)this + 0x19);
  v95 = 0;
  v96 = 0;
  v97 = 0x80000000;
  if ( !v22 )
    v22 = (_DWORD *)dword_BA7D9C;
  v24 = (char *)v22[8];
  v25 = &v24[0x10 * v23 + 0x10];
  if ( (unsigned int)v25 > v22[0xB] )
  {
    v26 = (char *)(*(int (__thiscall **)(_DWORD *, int))(*v22 + 0xC))(v22, 0x10 * (v23 + 1));
  }
  else
  {
    v22[8] = v25;
    v26 = v24;
  }
  v27 = *(_DWORD **)(v91 + 0x19C);
  v97 = v23 | 0x80000000;
  v28 = *((_DWORD *)this + 0x19);
  v95 = v26;
  v98 = v26;
  v29 = HIDWORD(v88) + v28;
  v92 = 0;
  v93 = 0x80000000;
  if ( !v27 )
    v27 = (_DWORD *)dword_BA7D9C;
  v30 = v27[8];
  v31 = v30 + 0x10 * (v29 + 1);
  if ( v31 > v27[0xB] )
    v30 = (*(int (__thiscall **)(_DWORD *, int))(*v27 + 0xC))(v27, 0x10 * (v29 + 1));
  else
    v27[8] = v31;
  v102 = v88;
  v99 = 0;
  v100[0] = 0;
  v32 = *((_DWORD *)this + 0x1A);
  v100[1] = *a2;
  v33 = v29 | 0x80000000;
  v34 = *((_DWORD *)this + 0x21) - 1;
  v100[3] = *(this + 4);
  LODWORD(v92) = v30;
  v94 = v30;
  v35 = HIDWORD(v88);
  v93 = v33;
  v101 = 0x3C8888893C888889LL;
  v100[2] = _mm_shuffle_ps((__m128)v32, (__m128)v32, 0);
  v105 = v95;
  if ( v34 >= 0 )
  {
    do
    {
      v36 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * v34);
      (*(void (__thiscall **)(int, char *, _OWORD *))(*(_DWORD *)v36 + 4))(v36, (char *)this + 0x74, v100);
      --v34;
    }
    while ( v34 >= 0 );
    v33 = v93;
    v35 = HIDWORD(v102);
  }
  v37 = v33 & 0x3FFFFFFF;
  v38 = v35;
  if ( v37 < v35 )
  {
    v39 = 2 * v37;
    if ( v35 < v39 )
      v35 = v39;
    sub_8A6E40((const void **)&v92, v35, 0x10);
    v35 = HIDWORD(v102);
  }
  HIDWORD(v92) = v38;
  v40 = v35;
  if ( (v97 & 0x3FFFFFFF) < v35 )
  {
    if ( v35 < 2 * (v97 & 0x3FFFFFFF) )
      v35 = 2 * (v97 & 0x3FFFFFFF);
    sub_8A6E40((const void **)&v95, v35, 0x10);
    v35 = HIDWORD(v102);
  }
  v96 = v40;
  v41 = v35;
  if ( (v89 & 0x3FFFFFFF) < v35 )
  {
    if ( v35 < 2 * (v89 & 0x3FFFFFFF) )
      v35 = 2 * (v89 & 0x3FFFFFFF);
    sub_8A6E40((const void **)&v88, v35, 0x40);
    v35 = HIDWORD(v102);
  }
  v42 = 0;
  HIDWORD(v88) = v41;
  if ( v35 > 0 )
  {
    v43 = v99;
    v44 = 0;
    v45 = 0;
    do
    {
      *(_OWORD *)(v45 + v92) = *(_OWORD *)(v44 + v88 + 0x10);
      *(__m128 *)(v44 + v88 + 0x10) = v43;
      ++v42;
      v45 += 0x10;
      v44 += 0x40;
    }
    while ( v42 < SHIDWORD(v102) );
  }
  sub_8EC790((int)v100, &v103);
  v46 = v99;
  v47 = v104;
  a3[2] = v99;
  a3[1] = v46;
  v48 = *a2;
  if ( (_mm_movemask_ps(
          _mm_cmplt_ps(
            _mm_shuffle_ps((__m128)0x3A83126Fu, (__m128)0x3A83126Fu, 0),
            _mm_and_ps(_mm_sub_ps(v47, *a2), (__m128)xmmword_A372D0)))
      & 7) == 0 )
    goto LABEL_58;
  v49 = _mm_mul_ps(v47, v47);
  if ( (float)(_mm_shuffle_ps(v49, v49, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v49, v49, 0x55).m128_f32[0] + v49.m128_f32[0])) < (double)flt_A37080 )
    goto LABEL_49;
  v50 = *((float *)this + 0x29);
  v51 = _mm_shuffle_ps(v49, v49, 0x55).m128_f32[0] + v49.m128_f32[0];
  v52 = _mm_shuffle_ps(v49, v49, 0xAA);
  v53 = v52;
  v53.m128_f32[0] = v52.m128_f32[0] + v51;
  v99 = v53;
  v99.m128_f32[0] = 1.0 / fsqrt(v52.m128_f32[0] + v51);
  v54 = (__m128)0x3F000000u;
  v54.m128_f32[0] = (float)(0.5 * v99.m128_f32[0])
                  * (float)(3.0 - (float)((float)((float)(v52.m128_f32[0] + v51) * v99.m128_f32[0]) * v99.m128_f32[0]));
  v104 = _mm_mul_ps(_mm_shuffle_ps(v54, v54, 0), v47);
  v55 = _mm_mul_ps(v104, v48);
  v84 = _mm_shuffle_ps(v55, v55, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v55, v55, 0x55).m128_f32[0] + v55.m128_f32[0]);
  if ( v50 * v50 <= fConstant_1 - v84 * v84 )
LABEL_49:
    a3->m128_i32[0] = 2;
  else
    a3->m128_i32[0] = 1;
  v87 = 0;
  if ( SHIDWORD(v102) <= 0 )
    goto LABEL_58;
  v56 = (__m128 *)v92;
  v57 = (__m128 *)v88;
  v58 = &v95[-v92];
  v59 = HIDWORD(v102);
  do
  {
    if ( v56->m128_i8[(_DWORD)v58] )
    {
      v60 = _mm_mul_ps(*v57, *a2);
      if ( (float)(_mm_shuffle_ps(v60, v60, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v60, v60, 0x55).m128_f32[0] + v60.m128_f32[0])) < (double)flt_A97C9C )
      {
        a3[1] = _mm_add_ps(a3[1], *v57);
        a3[2] = _mm_add_ps(a3[2], *v56);
        ++v87;
      }
    }
    v57 += 4;
    ++v56;
    --v59;
  }
  while ( v59 );
  if ( v87 > 0 )
  {
    v61 = a3[1];
    v62 = _mm_mul_ps(v61, v61);
    v63 = fConstant_1 / (double)v87;
    v64 = _mm_shuffle_ps(v62, v62, 0x55).m128_f32[0] + v62.m128_f32[0];
    v65 = _mm_shuffle_ps(v62, v62, 0xAA);
    v66 = v65;
    v66.m128_f32[0] = v65.m128_f32[0] + v64;
    v99 = v66;
    v99.m128_f32[0] = 1.0 / fsqrt(v65.m128_f32[0] + v64);
    v67 = (__m128)0x3F000000u;
    v67.m128_f32[0] = (float)(0.5 * v99.m128_f32[0])
                    * (float)(3.0 - (float)((float)((float)(v65.m128_f32[0] + v64) * v99.m128_f32[0]) * v99.m128_f32[0]));
    a3[1] = _mm_mul_ps(_mm_shuffle_ps(v67, v67, 0), v61);
    *(float *)&v85 = v63;
    a3[2] = _mm_mul_ps(_mm_shuffle_ps((__m128)v85, (__m128)v85, 0), a3[2]);
  }
  else
  {
LABEL_58:
    a3->m128_i32[0] = 0;
  }
  v68 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v69 = v91;
  if ( *(_DWORD *)(v68 + 0x1A4) < *(_DWORD *)(v68 + 0x1A8) )
  {
    v70 = *(_DWORD **)(v91 + 0x1A4);
    *v70 = "Et";
    v71 = __rdtsc();
    v70[1] = v71;
    *(_DWORD *)(v69 + 0x1A4) = v70 + 3;
  }
  v72 = *(_DWORD **)(v69 + 0x19C);
  v73 = v94;
  if ( !v72 )
    v72 = (_DWORD *)dword_BA7D9C;
  v74 = v94 == v72[0xA];
  v72[8] = v94;
  if ( v74 )
    (*(void (__thiscall **)(_DWORD *, int))(*v72 + 0x10))(v72, v73);
  if ( v93 >= 0 )
  {
    v75 = *(_DWORD *)(v69 + 0x19C);
    if ( !v75 )
      v75 = dword_BA7D9C;
    sub_8A75D0(v75, (_DWORD *)v92, 0x10 * v93, 0x14);
  }
  v76 = *(_DWORD **)(v69 + 0x19C);
  v77 = v98;
  if ( !v76 )
    v76 = (_DWORD *)dword_BA7D9C;
  v74 = v98 == (char *)v76[0xA];
  v76[8] = v98;
  if ( v74 )
    (*(void (__thiscall **)(_DWORD *, char *))(*v76 + 0x10))(v76, v77);
  if ( v97 >= 0 )
  {
    v78 = *(_DWORD *)(v69 + 0x19C);
    if ( !v78 )
      v78 = dword_BA7D9C;
    sub_8A75D0(v78, v95, 0x10 * v97, 0x14);
  }
  v79 = *(_DWORD **)(v69 + 0x19C);
  v80 = v90;
  if ( !v79 )
    v79 = (_DWORD *)dword_BA7D9C;
  v74 = v90 == v79[0xA];
  v79[8] = v90;
  if ( v74 )
    (*(void (__thiscall **)(_DWORD *, int))(*v79 + 0x10))(v79, v80);
  result = v89;
  if ( v89 >= 0 )
  {
    v82 = *(_DWORD *)(v69 + 0x19C);
    if ( !v82 )
      v82 = dword_BA7D9C;
    return sub_8A75D0(v82, (_DWORD *)v88, v89 << 6, 0x14);
  }
  return result;
}
