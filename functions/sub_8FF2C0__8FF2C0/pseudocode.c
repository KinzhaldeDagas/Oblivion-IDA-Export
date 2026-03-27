unsigned int __cdecl sub_8FF2C0(float *a1, __m128 *a2, __m128 *a3, __m128 *a4, int a5)
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
  float v17; // edx
  float i; // eax
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
  float v32; // eax
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
  int v63; // ecx
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
  int v93; // eax
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

  v5 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "TtPredGskf3";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
  }
  v11 = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) )
  {
    v12 = ThreadLocalStoragePointer[v5];
    v13 = *(_DWORD **)(v11 + 0x1A4);
    *v13 = "Ltintern";
    v13[3] = "init";
    v14 = __rdtsc();
    v13[1] = v14;
    *(_DWORD *)(v12 + 0x1A4) = v13 + 4;
  }
  v15 = *(_DWORD *)(*((_DWORD *)a1 + 2) + 0x28);
  v107 = a1[0x14];
  v16 = &a3->m128_u8[0xC];
  v102 = (float *)v15;
  if ( *(_BYTE *)(v15 + 0x10) )
  {
    v17 = *a1;
    for ( i = *(float *)(*(_DWORD *)a1 + 0xC); i != 0.0; i = *(float *)(LODWORD(i) + 0xC) )
      v17 = i;
    v111 = *(int *)(LODWORD(v17) + 0x20);
    v19 = *((_DWORD *)a1 + 1);
    for ( j = *(_DWORD *)(v19 + 0xC); j; j = *(_DWORD *)(j + 0xC) )
      v19 = j;
    if ( *(float *)&v111 >= (double)*(float *)(v19 + 0x20) )
      v114 = *(float *)(v19 + 0x20);
    else
      v114 = *(float *)&v111;
    v21 = a4->m128_f32[3];
    v22 = v114 * v102[6] + v21;
    v23 = v114 * v102[5];
    *(float *)&v112 = v23;
    if ( v23 >= v22 )
      *(float *)&v112 = v22;
    if ( v107 < (double)*(float *)&v112 )
    {
      v24 = v21 + v114 * v102[0xA];
      v25 = v114 * v102[9];
      if ( v25 >= v24 )
      {
        v108 = v24;
      }
      else
      {
        v103 = v25;
        v108 = v103;
      }
      v26 = ThreadLocalStoragePointer[v5];
      if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) )
      {
        v116 = ThreadLocalStoragePointer[v5];
        v27 = *(_DWORD **)(v26 + 0x1A4);
        *v27 = "Sttoi";
        v28 = __rdtsc();
        v27[1] = v28;
        *(_DWORD *)(v116 + 0x1A4) = v27 + 3;
      }
      sub_93DE40((int)a1, v114, v112, SLODWORD(v108), (int)a3, (int)a4, a5);
      v5 = TlsIndex;
      goto LABEL_22;
    }
    v15 = *(_DWORD *)(*((_DWORD *)a1 + 2) + 0x28);
  }
  if ( v107 > (double)*(float *)(v15 + 0xC) )
  {
    a4->m128_f32[3] = v107;
    if ( !a3->m128_i8[0xE] )
      goto LABEL_73;
    v35 = ThreadLocalStoragePointer[v5];
    if ( *(_DWORD *)(v35 + 0x1A4) < *(_DWORD *)(v35 + 0x1A8) )
    {
      v36 = ThreadLocalStoragePointer[v5];
      v37 = *(_DWORD **)(v35 + 0x1A4);
      *v37 = "StgetPoints";
      v38 = __rdtsc();
      v37[1] = v38;
      *(_DWORD *)(v36 + 0x1A4) = v37 + 3;
    }
    v39 = *((int **)a1 + 1);
    v40 = *(_DWORD **)a1;
    v125 = *(float *)(*((_DWORD *)a1 + 2) + 8);
    v41 = *v40;
    v117 = v39;
    v42 = *v39;
    v123 = *(float *)(*v40 + 0xC);
    v43 = *a4;
    v109 = v42;
    v124 = *(float *)(v42 + 0xC);
    v44 = a3->m128_u8[0xE];
    v45 = v123 + v124 + v125;
    v122 = v43;
    v126 = v45 * v45;
    if ( v44 )
    {
      v105 = (int)&v16[8 * v44 + 4];
      (*(void (__thiscall **)(int, int, _DWORD, char *))(*(_DWORD *)v41 + 0x28))(v41, v105, *v16, v121);
      v46 = (__m128 *)v40[2];
      v47 = *v16;
      v48 = *v46;
      v49 = v46[1];
      v50 = v46[2];
      v51 = v46[3];
      v52 = v47;
      v53 = (__m128 *)v121;
      do
      {
        *v53 = _mm_add_ps(
                 _mm_add_ps(
                   _mm_mul_ps(v48, _mm_shuffle_ps(*v53, *v53, 0)),
                   _mm_mul_ps(v49, _mm_shuffle_ps(*v53, *v53, 0x55))),
                 _mm_add_ps(_mm_mul_ps(v50, _mm_shuffle_ps(*v53, *v53, 0xAA)), v51));
        ++v53;
        --v52;
      }
      while ( v52 > 0 );
      v54 = &v121[0x10 * v47];
      (*(void (__thiscall **)(int, int, _DWORD, char *))(*(_DWORD *)v109 + 0x28))(
        v109,
        v105 + 2 * v47,
        a3->m128_u8[0xD],
        v54);
      v55 = (__m128 *)v117[2];
      v56 = a3->m128_u8[0xD];
      v57 = *v55;
      v58 = v55[1];
      v59 = v55[2];
      v60 = v55[3];
      v61 = (__m128 *)v54;
      do
      {
        *v61 = _mm_add_ps(
                 _mm_add_ps(
                   _mm_mul_ps(v57, _mm_shuffle_ps(*v61, *v61, 0)),
                   _mm_mul_ps(v58, _mm_shuffle_ps(*v61, *v61, 0x55))),
                 _mm_add_ps(_mm_mul_ps(v59, _mm_shuffle_ps(*v61, *v61, 0xAA)), v60));
        ++v61;
        --v56;
      }
      while ( v56 > 0 );
    }
    sub_939BB0(v16, (__m128 *)v121, 0, (__m128 **)a5, *((_DWORD *)a1 + 3));
    v62 = a3->m128_u8[0xE];
    if ( v62 )
    {
      v63 = *(_DWORD *)(a5 + 0x3040);
      if ( v63 )
      {
        **(_DWORD **)(v63 + 4) = *(_DWORD *)a5 - 0x30 * v62;
        *(_DWORD *)(*(_DWORD *)(a5 + 0x3040) + 4) += 4;
      }
    }
    goto LABEL_71;
  }
