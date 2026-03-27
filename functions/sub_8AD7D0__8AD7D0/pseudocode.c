int __thiscall sub_8AD7D0(__m128 *this, int a2, __m128 *a3, int *a4, int a5)
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
  __m128 v103; // [esp+70h] [ebp-110h] BYREF
  int v104; // [esp+88h] [ebp-F8h]
  __m128 v106; // [esp+90h] [ebp-F0h] BYREF
  float v107[13]; // [esp+A0h] [ebp-E0h]
  float v108; // [esp+D4h] [ebp-ACh]
  float v109; // [esp+D8h] [ebp-A8h]
  int v110; // [esp+DCh] [ebp-A4h]
  __m128 v111[2]; // [esp+E0h] [ebp-A0h] BYREF
  float v112; // [esp+100h] [ebp-80h]
  _DWORD *v113; // [esp+104h] [ebp-7Ch]
  _QWORD v114[3]; // [esp+108h] [ebp-78h] BYREF
  __int128 v115; // [esp+120h] [ebp-60h]
  __m128 i; // [esp+130h] [ebp-50h]
  __int128 v117; // [esp+140h] [ebp-40h]
  float v118; // [esp+150h] [ebp-30h]
  float v119; // [esp+154h] [ebp-2Ch]
  __int64 v120; // [esp+158h] [ebp-28h]
  __m128 v121; // [esp+160h] [ebp-20h]
  signed int v122; // [esp+178h] [ebp-8h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "LtupdateCharacter";
    v9[3] = "Cast";
    v10 = __rdtsc();
    v102 = v10;
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4;
  }
  v11 = *(float *)(a2 + 8);
  v95 = *(float *)(a2 + 8);
  v12 = *(__m128 *)(*(_DWORD *)(*((_DWORD *)this + 0xC) + 0x1C) + 0x30);
  v13 = *((float *)this + 0x17) + *((float *)this + 0x16);
  v103 = v12;
  v107[0] = 0.0099999998;
  v102 = 0;
  v107[1] = v13;
  if ( v11 > flt_A97BCC )
  {
    while ( v102 < dword_B2EFB8 )
    {
      v14 = NtCurrentTeb()->ThreadLocalStoragePointer;
      v15 = v14[TlsIndex];
      if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) )
      {
        v16 = v14[TlsIndex];
        v17 = *(_DWORD **)(v15 + 0x1A4);
        *v17 = "StInitialCast";
        v18 = __rdtsc();
        LODWORD(v107[8]) = v18;
        v17[1] = v18;
        v12 = v103;
        *(_DWORD *)(v16 + 0x1A4) = v17 + 3;
      }
      v19 = *(this + 2);
      a4[5] = 0;
      a4[1] = 0x7F7FFFFF;
      *(_DWORD *)(a5 + 0x14) = 0;
      *(_DWORD *)(a5 + 4) = 0x7F7FFFFF;
      v20 = *((_DWORD *)this + 0xC);
      v106 = _mm_add_ps(v12, v19);
      (*(void (__thiscall **)(int, __m128 *, __m128 *, int *, int))(*(_DWORD *)v20 + 0x30))(v20, &v103, &v106, a4, a5);
      if ( a4[5] > 0 )
      {
        sub_8AF890(a4);
        sub_8ABD40(a4[4], a4[5], this + 2);
      }
      v21 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( *(_DWORD *)(v21[TlsIndex] + 0x1A4) < *(_DWORD *)(v21[TlsIndex] + 0x1A8) )
      {
        v22 = v21[TlsIndex];
        v23 = *(_DWORD **)(v22 + 0x1A4);
        v92 = v22;
        *v23 = "StUpdateManifold";
        v24 = __rdtsc();
        LODWORD(v107[6]) = v24;
        v23[1] = v24;
        *(_DWORD *)(v92 + 0x1A4) = v23 + 3;
      }
      (*(void (__thiscall **)(__m128 *, int, int *))(this->m128_i32[0] + 8))(this, a5, a4);
      v25 = *((_DWORD *)this + 0x19) + *((_DWORD *)this + 0x1E) + 0xA;
      v26 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      v27 = *(_DWORD **)(v26 + 0x19C);
      v99 = 0;
      v100 = 0x80000000;
      v98 = v26;
      if ( !v27 )
        v27 = (_DWORD *)dword_BA7D9C;
      v28 = v27[8];
      v29 = v28 + (((v25 << 6) + 0x10) & 0xFFFFFFF0);
      if ( v29 > v27[0xB] )
      {
        v30 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v27 + 0xC))(v27, ((v25 << 6) + 0x10) & 0xFFFFFFF0);
      }
      else
      {
        v27[8] = v29;
        v30 = v28;
      }
      LODWORD(v99) = v30;
      v101 = v30;
      v31 = *((_DWORD *)this + 0x1E);
      v32 = 0;
      v100 = v25 | 0x80000000;
      HIDWORD(v99) = v31;
      if ( v31 > 0 )
      {
        v93 = 0;
        v96 = 0;
        do
        {
          v90 = *(float *)(a2 + 8) - v95;
          (*(void (__thiscall **)(__m128 *, int, _DWORD, _DWORD))(this->m128_i32[0] + 0xC))(
            this,
            v93 + *((_DWORD *)this + 0x1D),
            v99 + v96,
            LODWORD(v90));
          sub_8AC3C0(v32++, (const void **)&v99, *((float *)this + 0x29), this + 4);
          v96 += 0x40;
          v93 += 0x30;
        }
        while ( v32 < *((_DWORD *)this + 0x1E) );
      }
      v33 = *((_DWORD *)this + 0x19);
      v34 = v100 & 0x3FFFFFFF;
      if ( (v100 & 0x3FFFFFFF) - HIDWORD(v99) < v33 )
      {
        v35 = HIDWORD(v99) + v33;
        if ( v34 < v35 )
        {
          v36 = 2 * v34;
          if ( v35 >= v36 )
            v36 = v35;
          sub_8A6E40((const void **)&v99, v36, 0x40);
        }
      }
      v37 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      if ( *(_DWORD *)(v37 + 0x1A4) < *(_DWORD *)(v37 + 0x1A8) )
      {
        v38 = *(_DWORD **)(v98 + 0x1A4);
        *v38 = "StSlexMove";
        v39 = __rdtsc();
        LODWORD(v107[7]) = v39;
        v38[1] = v39;
        *(_DWORD *)(v98 + 0x1A4) = v38 + 3;
      }
      v40 = HIDWORD(v99) + *((_DWORD *)this + 0x19);
      v41 = *(_DWORD **)(v98 + 0x19C);
      v107[9] = 0.00000011920929;
      v42 = 0;
      v117 = 0x3F80000000000000uLL;
      i = _mm_shuffle_ps((__m128)0x34000000u, (__m128)0x34000000u, 0);
      v121 = 0;
      *(_OWORD *)&v114[1] = 0;
      if ( !v41 )
        v41 = (_DWORD *)dword_BA7D9C;
      v43 = (_DWORD *)v41[8];
      v44 = &v43[4 * v40 + 4];
      if ( (unsigned int)v44 > v41[0xB] )
      {
        v45 = (*(int (__thiscall **)(_DWORD *, int))(*v41 + 0xC))(v41, 0x10 * (v40 + 1));
        v42 = v121;
        v97 = (_DWORD *)v45;
      }
      else
      {
        v41[8] = v44;
        v97 = v43;
      }
      v46 = *(float *)&SrcStr;
      v115 = *((_OWORD *)this + 1);
      v47 = _mm_mul_ps(*(this + 1), *(this + 1));
      v120 = v99;
      v109 = _mm_shuffle_ps(v47, v47, 0xAA).m128_f32[0]
           + (float)(_mm_shuffle_ps(v47, v47, 0x55).m128_f32[0] + v47.m128_f32[0]);
      v122 = v40 | 0x80000000;
      v118 = v95;
      if ( v109 == v46 )
      {
        v119 = 0.0;
      }
      else
      {
        v48 = _mm_mul_ps(*(this + 1), *(this + 1));
        v49 = _mm_shuffle_ps(v48, v48, 0x55).m128_f32[0] + v48.m128_f32[0];
        v50 = _mm_shuffle_ps(v48, v48, 0xAA);
        v51 = v50;
        v51.m128_f32[0] = v50.m128_f32[0] + v49;
        v121 = v51;
        v121.m128_f32[0] = 1.0 / fsqrt(v50.m128_f32[0] + v49);
        v107[0xC] = 3.0;
        v107[5] = 0.5;
        v108 = (float)(0.5 * v121.m128_f32[0])
             * (float)(3.0 - (float)((float)((float)(v50.m128_f32[0] + v49) * v121.m128_f32[0]) * v121.m128_f32[0]));
        v119 = v108 * *((float *)this + 0x16) * flt_A3D65C;
      }
      v52 = *((float *)this + 0x1A);
      v53 = *((_DWORD *)this + 0x21) - 1;
      v117 = *((_OWORD *)this + 4);
      v107[0xA] = v52;
      *(__m128 *)&v114[1] = v42;
      for ( i = _mm_shuffle_ps((__m128)LODWORD(v52), (__m128)LODWORD(v52), 0); v53 >= 0; --v53 )
      {
        v54 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * v53);
        (*(void (__thiscall **)(int, char *, _QWORD *))(*(_DWORD *)v54 + 4))(v54, (char *)this + 0x74, &v114[1]);
      }
      v113 = v97;
      sub_8EC790((int)&v114[1], v111);
      v55 = NtCurrentTeb()->ThreadLocalStoragePointer;
      v56 = TlsIndex;
      if ( *(_DWORD *)(v55[TlsIndex] + 0x1A4) < *(_DWORD *)(v55[TlsIndex] + 0x1A8) )
      {
        v57 = *(_DWORD **)(v98 + 0x1A4);
        *v57 = "StApplySurf";
        v58 = __rdtsc();
        LODWORD(v107[0xB]) = v58;
        v57[1] = v58;
        *(_DWORD *)(v98 + 0x1A4) = v57 + 3;
      }
      sub_8AC6A0(this, a2, a3);
      if ( *(_DWORD *)(v55[v56] + 0x1A4) < *(_DWORD *)(v55[v56] + 0x1A8) )
      {
        v59 = *(_DWORD **)(v98 + 0x1A4);
        *v59 = "StCastMove";
        v60 = __rdtsc();
        v110 = v60;
        v59[1] = v60;
        *(_DWORD *)(v98 + 0x1A4) = v59 + 3;
      }
      v61 = v111[0];
      v62 = _mm_and_ps(_mm_sub_ps(*(this + 2), v111[0]), (__m128)xmmword_A372D0);
      v104 = 0x3A83126F;
      if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_shuffle_ps((__m128)0x3A83126Fu, (__m128)0x3A83126Fu, 0), v62)) & 7) != 0 )
      {
        v63 = v103;
        a4[5] = 0;
        a4[1] = 0x7F7FFFFF;
        v64 = *((_DWORD *)this + 0xC);
        v106 = _mm_add_ps(v63, v61);
        (*(void (__thiscall **)(int, __m128 *, __m128 *, int *, _DWORD))(*(_DWORD *)v64 + 0x30))(
          v64,
          &v103,
          &v106,
          a4,
          0);
        if ( a4[5] > 0 )
        {
          sub_8AF890(a4);
          sub_8ABD40(a4[4], a4[5], v111);
          v65 = a4[4];
          if ( sub_8AC640(this->m128_f32, (__m128 *)v65) == 0xFFFFFFFF )
          {
            for ( j = *((_DWORD *)this + 0x21) - 1; j >= 0; --j )
            {
              v66 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * j);
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v66 + 8))(v66, v65);
            }
            if ( *((_DWORD *)this + 0x1E) == (*((_DWORD *)this + 0x1F) & 0x3FFFFFFF) )
              sub_8A6EE0((const void **)this + 0x1D, 0x30);
            v67 = *((_DWORD *)this + 0x1E);
            v68 = *((_DWORD *)this + 0x1D) + 0x30 * v67;
            *((_DWORD *)this + 0x1E) = v67 + 1;
            *(_OWORD *)v68 = *(_OWORD *)v65;
            *(_OWORD *)(v68 + 0x10) = *(_OWORD *)(v65 + 0x10);
            *(_DWORD *)(v68 + 0x20) = *(_DWORD *)(v65 + 0x20);
            *(_DWORD *)(v68 + 0x24) = *(_DWORD *)(v65 + 0x24);
            *(_DWORD *)(v68 + 0x28) = *(_DWORD *)(v65 + 0x28);
            *(_DWORD *)(v68 + 0x2C) = *(_DWORD *)(v65 + 0x2C);
          }
          if ( sub_8AC640(this->m128_f32, (__m128 *)a4[4]) == 0xFFFFFFFF )
          {
LABEL_56:
            v76 = v95 - sub_8AC530(this->m128_f32, v111, (int)a4, &v106, &v103);
            v61 = v111[0];
            goto LABEL_57;
          }
          while ( 1 )
          {
            v69 = a4[5] - 1;
            v70 = 0;
            v71 = a4[5] == 1;
            a4[5] = v69;
            if ( v69 >= 0 && !v71 )
            {
              v72 = 0;
              do
              {
                v73 = a4[4];
                v74 = *(_OWORD *)(v73 + v72 + 0x30);
                v75 = v72 + v73;
                *(_OWORD *)v75 = v74;
                *(_OWORD *)(v75 + 0x10) = *(_OWORD *)(v75 + 0x40);
                *(_DWORD *)(v75 + 0x20) = *(_DWORD *)(v75 + 0x50);
                *(_DWORD *)(v75 + 0x24) = *(_DWORD *)(v75 + 0x54);
                *(_DWORD *)(v75 + 0x28) = *(_DWORD *)(v75 + 0x58);
                *(_DWORD *)(v75 + 0x2C) = *(_DWORD *)(v75 + 0x5C);
                ++v70;
                v72 += 0x30;
              }
              while ( v70 < a4[5] );
            }
            if ( a4[5] <= 0 )
              break;
            if ( sub_8AC640(this->m128_f32, (__m128 *)a4[4]) == 0xFFFFFFFF )
              goto LABEL_56;
          }
        }
        v61 = v111[0];
      }
      v76 = v95 - v112;
      v103 = _mm_add_ps(v103, v61);
