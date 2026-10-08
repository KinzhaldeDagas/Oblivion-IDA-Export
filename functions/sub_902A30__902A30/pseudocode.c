int __thiscall sub_902A30(__m128 *this, int *a2, int *a3, unsigned int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int *v11; // edi
  __m128 *v12; // eax
  __m128 *v13; // ecx
  int v14; // esi
  double v15; // st7
  double v16; // st6
  __m128 v17; // xmm0
  _DWORD *v18; // ecx
  int v19; // eax
  _DWORD *v20; // ecx
  unsigned __int64 v21; // rax
  __int16 v22; // ax
  int v23; // eax
  __m128 *v24; // ecx
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  float v28; // ecx
  __int128 v29; // xmm0
  int v30; // edx
  void *v31; // eax
  __m128 v32; // xmm0
  _DWORD *v33; // ecx
  int v34; // eax
  _DWORD *v35; // ecx
  unsigned __int64 v36; // rax
  float v37; // edx
  int v38; // eax
  double v39; // st7
  int v40; // ecx
  int v41; // edx
  int v42; // ecx
  int v43; // edx
  int j; // ecx
  float v45; // eax
  int v46; // edx
  __int128 v47; // xmm0
  int v48; // ecx
  void *v49; // eax
  __m128 v50; // xmm0
  double v51; // st7
  __m128 *v52; // edx
  int v53; // edi
  _DWORD *v54; // eax
  unsigned int v55; // edx
  int *v56; // ecx
  int i; // eax
  _DWORD *v58; // eax
  bool v59; // zf
  _DWORD *v60; // ecx
  unsigned __int64 v61; // rax
  int v62; // esi
  _DWORD *v63; // ecx
  __m128 *v65; // [esp-8h] [ebp-11A8h]
  __m128 *v66; // [esp-4h] [ebp-11A4h]
  int v67; // [esp+0h] [ebp-11A0h]
  unsigned int v68; // [esp+14h] [ebp-118Ch]
  unsigned int v69; // [esp+14h] [ebp-118Ch]
  int v70; // [esp+14h] [ebp-118Ch]
  int v71; // [esp+14h] [ebp-118Ch]
  int v72; // [esp+14h] [ebp-118Ch]
  int v73; // [esp+14h] [ebp-118Ch]
  int *v74; // [esp+18h] [ebp-1188h]
  int v75; // [esp+1Ch] [ebp-1184h]
  int v76; // [esp+20h] [ebp-1180h]
  __m128 v77; // [esp+30h] [ebp-1170h]
  _DWORD v78[4]; // [esp+4Ch] [ebp-1154h] BYREF
  void **v79; // [esp+5Ch] [ebp-1144h] BYREF
  __int16 v80; // [esp+62h] [ebp-113Eh]
  int v81; // [esp+64h] [ebp-113Ch]
  float v82; // [esp+68h] [ebp-1138h]
  int v83; // [esp+6Ch] [ebp-1134h]
  int v84; // [esp+70h] [ebp-1130h]
  void **v85; // [esp+74h] [ebp-112Ch] BYREF
  __int16 v86; // [esp+7Ah] [ebp-1126h]
  int v87; // [esp+7Ch] [ebp-1124h]
  int v88; // [esp+80h] [ebp-1120h]
  int v89; // [esp+84h] [ebp-111Ch]
  int v90; // [esp+88h] [ebp-1118h]
  _DWORD v91[5]; // [esp+8Ch] [ebp-1114h] BYREF
  __m128 v92; // [esp+A0h] [ebp-1100h] BYREF
  __m128 v93[6]; // [esp+B0h] [ebp-10F0h] BYREF
  __m128 v94; // [esp+110h] [ebp-1090h] BYREF
  __m128 v95[4]; // [esp+120h] [ebp-1080h] BYREF
  int v96; // [esp+160h] [ebp-1040h] BYREF
  _BYTE v97[4104]; // [esp+164h] [ebp-103Ch] BYREF
  __int128 v98; // [esp+1170h] [ebp-30h]
  __int128 v99; // [esp+1180h] [ebp-20h]
  float v100; // [esp+1190h] [ebp-10h]
  int v101; // [esp+1194h] [ebp-Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x902a49*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x902a50*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x902a61*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x902a63*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x902a65*/
    *v9 = "LtCvxLst"; /*0x902a6b*/
    v9[3] = &off_A9BC80; /*0x902a71*/
    v10 = __rdtsc(); /*0x902a78*/
    v9[1] = v10; /*0x902a82*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4; /*0x902a88*/
  }
  v11 = a3; /*0x902a8e*/
  v12 = (__m128 *)a3[2]; /*0x902a96*/
  v75 = *a3; /*0x902aa1*/
  v13 = (__m128 *)a2[2]; /*0x902aa5*/
  v14 = a5; /*0x902aae*/
  v15 = *(float *)(a4 + 0x18) * v13[5].m128_f32[3]; /*0x902aba*/
  v16 = *(float *)(a4 + 0x18) * v12[5].m128_f32[3]; /*0x902abc*/
  *(float *)&v68 = v15; /*0x902ac1*/
  v17 = (__m128)v68; /*0x902ac5*/
  *(float *)&v69 = v16; /*0x902acb*/
  v77 = _mm_add_ps( /*0x902b13*/
          _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), _mm_sub_ps(v13[4], v13[5])),
          _mm_mul_ps(_mm_shuffle_ps((__m128)v69, (__m128)v69, 0), _mm_sub_ps(v12[5], v12[4])));
  v77.m128_f32[3] = v13[0xA].m128_f32[0] * v13[9].m128_f32[3] * v15 + v12[0xA].m128_f32[0] * v12[9].m128_f32[3] * v16; /*0x902b21*/
  sub_901C90(&v96, a5); /*0x902b29*/
  if ( *((_BYTE *)this + 0x84) ) /*0x902b2e*/
    goto LABEL_11; /*0x902b36*/
  while ( 1 ) /*0x902b3c*/
  {
    v18 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x902b3c*/
    if ( *(_DWORD *)(v18[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v18[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x902b57*/
    {
      v19 = v18[MEMORY[0xBA9DE4]]; /*0x902b5e*/
      v20 = *(_DWORD **)(v19 + 0x1A4); /*0x902b61*/
      v70 = v19; /*0x902b67*/
      *v20 = "StStream"; /*0x902b6b*/
      v21 = __rdtsc(); /*0x902b71*/
      v20[1] = v21; /*0x902b7f*/
      *(_DWORD *)(v70 + 0x1A4) = v20 + 3; /*0x902b85*/
    }
    v22 = *((_WORD *)this + 0x43); /*0x902b8d*/
    *((_WORD *)this + 0x43) = v22 - 1; /*0x902b9a*/
    if ( v22 >= 0 ) /*0x902ba1*/
      goto LABEL_29; /*0x902ba1*/
    *((_WORD *)this + 0x43) = 0x19; /*0x902bab*/
    v23 = *(_DWORD *)(v75 + 0x14); /*0x902bb7*/
    v24 = (__m128 *)v11[2]; /*0x902bba*/
    v89 = *(_DWORD *)(v75 + 0x10); /*0x902bbd*/
    v90 = v23; /*0x902bc7*/
    v65 = (__m128 *)a2[2]; /*0x902bd2*/
    v86 = 1; /*0x902bda*/
    v87 = 0; /*0x902be4*/
    v88 = 0; /*0x902bef*/
    v85 = (void **)&off_A9BB94; /*0x902bfa*/
    sub_8B1FF0(v95, v65, v24); /*0x902c02*/
    v25 = *a2; /*0x902c0a*/
    v91[3] = &v85; /*0x902c10*/
    v26 = a2[2]; /*0x902c17*/
    v91[2] = v25; /*0x902c1d*/
    v91[1] = v26; /*0x902c2b*/
    v91[0] = v95; /*0x902c32*/
    v91[4] = *(_DWORD *)(a4 + 8); /*0x902c47*/
    if ( !sub_93D4A0((int)v91, &this->m128_i8[0xC], this + 2, &v94) ) /*0x902c65*/
    {
      *((float *)this + 0x10) = -*((float *)this + 0xB); /*0x902f7d*/
LABEL_29:
      v50 = _mm_mul_ps(v77, v77); /*0x902f80*/
      v51 = *((float *)this + 0x10) /*0x902fc6*/
          - fsqrt(
              _mm_shuffle_ps(v50, v50, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v50, v50, 0x55).m128_f32[0] + v50.m128_f32[0]));
      v92.m128_i32[2] = a4; /*0x902fcd*/
      *((float *)this + 0x10) = v51; /*0x902fd4*/
      v52 = (__m128 *)a2[2]; /*0x902fda*/
      v92.m128_i32[3] = this->m128_i32[2]; /*0x902fdd*/
      v66 = (__m128 *)v11[2]; /*0x902fe7*/
      v92.m128_u64[0] = __PAIR64__((unsigned int)v11, (unsigned int)a2); /*0x902ff0*/
      v93[5] = v77; /*0x902ffe*/
      sub_8B1FF0(v93, v52, v66); /*0x903006*/
      v53 = *(_DWORD *)(v75 + 0x14); /*0x90300f*/
      v76 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x903022*/
      v54 = *(_DWORD **)(v76 + 0x19C); /*0x903026*/
      if ( !v54 ) /*0x90302e*/
        v54 = (_DWORD *)unk_BA7D9C; /*0x903030*/
      v55 = (4 * v53 + 0x14) & 0xFFFFFFF0; /*0x90303f*/
      v74 = (int *)v54[8]; /*0x903042*/
      if ( (unsigned int)v74 + v55 > v54[0xB] ) /*0x90304b*/
      {
        v73 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v54 + 0xC))(v54, (4 * v53 + 0x14) & 0xFFFFFFF0); /*0x90306a*/
        v56 = (int *)v73; /*0x90306e*/
      }
      else
      {
        v54[8] = (char *)v74 + v55; /*0x90304d*/
        v56 = v74; /*0x903050*/
        v73 = (int)v74; /*0x903054*/
      }
      for ( i = 0; i < v53; ++i ) /*0x903074*/
        v56[i] = i; /*0x903076*/
      v56[v53] = 0xFFFFFFFF; /*0x903085*/
      sub_934DC0((int ***)this + 0xC, &v92, (_BYTE *)v75, v56, v53, v14); /*0x903099*/
      v58 = *(_DWORD **)(v76 + 0x19C); /*0x9030a2*/
      if ( !v58 ) /*0x9030ad*/
        v58 = (_DWORD *)unk_BA7D9C; /*0x9030af*/
      v59 = v73 == v58[0xA]; /*0x9030b8*/
      v58[8] = v73; /*0x9030bb*/
      if ( v59 ) /*0x9030be*/
        (*(void (__thiscall **)(_DWORD *, int))(*v58 + 0x10))(v58, v73); /*0x9030c5*/
      goto LABEL_40; /*0x9030c5*/
    }
    sub_934100((int **)this + 0xC, *((_DWORD *)this + 0x20), this->m128_i32[2], v67); /*0x902c7a*/
    v27 = v96; /*0x902c7f*/
    v28 = v100; /*0x902c86*/
    v29 = v98; /*0x902c8d*/
    v30 = v101; /*0x902c95*/
    *((_DWORD *)this + 0xC) = 0; /*0x902c9c*/
    *((_BYTE *)this + 0x84) = 1; /*0x902ca3*/
    *(_DWORD *)v14 = v27; /*0x902caa*/
    *(float *)(v14 + 0x3034) = v28; /*0x902cac*/
    *(_OWORD *)(v14 + 0x10) = v29; /*0x902cb2*/
    *(__int128 *)(v14 + 0x20) = v99; /*0x902cbe*/
    v31 = *(void **)(v14 + 0x3040); /*0x902cc2*/
    *(_DWORD *)(v14 + 0x3030) = v30; /*0x902ccd*/
    if ( v31 ) /*0x902cd3*/
    {
      qmemcpy(v31, v97, 0x1008u); /*0x902ce3*/
      v11 = a3; /*0x902ce5*/
      v14 = a5; /*0x902ce8*/
    }
    v85 = &hkBaseObject::`vftable'; /*0x902ceb*/
LABEL_11:
    if ( *((float *)this + 0xB) > (double)*(float *)(a4 + 8) ) /*0x902d01*/
    {
      v32 = _mm_mul_ps(v77, *(this + 2)); /*0x902d12*/
      *((float *)this + 0xB) = *((float *)this + 0xB) /*0x902d41*/
                             - (float)((float)(_mm_shuffle_ps(v32, v32, 0x55).m128_f32[0] + v32.m128_f32[0])
                                     + (float)(_mm_shuffle_ps(v32, v32, 0xAA).m128_f32[0]
                                             + _mm_shuffle_ps(v77, v77, 0xFF).m128_f32[0]));
      if ( *((float *)this + 0xB) > (double)*(float *)(a4 + 8) ) /*0x902d4f*/
      {
        if ( *((_BYTE *)this + 0x32) ) /*0x902f58*/
          sub_939B60((_BYTE *)this + 0x30, this->m128_i32[2]); /*0x902f6b*/
        goto LABEL_40; /*0x902f73*/
      }
    }
    v33 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x902d5b*/
    if ( *(_DWORD *)(v33[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v33[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x902d71*/
    {
      v34 = v33[MEMORY[0xBA9DE4]]; /*0x902d78*/
      v35 = *(_DWORD **)(v34 + 0x1A4); /*0x902d7b*/
      v71 = v34; /*0x902d81*/
      *v35 = "StGsk"; /*0x902d85*/
      v36 = __rdtsc(); /*0x902d8b*/
      v35[1] = v36; /*0x902d99*/
      *(_DWORD *)(v71 + 0x1A4) = v35 + 3; /*0x902d9f*/
    }
    v37 = flt_B2FFE4; /*0x902da8*/
    v38 = *v11; /*0x902dae*/
    v78[2] = v11[2]; /*0x902db0*/
    v82 = v37; /*0x902db4*/
    v78[3] = v11; /*0x902db8*/
    v80 = 1; /*0x902dbc*/
    v81 = 0; /*0x902dc3*/
    v79 = (void **)&off_A9BB94; /*0x902dcb*/
    v39 = *(float *)(**(_DWORD **)(v38 + 0x10) + 0xC); /*0x902dd8*/
    v40 = v11[1]; /*0x902ddb*/
    v83 = *(_DWORD *)(v38 + 0x10); /*0x902dde*/
    v41 = *(_DWORD *)(v38 + 0x14); /*0x902de2*/
    v82 = v39; /*0x902de5*/
    v84 = v41; /*0x902dea*/
    v78[0] = &v79; /*0x902df5*/
    v78[1] = v40; /*0x902dfa*/
    sub_8FFC70(this, __PAIR64__(v78, (unsigned int)a2), a4, (__m128 **)v14); /*0x902e09*/
    if ( *(float *)(v14 + 0x3034) == v100 ) /*0x902e22*/
      break; /*0x902e22*/
LABEL_21:
    sub_939B60((_BYTE *)this + 0x30, this->m128_i32[2]); /*0x902ea6*/
    *((_BYTE *)this + 0x84) = 0; /*0x902ebb*/
    if ( this != (__m128 *)0xFFFFFFD0 ) /*0x902ec2*/
    {
      *((_DWORD *)this + 0xC) = (char *)this + 0x3C; /*0x902ec7*/
      *((_DWORD *)this + 0xD) = 0; /*0x902ec9*/
      *((_DWORD *)this + 0xE) = 0x80000001; /*0x902ed0*/
    }
    sub_934270((int)(this + 3)); /*0x902ed8*/
    v45 = v100; /*0x902edd*/
    v46 = v96; /*0x902ee4*/
    v47 = v98; /*0x902eeb*/
    v48 = v101; /*0x902ef3*/
    *((_WORD *)this + 0x43) = 0x19; /*0x902efa*/
    *((_DWORD *)this + 0x10) = 0; /*0x902f03*/
    *(float *)(v14 + 0x3034) = v45; /*0x902f0a*/
    *(_DWORD *)v14 = v46; /*0x902f10*/
    *(_OWORD *)(v14 + 0x10) = v47; /*0x902f12*/
    *(__int128 *)(v14 + 0x20) = v99; /*0x902f1e*/
    v49 = *(void **)(v14 + 0x3040); /*0x902f22*/
    *(_DWORD *)(v14 + 0x3030) = v48; /*0x902f2d*/
    if ( v49 ) /*0x902f33*/
    {
      qmemcpy(v49, v97, 0x1008u); /*0x902f43*/
      v11 = a3; /*0x902f45*/
      v14 = a5; /*0x902f48*/
    }
    v79 = &hkBaseObject::`vftable'; /*0x902f4b*/
  }
  if ( *((_BYTE *)this + 0x32) ) /*0x902e28*/
  {
    v42 = *((unsigned __int8 *)this + 0x34); /*0x902e57*/
    v72 = v42 + 1; /*0x902e5e*/
    v43 = v42 + *((unsigned __int8 *)this + 0x35); /*0x902e66*/
    for ( j = v42 + 1; j < v43; j = ++v72 ) /*0x902e68*/
    {
      if ( (*(_WORD *)((char *)this /*0x902e99*/
                     + 8 * *((unsigned __int8 *)this + 0x32)
                     + (*((unsigned __int8 *)this + *((unsigned __int8 *)this + 0x34) + 0x38) >> 3)
                     + 0x34)
          & 0xFF00) != (*(_WORD *)((char *)this
                                 + 8 * *((unsigned __int8 *)this + 0x32)
                                 + (*((unsigned __int8 *)this + j + 0x38) >> 3)
                                 + 0x34)
                      & 0xFF00) )
        goto LABEL_21; /*0x902e99*/
    }
  }
LABEL_40:
  v60 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9030c8*/
  LODWORD(v61) = v60[MEMORY[0xBA9DE4]]; /*0x9030d5*/
  if ( *(_DWORD *)(v61 + 0x1A4) < *(_DWORD *)(v61 + 0x1A8) ) /*0x9030e4*/
  {
    v62 = v60[MEMORY[0xBA9DE4]]; /*0x9030e6*/
    v63 = *(_DWORD **)(v61 + 0x1A4); /*0x9030e8*/
    *v63 = "lt"; /*0x9030ee*/
    v61 = __rdtsc(); /*0x9030f4*/
    v63[1] = v61; /*0x9030fe*/
    *(_DWORD *)(v62 + 0x1A4) = v63 + 3; /*0x903104*/
  }
  return v61; /*0x90310a*/
}
