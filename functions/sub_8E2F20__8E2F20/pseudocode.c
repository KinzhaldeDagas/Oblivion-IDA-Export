void __userpurge sub_8E2F20(__m128 *a1@<ecx>, double a2@<st1>, __m128 *a3, int a4)
{
  __m128 v6; // xmm6
  __m128 v7; // xmm5
  __m128 v8; // xmm4
  __m128 *v9; // ebx
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  __m128 v12; // xmm3
  __m128 v13; // xmm2
  __m128 v14; // xmm0
  int v15; // esi
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v17; // eax
  _DWORD *v18; // ebx
  unsigned __int64 v19; // rax
  __int32 v20; // eax
  _DWORD *v21; // ecx
  _BYTE *v22; // esi
  unsigned int v23; // eax
  int v24; // eax
  _OWORD *v25; // ecx
  int v26; // eax
  _OWORD *v27; // edx
  __int32 v28; // ebx
  __int32 *v29; // edi
  int v30; // ebx
  char v31; // cl
  int v32; // edx
  int v33; // eax
  unsigned int v34; // ebx
  unsigned int v35; // edi
  unsigned __int16 *i; // eax
  int v37; // ebx
  unsigned int v38; // edx
  unsigned int v39; // edi
  unsigned int v40; // edx
  unsigned int v41; // edi
  unsigned int v42; // edi
  unsigned __int16 *v43; // eax
  unsigned int v44; // ebx
  unsigned int v45; // edi
  unsigned int v46; // edx
  unsigned int v47; // edx
  int v48; // eax
  int v49; // edi
  _DWORD *v50; // ecx
  unsigned __int64 v51; // rax
  _BYTE *v52; // ebx
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // edi
  _DWORD *v58; // ecx
  unsigned __int64 v59; // rax
  int v60; // edi
  float *v61; // edx
  int j; // ecx
  long double v63; // st6
  double v64; // st6
  float v65; // eax
  double v66; // st5
  float v67; // ebx
  __int32 v68; // eax
  int v69; // eax
  int v70; // ebx
  float v71; // eax
  double v72; // st6
  int v73; // ecx
  int v74; // eax
  int v75; // edx
  double v76; // st6
  int v77; // ecx
  double v78; // st6
  int v79; // eax
  double v80; // st6
  int v81; // ebx
  double v82; // st6
  int v83; // edi
  int v84; // eax
  unsigned __int8 v85; // cl
  int v86; // eax
  _WORD *v87; // eax
  bool v88; // zf
  float v89; // eax
  int v90; // edi
  unsigned __int8 v91; // cl
  __int16 v92; // dx
  _WORD *v93; // eax
  int v94; // eax
  int v95; // edi
  _DWORD *v96; // ecx
  unsigned __int64 v97; // rax
  _DWORD *v98; // ecx
  unsigned int v99; // [esp+28h] [ebp-F8h]
  _DWORD *v100; // [esp+28h] [ebp-F8h]
  int v101; // [esp+28h] [ebp-F8h]
  int v102; // [esp+2Ch] [ebp-F4h]
  float v103; // [esp+2Ch] [ebp-F4h]
  unsigned int v104; // [esp+30h] [ebp-F0h]
  char *v105; // [esp+30h] [ebp-F0h]
  float *v106; // [esp+30h] [ebp-F0h]
  __int32 *v107; // [esp+38h] [ebp-E8h]
  float v108; // [esp+38h] [ebp-E8h]
  float *v109; // [esp+38h] [ebp-E8h]
  unsigned __int8 v110; // [esp+3Fh] [ebp-E1h]
  float v111; // [esp+40h] [ebp-E0h] BYREF
  float v112; // [esp+44h] [ebp-DCh]
  float v113; // [esp+48h] [ebp-D8h]
  int v114; // [esp+4Ch] [ebp-D4h]
  float v115; // [esp+50h] [ebp-D0h] BYREF
  float v116; // [esp+54h] [ebp-CCh]
  float v117; // [esp+58h] [ebp-C8h]
  int v118; // [esp+5Ch] [ebp-C4h]
  int v119; // [esp+6Ch] [ebp-B4h]
  __m128 v120; // [esp+70h] [ebp-B0h]
  int v121; // [esp+84h] [ebp-9Ch]
  _DWORD v122[3]; // [esp+88h] [ebp-98h]
  float v123[3]; // [esp+94h] [ebp-8Ch]
  float v124; // [esp+A0h] [ebp-80h]
  float v125; // [esp+A4h] [ebp-7Ch]
  float v126; // [esp+A8h] [ebp-78h]
  float v127[8]; // [esp+B0h] [ebp-70h]
  __m128 v128; // [esp+D0h] [ebp-50h]
  int v129[2]; // [esp+E4h] [ebp-3Ch]
  _DWORD v130[9]; // [esp+ECh] [ebp-34h]
  __m128 v131; // [esp+110h] [ebp-10h]

  v121 = (int)a1;
  v6 = (__m128)xmmword_B2FC70;
  v7 = (__m128)xmmword_A9A660;
  v8 = (__m128)xmmword_A9A650;
  v9 = a3;
  v10 = a3[2];
  v11 = _mm_add_ps(*a3, v10);
  v128 = _mm_sub_ps(*a3, v10);
  v12 = a1[1];
  v13 = a1[3];
  v14 = _mm_add_ps(_mm_max_ps(_mm_min_ps(_mm_mul_ps(_mm_add_ps(v128, v12), v13), v6), v7), v8);
  *(__m128 *)&v130[1] = v11;
  LODWORD(v115) = (unsigned __int16)((unsigned __int32)v14.m128_i32[0] >> 7);
  v118 = (unsigned __int16)((unsigned __int32)v14.m128_i32[3] >> 7);
  v120 = _mm_add_ps(_mm_max_ps(_mm_min_ps(_mm_mul_ps(_mm_add_ps(v11, v12), v13), v6), v7), v8);
  LODWORD(v116) = (unsigned __int16)((unsigned __int32)v14.m128_i32[1] >> 7);
  LODWORD(v117) = (unsigned __int16)((unsigned __int32)v14.m128_i32[2] >> 7);
  LODWORD(v111) = (unsigned __int16)((unsigned __int32)v120.m128_i32[0] >> 7);
  v15 = TlsIndex;
  LODWORD(v112) = (unsigned __int16)((unsigned __int32)v120.m128_i32[1] >> 7);
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v114 = (unsigned __int16)((unsigned __int32)v120.m128_i32[3] >> 7);
  v17 = ThreadLocalStoragePointer[v15];
  LODWORD(v113) = (unsigned __int16)((unsigned __int32)v120.m128_i32[2] >> 7);
  if ( *(_DWORD *)(v17 + 0x1A4) < *(_DWORD *)(v17 + 0x1A8) )
  {
    v18 = *(_DWORD **)(v17 + 0x1A4);
    *v18 = "Lthk3AxisSweep";
    v18[3] = "bitfield";
    v19 = __rdtsc();
    v18[1] = v19;
    *(_DWORD *)(ThreadLocalStoragePointer[v15] + 0x1A4) = v18 + 4;
    v9 = a3;
  }
  v20 = a1[4].m128_i32[1];
  v119 = ThreadLocalStoragePointer[v15];
  v21 = *(_DWORD **)(v119 + 0x19C);
  v22 = (_BYTE *)v21[8];
  v23 = (v20 + 0x20) & 0xFFFFFFF0;
  if ( (unsigned int)&v22[v23] > v21[0xB] )
    v22 = (_BYTE *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v21 + 0xC))(v21, v23);
  else
    v21[8] = &v22[v23];
  v24 = a1[4].m128_i32[1] >> 4;
  v25 = v22;
  if ( v24 >= 0 )
  {
    v26 = v24 + 1;
    do
    {
      v27 = v25++;
      --v26;
      *v27 = 0;
    }
    while ( v26 );
  }
  v28 = v9[3].m128_i32[0];
  if ( v28 )
    v29 = (__int32 *)v28;
  else
    v29 = &a1[4].m128_i32[3];
  v30 = 0;
  v31 = 1;
  v107 = v29;
  v102 = 0;
  do
  {
    v32 = v107[1];
    v33 = *v107;
    v34 = *(_DWORD *)((char *)&v115 + v30);
    v99 = v34;
    if ( v34 >= *(unsigned __int16 *)(*v107 + 4 * (v32 >> 1)) )
    {
      v42 = v33 + 0x10;
      v43 = (unsigned __int16 *)(v33 + 4 * v32 - 8);
      if ( (unsigned int)v43 >= v42 )
      {
        v44 = *(_DWORD *)((char *)&v111 + v102);
        do
        {
          if ( v43[0xFFFFFFFA] <= v44 )
            break;
          v22[v43[1]] ^= v31;
          v22[v43[0xFFFFFFFF]] ^= v31;
          v22[v43[0xFFFFFFFD]] ^= v31;
          v22[v43[0xFFFFFFFB]] ^= v31;
          v43 += 0xFFFFFFF8;
        }
        while ( (unsigned int)v43 >= v42 );
      }
      v37 = v102;
      v45 = *(_DWORD *)((char *)&v111 + v102);
      if ( *v43 > v45 )
      {
        do
        {
          v22[v43[1]] ^= v31;
          v46 = v43[0xFFFFFFFE];
          v43 += 0xFFFFFFFE;
        }
        while ( v46 > v45 );
      }
      *(_DWORD *)((char *)v122 + v102) = v43 + 2;
      if ( *v43 > v99 )
      {
        do
        {
          v22[v43[1]] ^= v31 & (unsigned __int8)-(*(_BYTE *)v43 & 1);
          v47 = v43[0xFFFFFFFE];
          v43 += 0xFFFFFFFE;
        }
        while ( v47 > v99 );
      }
      *(_DWORD *)((char *)v123 + v102) = v43 + 2;
    }
    else
    {
      v35 = v33 + 4 * v32 - 0x10;
      for ( i = (unsigned __int16 *)(v33 + 4); (unsigned int)i < v35; i += 8 )
      {
        if ( i[6] > v34 )
          break;
        v22[i[1]] ^= v31;
        v22[i[3]] ^= v31;
        v22[i[5]] ^= v31;
        v22[i[7]] ^= v31;
      }
      v37 = v102;
      if ( *i <= v99 )
      {
        do
        {
          v22[i[1]] ^= v31;
          v38 = i[2];
          i += 2;
        }
        while ( v38 <= v99 );
      }
      v39 = *i;
      v40 = *(_DWORD *)((char *)&v111 + v102);
      *(_DWORD *)((char *)v123 + v102) = i;
      if ( v39 <= v40 )
      {
        do
        {
          v22[i[1]] ^= v31 & (unsigned __int8)((*(_BYTE *)i & 1) - 1);
          v41 = i[2];
          i += 2;
        }
        while ( v41 <= v40 );
        v37 = v102;
      }
      *(_DWORD *)((char *)v122 + v37) = i;
    }
    v30 = v37 + 4;
    v31 *= 2;
    v107 += 3;
    v102 = v30;
  }
  while ( v30 < 0xC );
  v48 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v48 + 0x1A4) < *(_DWORD *)(v48 + 0x1A8) )
  {
    v49 = v119;
    v50 = *(_DWORD **)(v119 + 0x1A4);
    *v50 = "StStartOverlaps";
    v51 = __rdtsc();
    v50[1] = v51;
    *(_DWORD *)(v49 + 0x1A4) = v50 + 3;
  }
  v103 = 1.0;
  v52 = v22;
  v104 = (unsigned int)&v22[4 * (*(int *)(v121 + 0x44) >> 2) + 4];
  if ( (unsigned int)v22 < v104 )
  {
    v100 = (_DWORD *)(*(_DWORD *)(v121 + 0x40) + 0x1C);
    do
    {
      if ( ((*(_DWORD *)v52 + 0x1010101) & 0x8080808) != 0 )
      {
        if ( *v52 == 7 )
        {
          v53 = v100[0xFFFFFFFC];
          if ( (v53 & 1) == 0 )
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a4 + 4))(a4, v53, 0);
            if ( v103 >= a2 )
              v103 = a2;
          }
        }
        if ( v52[1] == 7 && (*v100 & 1) == 0 )
        {
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a4 + 4))(a4, *v100, 0);
          if ( v103 >= a2 )
            v103 = a2;
        }
        if ( v52[2] == 7 )
        {
          v54 = v100[4];
          if ( (v54 & 1) == 0 )
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a4 + 4))(a4, v54, 0);
            if ( v103 >= a2 )
              v103 = a2;
          }
        }
        if ( v52[3] == 7 )
        {
          v55 = v100[8];
          if ( (v55 & 1) == 0 )
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a4 + 4))(a4, v55, 0);
            if ( v103 >= a2 )
              v103 = a2;
          }
        }
      }
      v52 += 4;
      v100 += 0x10;
    }
    while ( (unsigned int)v52 < v104 );
  }
  v56 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v56 + 0x1A4) < *(_DWORD *)(v56 + 0x1A8) )
  {
    v57 = v119;
    v58 = *(_DWORD **)(v119 + 0x1A4);
    *v58 = "StWalk";
    v59 = __rdtsc();
    v58[1] = v59;
    *(_DWORD *)(v57 + 0x1A4) = v58 + 3;
  }
  v60 = v121;
  v131 = _mm_sub_ps(a3[1], *a3);
  v61 = (float *)(v121 + 0x30);
  v105 = (char *)a3 - v121;
  for ( j = 0; j < 3; ++j )
  {
    v63 = v131.m128_f32[j] * *v61;
    v108 = v63;
    v64 = fabs(v63);
    if ( v108 <= (double)*(float *)&SrcStr )
    {
      v65 = v123[j];
      v66 = v128.m128_f32[j];
      v127[j + 5] = NAN;
      v67 = *(float *)&v122[j];
      *(float *)&v122[j] = v65;
      v68 = v130[j + 1];
      *(float *)&v130[j + 1] = v66;
      v128.m128_i32[j] = v68;
      v69 = *(_DWORD *)((char *)&v115 + j * 4);
      v123[j] = v67;
      v70 = *(_DWORD *)((char *)&v111 + j * 4);
      *(_DWORD *)((char *)&v111 + j * 4) = v69;
      v71 = v123[j];
      *(_DWORD *)((char *)&v115 + j * 4) = v70;
      LODWORD(v123[j]) = LODWORD(v71) - 4;
      v122[j] -= 4;
      v129[j] = 1;
      v130[j + 6] = 0;
    }
    else
    {
      LODWORD(v127[j + 5]) = 4;
      v129[j] = 0;
      v130[j + 6] = 1;
    }
    if ( v64 < (v61[0xFFFFFFF8] + v128.m128_f32[j]) * *v61 * flt_A9A648
      || v64 < (*(float *)&v105[(_DWORD)v61 - 0x20] + v61[0xFFFFFFF8]) * *v61 * flt_A9A648 )
    {
      *(float *)((char *)&v124 + j * 4) = 0.0;
      v120.m128_i32[j] = 0xC0000000;
      v127[j] = -2.0;
    }
    else
    {
      v72 = fConstant_1 / v108;
      *(float *)((char *)&v124 + j * 4) = v72;
      v120.m128_f32[j] = ((v61[0xFFFFFFF8] + v128.m128_f32[j]) * *v61 - *(float *)(v60 + 0x7C)) * v72;
      v127[j] = ((*(float *)&v130[j + 1] + v61[0xFFFFFFF8]) * *v61 - *(float *)(v60 + 0x7C)) * v72;
    }
    ++v61;
  }
  v73 = (unsigned __int16)*(_WORD *)LODWORD(v123[1]);
  v74 = (unsigned __int16)*(_WORD *)LODWORD(v123[2]);
  v75 = *(unsigned __int16 *)v122[0];
  v111 = (double)(unsigned __int16)*(_WORD *)LODWORD(v123[0]) * v124 - v120.m128_f32[0];
  v76 = (double)v73;
  v77 = *(unsigned __int16 *)v122[1];
  v112 = v76 * v125 - v120.m128_f32[1];
  v78 = (double)v74;
  v79 = *(unsigned __int16 *)v122[2];
  v80 = v78 * v126;
  *v22 = 8;
  v113 = v80 - v120.m128_f32[2];
  v115 = (double)v75 * v124 - v127[0];
  v116 = (double)v77 * v125 - v127[1];
  v117 = (double)v79 * v126 - v127[2];
  if ( v111 >= (double)v112 )
  {
    v101 = 1;
    if ( v112 < (double)v113 )
      goto LABEL_71;
LABEL_70:
    v101 = 2;
    goto LABEL_71;
  }
  if ( v111 >= (double)v113 )
    goto LABEL_70;
  v101 = 0;
