int __thiscall sub_8E1E20(__m128 *this, __m128 *a2, const void **a3)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // edi
  _DWORD *v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // eax
  int v13; // edi
  _OWORD *v14; // eax
  int v15; // edi
  _OWORD *v16; // ecx
  __m128 v17; // xmm0
  __int16 v18; // bx
  unsigned int v19; // ebx
  unsigned __int16 *v20; // eax
  int v21; // ecx
  unsigned __int16 *v22; // ebx
  unsigned __int16 *v23; // edi
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // edi
  int v28; // ebx
  int v29; // eax
  int v30; // ecx
  unsigned int v31; // edi
  unsigned int v32; // ecx
  int v33; // edi
  int v34; // edi
  int v35; // ebx
  int v36; // ecx
  unsigned __int16 v37; // cx
  int v38; // eax
  _DWORD *v39; // ecx
  unsigned __int64 v40; // rax
  int v41; // ebx
  unsigned __int16 *v42; // eax
  int v43; // edx
  int v44; // ebx
  int v45; // eax
  _DWORD *v46; // ecx
  unsigned __int64 v47; // rax
  unsigned int v48; // edx
  unsigned int v49; // edi
  unsigned int *v50; // ecx
  unsigned int v51; // eax
  _DWORD *v52; // edi
  int v53; // ebx
  int v54; // ecx
  _DWORD *v55; // edx
  int v56; // ebx
  int v57; // ecx
  _DWORD *v58; // edx
  int v59; // ebx
  int v60; // ecx
  _DWORD *v61; // edx
  int v62; // ebx
  int v63; // ecx
  _DWORD *v64; // edx
  _DWORD *v65; // ecx
  bool v66; // zf
  unsigned __int64 v67; // rax
  _DWORD *v68; // ecx
  unsigned int v70; // [esp+14h] [ebp-4Ch]
  unsigned int v71; // [esp+18h] [ebp-48h]
  int v72; // [esp+1Ch] [ebp-44h]
  int v73; // [esp+1Ch] [ebp-44h]
  __int16 v74; // [esp+1Ch] [ebp-44h]
  int v75; // [esp+1Ch] [ebp-44h]
  int v76; // [esp+20h] [ebp-40h]
  unsigned int i; // [esp+24h] [ebp-3Ch]
  int v78; // [esp+24h] [ebp-3Ch]
  int v79; // [esp+24h] [ebp-3Ch]
  unsigned int *v80; // [esp+24h] [ebp-3Ch]
  unsigned int v81; // [esp+28h] [ebp-38h]
  __m128 v82; // [esp+30h] [ebp-30h]
  __m128 v83; // [esp+30h] [ebp-30h]
  signed int v84; // [esp+40h] [ebp-20h]
  int v85; // [esp+44h] [ebp-1Ch]
  unsigned __int16 v86; // [esp+48h] [ebp-18h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "LtquerySingleAabb";
    v7[3] = "marker";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 4;
  }
  v9 = *((_DWORD *)this + 0x11);
  v10 = *(_DWORD **)(ThreadLocalStoragePointer[TlsIndex] + 0x19C);
  v76 = ThreadLocalStoragePointer[TlsIndex];
  v11 = v10[8];
  v12 = (4 * (v9 >> 5) + 0x30) & 0xFFFFFFF0;
  if ( v11 + v12 > v10[0xB] )
  {
    v71 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v10 + 0xC))(v10, v12);
    v11 = v71;
  }
  else
  {
    v10[8] = v11 + v12;
    v71 = v11;
  }
  v13 = v9 >> 7;
  v14 = (_OWORD *)v11;
  if ( v13 >= 0 )
  {
    v15 = v13 + 1;
    do
    {
      v16 = v14++;
      --v15;
      *v16 = 0;
    }
    while ( v15 );
  }
  v17 = *(this + 3);
  v82 = _mm_add_ps(
          _mm_max_ps(
            _mm_min_ps(_mm_mul_ps(_mm_add_ps(*a2, *(this + 1)), v17), (__m128)xmmword_B2FC70),
            (__m128)xmmword_A9A660),
          (__m128)xmmword_A9A650);
  v84 = ((unsigned __int32)v82.m128_i32[0] >> 7) & 0xFFFE;
  v85 = ((unsigned __int32)v82.m128_i32[1] >> 7) & 0xFFFE;
  v18 = (unsigned __int32)v82.m128_i32[2] >> 7;
  v83 = _mm_add_ps(
          _mm_max_ps(
            _mm_min_ps(_mm_mul_ps(_mm_add_ps(a2[1], *(this + 2)), v17), (__m128)xmmword_B2FC70),
            (__m128)xmmword_A9A660),
          (__m128)xmmword_A9A650);
  v86 = v18 & 0xFFFE;
  v19 = (unsigned __int16)((unsigned __int32)v83.m128_i32[0] >> 7) | 1;
  v20 = (unsigned __int16 *)(*((_DWORD *)this + 0x13) + 4);
  if ( *((_DWORD *)this + 0x1C) )
  {
    v21 = 0x10 - *((_DWORD *)this + 0x1D);
    if ( v84 >> v21 > 0 )
    {
      v22 = (unsigned __int16 *)(0x10 * (v84 >> v21) + *((_DWORD *)this + 0x1E) - 0x10);
      *(_DWORD *)(v11 + 4 * ((int)*v22 >> 5)) ^= 1 << (*v22 & 0x1F);
      v23 = *((unsigned __int16 **)v22 + 1);
      if ( *((_DWORD *)v22 + 2) - 1 >= 0 )
      {
        v72 = *((_DWORD *)v22 + 2);
        do
        {
          v24 = *v23++;
          *(_DWORD *)(v11 + 4 * (v24 >> 5)) ^= 1 << (v24 & 0x1F);
          --v72;
        }
        while ( v72 );
      }
      v25 = *((_DWORD *)this + 0x10);
      v26 = 0x10 * *v22;
      v27 = *(unsigned __int16 *)(v26 + v25 + 8);
      v28 = *(unsigned __int16 *)(v26 + v25 + 0xA);
      v29 = v25 + v26;
      v30 = *((_DWORD *)this + 0x13);
      v31 = v30 + 4 * v27 + 4;
      v32 = v30 + 4 * v28;
      v73 = v29;
      for ( i = v32; v31 < v32; v31 += 4 )
      {
        if ( (*(_BYTE *)v31 & 1) == 0 )
        {
          *(_DWORD *)(v11 + 4 * ((int)*(unsigned __int16 *)(v31 + 2) >> 5)) &= ~(1 << (*(_WORD *)(v31 + 2) & 0x1F));
          v32 = i;
          v29 = v73;
        }
      }
      v19 = (unsigned __int16)((unsigned __int32)v83.m128_i32[0] >> 7) | 1;
      v20 = (unsigned __int16 *)(*((_DWORD *)this + 0x13) + 4 * *(unsigned __int16 *)(v29 + 8) + 4);
    }
  }
  if ( *v20 < (unsigned int)v84 )
  {
    do
    {
      v33 = v20[1];
      v20 += 2;
      *(_DWORD *)(v11 + 4 * (v33 >> 5)) ^= 1 << (v33 & 0x1F);
    }
    while ( *v20 < (unsigned int)v84 );
    v19 = (unsigned __int16)((unsigned __int32)v83.m128_i32[0] >> 7) | 1;
  }
  v74 = *v20;
  if ( *v20 < v19 )
  {
    do
    {
      if ( (v74 & 1) == 0 )
      {
        v34 = v20[1];
        v35 = 1 << (v34 & 0x1F);
        v34 >>= 5;
        v36 = v35 ^ *(_DWORD *)(v11 + 4 * v34);
        v19 = (unsigned __int16)((unsigned __int32)v83.m128_i32[0] >> 7) | 1;
        *(_DWORD *)(v11 + 4 * v34) = v36;
      }
      v37 = v20[2];
      v20 += 2;
      LOBYTE(v74) = v37;
    }
    while ( v37 < v19 );
  }
  v38 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v38 + 0x1A4) < *(_DWORD *)(v38 + 0x1A8) )
  {
    v39 = *(_DWORD **)(v76 + 0x1A4);
    *v39 = "Styz-Axis";
    v40 = __rdtsc();
    v39[1] = v40;
    *(_DWORD *)(v76 + 0x1A4) = v39 + 3;
  }
  v41 = *((_DWORD *)this + 0x16);
  v78 = v41 + 4 * *((_DWORD *)this + 0x17) - 8;
  v83.m128_i16[0] = ((int)sub_8E0C30((unsigned __int16 *)(v41 + 4), v78, v85) - v41) >> 2;
  v42 = sub_8E0C30((unsigned __int16 *)(v41 + 4), v78, ((unsigned __int32)v83.m128_i32[1] >> 7) | 1);
  v43 = 0xFFFFFFFC - v41;
  v44 = *((_DWORD *)this + 0x19);
  v83.m128_i16[2] = ((int)v42 + v43) >> 2;
  v79 = v44 + 4 * *((_DWORD *)this + 0x1A) - 8;
  v83.m128_i16[1] = ((int)sub_8E0C30((unsigned __int16 *)(v44 + 4), v79, v86) - v44) >> 2;
  v83.m128_i16[3] = (int)((int)sub_8E0C30(
                                 (unsigned __int16 *)(v44 + 4),
                                 v79,
                                 ((unsigned __int32)v83.m128_i32[2] >> 7) | 1)
                        + 0xFFFFFFFC
                        - v44) >> 2;
  v45 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v45 + 0x1A4) < *(_DWORD *)(v45 + 0x1A8) )
  {
    v46 = *(_DWORD **)(v76 + 0x1A4);
    *v46 = "StScanBitfield";
    v47 = __rdtsc();
    v46[1] = v47;
    *(_DWORD *)(v76 + 0x1A4) = v46 + 3;
  }
  v48 = v71;
  v49 = v71 + 4 * (*((int *)this + 0x11) >> 5) + 4;
  v50 = (unsigned int *)v71;
  v80 = (unsigned int *)v71;
  v81 = v49;
  if ( v71 < v49 )
  {
    v75 = *((_DWORD *)this + 0x10) + 0x24;
    do
    {
      v51 = *v50;
      v70 = *v50;
      if ( *v50 )
      {
        v52 = (_DWORD *)v75;
        do
        {
          if ( (v51 & 0xF) != 0 )
          {
            if ( (v51 & 1) != 0
              && (((v52[0xFFFFFFF8] - v83.m128_i32[0]) | (v83.m128_i32[1] - v52[0xFFFFFFF7])) & 0x80008000) == 0 )
            {
              v53 = v52[0xFFFFFFFA];
              if ( (v53 & 1) == 0 )
              {
                if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) )
                  sub_8A6EE0(a3, 8);
                v54 = (int)a3[1];
                v55 = *a3;
                v55[2 * v54] = 0;
                v55[2 * v54 + 1] = v53;
                a3[1] = (char *)a3[1] + 1;
                v51 = v70;
              }
            }
            if ( (v51 & 2) != 0
              && (((v52[0xFFFFFFFC] - v83.m128_i32[0]) | (v83.m128_i32[1] - v52[0xFFFFFFFB])) & 0x80008000) == 0 )
            {
              v56 = v52[0xFFFFFFFE];
              if ( (v56 & 1) == 0 )
              {
                if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) )
                  sub_8A6EE0(a3, 8);
                v57 = (int)a3[1];
                v58 = *a3;
                v58[2 * v57] = 0;
                v58[2 * v57 + 1] = v56;
                a3[1] = (char *)a3[1] + 1;
                v51 = v70;
              }
            }
            if ( (v51 & 4) != 0 && (((*v52 - v83.m128_i32[0]) | (v83.m128_i32[1] - v52[0xFFFFFFFF])) & 0x80008000) == 0 )
            {
              v59 = v52[2];
              if ( (v59 & 1) == 0 )
              {
                if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) )
                  sub_8A6EE0(a3, 8);
                v60 = (int)a3[1];
                v61 = *a3;
                v61[2 * v60] = 0;
                v61[2 * v60 + 1] = v59;
                a3[1] = (char *)a3[1] + 1;
              }
              v51 = v70;
            }
            if ( (v51 & 8) != 0 && (((v52[4] - v83.m128_i32[0]) | (v83.m128_i32[1] - v52[3])) & 0x80008000) == 0 )
            {
              v62 = v52[6];
              if ( (v62 & 1) == 0 )
              {
                if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) )
                  sub_8A6EE0(a3, 8);
                v63 = (int)a3[1];
                v64 = *a3;
                v64[2 * v63] = 0;
                v64[2 * v63 + 1] = v62;
                a3[1] = (char *)a3[1] + 1;
              }
              v51 = v70;
            }
          }
          v51 >>= 4;
          v52 += 0x10;
          v70 = v51;
        }
        while ( v51 );
        v48 = v71;
        v49 = v81;
        v50 = v80;
      }
      ++v50;
      v75 += 0x200;
      v80 = v50;
    }
    while ( (unsigned int)v50 < v49 );
  }
  v65 = *(_DWORD **)(v76 + 0x19C);
  v66 = v48 == v65[0xA];
  v65[8] = v48;
  if ( v66 )
    (*(void (__thiscall **)(_DWORD *, unsigned int))(*v65 + 0x10))(v65, v48);
  LODWORD(v67) = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v67 + 0x1A4) < *(_DWORD *)(v67 + 0x1A8) )
  {
    v68 = *(_DWORD **)(v76 + 0x1A4);
    *v68 = "lt";
    v67 = __rdtsc();
    v68[1] = v67;
    *(_DWORD *)(v76 + 0x1A4) = v68 + 3;
  }
  return v67;
}
