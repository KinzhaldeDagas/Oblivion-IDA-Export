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
  int v56; // ecx
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
  int v74; // [esp+18h] [ebp-1188h]
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
  _DWORD v92[4]; // [esp+A0h] [ebp-1100h] BYREF
  __m128 v93[6]; // [esp+B0h] [ebp-10F0h] BYREF
  __m128 v94; // [esp+110h] [ebp-1090h] BYREF
  __m128 v95[4]; // [esp+120h] [ebp-1080h] BYREF
  int v96; // [esp+160h] [ebp-1040h] BYREF
  _BYTE v97[4104]; // [esp+164h] [ebp-103Ch] BYREF
  __int128 v98; // [esp+1170h] [ebp-30h]
  __int128 v99; // [esp+1180h] [ebp-20h]
  float v100; // [esp+1190h] [ebp-10h]
  int v101; // [esp+1194h] [ebp-Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "LtCvxLst";
    v9[3] = &off_A9BC80;
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4;
  }
  v11 = a3;
  v12 = (__m128 *)a3[2];
  v75 = *a3;
  v13 = (__m128 *)a2[2];
  v14 = a5;
  v15 = *(float *)(a4 + 0x18) * v13[5].m128_f32[3];
  v16 = *(float *)(a4 + 0x18) * v12[5].m128_f32[3];
  *(float *)&v68 = v15;
  v17 = (__m128)v68;
  *(float *)&v69 = v16;
  v77 = _mm_add_ps(
          _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), _mm_sub_ps(v13[4], v13[5])),
          _mm_mul_ps(_mm_shuffle_ps((__m128)v69, (__m128)v69, 0), _mm_sub_ps(v12[5], v12[4])));
  v77.m128_f32[3] = v13[0xA].m128_f32[0] * v13[9].m128_f32[3] * v15 + v12[0xA].m128_f32[0] * v12[9].m128_f32[3] * v16;
  sub_901C90(&v96, a5);
  if ( *((_BYTE *)this + 0x84) )
    goto LABEL_11;
  while ( 1 )
  {
    v18 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( *(_DWORD *)(v18[TlsIndex] + 0x1A4) < *(_DWORD *)(v18[TlsIndex] + 0x1A8) )
    {
      v19 = v18[TlsIndex];
      v20 = *(_DWORD **)(v19 + 0x1A4);
      v70 = v19;
      *v20 = "StStream";
      v21 = __rdtsc();
      v20[1] = v21;
      *(_DWORD *)(v70 + 0x1A4) = v20 + 3;
    }
    v22 = *((_WORD *)this + 0x43);
    *((_WORD *)this + 0x43) = v22 - 1;
    if ( v22 >= 0 )
      goto LABEL_29;
    *((_WORD *)this + 0x43) = 0x19;
    v23 = *(_DWORD *)(v75 + 0x14);
    v24 = (__m128 *)v11[2];
    v89 = *(_DWORD *)(v75 + 0x10);
    v90 = v23;
    v65 = (__m128 *)a2[2];
    v86 = 1;
    v87 = 0;
    v88 = 0;
    v85 = (void **)&off_A9BB94;
    sub_8B1FF0(v95, v65, v24);
    v25 = *a2;
    v91[3] = &v85;
    v26 = a2[2];
    v91[2] = v25;
    v91[1] = v26;
    v91[0] = v95;
    v91[4] = *(_DWORD *)(a4 + 8);
    if ( !sub_93D4A0((int)v91, &this->m128_i8[0xC], this + 2, &v94) )
    {
      *((float *)this + 0x10) = -*((float *)this + 0xB);
LABEL_29:
      v50 = _mm_mul_ps(v77, v77);
      v51 = *((float *)this + 0x10)
          - fsqrt(
              _mm_shuffle_ps(v50, v50, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v50, v50, 0x55).m128_f32[0] + v50.m128_f32[0]));
      v92[2] = a4;
      *((float *)this + 0x10) = v51;
      v52 = (__m128 *)a2[2];
      v92[3] = this->m128_i32[2];
      v66 = (__m128 *)v11[2];
      v92[0] = a2;
      v92[1] = v11;
      v93[5] = v77;
      sub_8B1FF0(v93, v52, v66);
      v53 = *(_DWORD *)(v75 + 0x14);
      v76 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      v54 = *(_DWORD **)(v76 + 0x19C);
      if ( !v54 )
        v54 = (_DWORD *)dword_BA7D9C;
      v55 = (4 * v53 + 0x14) & 0xFFFFFFF0;
      v74 = v54[8];
      if ( v55 + v74 > v54[0xB] )
      {
        v73 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v54 + 0xC))(v54, (4 * v53 + 0x14) & 0xFFFFFFF0);
        v56 = v73;
      }
      else
      {
        v54[8] = v55 + v74;
        v56 = v74;
        v73 = v74;
      }
      for ( i = 0; i < v53; ++i )
        *(_DWORD *)(v56 + 4 * i) = i;
      *(_DWORD *)(v56 + 4 * v53) = 0xFFFFFFFF;
      sub_934DC0(this + 3, v92, v75, v56, v53, v14);
      v58 = *(_DWORD **)(v76 + 0x19C);
      if ( !v58 )
        v58 = (_DWORD *)dword_BA7D9C;
      v59 = v73 == v58[0xA];
      v58[8] = v73;
      if ( v59 )
        (*(void (__thiscall **)(_DWORD *, int))(*v58 + 0x10))(v58, v73);
      goto LABEL_40;
    }
    sub_934100((int **)this + 0xC, *((_DWORD *)this + 0x20), this->m128_i32[2], v67);
    v27 = v96;
    v28 = v100;
    v29 = v98;
    v30 = v101;
    *((_DWORD *)this + 0xC) = 0;
    *((_BYTE *)this + 0x84) = 1;
    *(_DWORD *)v14 = v27;
    *(float *)(v14 + 0x3034) = v28;
    *(_OWORD *)(v14 + 0x10) = v29;
    *(__int128 *)(v14 + 0x20) = v99;
    v31 = *(void **)(v14 + 0x3040);
    *(_DWORD *)(v14 + 0x3030) = v30;
    if ( v31 )
    {
      qmemcpy(v31, v97, 0x1008u);
      v11 = a3;
      v14 = a5;
    }
    v85 = &hkBaseObject::`vftable';
LABEL_11:
    if ( *((float *)this + 0xB) > (double)*(float *)(a4 + 8) )
    {
      v32 = _mm_mul_ps(v77, *(this + 2));
      *((float *)this + 0xB) = *((float *)this + 0xB)
                             - (float)((float)(_mm_shuffle_ps(v32, v32, 0x55).m128_f32[0] + v32.m128_f32[0])
                                     + (float)(_mm_shuffle_ps(v32, v32, 0xAA).m128_f32[0]
                                             + _mm_shuffle_ps(v77, v77, 0xFF).m128_f32[0]));
      if ( *((float *)this + 0xB) > (double)*(float *)(a4 + 8) )
      {
        if ( *((_BYTE *)this + 0x32) )
          sub_939B60((_BYTE *)this + 0x30, this->m128_i32[2]);
        goto LABEL_40;
      }
    }
    v33 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( *(_DWORD *)(v33[TlsIndex] + 0x1A4) < *(_DWORD *)(v33[TlsIndex] + 0x1A8) )
    {
      v34 = v33[TlsIndex];
      v35 = *(_DWORD **)(v34 + 0x1A4);
      v71 = v34;
      *v35 = "StGsk";
      v36 = __rdtsc();
      v35[1] = v36;
      *(_DWORD *)(v71 + 0x1A4) = v35 + 3;
    }
    v37 = flt_B2FFE4;
    v38 = *v11;
    v78[2] = v11[2];
    v82 = v37;
    v78[3] = v11;
    v80 = 1;
    v81 = 0;
    v79 = (void **)&off_A9BB94;
    v39 = *(float *)(**(_DWORD **)(v38 + 0x10) + 0xC);
    v40 = v11[1];
    v83 = *(_DWORD *)(v38 + 0x10);
    v41 = *(_DWORD *)(v38 + 0x14);
    v82 = v39;
    v84 = v41;
    v78[0] = &v79;
    v78[1] = v40;
    sub_8FFC70(this, __PAIR64__(v78, (unsigned int)a2), a4, (__m128 **)v14);
    if ( *(float *)(v14 + 0x3034) == v100 )
      break;
LABEL_21:
    sub_939B60((_BYTE *)this + 0x30, this->m128_i32[2]);
    *((_BYTE *)this + 0x84) = 0;
    if ( this != (__m128 *)0xFFFFFFD0 )
    {
      *((_DWORD *)this + 0xC) = (char *)this + 0x3C;
      *((_DWORD *)this + 0xD) = 0;
      *((_DWORD *)this + 0xE) = 0x80000001;
    }
    sub_934270((int)(this + 3));
    v45 = v100;
    v46 = v96;
    v47 = v98;
    v48 = v101;
    *((_WORD *)this + 0x43) = 0x19;
    *((_DWORD *)this + 0x10) = 0;
    *(float *)(v14 + 0x3034) = v45;
    *(_DWORD *)v14 = v46;
    *(_OWORD *)(v14 + 0x10) = v47;
    *(__int128 *)(v14 + 0x20) = v99;
    v49 = *(void **)(v14 + 0x3040);
    *(_DWORD *)(v14 + 0x3030) = v48;
    if ( v49 )
    {
      qmemcpy(v49, v97, 0x1008u);
      v11 = a3;
      v14 = a5;
    }
    v79 = &hkBaseObject::`vftable';
  }
  if ( *((_BYTE *)this + 0x32) )
  {
    v42 = *((unsigned __int8 *)this + 0x34);
    v72 = v42 + 1;
    v43 = v42 + *((unsigned __int8 *)this + 0x35);
    for ( j = v42 + 1; j < v43; j = ++v72 )
    {
      if ( (*(_WORD *)((char *)this
                     + 8 * *((unsigned __int8 *)this + 0x32)
                     + (*((unsigned __int8 *)this + *((unsigned __int8 *)this + 0x34) + 0x38) >> 3)
                     + 0x34)
          & 0xFF00) != (*(_WORD *)((char *)this
                                 + 8 * *((unsigned __int8 *)this + 0x32)
                                 + (*((unsigned __int8 *)this + j + 0x38) >> 3)
                                 + 0x34)
                      & 0xFF00) )
        goto LABEL_21;
    }
  }
LABEL_40:
  v60 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v61) = v60[TlsIndex];
  if ( *(_DWORD *)(v61 + 0x1A4) < *(_DWORD *)(v61 + 0x1A8) )
  {
    v62 = v60[TlsIndex];
    v63 = *(_DWORD **)(v61 + 0x1A4);
    *v63 = "lt";
    v61 = __rdtsc();
    v63[1] = v61;
    *(_DWORD *)(v62 + 0x1A4) = v63 + 3;
  }
  return v61;
}