LABEL_71:
  if ( v115 >= (double)v116 )
  {
    v81 = 1;
    if ( v116 < (double)v117 )
      goto LABEL_76;
  }
  else if ( v115 < (double)v117 )
  {
    v81 = 0;
    goto LABEL_76;
  }
LABEL_75:
  v81 = 2;
LABEL_76:
  while ( 2 )
  {
    v109 = &v115 + v81;
    v106 = &v111 + v101;
    if ( *v109 < (double)*v106 )
    {
      v82 = *(&v115 + v81);
      if ( v82 > v103 )
        break;
      while ( 1 )
      {
        v83 = v122[v81];
        v84 = *(unsigned __int16 *)(v83 + 2);
        v85 = ((LOBYTE(v130[v81 + 6]) ^ *(_BYTE *)v83 & 1) << v81) ^ v22[v84];
        v22[v84] = v85;
        if ( v85 >= 7u )
        {
          if ( !v84 )
          {
            *v109 = 2.0;
LABEL_85:
            if ( v115 >= (double)v116 )
            {
              if ( v116 >= (double)v117 )
                goto LABEL_75;
              v81 = 1;
            }
            else
            {
              if ( v115 >= (double)v117 )
                goto LABEL_75;
              v81 = 0;
            }
            goto LABEL_76;
          }
          v86 = *(_DWORD *)(*(_DWORD *)(v121 + 0x40) + 0x10 * v84 + 0xC);
          if ( (v86 & 1) == 0 )
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a4 + 4))(a4, v86, 0);
            if ( v103 >= v82 )
              v103 = v82;
          }
        }
        v87 = (_WORD *)(v83 + LODWORD(v127[v81 + 5]));
        v88 = *(_WORD *)v83 == *v87;
        v122[v81] = v87;
        if ( !v88 )
        {
          *v109 = (double)(unsigned __int16)*v87 * *(&v124 + v81) - v127[v81];
          goto LABEL_85;
        }
      }
    }
    if ( *(&v111 + v101) <= (double)v103 )
    {
      v110 = v129[v101];
      while ( 1 )
      {
        v89 = v123[v101];
        v90 = *(unsigned __int16 *)(LODWORD(v89) + 2);
        v91 = ((v110 ^ *(_BYTE *)LODWORD(v89) & 1) << v101) ^ v22[v90];
        v22[v90] = v91;
        if ( v91 > 8u )
          break;
        v92 = *(_WORD *)LODWORD(v89);
        v93 = (_WORD *)(LODWORD(v127[v101 + 5]) + LODWORD(v89));
        v88 = v92 == *v93;
        LODWORD(v123[v101]) = v93;
        if ( !v88 )
        {
          *v106 = (double)(unsigned __int16)*v93 * *(&v124 + v101) - v120.m128_f32[v101];
          goto LABEL_97;
        }
      }
      *v106 = 2.0;
LABEL_97:
      if ( v111 >= (double)v112 )
      {
        if ( v112 < (double)v113 )
        {
          v101 = 1;
          continue;
        }
      }
      else if ( v111 < (double)v113 )
      {
        v101 = 0;
        continue;
      }
      v101 = 2;
      continue;
    }
    break;
  }
  v94 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v95 = v119;
  if ( *(_DWORD *)(v94 + 0x1A4) < *(_DWORD *)(v94 + 0x1A8) )
  {
    v96 = *(_DWORD **)(v119 + 0x1A4);
    *v96 = "lt";
    v97 = __rdtsc();
    v96[1] = v97;
    *(_DWORD *)(v95 + 0x1A4) = v96 + 3;
  }
  v98 = *(_DWORD **)(v95 + 0x19C);
  v88 = v22 == (_BYTE *)v98[0xA];
  v98[8] = v22;
  if ( v88 )
    (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v98 + 0x10))(v98, v22);
}
