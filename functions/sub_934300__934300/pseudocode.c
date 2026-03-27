unsigned int __cdecl sub_934300(int **a1, int a2, int *a3)
{
  _DWORD *v3; // ebx
  __m128 **v4; // eax
  __m128 *v5; // edi
  unsigned int v6; // eax
  __m128 **v7; // edx
  __m128 *v8; // ecx
  float v9; // eax
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __m128 v16; // xmm2
  double v17; // st7
  double v18; // st7
  int v19; // edi
  int v20; // eax
  int v21; // edi
  int *v22; // ecx
  int *v23; // eax
  __int16 v24; // ax
  bool v25; // cf
  int v26; // edi
  int v27; // eax
  int v28; // edi
  _DWORD *v29; // ecx
  unsigned __int64 v30; // rax
  double v31; // st7
  int v32; // edx
  int v33; // edi
  int k; // ecx
  __m128 v35; // xmm0
  int v36; // edi
  int *v37; // ecx
  int v38; // ecx
  _DWORD *ThreadLocalStoragePointer; // edx
  int v40; // edx
  _DWORD *v41; // edi
  unsigned __int64 v42; // rax
  __int16 *v43; // edi
  int v44; // eax
  int *v45; // ecx
  int v46; // eax
  _DWORD *v47; // edi
  int v48; // ecx
  unsigned int result; // eax
  int v50; // edx
  int v51; // ebx
  int v52; // ecx
  int v53; // eax
  _BYTE *v54; // edx
  int v55; // ecx
  int *v56; // [esp+18h] [ebp-878h]
  int v57; // [esp+1Ch] [ebp-874h]
  __m128 **v58; // [esp+38h] [ebp-858h]
  int v59; // [esp+38h] [ebp-858h]
  int *v60; // [esp+38h] [ebp-858h]
  int v61; // [esp+38h] [ebp-858h]
  int v62; // [esp+3Ch] [ebp-854h]
  float v63; // [esp+40h] [ebp-850h]
  int v64; // [esp+40h] [ebp-850h]
  int v65; // [esp+40h] [ebp-850h]
  int v66; // [esp+40h] [ebp-850h]
  char v67; // [esp+44h] [ebp-84Ch]
  float v68; // [esp+44h] [ebp-84Ch]
  int v69; // [esp+44h] [ebp-84Ch]
  int v70; // [esp+48h] [ebp-848h]
  __int16 *v71; // [esp+48h] [ebp-848h]
  int v72; // [esp+4Ch] [ebp-844h]
  int v73; // [esp+4Ch] [ebp-844h]
  int v74; // [esp+4Ch] [ebp-844h]
  int v75; // [esp+4Ch] [ebp-844h]
  int *v76; // [esp+50h] [ebp-840h]
  __int16 *v77; // [esp+50h] [ebp-840h]
  int i; // [esp+54h] [ebp-83Ch]
  int j; // [esp+54h] [ebp-83Ch]
  int *v80; // [esp+58h] [ebp-838h]
  float v81; // [esp+5Ch] [ebp-834h]
  __m128 v82; // [esp+60h] [ebp-830h] BYREF
  int v83; // [esp+7Ch] [ebp-814h] BYREF
  int v84; // [esp+80h] [ebp-810h]
  int v85; // [esp+84h] [ebp-80Ch]
  int *v86; // [esp+88h] [ebp-808h]
  int v87; // [esp+8Ch] [ebp-804h]
  __int16 v88[256]; // [esp+90h] [ebp-800h] BYREF
  _BYTE v89[512]; // [esp+290h] [ebp-600h] BYREF
  __int16 v90[256]; // [esp+490h] [ebp-400h] BYREF
  char v91[512]; // [esp+690h] [ebp-200h] BYREF

  v3 = (_DWORD *)a3[0xC10];
  v62 = 0;
  v72 = **a1;
  v4 = (__m128 **)(v3 + 0x102);
  v70 = 0;
  v58 = (__m128 **)(v3 + 0x102);
  if ( (unsigned int)(v3 + 0x102) < *v3 )
  {
    v76 = v3 + 0x102;
    while ( 1 )
    {
      v5 = *v4;
      v6 = v3[1];
      v7 = (__m128 **)(v3 + 2);
      v90[v70] = 0xFFFF;
      v67 = 0;
      if ( (unsigned int)(v3 + 2) < v6 )
      {
        do
        {
          v8 = *v7;
          if ( v5 != *v7 )
          {
            v9 = *(float *)(v72 + 0xC);
            v10 = _mm_sub_ps(*v8, *v5);
            v11 = _mm_mul_ps(v5[1], v10);
            v12 = _mm_mul_ps(v5[1], v8[1]);
            v13 = _mm_mul_ps(v8[1], v10);
            v14 = _mm_shuffle_ps(v12, v12, 0x44);
            v15 = _mm_shuffle_ps(v12, v12, 0xEE);
            v16 = _mm_shuffle_ps(v11, v13, 0x44);
            v82 = _mm_add_ps(
                    _mm_add_ps(_mm_shuffle_ps(v16, v14, 0x88), _mm_shuffle_ps(v16, v14, 0xDD)),
                    _mm_shuffle_ps(_mm_shuffle_ps(v11, v13, 0xEE), v15, 0x88));
            v17 = (v82.m128_f32[2] - fConstant_1) * v9;
            v63 = v17 - v82.m128_f32[1];
            if ( v63 <= (double)v9 && (v82.m128_f32[2] <= (double)flt_AA1C60 || v8[2].m128_i16[0] != (__int16)0xFFFF) )
            {
              if ( v8[2].m128_i16[0] == (__int16)0xFFFF
                && v82.m128_f32[2] < (double)flt_A524B0
                && (v81 = v17 + v82.m128_f32[0], v81 + v63 < flt_A2FAAC)
                && v9 * flt_A53954 > v8[1].m128_f32[3] + v5[1].m128_f32[3] )
              {
                v67 = 1;
              }
              else
              {
                v18 = *(float *)&SrcStr;
                if ( v8[2].m128_i16[0] != (__int16)0xFFFF )
                  v18 = *(float *)a1[2][0xA] * flt_A43328;
                if ( v5[1].m128_f32[3] > v8[1].m128_f32[3] - v18 )
                  goto LABEL_23;
              }
            }
          }
          ++v7;
        }
        while ( (unsigned int)v7 < v3[1] );
        if ( v67 )
          v88[v62++] = v70;
      }
      v19 = v76[1];
      v20 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)a2 + 0x28))(a2, *(_DWORD *)(v19 + 8), v89);
      v86 = a1[1];
      v85 = v86[2];
      v21 = *(_DWORD *)(v19 + 8);
      v22 = a1[3];
      v83 = v20;
      v57 = *v76;
      v56 = a1[2];
      v23 = *a1;
      v84 = v21;
      v24 = (*(int (__thiscall **)(int *, int *, int *, int *, int))(*v22 + 8))(v22, v23, &v83, v56, v57);
      v90[v70] = v24;
      if ( v24 != (__int16)0xFFFF )
        (*(void (__thiscall **)(int *, unsigned int))(*a1[3] + 0xC))(a1[3], 0xFFFFFFFF);