LABEL_57:
      v95 = v76;
      *(this + 2) = v61;
      v77 = *(_DWORD **)(v98 + 0x19C);
      if ( !v77 )
        v77 = (_DWORD *)dword_BA7D9C;
      v71 = v97 == (_DWORD *)v77[0xA];
      v77[8] = v97;
      if ( v71 )
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v77 + 0x10))(v77, v97);
      if ( v122 >= 0 )
      {
        v78 = *(_DWORD *)(v98 + 0x19C);
        if ( !v78 )
          v78 = dword_BA7D9C;
        sub_8A75D0(v78, v97, 0x10 * v122, 0x14);
      }
      v79 = *(_DWORD **)(v98 + 0x19C);
      v80 = v101;
      if ( !v79 )
        v79 = (_DWORD *)dword_BA7D9C;
      v71 = v101 == v79[0xA];
      v79[8] = v101;
      if ( v71 )
        (*(void (__thiscall **)(_DWORD *, int))(*v79 + 0x10))(v79, v80);
      if ( v100 >= 0 )
      {
        v81 = *(_DWORD *)(v98 + 0x19C);
        if ( !v81 )
          v81 = dword_BA7D9C;
        sub_8A75D0(v81, (_DWORD *)v99, v100 << 6, 0x14);
      }
      v82 = v95 < (double)flt_A97BCC;
      v83 = v95 == flt_A97BCC;
      ++v102;
      if ( v82 || v83 )
        break;
      v12 = v103;
    }
  }
  v91 = v107[1];
  v84 = *((_DWORD *)this + 0xC);
  *(this + 1) = v111[1];
  sub_8ABAC0(v84, &v103, v91);
  v85 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v86) = v85[TlsIndex];
  if ( *(_DWORD *)(v86 + 0x1A4) < *(_DWORD *)(v86 + 0x1A8) )
  {
    v87 = v85[TlsIndex];
    v88 = *(_DWORD **)(v86 + 0x1A4);
    *v88 = "lt";
    v86 = __rdtsc();
    v104 = v86;
    v88[1] = v86;
    *(_DWORD *)(v87 + 0x1A4) = v88 + 3;
  }
  return v86;
}