LABEL_22:
  v29 = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v29 + 0x1A4) < *(_DWORD *)(v29 + 0x1A8) )
  {
    v104 = ThreadLocalStoragePointer[v5];
    v30 = *(_DWORD **)(v29 + 0x1A4);
    *v30 = "Stprocess";
    v31 = __rdtsc();
    v30[1] = v31;
    *(_DWORD *)(v104 + 0x1A4) = v30 + 3;
  }
  v32 = *a1;
  v33 = *((_DWORD **)a1 + 1);
  v119[2] = **(_DWORD **)a1;
  v119[3] = *v33;
  v34 = *((_DWORD *)a1 + 2);
  v119[0] = a1 + 4;
  v119[1] = *(_DWORD *)(LODWORD(v32) + 8);
  v119[4] = *(_DWORD *)(v34 + 8);
  if ( sub_93D4A0((int)v119, (char *)a3, a4, &v120) == 1 )
  {
    if ( a3->m128_i8[0xE] )
      sub_939B60(v16, *((_DWORD *)a1 + 3));
    goto LABEL_72;
  }
  v64 = (unsigned __int8)sub_93A620((int)v16, (int)a3);
  v65 = a3->m128_u8[0xE];
  v115 = *(__m128 **)a5;
  v113 = v64;
  if ( v65 > v64 )
  {
    v66 = *(_DWORD **)a1;
    v118 = *((_DWORD *)a1 + 1);
    v125 = *(float *)(*((_DWORD *)a1 + 2) + 8);
    v67 = *v66;
    v110 = *(float **)v118;
    v123 = *(float *)(*v66 + 0xC);
    v124 = v110[3];
    v122 = *a4;
    v68 = v124 + v123 + v125;
    v126 = v68 * v68;
    if ( v65 )
    {
      v106 = (int)&v16[8 * v65 + 4];
      (*(void (__thiscall **)(int, int, _DWORD, char *))(*(_DWORD *)v67 + 0x28))(v67, v106, *v16, v121);
      v69 = (__m128 *)v66[2];
      v70 = *v16;
      v71 = *v69;
      v72 = v69[1];
      v73 = v69[2];
      v74 = v69[3];
      v75 = v70;
      v76 = (__m128 *)v121;
      do
      {
        *v76 = _mm_add_ps(
                 _mm_add_ps(
                   _mm_mul_ps(v71, _mm_shuffle_ps(*v76, *v76, 0)),
                   _mm_mul_ps(v72, _mm_shuffle_ps(*v76, *v76, 0x55))),
                 _mm_add_ps(_mm_mul_ps(v73, _mm_shuffle_ps(*v76, *v76, 0xAA)), v74));
        ++v76;
        --v75;
      }
      while ( v75 > 0 );
      v77 = &v121[0x10 * v70];
      (*(void (__thiscall **)(float *, int, _DWORD, char *))(*(_DWORD *)v110 + 0x28))(
        v110,
        v106 + 2 * v70,
        a3->m128_u8[0xD],
        v77);
      v78 = *(__m128 **)(v118 + 8);
      v79 = a3->m128_u8[0xD];
      v80 = *v78;
      v81 = v78[1];
      v82 = v78[2];
      v83 = v78[3];
      v84 = (__m128 *)v77;
      do
      {
        *v84 = _mm_add_ps(
                 _mm_add_ps(
                   _mm_mul_ps(v80, _mm_shuffle_ps(*v84, *v84, 0)),
                   _mm_mul_ps(v81, _mm_shuffle_ps(*v84, *v84, 0x55))),
                 _mm_add_ps(_mm_mul_ps(v82, _mm_shuffle_ps(*v84, *v84, 0xAA)), v83));
        ++v84;
        --v79;
      }
      while ( v79 > 0 );
    }
    sub_939BB0(v16, (__m128 *)v121, v113, (__m128 **)a5, *((_DWORD *)a1 + 3));
    v64 = v113;
  }
  v85 = *(__m128 **)a5;
  *v85 = v120;
  v85[1] = *a4;
  if ( v64 )
  {
    v85[2].m128_i16[0] = a3[1].m128_i16[1];
    *(_DWORD *)a5 += 0x30;
    goto LABEL_68;
  }
  v86 = *((_DWORD *)a1 + 2);
  v87 = *(_DWORD *)(v86 + 0x28);
  if ( a3->m128_i8[8] + a3->m128_i8[9] == 4 )
    v88 = *(float *)(v87 + 4);
  else
    v88 = *(float *)(v87 + 8);
  if ( v88 <= a4->m128_f32[3] )
    goto LABEL_68;
  v89 = sub_93AB40(v16, *(_DWORD *)a1, *((_DWORD *)a1 + 1), v86, (int)a3, (int)v85, v115, *((_DWORD *)a1 + 3), 1);
  if ( v89 != 4 )
  {
    if ( v89 == 5 )
    {
      v85 = v115;
    }
    else if ( v89 == 6 )
    {
      v85 = v115;
      *(_DWORD *)a5 -= 0x30;
    }
    else
    {
      v85 = &v115[3 * v89];
    }
    goto LABEL_68;
  }
  if ( v85[2].m128_i16[0] != (__int16)0xFFFF )
  {
    *(_DWORD *)a5 += 0x30;
    goto LABEL_68;
  }
  if ( *(_DWORD *)(a5 + 0x3040) && a2 )
  {
    if ( !(*(int (__thiscall **)(int, int))(**((_DWORD **)a1 + 3) + 0xC))(*((_DWORD *)a1 + 3), 1) )
    {
      v90 = *(__m128 ****)(a5 + 0x3040);
      v91 = *v90;
      *v90 += 3;
      v91[1] = a2;
      *v91 = v85;
      v91[2] = a3;
      *(_DWORD *)a5 += 0x30;
      goto LABEL_68;
    }
    goto LABEL_61;
  }
  v92 = (*(int (__thiscall **)(int, _DWORD, int, int, __m128 *))(**((_DWORD **)a1 + 3) + 8))(
          *((_DWORD *)a1 + 3),
          *(_DWORD *)a1,
          *((_DWORD *)a1 + 1),
          *((_DWORD *)a1 + 2),
          v85);
  v85[2].m128_i16[0] = v92;
  if ( v92 == (__int16)0xFFFF )
  {
LABEL_61:
    sub_939B00(v16, 0);
    v85 = v115;
    goto LABEL_68;
  }
  a3[1].m128_i16[1] = v92;
  *(_DWORD *)a5 += 0x30;
