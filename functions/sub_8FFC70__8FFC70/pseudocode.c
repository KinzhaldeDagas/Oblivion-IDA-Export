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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ffc84*/
  v6 = MEMORY[0xBA9DE4]; /*0x8ffc8d*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ffc9a*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x8ffca9*/
  {
    v8 = *(_DWORD **)(v7 + 0x1A4); /*0x8ffcab*/
    *v8 = "LtPredGskf"; /*0x8ffcb1*/
    v8[3] = "init"; /*0x8ffcb7*/
    v9 = __rdtsc(); /*0x8ffcbe*/
    v8[1] = v9; /*0x8ffcc8*/
    *(_DWORD *)(ThreadLocalStoragePointer[v6] + 0x1A4) = v8 + 4; /*0x8ffcd1*/
  }
  if ( *((float *)this + 6) != *(float *)(a3 + 0x10) ) /*0x8ffce7*/
  {
    if ( !*(_BYTE *)(*(_DWORD *)(a3 + 0x28) + 0x10) ) /*0x8ffcf0*/
    {
      *((_DWORD *)this + 6) = *(_DWORD *)(a3 + 0x14); /*0x8ffcfe*/
LABEL_6:
      v10 = ThreadLocalStoragePointer[v6]; /*0x8ffd01*/
      if ( *(_DWORD *)(v10 + 0x1A4) < *(_DWORD *)(v10 + 0x1A8) ) /*0x8ffd10*/
      {
        v82 = ThreadLocalStoragePointer[v6]; /*0x8ffd14*/
        v11 = *(_DWORD **)(v10 + 0x1A4); /*0x8ffd18*/
        *v11 = "Stprocess"; /*0x8ffd1e*/
        v12 = __rdtsc(); /*0x8ffd24*/
        v11[1] = v12; /*0x8ffd32*/
        *(_DWORD *)(v82 + 0x1A4) = v11 + 3; /*0x8ffd38*/
      }
      sub_939450(this, (int *)a2, (int *)HIDWORD(a2), a3, (int)a4); /*0x8ffd4d*/
      goto LABEL_9; /*0x8ffd4d*/
    }
    v16 = ThreadLocalStoragePointer[v6]; /*0x8ffda2*/
    if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x8ffdb1*/
    {
      v17 = ThreadLocalStoragePointer[v6]; /*0x8ffdb3*/
      v18 = *(_DWORD **)(v16 + 0x1A4); /*0x8ffdb5*/
      *v18 = "TtrecalcT0"; /*0x8ffdbb*/
      v19 = __rdtsc(); /*0x8ffdc1*/
      v18[1] = v19; /*0x8ffdcb*/
      *(_DWORD *)(v17 + 0x1A4) = v18 + 3; /*0x8ffdd1*/
    }
    v20 = *(_DWORD *)(a2 + 4); /*0x8ffdea*/
    v95.m128_i32[0] = *(_DWORD *)a2; /*0x8ffded*/
    *(unsigned __int64 *)((char *)v95.m128_u64 + 4) = __PAIR64__(v100, v20); /*0x8ffdf1*/
    v21 = *(_DWORD *)HIDWORD(a2); /*0x8ffdf5*/
    v96[2] = (int)v97; /*0x8ffdfb*/
    v22 = *(_DWORD *)(HIDWORD(a2) + 4); /*0x8ffdff*/
    v96[0] = v21; /*0x8ffe02*/
    v95.m128_i32[3] = a2; /*0x8ffe06*/
    v23 = *(__m128 **)(a2 + 8); /*0x8ffe0a*/
    v96[1] = v22; /*0x8ffe14*/
    v81 = *(float *)(a3 + 0x10); /*0x8ffe1c*/
    v96[3] = HIDWORD(a2); /*0x8ffe21*/
    sub_8DD150(v23 + 4, v81, v100); /*0x8ffe25*/
    sub_8DD150((__m128 *)(*(_DWORD *)(HIDWORD(a2) + 8) + 0x40), *(float *)(a3 + 0x10), v97); /*0x8ffe3a*/
    v24 = *((char *)this + 0x14); /*0x8ffe41*/
    v25 = *(_DWORD *)a2; /*0x8ffe48*/
    v83 = *(_DWORD *)HIDWORD(a2); /*0x8ffe4d*/
    v101.m128_i32[1] = *((char *)this + 0x15); /*0x8ffe55*/
    v101.m128_i32[3] = *((char *)this + 0x17); /*0x8ffe60*/
    v101.m128_i32[0] = v24; /*0x8ffe6a*/
    v26 = *((char *)this + 0x16); /*0x8ffe71*/
    v102 = 0; /*0x8ffe85*/
    v101.m128_i32[2] = v26; /*0x8ffe8d*/
    v103 = 0; /*0x8ffe94*/
    (*(void (__thiscall **)(int, unsigned __int32 *, __int32, _BYTE *))(*(_DWORD *)v25 + 0x28))( /*0x8ffea2*/
      v25,
      &this->m128_u32[3],
      v101.m128_i32[0],
      v104);
    (*(void (__thiscall **)(int, __int8 *, __int32, _BYTE *))(*(_DWORD *)v83 + 0x28))( /*0x8ffec6*/
      v83,
      &this->m128_i8[2 * v101.m128_i32[0] + 0xC],
      v101.m128_i32[1],
      v105);
    sub_93F1C0((int *)&v95, v96, **(_DWORD **)(a3 + 0x28), &v101, this + 2); /*0x8ffee5*/
    if ( v103 ) /*0x8ffef6*/
      sub_93B660(&v101, (int)&this->m128_i32[3]); /*0x8fff00*/
    v27 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8fff11*/
    v6 = MEMORY[0xBA9DE4]; /*0x8fff22*/
    if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) ) /*0x8fff28*/
    {
      v28 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v6); /*0x8fff30*/
      v29 = *(_DWORD **)(v28 + 0x1A4); /*0x8fff33*/
      *v29 = "Et"; /*0x8fff39*/
      v30 = __rdtsc(); /*0x8fff3f*/
      v29[1] = v30; /*0x8fff49*/
      *(_DWORD *)(v28 + 0x1A4) = v29 + 3; /*0x8fff4f*/
      v6 = MEMORY[0xBA9DE4]; /*0x8fff55*/
    }
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fff5b*/
  }
  *((_DWORD *)this + 6) = *(_DWORD *)(a3 + 0x14); /*0x8fff68*/
  v31 = *(__m128 **)(a2 + 8); /*0x8fff6e*/
  v32 = *(__m128 **)(HIDWORD(a2) + 8); /*0x8fff79*/
  v33 = *(float *)(a3 + 0x18) * v31[5].m128_f32[3]; /*0x8fff7c*/
  v34 = *(float *)(a3 + 0x18) * v32[5].m128_f32[3]; /*0x8fff7e*/
  v35 = v32[4]; /*0x8fff81*/
  v36 = v32[5]; /*0x8fff85*/
  *(float *)&v84 = v33; /*0x8fff8b*/
  v37 = (__m128)v84; /*0x8fff8f*/
  *(float *)&v85 = v34; /*0x8fff98*/
  v38 = v32[0xA].m128_f32[0] * v32[9].m128_f32[3] * v34; /*0x8fffc0*/
  v39 = *(_DWORD *)(a3 + 0x28); /*0x8fffd1*/
  v40 = _mm_add_ps( /*0x8fffe0*/
          _mm_mul_ps(_mm_shuffle_ps(v37, v37, 0), _mm_sub_ps(v31[4], v31[5])),
          _mm_mul_ps(_mm_shuffle_ps((__m128)v85, (__m128)v85, 0), _mm_sub_ps(v36, v35)));
  v41 = *(this + 2); /*0x8fffe3*/
  v42 = v38 + v31[0xA].m128_f32[0] * v31[9].m128_f32[3] * v33; /*0x8fffe7*/
  v95 = v40; /*0x8fffe9*/
  v95.m128_f32[3] = v42; /*0x8ffff2*/
  v43 = v95; /*0x8ffff6*/
  v44 = _mm_mul_ps(v95, v41); /*0x900000*/
  v89 = *((float *)this + 0xB) /*0x90002a*/
      - (float)(_mm_shuffle_ps(v44, v44, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v44, v44, 0x55).m128_f32[0] + v44.m128_f32[0]))
      - v95.m128_f32[3];
  if ( v89 <= (double)*(float *)v39 || *((float *)this + 7) * kHeadBodyNormalMatchRadius >= v89 ) /*0x90004d*/
  {
    if ( !*(_BYTE *)(v39 + 0x10) ) /*0x9000ac*/
      goto LABEL_37; /*0x9000ac*/
    v48 = ThreadLocalStoragePointer[v6]; /*0x9000b7*/
    if ( *(_DWORD *)(v48 + 0x1A4) < *(_DWORD *)(v48 + 0x1A8) ) /*0x9000c6*/
    {
      v92 = *(_DWORD **)(v48 + 0x1A4); /*0x9000ce*/
      *v92 = "Sttoi"; /*0x9000d2*/
      v49 = __rdtsc(); /*0x9000d8*/
      v92[1] = v49; /*0x9000e6*/
      *(_DWORD *)(ThreadLocalStoragePointer[v6] + 0x1A4) = v92 + 3; /*0x9000ef*/
    }
    v50 = *((float *)this + 0xB); /*0x9000f8*/
    v97[0].m128_u64[0] = a2; /*0x900106*/
    v51 = this->m128_i32[2]; /*0x90010a*/
    v98[2] = v89; /*0x90010d*/
    v39 = *(_DWORD *)(a3 + 0x28); /*0x900114*/
    v97[0].m128_u64[1] = __PAIR64__(v51, a3); /*0x90011b*/
    v99 = v43; /*0x90011f*/
    v52 = *(float *)(v39 + 0x18) * *((float *)this + 7) + v50; /*0x90012d*/
    v53 = *(float *)(v39 + 0x14) * *((float *)this + 7); /*0x900132*/
    if ( v53 >= v52 ) /*0x900140*/
    {
      v86 = v52; /*0x90014e*/
    }
    else
    {
      v93 = v53; /*0x900135*/
      v86 = v93; /*0x900148*/
    }
    if ( v89 < (double)v86 ) /*0x90015f*/
    {
      v54 = v50 + *(float *)(v39 + 0x28) * *((float *)this + 7); /*0x900167*/
      v55 = *(float *)(v39 + 0x24) * *((float *)this + 7); /*0x90016c*/
      if ( v55 >= v54 ) /*0x90017a*/
      {
        *(float *)&v90 = v54; /*0x900188*/
        sub_93DE40((int ***)v97, *((float *)this + 7), SLODWORD(v86), v90, &this->m128_i8[0xC], this + 2, (__m128 *)a4); /*0x9001ab*/
      }
      else
      {
        *(float *)&v94 = v55; /*0x90016f*/
        sub_93DE40((int ***)v97, *((float *)this + 7), SLODWORD(v86), v94, &this->m128_i8[0xC], this + 2, (__m128 *)a4); /*0x900186*/
      }
      v6 = MEMORY[0xBA9DE4]; /*0x9001b0*/
    }
    else
    {
LABEL_37:
      if ( v89 > (double)*(float *)(v39 + 0xC) ) /*0x9001cc*/
      {
        v56 = ThreadLocalStoragePointer[v6]; /*0x9001d2*/
        if ( *(_DWORD *)(v56 + 0x1A4) < *(_DWORD *)(v56 + 0x1A8) ) /*0x9001e1*/
        {
          v57 = ThreadLocalStoragePointer[v6]; /*0x9001e3*/
          v58 = *(_DWORD **)(v56 + 0x1A4); /*0x9001e5*/
          *v58 = "StgetPoints"; /*0x9001eb*/
          v59 = __rdtsc(); /*0x9001f1*/
          v58[1] = v59; /*0x9001fb*/
          *(_DWORD *)(v57 + 0x1A4) = v58 + 3; /*0x900201*/
        }
        *((float *)this + 0xB) = v89; /*0x90020e*/
        v60 = *(float **)a2; /*0x900214*/
        v61 = *(float **)HIDWORD(a2); /*0x900219*/
        v62 = *((_OWORD *)this + 2); /*0x90021b*/
        v109 = *(float *)(a3 + 8); /*0x90021f*/
        v107 = v60[3]; /*0x900229*/
        v108 = v61[3]; /*0x900233*/
        v63 = *((_BYTE *)this + 0x32); /*0x900248*/
        v64 = this + 3; /*0x90024d*/
        v65 = v108 + v107 + v109; /*0x900250*/
        v106 = v62; /*0x900257*/
        v110 = v65 * v65; /*0x900263*/
        if ( v63 ) /*0x90026c*/
        {
          v91 = (int)&v64->m128_i32[2 * v63 + 1]; /*0x90027b*/
          (*(void (__thiscall **)(float *, int, _DWORD, __m128 *))(*(_DWORD *)v60 + 0x28))( /*0x900292*/
            v60,
            v91,
            v64->m128_u8[0],
            &v101);
          v66 = *(__m128 **)(a2 + 8); /*0x900298*/
          v67 = v64->m128_u8[0]; /*0x90029b*/
          v68 = *v66; /*0x90029e*/
          v69 = v66[1]; /*0x9002a1*/
          v70 = v66[2]; /*0x9002a5*/
          v71 = v66[3]; /*0x9002a9*/
          v87 = v67; /*0x9002ad*/
          v72 = &v101; /*0x9002b1*/
          do /*0x900304*/
          {
            *v72 = _mm_add_ps( /*0x9002f7*/
                     _mm_add_ps(
                       _mm_mul_ps(v68, _mm_shuffle_ps(*v72, *v72, 0)),
                       _mm_mul_ps(v69, _mm_shuffle_ps(*v72, *v72, 0x55))),
                     _mm_add_ps(_mm_mul_ps(v70, _mm_shuffle_ps(*v72, *v72, 0xAA)), v71));
            ++v72; /*0x9002fa*/
            --v87; /*0x900300*/
          }
          while ( v87 > 0 ); /*0x900304*/
          v88 = &v101 + v67; /*0x900315*/
          (*(void (__thiscall **)(float *, int, _DWORD, __m128 *))(*(_DWORD *)v61 + 0x28))( /*0x90032a*/
            v61,
            v91 + 2 * v67,
            *((unsigned __int8 *)this + 0x31),
            v88);
          v73 = *(__m128 **)(HIDWORD(a2) + 8); /*0x900330*/
          v74 = *((unsigned __int8 *)this + 0x31); /*0x900333*/
          v75 = v88; /*0x900337*/
          v76 = *v73; /*0x90033b*/
          v77 = v73[1]; /*0x90033e*/
          v78 = v73[2]; /*0x900342*/
          v79 = v73[3]; /*0x900346*/
          do /*0x90038c*/
          {
            *v75 = _mm_add_ps( /*0x900383*/
                     _mm_add_ps(
                       _mm_mul_ps(v76, _mm_shuffle_ps(*v75, *v75, 0)),
                       _mm_mul_ps(v77, _mm_shuffle_ps(*v75, *v75, 0x55))),
                     _mm_add_ps(_mm_mul_ps(v78, _mm_shuffle_ps(*v75, *v75, 0xAA)), v79));
            ++v75; /*0x900386*/
            --v74; /*0x900389*/
          }
          while ( v74 > 0 ); /*0x90038c*/
        }
        sub_939BB0((unsigned __int8 *)this + 0x30, &v101, 0, a4, this->m128_i32[2]); /*0x9003a1*/
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9003a6*/
        goto LABEL_9; /*0x9003b0*/
      }
    }
    goto LABEL_6; /*0x9001b9*/
  }
  v45 = ThreadLocalStoragePointer[v6]; /*0x90004f*/
  if ( *(_DWORD *)(v45 + 0x1A4) < *(_DWORD *)(v45 + 0x1A8) ) /*0x90005e*/
  {
    v46 = *(_DWORD **)(v45 + 0x1A4); /*0x900060*/
    *v46 = "Sttim"; /*0x900066*/
    v47 = __rdtsc(); /*0x90006c*/
    v46[1] = v47; /*0x900076*/
    *(_DWORD *)(ThreadLocalStoragePointer[v6] + 0x1A4) = v46 + 3; /*0x90007f*/
  }
  *((float *)this + 0xB) = v89; /*0x900089*/
  if ( *((_BYTE *)this + 0x32) ) /*0x90008c*/
  {
    sub_939B60((_BYTE *)this + 0x30, this->m128_i32[2]); /*0x90009f*/
LABEL_9:
    v6 = MEMORY[0xBA9DE4]; /*0x8ffd52*/
  }
  LODWORD(v13) = ThreadLocalStoragePointer[v6]; /*0x8ffd58*/
  if ( *(_DWORD *)(v13 + 0x1A4) < *(_DWORD *)(v13 + 0x1A8) ) /*0x8ffd67*/
  {
    v14 = ThreadLocalStoragePointer[v6]; /*0x8ffd69*/
    v15 = *(_DWORD **)(v13 + 0x1A4); /*0x8ffd6b*/
    *v15 = "lt"; /*0x8ffd71*/
    v13 = __rdtsc(); /*0x8ffd77*/
    v15[1] = v13; /*0x8ffd81*/
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3; /*0x8ffd87*/
  }
  return v13; /*0x8ffd8d*/
}