LABEL_23:
      ++v70;
      v25 = (unsigned int)(v58 + 3) < *v3;
      v76 += 3;
      v58 += 3;
      if ( !v25 )
        break;
      v4 = v58;
    }
  }
  v26 = 0;
  for ( i = *a1[2]; v26 < v62; ++v26 )
    (*(void (__cdecl **)(_DWORD, _DWORD, int))(0x34
                                             * *(unsigned __int8 *)(v3[3 * (unsigned __int16)v88[v26] + 0x103] + 1)
                                             + i
                                             + 0x16A8))(
      v3[3 * (unsigned __int16)v88[v26] + 0x103],
      v3[3 * (unsigned __int16)v88[v26] + 0x104],
      0xFFFF);
  if ( v62 >= 2 )
  {
    v27 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
    for ( j = v27; ; v27 = j )
    {
      if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) )
      {
        v28 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
        v29 = *(_DWORD **)(v28 + 0x1A4);
        *v29 = "TtConflicts";
        v30 = __rdtsc();
        v29[1] = v30;
        *(_DWORD *)(v28 + 0x1A4) = v29 + 3;
      }
      v31 = fConstant_2;
      v32 = 0;
      v64 = 0;
      v59 = 1;
      if ( v62 > 0 )
      {
        do
        {
          v33 = v32 + 1;
          for ( k = v32 + 1; k < v62; ++k )
          {
            v35 = _mm_mul_ps(
                    *(__m128 *)(v3[3 * (unsigned __int16)v88[v32] + 0x102] + 0x10),
                    *(__m128 *)(v3[3 * (unsigned __int16)v88[k] + 0x102] + 0x10));
            v68 = _mm_shuffle_ps(v35, v35, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v35, v35, 0x55).m128_f32[0] + v35.m128_f32[0]);
            if ( v68 < v31 )
            {
              v64 = v32;
              v31 = v68;
              v59 = k;
            }
          }
          ++v32;
        }
        while ( v33 < v62 );
      }
      v71 = &v88[v64];
      v77 = &v88[v59];
      v80 = &v3[3 * (unsigned __int16)*v71 + 0x102];
      v60 = &v3[3 * (unsigned __int16)*v77 + 0x102];
      v36 = **a1;
      v73 = v80[1];
      v65 = v60[1];
      if ( (*(_DWORD *)(*a1[2] + 4 * (*(int (__thiscall **)(int))(*(_DWORD *)v36 + 8))(v36) + 0x10C) & 2) == 0 )
        break;
      v74 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)a2 + 0x28))(a2, *(_DWORD *)(v73 + 8), v89);
      if ( (*(_DWORD *)(*a1[2] + 4 * (*(int (__thiscall **)(int))(*(_DWORD *)v74 + 8))(v74) + 0x10C) & 2) == 0 )
        break;
      v66 = (*(int (__thiscall **)(int, _DWORD, char *))(*(_DWORD *)a2 + 0x28))(a2, *(_DWORD *)(v65 + 8), v91);
      if ( (*(_DWORD *)(*a1[2] + 4 * (*(int (__thiscall **)(int))(*(_DWORD *)v66 + 8))(v66) + 0x10C) & 2) == 0 )
        break;
      v82.m128_u64[0] = __PAIR64__(v66, v74);
      v83 = *v80;
      v37 = *a1;
      v84 = *v60;
      sub_952C90((__m128 *)v37[2], v36, (int)&v82, 2, (_OWORD *)a1 + 1, (int)&v83);
      *v77 = v88[v62 - 1];
      v38 = v62 - 2;
      *v71 = v88[v62 - 2];
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
      v62 -= 2;
      if ( *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex]
                                                                                + 0x1A8) )
      {
        v40 = ThreadLocalStoragePointer[TlsIndex];
        v41 = *(_DWORD **)(v40 + 0x1A4);
        v75 = v40;
        *v41 = "Et";
        v42 = __rdtsc();
        v87 = v42;
        v41[1] = v42;
        *(_DWORD *)(v75 + 0x1A4) = v41 + 3;
      }
      if ( v38 < 2 )
        break;
    }
  }
  if ( v62 )
  {
    v43 = &v90[(unsigned __int16)v88[0]];
    HIWORD(v44) = 0;
    if ( *v43 != (__int16)0xFFFF )
    {
      LOWORD(v44) = *v43;
      (*(void (__thiscall **)(int *, int))(*a1[3] + 0x10))(a1[3], v44);
      v45 = a1[3];
      v46 = *v45;
      *v43 = 0xFFFF;
      (*(void (__thiscall **)(int *, int))(v46 + 0xC))(v45, 1);
    }
  }
  v47 = (_DWORD *)*v3;
  v69 = *a1[2];
  v48 = *v3 - (_DWORD)v3 - 0x408;
  result = (unsigned int)((unsigned __int64)(0x2AAAAAABLL * v48) >> 0x20) >> 0x1F;
  v50 = v48 / 0xC - 1;
  v61 = v50;
  if ( v50 >= 0 )
  {
    while ( 1 )
    {
      v51 = (unsigned __int16)v90[v50];
      v47 += 0xFFFFFFFD;
      if ( (_WORD)v51 == 0xFFFF )
      {
        (*(void (__thiscall **)(int *, unsigned int))(*a1[3] + 0xC))(a1[3], 0xFFFFFFFF);
        (*(void (__cdecl **)(_DWORD, _DWORD, int))(0x34 * *(unsigned __int8 *)(v47[1] + 1) + v69 + 0x16A0))(
          v47[1],
          v47[2],
          0xFFFF);
        v52 = *a3 - 0x30;
        *a3 = v52;
        v53 = *v47;
        *(_OWORD *)v53 = *(_OWORD *)v52;
        *(_OWORD *)(v53 + 0x10) = *(_OWORD *)(v52 + 0x10);
        *(_WORD *)(v53 + 0x20) = *(_WORD *)(v52 + 0x20);
        v54 = (_BYTE *)(v53 + 0x22);
        v55 = v52 - v53;
        result = 0xE;
        do
        {
          *v54 = v54[v55];
          ++v54;
          --result;
        }
        while ( result );
      }
      else
      {
        result = (*(int (__cdecl **)(_DWORD, _DWORD, int))(0x34 * *(unsigned __int8 *)(v47[1] + 1) + v69 + 0x16A4))(
                   v47[1],
                   v47[2],
                   v51);
        *(_WORD *)(*v47 + 0x20) = v51;
      }
      if ( --v61 < 0 )
        break;
      v50 = v61;
    }
  }
  return result;
}