LABEL_68:
  v93 = *(_DWORD *)(a5 + 0x3040);
  if ( v93 )
  {
    if ( (unsigned int)v85 < *(_DWORD *)a5 )
    {
      **(_DWORD **)(v93 + 4) = v85;
      *(_DWORD *)(*(_DWORD *)(a5 + 0x3040) + 4) += 4;
    }
  }
LABEL_71:
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
LABEL_72:
  v5 = TlsIndex;
LABEL_73:
  a2->m128_i8[2] = a3->m128_i8[0xE];
  v94 = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v94 + 0x1A4) < *(_DWORD *)(v94 + 0x1A8) )
  {
    v95 = *(_DWORD **)(v94 + 0x1A4);
    *v95 = "lt";
    v96 = __rdtsc();
    v95[1] = v96;
    *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x1A4) = v95 + 3;
  }
  v97 = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v97 + 0x1A4) < *(_DWORD *)(v97 + 0x1A8) )
  {
    v98 = ThreadLocalStoragePointer[v5];
    v99 = *(_DWORD **)(v97 + 0x1A4);
    *v99 = "Et";
    v100 = __rdtsc();
    v99[1] = v100;
    *(_DWORD *)(v98 + 0x1A4) = v99 + 3;
  }
  return (unsigned int)a3 + ((2 * (a3->m128_u8[0xC] + a3->m128_u8[0xD] + 4 * a3->m128_u8[0xE]) + 0x1F) & 0xFFFFFFF0);
}
