int __thiscall sub_8FFC70(__m128 *this, unsigned __int64 a2, unsigned int a3, __m128 **a4)
{
  _DWORD *ThreadLocalStoragePointer; // edi
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // ebx
  unsigned __int64 v9; // rax
  int v10; // eax
  _DWORD *v11; // ecx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  int v14; // edi
  _DWORD *v15; // esi
  int v16; // eax
  int v17; // edi
  _DWORD *v18; // ecx
  unsigned __int64 v19; // rax
  unsigned int v20; // ecx
  int v21; // ecx
  int v22; // edx
  __m128 *v23; // eax
  __int32 v24; // eax
  int v25; // ecx
  __int32 v26; // eax
  int v27; // eax
  int v28; // edi
  _DWORD *v29; // ecx
  unsigned __int64 v30; // rax
  __m128 *v31; // eax
  __m128 *v32; // edx
  double v33; // st7
  double v34; // st6
  __m128 v35; // xmm2
  __m128 v36; // xmm3
  __m128 v37; // xmm0
  double v38; // st5
  int v39; // edx
  __m128 v40; // xmm1
  __m128 v41; // xmm2
  double v42; // st5
  __m128 v43; // xmm1
  __m128 v44; // xmm0
  int v45; // eax
  _DWORD *v46; // ebx
  unsigned __int64 v47; // rax
  int v48; // eax
  unsigned __int64 v49; // rax
  double v50; // st7
  __int32 v51; // eax
  double v52; // st6
  double v53; // st5
  double v54; // st7
  double v55; // st6
  int v56; // eax
  int v57; // edi
  _DWORD *v58; // ecx
  unsigned __int64 v59; // rax
  float *v60; // eax
  float *v61; // ebx
  __int128 v62; // xmm0
  unsigned __int8 v63; // cl
  __m128 *v64; // edi
  double v65; // st7
  __m128 *v66; // eax
  int v67; // edx
  __m128 v68; // xmm1
  __m128 v69; // xmm2
  __m128 v70; // xmm3
  __m128 v71; // xmm4
  __m128 *v72; // ecx
  __m128 *v73; // eax
  int v74; // edx
  __m128 *v75; // ecx
  __m128 v76; // xmm1
  __m128 v77; // xmm2
  __m128 v78; // xmm3
  __m128 v79; // xmm4
  float v81; // [esp+14h] [ebp-388h]
  int v82; // [esp+30h] [ebp-36Ch]
  int v83; // [esp+30h] [ebp-36Ch]
  unsigned int v84; // [esp+30h] [ebp-36Ch]
  unsigned int v85; // [esp+30h] [ebp-36Ch]
  float v86; // [esp+30h] [ebp-36Ch]
  int v87; // [esp+30h] [ebp-36Ch]
  __m128 *v88; // [esp+30h] [ebp-36Ch]
  float v89; // [esp+34h] [ebp-368h]
  int v90; // [esp+34h] [ebp-368h]
  int v91; // [esp+34h] [ebp-368h]
  _DWORD *v92; // [esp+38h] [ebp-364h]
  float v93; // [esp+38h] [ebp-364h]
  int v94; // [esp+38h] [ebp-364h]
  __m128 v95; // [esp+3Ch] [ebp-360h] BYREF
  int v96[4]; // [esp+4Ch] [ebp-350h] BYREF
  __m128 v97[4]; // [esp+5Ch] [ebp-340h] BYREF
  float v98[6]; // [esp+A4h] [ebp-2F8h]
  __m128 v99; // [esp+BCh] [ebp-2E0h]
  __m128 v100[4]; // [esp+CCh] [ebp-2D0h] BYREF
  __m128 v101; // [esp+10Ch] [ebp-290h] BYREF
  char v102; // [esp+11Ch] [ebp-280h]
  int v103; // [esp+120h] [ebp-27Ch]
  _BYTE v104[192]; // [esp+12Ch] [ebp-270h] BYREF
  _BYTE v105[32]; // [esp+1ECh] [ebp-1B0h] BYREF
  __int128 v106; // [esp+20Ch] [ebp-190h]
  float v107; // [esp+21Ch] [ebp-180h]
  float v108; // [esp+220h] [ebp-17Ch]
  float v109; // [esp+224h] [ebp-178h]
  float v110; // [esp+228h] [ebp-174h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = TlsIndex;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = *(_DWORD **)(v7 + 0x1A4);
    *v8 = "LtPredGskf";
    v8[3] = "init";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(ThreadLocalStoragePointer[v6] + 0x1A4) = v8 + 4;
  }
  if ( *((float *)this + 6) != *(float *)(a3 + 0x10) )
  {
    if ( !*(_BYTE *)(*(_DWORD *)(a3 + 0x28) + 0x10) )
    {
      *((_DWORD *)this + 6) = *(_DWORD *)(a3 + 0x14);
LABEL_6:
      v10 = ThreadLocalStoragePointer[v6];
      if ( *(_DWORD *)(v10 + 0x1A4) < *(_DWORD *)(v10 + 0x1A8) )
      {
        v82 = ThreadLocalStoragePointer[v6];
        v11 = *(_DWORD **)(v10 + 0x1A4);
        *v11 = "Stprocess";
        v12 = __rdtsc();
        v11[1] = v12;
        *(_DWORD *)(v82 + 0x1A4) = v11 + 3;
      }
      sub_939450(this, (int *)a2, (int *)HIDWORD(a2), a3, (int)a4);
      goto LABEL_9;
    }
    v16 = ThreadLocalStoragePointer[v6];
    if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) )
    {
      v17 = ThreadLocalStoragePointer[v6];
      v18 = *(_DWORD **)(v16 + 0x1A4);
      *v18 = "TtrecalcT0";
      v19 = __rdtsc();
      v18[1] = v19;
      *(_DWORD *)(v17 + 0x1A4) = v18 + 3;
    }
    v20 = *(_DWORD *)(a2 + 4);
    v95.m128_i32[0] = *(_DWORD *)a2;
    *(unsigned __int64 *)((char *)v95.m128_u64 + 4) = __PAIR64__(v100, v20);
    v21 = *(_DWORD *)HIDWORD(a2);
    v96[2] = (int)v97;
    v22 = *(_DWORD *)(HIDWORD(a2) + 4);
    v96[0] = v21;
    v95.m128_i32[3] = a2;
    v23 = *(__m128 **)(a2 + 8);
    v96[1] = v22;
    v81 = *(float *)(a3 + 0x10);
    v96[3] = HIDWORD(a2);
    sub_8DD150(v23 + 4, v81, v100);
    sub_8DD150((__m128 *)(*(_DWORD *)(HIDWORD(a2) + 8) + 0x40), *(float *)(a3 + 0x10), v97);
    v24 = *((char *)this + 0x14);
    v25 = *(_DWORD *)a2;
    v83 = *(_DWORD *)HIDWORD(a2);
    v101.m128_i32[1] = *((char *)this + 0x15);
    v101.m128_i32[3] = *((char *)this + 0x17);
    v101.m128_i32[0] = v24;
    v26 = *((char *)this + 0x16);
    v102 = 0;
    v101.m128_i32[2] = v26;
    v103 = 0;
    (*(void (__thiscall **)(int, unsigned __int32 *, __int32, _BYTE *))(*(_DWORD *)v25 + 0x28))(
      v25,
      &this->m128_u32[3],
      v101.m128_i32[0],
      v104);
    (*(void (__thiscall **)(int, __int8 *, __int32, _BYTE *))(*(_DWORD *)v83 + 0x28))(
      v83,
      &this->m128_i8[2 * v101.m128_i32[0] + 0xC],
      v101.m128_i32[1],
      v105);
    sub_93F1C0((int *)&v95, v96, **(_DWORD **)(a3 + 0x28), &v101, this + 2);
    if ( v103 )
      sub_93B660(&v101, (int)&this->m128_i32[3]);
    v27 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
    v6 = TlsIndex;
    if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) )
    {
      v28 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v6);
      v29 = *(_DWORD **)(v28 + 0x1A4);
      *v29 = "Et";
      v30 = __rdtsc();
      v29[1] = v30;
      *(_DWORD *)(v28 + 0x1A4) = v29 + 3;
      v6 = TlsIndex;
    }
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  *((_DWORD *)this + 6) = *(_DWORD *)(a3 + 0x14);
  v31 = *(__m128 **)(a2 + 8);
  v32 = *(__m128 **)(HIDWORD(a2) + 8);
  v33 = *(float *)(a3 + 0x18) * v31[5].m128_f32[3];
  v34 = *(float *)(a3 + 0x18) * v32[5].m128_f32[3];
  v35 = v32[4];
  v36 = v32[5];
  *(float *)&v84 = v33;
  v37 = (__m128)v84;
  *(float *)&v85 = v34;
  v38 = v32[0xA].m128_f32[0] * v32[9].m128_f32[3] * v34;
  v39 = *(_DWORD *)(a3 + 0x28);
  v40 = _mm_add_ps(
          _mm_mul_ps(_mm_shuffle_ps(v37, v37, 0), _mm_sub_ps(v31[4], v31[5])),
          _mm_mul_ps(_mm_shuffle_ps((__m128)v85, (__m128)v85, 0), _mm_sub_ps(v36, v35)));
  v41 = *(this + 2);
  v42 = v38 + v31[0xA].m128_f32[0] * v31[9].m128_f32[3] * v33;
  v95 = v40;
  v95.m128_f32[3] = v42;
  v43 = v95;
  v44 = _mm_mul_ps(v95, v41);
  v89 = *((float *)this + 0xB)
      - (float)(_mm_shuffle_ps(v44, v44, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v44, v44, 0x55).m128_f32[0] + v44.m128_f32[0]))
      - v95.m128_f32[3];
  if ( v89 <= (double)*(float *)v39 || *((float *)this + 7) * flt_A3D65C >= v89 )
  {
    if ( !*(_BYTE *)(v39 + 0x10) )
      goto LABEL_37;
    v48 = ThreadLocalStoragePointer[v6];
    if ( *(_DWORD *)(v48 + 0x1A4) < *(_DWORD *)(v48 + 0x1A8) )
    {
      v92 = *(_DWORD **)(v48 + 0x1A4);
      *v92 = "Sttoi";
      v49 = __rdtsc();
      v92[1] = v49;
      *(_DWORD *)(ThreadLocalStoragePointer[v6] + 0x1A4) = v92 + 3;
    }
    v50 = *((float *)this + 0xB);
    v97[0].m128_u64[0] = a2;
    v51 = this->m128_i32[2];
    v98[2] = v89;
    v39 = *(_DWORD *)(a3 + 0x28);
    v97[0].m128_u64[1] = __PAIR64__(v51, a3);
    v99 = v43;
    v52 = *(float *)(v39 + 0x18) * *((float *)this + 7) + v50;
    v53 = *(float *)(v39 + 0x14) * *((float *)this + 7);
    if ( v53 >= v52 )
    {
      v86 = v52;
    }
    else
    {
      v93 = v53;
      v86 = v93;
    }
    if ( v89 < (double)v86 )
    {
      v54 = v50 + *(float *)(v39 + 0x28) * *((float *)this + 7);
      v55 = *(float *)(v39 + 0x24) * *((float *)this + 7);
      if ( v55 >= v54 )
      {
        *(float *)&v90 = v54;
        sub_93DE40(
          (int)v97,
          *((float *)this + 7),
          SLODWORD(v86),
          v90,
          (int)&this->m128_i32[3],
          (int)(this + 2),
          (int)a4);
      }
      else
      {
        *(float *)&v94 = v55;
        sub_93DE40(
          (int)v97,
          *((float *)this + 7),
          SLODWORD(v86),
          v94,
          (int)&this->m128_i32[3],
          (int)(this + 2),
          (int)a4);
      }
      v6 = TlsIndex;
    }
    else
    {
LABEL_37:
      if ( v89 > (double)*(float *)(v39 + 0xC) )
      {
        v56 = ThreadLocalStoragePointer[v6];
        if ( *(_DWORD *)(v56 + 0x1A4) < *(_DWORD *)(v56 + 0x1A8) )
        {
          v57 = ThreadLocalStoragePointer[v6];
          v58 = *(_DWORD **)(v56 + 0x1A4);
          *v58 = "StgetPoints";
          v59 = __rdtsc();
          v58[1] = v59;
          *(_DWORD *)(v57 + 0x1A4) = v58 + 3;
        }
        *((float *)this + 0xB) = v89;
        v60 = *(float **)a2;
        v61 = *(float **)HIDWORD(a2);
        v62 = *((_OWORD *)this + 2);
        v109 = *(float *)(a3 + 8);
        v107 = v60[3];
        v108 = v61[3];
        v63 = *((_BYTE *)this + 0x32);
        v64 = this + 3;
        v65 = v108 + v107 + v109;
        v106 = v62;
        v110 = v65 * v65;
        if ( v63 )
        {
          v91 = (int)&v64->m128_i32[2 * v63 + 1];
          (*(void (__thiscall **)(float *, int, _DWORD, __m128 *))(*(_DWORD *)v60 + 0x28))(
            v60,
            v91,
            v64->m128_u8[0],
            &v101);
          v66 = *(__m128 **)(a2 + 8);
          v67 = v64->m128_u8[0];
          v68 = *v66;
          v69 = v66[1];
          v70 = v66[2];
          v71 = v66[3];
          v87 = v67;
          v72 = &v101;
          do
          {
            *v72 = _mm_add_ps(
                     _mm_add_ps(
                       _mm_mul_ps(v68, _mm_shuffle_ps(*v72, *v72, 0)),
                       _mm_mul_ps(v69, _mm_shuffle_ps(*v72, *v72, 0x55))),
                     _mm_add_ps(_mm_mul_ps(v70, _mm_shuffle_ps(*v72, *v72, 0xAA)), v71));
            ++v72;
            --v87;
          }
          while ( v87 > 0 );
          v88 = &v101 + v67;
          (*(void (__thiscall **)(float *, int, _DWORD, __m128 *))(*(_DWORD *)v61 + 0x28))(
            v61,
            v91 + 2 * v67,
            *((unsigned __int8 *)this + 0x31),
            v88);
          v73 = *(__m128 **)(HIDWORD(a2) + 8);
          v74 = *((unsigned __int8 *)this + 0x31);
          v75 = v88;
          v76 = *v73;
          v77 = v73[1];
          v78 = v73[2];
          v79 = v73[3];
          do
          {
            *v75 = _mm_add_ps(
                     _mm_add_ps(
                       _mm_mul_ps(v76, _mm_shuffle_ps(*v75, *v75, 0)),
                       _mm_mul_ps(v77, _mm_shuffle_ps(*v75, *v75, 0x55))),
                     _mm_add_ps(_mm_mul_ps(v78, _mm_shuffle_ps(*v75, *v75, 0xAA)), v79));
            ++v75;
            --v74;
          }
          while ( v74 > 0 );
        }
        sub_939BB0((unsigned __int8 *)this + 0x30, &v101, 0, a4, this->m128_i32[2]);
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
        goto LABEL_9;
      }
    }
    goto LABEL_6;
  }
  v45 = ThreadLocalStoragePointer[v6];
  if ( *(_DWORD *)(v45 + 0x1A4) < *(_DWORD *)(v45 + 0x1A8) )
  {
    v46 = *(_DWORD **)(v45 + 0x1A4);
    *v46 = "Sttim";
    v47 = __rdtsc();
    v46[1] = v47;
    *(_DWORD *)(ThreadLocalStoragePointer[v6] + 0x1A4) = v46 + 3;
  }
  *((float *)this + 0xB) = v89;
  if ( *((_BYTE *)this + 0x32) )
  {
    sub_939B60((_BYTE *)this + 0x30, this->m128_i32[2]);
LABEL_9:
    v6 = TlsIndex;
  }
  LODWORD(v13) = ThreadLocalStoragePointer[v6];
  if ( *(_DWORD *)(v13 + 0x1A4) < *(_DWORD *)(v13 + 0x1A8) )
  {
    v14 = ThreadLocalStoragePointer[v6];
    v15 = *(_DWORD **)(v13 + 0x1A4);
    *v15 = "lt";
    v13 = __rdtsc();
    v15[1] = v13;
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3;
  }
  return v13;
}
