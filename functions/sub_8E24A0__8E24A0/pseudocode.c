void __userpurge sub_8E24A0(__m128 *a1@<ecx>, double a2@<st1>, __m128 *a3, unsigned int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  __m128 v8; // xmm5
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // esi
  int v12; // esi
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  _DWORD *v15; // ecx
  _BYTE *v16; // esi
  unsigned __int32 v17; // eax
  __int32 v18; // eax
  _OWORD *v19; // ecx
  __int32 v20; // edx
  _OWORD *v21; // eax
  _DWORD *v22; // ecx
  unsigned __int64 v23; // rax
  __int8 *v24; // edi
  char v25; // cl
  __int64 v26; // rax
  unsigned int v27; // edi
  unsigned int v28; // ebx
  unsigned __int16 *k; // eax
  int v30; // edx
  unsigned int v31; // ebx
  unsigned __int16 *j; // eax
  int v33; // edx
  int v34; // eax
  _DWORD *v35; // edi
  unsigned __int64 v36; // rax
  _DWORD *v37; // ecx
  int v38; // ebx
  unsigned __int32 v39; // eax
  __int32 v40; // eax
  __m128 *v41; // edi
  __int32 v42; // ecx
  unsigned __int32 v43; // edx
  _BYTE *v44; // eax
  __int32 v45; // edi
  __int32 v46; // edi
  __int32 v47; // edi
  __int32 v48; // edi
  int v49; // eax
  _DWORD *v50; // ecx
  unsigned __int64 v51; // rax
  int v52; // eax
  int v53; // edi
  int v54; // ebx
  __m128 *v55; // ecx
  __m128 v56; // xmm0
  __int32 v57; // edx
  __int32 v58; // eax
  __m128 *v59; // edx
  long double v60; // st6
  double v61; // st6
  double v62; // st5
  double v63; // st6
  double v64; // st6
  int v65; // eax
  int v66; // ecx
  int v67; // eax
  int v68; // ebx
  double v69; // st6
  char mm; // dl
  _WORD *v71; // edi
  int v72; // eax
  unsigned __int8 v73; // cl
  int v74; // eax
  int v75; // edx
  bool v76; // zf
  unsigned int v77; // edi
  int *v78; // eax
  int v79; // ecx
  bool v80; // cc
  _DWORD *v81; // edx
  _DWORD *v82; // ecx
  unsigned __int64 v83; // rax
  _DWORD *v84; // ecx
  _DWORD *v85; // ecx
  int v86; // [esp+30h] [ebp-C0h]
  float *v87; // [esp+30h] [ebp-C0h]
  unsigned int n; // [esp+34h] [ebp-BCh]
  unsigned int ii; // [esp+34h] [ebp-BCh]
  unsigned int jj; // [esp+34h] [ebp-BCh]
  unsigned int kk; // [esp+34h] [ebp-BCh]
  float v92; // [esp+34h] [ebp-BCh]
  int i; // [esp+38h] [ebp-B8h]
  _DWORD *v94; // [esp+38h] [ebp-B8h]
  __int64 v95; // [esp+38h] [ebp-B8h]
  int *v96; // [esp+3Ch] [ebp-B4h]
  _BYTE *v97; // [esp+3Ch] [ebp-B4h]
  _DWORD *v98; // [esp+40h] [ebp-B0h]
  float v99; // [esp+40h] [ebp-B0h]
  _DWORD *v100; // [esp+44h] [ebp-ACh]
  int v101; // [esp+44h] [ebp-ACh]
  _DWORD *v102; // [esp+48h] [ebp-A8h]
  float v103; // [esp+48h] [ebp-A8h]
  int v104; // [esp+50h] [ebp-A0h]
  unsigned __int32 v106; // [esp+58h] [ebp-98h]
  int v107; // [esp+58h] [ebp-98h]
  int m; // [esp+5Ch] [ebp-94h]
  __m128 v109; // [esp+60h] [ebp-90h] BYREF
  float v110; // [esp+74h] [ebp-7Ch] BYREF
  float v111; // [esp+78h] [ebp-78h]
  float v112; // [esp+7Ch] [ebp-74h]
  int v113; // [esp+80h] [ebp-70h]
  __int16 v114; // [esp+86h] [ebp-6Ah]
  float v115; // [esp+88h] [ebp-68h] BYREF
  _WORD *v116; // [esp+8Ch] [ebp-64h]
  _WORD *v117; // [esp+90h] [ebp-60h]
  int v118; // [esp+94h] [ebp-5Ch]
  int v119; // [esp+98h] [ebp-58h]
  int v120; // [esp+9Ch] [ebp-54h]
  int v121; // [esp+A0h] [ebp-50h]
  _DWORD v122[3]; // [esp+A4h] [ebp-4Ch]
  float v123[4]; // [esp+B0h] [ebp-40h] BYREF
  float v124[5]; // [esp+C0h] [ebp-30h] BYREF
  int v125[3]; // [esp+D4h] [ebp-1Ch] BYREF
  __m128 v126; // [esp+E0h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v8 = _mm_add_ps(
         _mm_max_ps(
           _mm_min_ps(_mm_mul_ps(_mm_add_ps(*a3, a1[1]), a1[3]), (__m128)xmmword_B2FC70),
           (__m128)xmmword_A9A660),
         (__m128)xmmword_A9A650);
  v109.m128_u64[1] = v8.m128_u64[1];
  v109.m128_i32[0] = (unsigned __int16)((unsigned __int32)v8.m128_i32[0] >> 7);
  v109.m128_i32[1] = (unsigned __int16)((unsigned __int32)v8.m128_i32[1] >> 7);
  v9 = TlsIndex;
  v109.m128_i32[3] = (unsigned __int16)((unsigned __int32)v8.m128_i32[3] >> 7);
  v10 = ThreadLocalStoragePointer[v9];
  v114 = (unsigned __int32)v8.m128_i32[3] >> 7;
  v11 = *(_DWORD *)(v10 + 0x1A8);
  v109.m128_i32[2] = (unsigned __int16)((unsigned __int32)v8.m128_i32[2] >> 7);
  if ( *(_DWORD *)(v10 + 0x1A4) < v11 )
  {
    v12 = v10;
    v13 = *(_DWORD **)(v10 + 0x1A4);
    *v13 = "Lthk3AxisSweep";
    v13[3] = "memory";
    v14 = __rdtsc();
    v13[1] = v14;
    *(_DWORD *)(v12 + 0x1A4) = v13 + 4;
  }
  v15 = *(_DWORD **)(ThreadLocalStoragePointer[TlsIndex] + 0x19C);
  v16 = (_BYTE *)v15[8];
  v104 = ThreadLocalStoragePointer[TlsIndex];
  v17 = (a1[4].m128_i32[1] + 0x20) & 0xFFFFFFF0;
  if ( (unsigned int)&v16[v17] > v15[0xB] )
    v16 = (_BYTE *)(*(int (__thiscall **)(_DWORD *, unsigned __int32))(*v15 + 0xC))(
                     v15,
                     (a1[4].m128_i32[1] + 0x20) & 0xFFFFFFF0);
  else
    v15[8] = &v16[v17];
  v18 = a1[4].m128_i32[1] >> 4;
  v19 = v16;
  if ( v18 >= 0 )
  {
    v20 = v18 + 1;
    do
    {
      v21 = v19++;
      --v20;
      *v21 = 0;
    }
    while ( v20 );
  }
  if ( *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 0x1A8) )
  {
    v22 = *(_DWORD **)(v104 + 0x1A4);
    *v22 = "Stbitfield";
    v23 = __rdtsc();
    v22[1] = v23;
    *(_DWORD *)(v104 + 0x1A4) = v22 + 3;
  }
  if ( a3[1].m128_i32[3] )
    v24 = (__int8 *)a3[1].m128_i32[3];
  else
    v24 = &a1[4].m128_i8[0xC];
  v25 = 0x11;
  v96 = (int *)v24;
  for ( i = 0; i < 3; ++i )
  {
    v26 = *(_QWORD *)v96;
    v27 = v109.m128_u32[i];
    if ( v27 >= *(unsigned __int16 *)(*v96 + 4 * (v96[1] >> 1)) )
    {
      v31 = v26 + 0x10;
      for ( j = (unsigned __int16 *)(v26 + 4 * HIDWORD(v26) - 8); (unsigned int)j >= v31; j += 0xFFFFFFF8 )
      {
        if ( j[0xFFFFFFFA] <= v27 )
          break;
        v16[j[1]] ^= v25;
        v16[j[0xFFFFFFFF]] ^= v25;
        v16[j[0xFFFFFFFD]] ^= v25;
        v16[j[0xFFFFFFFB]] ^= v25;
      }
      for ( ; *j > v27; v16[v33] ^= v25 )
      {
        v33 = j[1];
        j += 0xFFFFFFFE;
      }
      k = j + 2;
    }
    else
    {
      v28 = v26 + 4 * HIDWORD(v26) - 0x10;
      for ( k = (unsigned __int16 *)(v26 + 4); (unsigned int)k < v28; k += 8 )
      {
        if ( k[6] > v27 )
          break;
        v16[k[1]] ^= v25;
        v16[k[3]] ^= v25;
        v16[k[5]] ^= v25;
        v16[k[7]] ^= v25;
      }
      for ( ; *k <= v27; v16[v30] ^= v25 )
      {
        v30 = k[1];
        k += 2;
      }
    }
    v122[i] = k;
    v25 *= 2;
    v96 += 3;
  }
  v34 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v34 + 0x1A4) < *(_DWORD *)(v34 + 0x1A8) )
  {
    v35 = *(_DWORD **)(v104 + 0x1A4);
    *v35 = "StStartOverlaps";
    v36 = __rdtsc();
    v35[1] = v36;
    *(_DWORD *)(v104 + 0x1A4) = v35 + 3;
  }
  v37 = *(_DWORD **)(v104 + 0x19C);
  v38 = v37[8];
  v39 = (4 * a3[1].m128_i32[0] + 0x10) & 0xFFFFFFF0;
  if ( v38 + v39 > v37[0xB] )
    v38 = (*(int (__thiscall **)(_DWORD *, unsigned __int32))(*v37 + 0xC))(
            v37,
            (4 * a3[1].m128_i32[0] + 0x10) & 0xFFFFFFF0);
  else
    v37[8] = v38 + v39;
  v40 = 0;
  for ( m = v38; v40 < a3[1].m128_i32[0]; ++v40 )
    *(_DWORD *)(v38 + 4 * v40) = 0x3F800000;
  v41 = a1;
  v42 = a1[4].m128_i32[0];
  v43 = (unsigned __int32)&v16[4 * (a1[4].m128_i32[1] >> 2) + 4];
  v44 = v16;
  v97 = v16;
  v106 = v43;
  if ( (unsigned int)v16 < v43 )
  {
    v94 = (_DWORD *)(v42 + 0x3C);
    v98 = (_DWORD *)(v42 + 0x2C);
    v100 = (_DWORD *)(v42 + 0xC);
    v102 = (_DWORD *)(v42 + 0x1C);
    do
    {
      if ( ((*(_DWORD *)v44 + 0x1010101) & 0x8080808) != 0 )
      {
        if ( *v44 == 0x77 && (*(_BYTE *)v100 & 1) == 0 )
        {
          v45 = 0;
          for ( n = a4; v45 < a3[1].m128_i32[0]; n += a5 )
          {
            (*(void (__thiscall **)(unsigned int, _DWORD, __int32))(*(_DWORD *)n + 4))(n, *v100, v45);
            if ( *(float *)(v38 + 4 * v45) < a2 )
              a2 = *(float *)(v38 + 4 * v45);
            *(float *)(v38 + 4 * v45++) = a2;
          }
        }
        if ( v97[1] == 0x77 && (*(_BYTE *)v102 & 1) == 0 )
        {
          v46 = 0;
          for ( ii = a4; v46 < a3[1].m128_i32[0]; ii += a5 )
          {
            (*(void (__thiscall **)(unsigned int, _DWORD, __int32))(*(_DWORD *)ii + 4))(ii, *v102, v46);
            if ( *(float *)(v38 + 4 * v46) < a2 )
              a2 = *(float *)(v38 + 4 * v46);
            *(float *)(v38 + 4 * v46++) = a2;
          }
        }
        if ( v97[2] == 0x77 && (*(_BYTE *)v98 & 1) == 0 )
        {
          v47 = 0;
          for ( jj = a4; v47 < a3[1].m128_i32[0]; jj += a5 )
          {
            (*(void (__thiscall **)(unsigned int, _DWORD, __int32))(*(_DWORD *)jj + 4))(jj, *v98, v47);
            if ( *(float *)(v38 + 4 * v47) < a2 )
              a2 = *(float *)(v38 + 4 * v47);
            *(float *)(v38 + 4 * v47++) = a2;
          }
        }
        if ( v97[3] == 0x77 && (*(_BYTE *)v94 & 1) == 0 )
        {
          v48 = 0;
          for ( kk = a4; v48 < a3[1].m128_i32[0]; kk += a5 )
          {
            (*(void (__thiscall **)(unsigned int, _DWORD, __int32))(*(_DWORD *)kk + 4))(kk, *v94, v48);
            if ( *(float *)(v38 + 4 * v48) < a2 )
              a2 = *(float *)(v38 + 4 * v48);
            *(float *)(v38 + 4 * v48++) = a2;
          }
        }
        v100 += 0x10;
        v44 = v97 + 4;
        v98 += 0x10;
        v43 = v106;
        v94 += 0x10;
        v102 += 0x10;
        v97 += 4;
      }
      else if ( ((*((_DWORD *)v44 + 1) + 0x1010101) & 0x8080808) != 0 )
      {
        v100 += 0x10;
        v102 += 0x10;
        v98 += 0x10;
        v94 += 0x10;
        v44 += 4;
        v97 = v44;
      }
      else
      {
        if ( ((*((_DWORD *)v44 + 2) + 0x1010101) & 0x8080808) != 0 )
        {
          v100 += 0x20;
          v102 += 0x20;
          v98 += 0x20;
          v94 += 0x20;
          v44 += 8;
        }
        else
        {
          v100 += 0x30;
          v102 += 0x30;
          v98 += 0x30;
          v44 += 0xC;
          v94 += 0x30;
        }
        v97 = v44;
      }
    }
    while ( (unsigned int)v44 < v43 );
    v41 = a1;
  }
  v49 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  *v16 = 0x88;
  if ( *(_DWORD *)(v49 + 0x1A4) < *(_DWORD *)(v49 + 0x1A8) )
  {
    v50 = *(_DWORD **)(v104 + 0x1A4);
    *v50 = "StWalk";
    v51 = __rdtsc();
    v50[1] = v51;
    *(_DWORD *)(v104 + 0x1A4) = v50 + 3;
  }
  v95 = a4;
  v52 = a3[1].m128_i32[0];
  v113 = v41[4].m128_i32[1];
  if ( v52 > 0 )
  {
    v121 = (char *)&v126 - (char *)a3;
    v119 = (char *)&v109 - (char *)a3;
    v120 = (char *)v125 - (char *)a3;
    v118 = (char *)&v115 - (char *)a3;
    v101 = (char *)v124 - (char *)a3;
    v107 = (char *)v123 - (char *)a3;
    do
    {
      v99 = *(float *)(m + 4 * HIDWORD(v95));
      v115 = *(float *)v122;
      v117 = (_WORD *)v122[2];
      v53 = v118;
      v54 = v120;
      v116 = (_WORD *)v122[1];
      v55 = a3;
      v56 = *a3;
      v57 = a3[1].m128_i32[1] + HIDWORD(v95) * a3[1].m128_i32[2];
      v109.m128_u64[0] = *(_QWORD *)v57;
      v58 = *(_DWORD *)(v57 + 8);
      v109.m128_i32[3] = *(_DWORD *)(v57 + 0xC);
      v109.m128_i32[2] = v58;
      v126 = _mm_sub_ps(v109, v56);
      v59 = a1 + 3;
      v86 = 3;
      do
      {
        v60 = *(float *)((char *)v55->m128_f32 + v121) * v59->m128_f32[0];
        v92 = v60;
        v61 = fabs(v60);
        v62 = (v59[0xFFFFFFFE].m128_f32[0] + v55->m128_f32[0]) * v59->m128_f32[0];
        if ( v61 < v62 * flt_A9A648
          || v61 < (*(float *)((char *)v55->m128_f32 + v119) + v59[0xFFFFFFFE].m128_f32[0])
                 * v59->m128_f32[0]
                 * flt_A9A648 )
        {
          *(__int32 *)((char *)v55->m128_i32 + v101) = 0;
          *(__int32 *)((char *)v55->m128_i32 + v107) = 0xC0000000;
        }
        else
        {
          v63 = fConstant_1;
          *(__int32 *)((char *)v55->m128_i32 + v54) = 4;
          v64 = v63 / v92;
          if ( v92 < (double)*(float *)&SrcStr )
          {
            v65 = *(__int32 *)((char *)v55->m128_i32 + v53);
            *(__int32 *)((char *)v55->m128_i32 + v54) = 0xFFFFFFFC;
            *(__int32 *)((char *)v55->m128_i32 + v53) = v65 - 4;
          }
          *(float *)((char *)v55->m128_f32 + v101) = v64;
          v103 = v62;
          *(float *)((char *)v55->m128_f32 + v107) = (v103 - a1[7].m128_f32[3]) * v64;
        }
        v55 = (__m128 *)((char *)v55 + 4);
        v59 = (__m128 *)((char *)v59 + 4);
        --v86;
      }
      while ( v86 );
      v66 = (unsigned __int16)*v116;
      v67 = (unsigned __int16)*v117;
      v110 = (double)(unsigned __int16)*(_WORD *)LODWORD(v115) * v124[0] - v123[0];
      v111 = (double)v66 * v124[1] - v123[1];
      v112 = (double)v67 * v124[2] - v123[2];
      while ( 1 )
      {
LABEL_85:
        if ( v110 >= (double)v111 )
        {
          v68 = 1;
          if ( v111 < (double)v112 )
            goto LABEL_90;
        }
        else if ( v110 < (double)v112 )
        {
          v68 = 0;
          goto LABEL_90;
        }
        v68 = 2;
LABEL_90:
        v69 = *(&v110 + v68);
        v87 = &v110 + v68;
        if ( v69 > v99 )
          break;
        for ( mm = 0x10 << v68; ; mm = 0x10 << v68 )
        {
          v71 = *((_WORD **)&v115 + v68);
          v72 = (unsigned __int16)v71[1];
          v73 = mm ^ v16[v72];
          v16[v72] = v73;
          if ( v73 >= 0x70u )
          {
            if ( !v72 )
            {
              *v87 = 2.0;
              goto LABEL_85;
            }
            v74 = *(_DWORD *)(a1[4].m128_i32[0] + 0x10 * v72 + 0xC);
            if ( (v74 & 1) == 0 )
            {
              (*(void (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)v95 + 4))(v95, v74, HIDWORD(v95));
              if ( v99 >= v69 )
                v99 = v69;
            }
          }
          v75 = v125[v68];
          v76 = *v71 == *(_WORD *)((char *)v71 + v75);
          *((_DWORD *)&v115 + v68) = (char *)v71 + v75;
          if ( !v76 )
            break;
        }
        *v87 = (double)*(unsigned __int16 *)((char *)v71 + v75) * v124[v68] - v123[v68];
      }
      if ( SHIDWORD(v95) < a3[1].m128_i32[0] - 1 )
      {
        v77 = (unsigned int)&v16[4 * (v113 >> 2) + 4];
        v78 = (int *)v16;
        if ( (unsigned int)v16 < v77 )
        {
          do
          {
            v79 = v78[1] & 0xF0F0F0F | (0x10 * (v78[1] & 0xF0F0F0F));
            *v78 = *v78 & 0xF0F0F0F | (0x10 * (*v78 & 0xF0F0F0F));
            v78[1] = v79;
            v78 += 2;
          }
          while ( (unsigned int)v78 < v77 );
        }
      }
      v80 = HIDWORD(v95) + 1 < a3[1].m128_i32[0];
      LODWORD(v95) = a5 + v95;
      ++HIDWORD(v95);
    }
    while ( v80 );
  }
  v81 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( *(_DWORD *)(v81[TlsIndex] + 0x1A4) < *(_DWORD *)(v81[TlsIndex] + 0x1A8) )
  {
    v82 = *(_DWORD **)(v104 + 0x1A4);
    *v82 = "lt";
    v83 = __rdtsc();
    v113 = v83;
    v82[1] = v83;
    *(_DWORD *)(v104 + 0x1A4) = v82 + 3;
  }
  v84 = *(_DWORD **)(v104 + 0x19C);
  v76 = m == v84[0xA];
  v84[8] = m;
  if ( v76 )
    (*(void (__thiscall **)(_DWORD *, int))(*v84 + 0x10))(v84, m);
  v85 = *(_DWORD **)(v104 + 0x19C);
  v76 = v16 == (_BYTE *)v85[0xA];
  v85[8] = v16;
  if ( v76 )
    (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v85 + 0x10))(v85, v16);
}
