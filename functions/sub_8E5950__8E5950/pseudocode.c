unsigned int __thiscall sub_8E5950(__m128 *this, __m128 *a2, int *a3)
{
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // edx
  int v7; // esi
  unsigned int v8; // edi
  int v9; // eax
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // edi
  _DWORD *v13; // ecx
  unsigned int v14; // esi
  unsigned int v15; // eax
  int v16; // edi
  _OWORD *v17; // eax
  int v18; // edx
  _OWORD *v19; // ecx
  __m128 v20; // xmm0
  __int16 v21; // di
  unsigned int v22; // edi
  unsigned __int16 *v23; // eax
  int v24; // ecx
  unsigned __int16 *v25; // edi
  unsigned __int16 *v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // edx
  int v31; // edi
  int v32; // eax
  int v33; // ecx
  unsigned int v34; // edx
  unsigned int v35; // ecx
  int v36; // edx
  unsigned __int16 j; // cx
  int v38; // edx
  int v39; // edi
  int v40; // ecx
  int v41; // eax
  _DWORD *v42; // ecx
  unsigned __int64 v43; // rax
  int v44; // edi
  unsigned __int16 *v45; // eax
  int v46; // edx
  int v47; // edi
  int v48; // eax
  _DWORD *v49; // ecx
  unsigned __int64 v50; // rax
  unsigned int v51; // edx
  unsigned int v52; // esi
  unsigned int *v53; // ecx
  __int32 v54; // edi
  int v55; // eax
  unsigned int v56; // ebx
  int v57; // esi
  int v58; // ecx
  _DWORD *v59; // ecx
  bool v60; // zf
  int v61; // eax
  _DWORD *v62; // ecx
  unsigned __int64 v63; // rax
  int *v64; // ecx
  int v65; // eax
  int *v66; // ebx
  int *v67; // edi
  int v68; // ebx
  int v69; // ebx
  int *v70; // ecx
  _DWORD *v71; // ecx
  unsigned int v73; // [esp+Ch] [ebp-64h]
  unsigned __int16 **v74; // [esp+Ch] [ebp-64h]
  __m128 *v75; // [esp+10h] [ebp-60h]
  int v76; // [esp+14h] [ebp-5Ch]
  unsigned int v77; // [esp+18h] [ebp-58h]
  int v78; // [esp+1Ch] [ebp-54h]
  int v79; // [esp+20h] [ebp-50h]
  int v80; // [esp+20h] [ebp-50h]
  int v81; // [esp+20h] [ebp-50h]
  int v82; // [esp+20h] [ebp-50h]
  unsigned int i; // [esp+24h] [ebp-4Ch]
  int v84; // [esp+24h] [ebp-4Ch]
  int v85; // [esp+24h] [ebp-4Ch]
  unsigned int *v86; // [esp+24h] [ebp-4Ch]
  int v87; // [esp+24h] [ebp-4Ch]
  int *v88; // [esp+24h] [ebp-4Ch]
  int v89; // [esp+28h] [ebp-48h]
  __m128 v90; // [esp+30h] [ebp-40h]
  __m128 v91; // [esp+30h] [ebp-40h]
  int v92; // [esp+44h] [ebp-2Ch]
  unsigned int v93; // [esp+48h] [ebp-28h]
  signed int v94; // [esp+50h] [ebp-20h]
  int v95; // [esp+54h] [ebp-1Ch]
  unsigned __int16 v96; // [esp+58h] [ebp-18h]

  v4 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v5 = *(_DWORD **)(v4 + 0x19C);
  v6 = v5[8];
  v7 = *((_DWORD *)this + 0x11);
  v76 = v4;
  v8 = v6 + ((4 * v7 + 0x10) & 0xFFFFFFF0);
  v75 = this;
  v92 = 0;
  if ( v8 > v5[0xB] )
  {
    v78 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v5 + 0xC))(v5, (4 * v7 + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v5[8] = v8;
    v78 = v6;
  }
  v9 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v93 = v7 | 0x80000000;
  if ( *(_DWORD *)(v9 + 0x1A4) < *(_DWORD *)(v9 + 0x1A8) )
  {
    v10 = *(_DWORD **)(v76 + 0x1A4);
    *v10 = "LtquerySingleAabb";
    v10[3] = "marker";
    v11 = __rdtsc();
    v10[1] = v11;
    *(_DWORD *)(v76 + 0x1A4) = v10 + 4;
  }
  v12 = *((_DWORD *)this + 0x11);
  v13 = *(_DWORD **)(v76 + 0x19C);
  v14 = v13[8];
  v15 = (4 * (v12 >> 5) + 0x30) & 0xFFFFFFF0;
  if ( v14 + v15 > v13[0xB] )
  {
    v77 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v13 + 0xC))(
            v13,
            (4 * (*((int *)this + 0x11) >> 5) + 0x30) & 0xFFFFFFF0);
    v14 = v77;
  }
  else
  {
    v13[8] = v14 + v15;
    v77 = v14;
  }
  v16 = v12 >> 7;
  v17 = (_OWORD *)v14;
  if ( v16 >= 0 )
  {
    v18 = v16 + 1;
    do
    {
      v19 = v17++;
      --v18;
      *v19 = 0;
    }
    while ( v18 );
  }
  v20 = *(this + 3);
  v90 = _mm_add_ps(
          _mm_max_ps(
            _mm_min_ps(_mm_mul_ps(_mm_add_ps(*a2, *(this + 1)), v20), (__m128)xmmword_B2FC70),
            (__m128)xmmword_A9A660),
          (__m128)xmmword_A9A650);
  v94 = ((unsigned __int32)v90.m128_i32[0] >> 7) & 0xFFFE;
  v95 = ((unsigned __int32)v90.m128_i32[1] >> 7) & 0xFFFE;
  v21 = (unsigned __int32)v90.m128_i32[2] >> 7;
  v91 = _mm_add_ps(
          _mm_max_ps(
            _mm_min_ps(_mm_mul_ps(_mm_add_ps(a2[1], *(this + 2)), v20), (__m128)xmmword_B2FC70),
            (__m128)xmmword_A9A660),
          (__m128)xmmword_A9A650);
  v96 = v21 & 0xFFFE;
  v22 = (unsigned __int16)((unsigned __int32)v91.m128_i32[0] >> 7) | 1;
  v23 = (unsigned __int16 *)(*((_DWORD *)this + 0x13) + 4);
  if ( *((_DWORD *)this + 0x1C) )
  {
    v24 = 0x10 - *((_DWORD *)this + 0x1D);
    if ( v94 >> v24 > 0 )
    {
      v25 = (unsigned __int16 *)(0x10 * (v94 >> v24) + *((_DWORD *)this + 0x1E) - 0x10);
      *(_DWORD *)(v14 + 4 * ((int)*v25 >> 5)) ^= 1 << (*v25 & 0x1F);
      v26 = *((unsigned __int16 **)v25 + 1);
      if ( *((_DWORD *)v25 + 2) - 1 >= 0 )
      {
        v79 = *((_DWORD *)v25 + 2);
        do
        {
          v27 = *v26++;
          *(_DWORD *)(v14 + 4 * (v27 >> 5)) ^= 1 << (v27 & 0x1F);
          --v79;
        }
        while ( v79 );
      }
      v28 = *((_DWORD *)this + 0x10);
      v29 = 0x10 * *v25;
      v30 = *(unsigned __int16 *)(v29 + v28 + 8);
      v31 = *(unsigned __int16 *)(v29 + v28 + 0xA);
      v32 = v28 + v29;
      v33 = *((_DWORD *)this + 0x13);
      v34 = v33 + 4 * v30 + 4;
      v35 = v33 + 4 * v31;
      v80 = v32;
      for ( i = v35; v34 < v35; v34 += 4 )
      {
        if ( (*(_BYTE *)v34 & 1) == 0 )
        {
          *(_DWORD *)(v14 + 4 * ((int)*(unsigned __int16 *)(v34 + 2) >> 5)) &= ~(1 << (*(_WORD *)(v34 + 2) & 0x1F));
          v35 = i;
          v32 = v80;
        }
      }
      v22 = (unsigned __int16)((unsigned __int32)v91.m128_i32[0] >> 7) | 1;
      v23 = (unsigned __int16 *)(*((_DWORD *)this + 0x13) + 4 * *(unsigned __int16 *)(v32 + 8) + 4);
    }
  }
  if ( *v23 < (unsigned int)v94 )
  {
    do
    {
      v36 = v23[1];
      v23 += 2;
      *(_DWORD *)(v14 + 4 * (v36 >> 5)) ^= 1 << (v36 & 0x1F);
    }
    while ( *v23 < (unsigned int)v94 );
    v22 = (unsigned __int16)((unsigned __int32)v91.m128_i32[0] >> 7) | 1;
  }
  for ( j = *v23; j < v22; v23 += 2 )
  {
    if ( (j & 1) == 0 )
    {
      v38 = v23[1];
      v39 = 1 << (v38 & 0x1F);
      v38 >>= 5;
      v40 = v39 ^ *(_DWORD *)(v14 + 4 * v38);
      v22 = (unsigned __int16)((unsigned __int32)v91.m128_i32[0] >> 7) | 1;
      *(_DWORD *)(v14 + 4 * v38) = v40;
    }
    j = v23[2];
  }
  v41 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v41 + 0x1A4) < *(_DWORD *)(v41 + 0x1A8) )
  {
    v42 = *(_DWORD **)(v76 + 0x1A4);
    *v42 = "Styz-Axis";
    v43 = __rdtsc();
    v42[1] = v43;
    *(_DWORD *)(v76 + 0x1A4) = v42 + 3;
  }
  v44 = *((_DWORD *)this + 0x16);
  v84 = v44 + 4 * *((_DWORD *)this + 0x17) - 8;
  v91.m128_i16[0] = ((int)sub_8E0C30((unsigned __int16 *)(v44 + 4), v84, v95) - v44) >> 2;
  v45 = sub_8E0C30((unsigned __int16 *)(v44 + 4), v84, ((unsigned __int32)v91.m128_i32[1] >> 7) | 1);
  v46 = 0xFFFFFFFC - v44;
  v47 = *((_DWORD *)this + 0x19);
  v91.m128_i16[2] = ((int)v45 + v46) >> 2;
  v85 = v47 + 4 * *((_DWORD *)this + 0x1A) - 8;
  v91.m128_i16[1] = ((int)sub_8E0C30((unsigned __int16 *)(v47 + 4), v85, v96) - v47) >> 2;
  v91.m128_i16[3] = (int)((int)sub_8E0C30(
                                 (unsigned __int16 *)(v47 + 4),
                                 v85,
                                 ((unsigned __int32)v91.m128_i32[2] >> 7) | 1)
                        + 0xFFFFFFFC
                        - v47) >> 2;
  v48 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v48 + 0x1A4) < *(_DWORD *)(v48 + 0x1A8) )
  {
    v49 = *(_DWORD **)(v76 + 0x1A4);
    *v49 = "StScanBitfield";
    v50 = __rdtsc();
    v49[1] = v50;
    *(_DWORD *)(v76 + 0x1A4) = v49 + 3;
  }
  v51 = v77;
  v52 = v77 + 4 * (*((int *)this + 0x11) >> 5) + 4;
  v53 = (unsigned int *)v77;
  v86 = (unsigned int *)v77;
  v89 = v52;
  if ( v77 < v52 )
  {
    v54 = v91.m128_i32[0];
    v55 = *((_DWORD *)this + 0x10) + 0x24;
    v81 = v55;
    do
    {
      v56 = *v53;
      v73 = *v53;
      if ( *v53 )
      {
        do
        {
          if ( (v56 & 0xF) != 0 )
          {
            if ( (v56 & 1) == 0
              || (((v91.m128_i32[1] - *(_DWORD *)(v55 - 0x24)) | (*(_DWORD *)(v55 - 0x20) - v54)) & 0x80008000) != 0
              || (*(_BYTE *)(v55 - 0x18) & 1) != 0 )
            {
              v57 = v78;
              v58 = v92;
            }
            else
            {
              v57 = v78;
              *(_DWORD *)(v78 + 4 * v92) = v55 - 0x24;
              v58 = ++v92;
            }
            if ( (v56 & 2) != 0 )
            {
              if ( (((v91.m128_i32[1] - *(_DWORD *)(v55 - 0x14)) | (*(_DWORD *)(v55 - 0x10) - v54)) & 0x80008000) == 0
                && (*(_BYTE *)(v55 - 8) & 1) == 0 )
              {
                *(_DWORD *)(v57 + 4 * v58++) = v55 - 0x14;
                v92 = v58;
              }
              v56 = v73;
            }
            if ( (v56 & 4) != 0 )
            {
              if ( (((v91.m128_i32[1] - *(_DWORD *)(v55 - 4)) | (*(_DWORD *)v55 - v91.m128_i32[0])) & 0x80008000) == 0
                && (*(_BYTE *)(v55 + 8) & 1) == 0 )
              {
                *(_DWORD *)(v57 + 4 * v58++) = v55 - 4;
                v92 = v58;
              }
              v56 = v73;
            }
            if ( (v56 & 8) != 0 )
            {
              if ( (((v91.m128_i32[1] - *(_DWORD *)(v55 + 0xC)) | (*(_DWORD *)(v55 + 0x10) - v91.m128_i32[0]))
                  & 0x80008000) == 0
                && (*(_BYTE *)(v55 + 0x18) & 1) == 0 )
              {
                *(_DWORD *)(v57 + 4 * v58) = v55 + 0xC;
                v92 = v58 + 1;
              }
              v56 = v73;
            }
          }
          v54 = v91.m128_i32[0];
          v56 >>= 4;
          v55 += 0x40;
          v73 = v56;
        }
        while ( v56 );
        v53 = v86;
        v51 = v77;
        v52 = v89;
      }
      ++v53;
      v55 = v81 + 0x200;
      v81 += 0x200;
      v86 = v53;
    }
    while ( (unsigned int)v53 < v52 );
  }
  v59 = *(_DWORD **)(v76 + 0x19C);
  v60 = v51 == v59[0xA];
  v59[8] = v51;
  if ( v60 )
    (*(void (__thiscall **)(_DWORD *, unsigned int))(*v59 + 0x10))(v59, v51);
  v61 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v61 + 0x1A4) < *(_DWORD *)(v61 + 0x1A8) )
  {
    v62 = *(_DWORD **)(v76 + 0x1A4);
    *v62 = "lt";
    v63 = __rdtsc();
    v89 = v63;
    v62[1] = v63;
    *(_DWORD *)(v76 + 0x1A4) = v62 + 3;
  }
  v64 = a3 + 9;
  v65 = 2 * v92 + 2;
  if ( a3 )
  {
    *a3 = (int)v64;
    a3[1] = 0;
    a3[2] = v65 | 0x80000000;
  }
  v66 = a3 + 3;
  if ( a3 != (int *)0xFFFFFFF4 )
  {
    *v66 = (int)&v64[v65];
    a3[4] = 0;
    a3[5] = v65 | 0x80000000;
  }
  v67 = a3 + 6;
  if ( a3 != (int *)0xFFFFFFE8 )
  {
    *v67 = (int)&v64[2 * v65];
    a3[7] = 0;
    a3[8] = v65 | 0x80000000;
  }
  *(_DWORD *)(*a3 + 4 * a3[1]++) = 0;
  *(_DWORD *)(a3[3] + 4 * a3[4]++) = 0;
  *(_DWORD *)(a3[6] + 4 * a3[7]++) = 0;
  v74 = (unsigned __int16 **)v78;
  if ( v92 - 1 >= 0 )
  {
    v87 = v92;
    do
    {
      *(_DWORD *)(*a3 + 4 * a3[1]) = *(_DWORD *)(v75[4].m128_i32[3] + 4 * (*v74)[4]);
      v68 = *a3;
      ++a3[1];
      *(_DWORD *)(v68 + 4 * a3[1]++) = *(_DWORD *)(v75[4].m128_i32[3] + 4 * (*v74)[5]);
      *(_DWORD *)(a3[3] + 4 * a3[4]++) = *(_DWORD *)(v75[5].m128_i32[2] + 4 * **v74);
      *(_DWORD *)(a3[3] + 4 * a3[4]++) = *(_DWORD *)(v75[5].m128_i32[2] + 4 * (*v74)[2]);
      *(_DWORD *)(a3[6] + 4 * a3[7]) = *(_DWORD *)(v75[6].m128_i32[1] + 4 * (*v74)[1]);
      v69 = a3[7] + 1;
      a3[7] = v69;
      *(_DWORD *)(*v67 + 4 * v69) = *(_DWORD *)(v75[6].m128_i32[1] + 4 * (*v74)[3]);
      ++a3[7];
      ++v74;
      --v87;
    }
    while ( v87 );
    v66 = a3 + 3;
  }
  v70 = a3;
  v88 = a3;
  v82 = 3;
  do
  {
    LOBYTE(v89) = 0;
    if ( v70[1] - 1 > 1 )
    {
      sub_8E1200(*v70 + 4, 0, v70[1] - 2, v89);
      v70 = v88;
    }
    v70 += 3;
    v60 = v82 == 1;
    v88 = v70;
    --v82;
  }
  while ( !v60 );
  *(_DWORD *)(*a3 + 4 * a3[1]++) = 0xFFFC;
  *(_DWORD *)(*v66 + 4 * v66[1]++) = 0xFFFC;
  *(_DWORD *)(a3[6] + 4 * a3[7]++) = 0xFFFC;
  v71 = *(_DWORD **)(v76 + 0x19C);
  v60 = v78 == v71[0xA];
  v71[8] = v78;
  if ( v60 )
    (*(void (__thiscall **)(_DWORD *, int))(*v71 + 0x10))(v71, v78);
  return v93;
}
