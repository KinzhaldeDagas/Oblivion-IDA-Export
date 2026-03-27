_DWORD *__thiscall sub_8E5130(const void **this, int *a2, _DWORD *a3, const void **a4)
{
  _DWORD *result; // eax
  const void **v5; // edi
  int v6; // eax
  int v7; // ecx
  const void *v8; // esi
  int v9; // eax
  int v10; // eax
  const void *v11; // edx
  unsigned int v12; // eax
  int v13; // ecx
  const void *v14; // edx
  char *v15; // ebx
  int v16; // eax
  int v17; // eax
  char *v18; // eax
  char *v19; // edx
  unsigned int v20; // eax
  const void *v21; // edx
  char *v22; // ebx
  int v23; // eax
  int v24; // eax
  char *v25; // eax
  char *v26; // edx
  unsigned int v27; // eax
  const void *v28; // edx
  char *v29; // ebx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  _WORD *v33; // ecx
  _WORD *v34; // edx
  __m128 v35; // xmm0
  __m128 v36; // xmm3
  __m128 v37; // xmm2
  __m128 v38; // xmm1
  __m128 *v39; // esi
  __m128 v40; // xmm4
  __m128 v41; // xmm5
  int v42; // esi
  _DWORD *v43; // esi
  int v44; // edi
  int v45; // edi
  int i; // esi
  int v47; // ebx
  int v48; // eax
  _DWORD *v49; // ecx
  int v50; // edx
  unsigned int v51; // esi
  int v52; // esi
  _DWORD *v53; // ecx
  bool v54; // zf
  int v55; // eax
  int v56; // ecx
  int v57; // edx
  int v58; // eax
  _DWORD *v59; // ecx
  int v60; // esi
  int v61; // ebx
  unsigned int v62; // eax
  int v63; // ebx
  int v64; // ebx
  _OWORD *v65; // eax
  int v66; // edx
  _OWORD *v67; // ecx
  int v68; // edx
  _DWORD *v69; // ecx
  int v70; // [esp+14h] [ebp-8Ch]
  const void *v71; // [esp+14h] [ebp-8Ch]
  int v72; // [esp+14h] [ebp-8Ch]
  _DWORD *v73; // [esp+14h] [ebp-8Ch]
  const void *v74; // [esp+18h] [ebp-88h]
  const void *v75; // [esp+18h] [ebp-88h]
  int v76; // [esp+18h] [ebp-88h]
  int v77; // [esp+18h] [ebp-88h]
  int v78; // [esp+1Ch] [ebp-84h]
  int v80; // [esp+20h] [ebp-80h]
  int v81; // [esp+24h] [ebp-7Ch]
  int v82; // [esp+24h] [ebp-7Ch]
  int v83; // [esp+28h] [ebp-78h]
  int v84; // [esp+28h] [ebp-78h]
  int v85; // [esp+2Ch] [ebp-74h]
  int v86; // [esp+30h] [ebp-70h]
  char *v87; // [esp+34h] [ebp-6Ch]
  char *v88; // [esp+38h] [ebp-68h]
  int v89; // [esp+3Ch] [ebp-64h]
  __int16 v90; // [esp+40h] [ebp-60h]
  __int16 v91; // [esp+42h] [ebp-5Eh]
  int v92; // [esp+44h] [ebp-5Ch]
  unsigned __int16 v93; // [esp+4Ah] [ebp-56h]
  unsigned __int16 v94; // [esp+4Ch] [ebp-54h]
  int v95; // [esp+50h] [ebp-50h]
  _DWORD v96[3]; // [esp+54h] [ebp-4Ch]
  unsigned int v97; // [esp+60h] [ebp-40h]
  int v98; // [esp+64h] [ebp-3Ch]
  int v99; // [esp+68h] [ebp-38h]
  int v100; // [esp+70h] [ebp-30h]
  int v101; // [esp+74h] [ebp-2Ch]
  int v102; // [esp+78h] [ebp-28h]
  __m128 v103; // [esp+80h] [ebp-20h]
  __m128 v104; // [esp+90h] [ebp-10h]

  result = a3;
  v5 = this;
  if ( (int)a3[1] >= 1 )
  {
    v6 = (int)*(this + 0x12);
    v81 = (int)*(this + 0x11);
    v7 = a2[1];
    v8 = (const void *)(v7 + v81);
    v9 = v6 & 0x3FFFFFFF;
    v78 = v7;
    if ( v9 < v7 + v81 )
    {
      v10 = 2 * v9;
      if ( (int)v8 >= v10 )
        v10 = v7 + v81;
      sub_8A6E40(v5 + 0x10, v10, 0x10);
      v7 = v78;
    }
    v5[0x11] = v8;
    v11 = v5[0x17];
    v96[0] = v5[0x14];
    v96[2] = v5[0x1A];
    v12 = (unsigned int)v5[0x15];
    v13 = 2 * v7;
    v96[1] = v11;
    v14 = v5[0x14];
    v15 = (char *)v14 + v13;
    v16 = v12 & 0x3FFFFFFF;
    v74 = v14;
    v70 = v13;
    if ( v16 < (int)v14 + v13 )
    {
      v17 = 2 * v16;
      if ( (int)v15 >= v17 )
        v17 = (int)v14 + v13;
      sub_8A6E40(v5 + 0x13, v17, 4);
      v13 = v70;
      v14 = v74;
    }
    v18 = (char *)v5[0x13];
    v5[0x14] = v15;
    v19 = &v18[4 * (_DWORD)v14];
    v20 = (unsigned int)v5[0x18];
    v87 = v19;
    v21 = v5[0x17];
    v22 = (char *)v21 + v13;
    v23 = v20 & 0x3FFFFFFF;
    v75 = v21;
    if ( v23 < (int)v21 + v13 )
    {
      v24 = 2 * v23;
      if ( (int)v22 >= v24 )
        v24 = (int)v21 + v13;
      sub_8A6E40(v5 + 0x16, v24, 4);
      v13 = v70;
      v21 = v75;
    }
    v25 = (char *)v5[0x16];
    v5[0x17] = v22;
    v26 = &v25[4 * (_DWORD)v21];
    v27 = (unsigned int)v5[0x1B];
    v88 = v26;
    v28 = v5[0x1A];
    v29 = (char *)v28 + v13;
    v30 = v27 & 0x3FFFFFFF;
    v71 = v28;
    if ( v30 < (int)v28 + v13 )
    {
      v31 = 2 * v30;
      if ( (int)v29 >= v31 )
        v31 = (int)v28 + v13;
      sub_8A6E40(v5 + 0x19, v31, 4);
      v28 = v71;
    }
    v89 = (int)v5[0x19] + 4 * (_DWORD)v28;
    v5[0x1A] = v29;
    v85 = 0;
    if ( v78 > 0 )
    {
      v32 = v81;
      v72 = 0;
      v95 = v88 - v87;
      v76 = 0x10 * v81;
      v33 = v87 + 4;
      v83 = v89 - (_DWORD)v87;
      v34 = v88 + 6;
      v86 = v89 - (_DWORD)v88;
      do
      {
        v35 = *((__m128 *)v5 + 3);
        v36 = (__m128)xmmword_B2FC70;
        v37 = (__m128)xmmword_A9A660;
        v38 = (__m128)xmmword_A9A650;
        v39 = (__m128 *)(v72 + *a3);
        v40 = *((__m128 *)v5 + 2);
        v103 = _mm_add_ps(
                 _mm_max_ps(
                   _mm_min_ps(_mm_mul_ps(_mm_add_ps(*v39, *((__m128 *)v5 + 1)), v35), (__m128)xmmword_B2FC70),
                   (__m128)xmmword_A9A660),
                 (__m128)xmmword_A9A650);
        v41 = v39[1];
        v90 = (unsigned __int32)v103.m128_i32[0] >> 7;
        v91 = (unsigned __int32)v103.m128_i32[1] >> 7;
        LOWORD(v92) = (unsigned __int32)v103.m128_i32[2] >> 7;
        v104 = _mm_add_ps(_mm_max_ps(_mm_min_ps(_mm_mul_ps(_mm_add_ps(v41, v40), v35), v36), v37), v38);
        v93 = (unsigned __int32)v104.m128_i32[1] >> 7;
        v100 = (unsigned __int16)((unsigned __int32)v104.m128_i32[0] >> 7) | 1;
        v94 = (unsigned __int32)v104.m128_i32[2] >> 7;
        v101 = v93 | 1;
        v97 = ((unsigned __int32)v103.m128_i32[0] >> 7) & 0xFFFE;
        v98 = ((unsigned __int32)v103.m128_i32[1] >> 7) & 0xFFFE;
        v102 = v94 | 1;
        v42 = *a2;
        v99 = ((unsigned __int32)v103.m128_i32[2] >> 7) & 0xFFFE;
        v43 = *(_DWORD **)(v42 + 4 * v85);
        *(_DWORD *)((char *)v5[0x10] + v76 + 0xC) = v43;
        v44 = v95;
        *v43 = v32;
        v33[0xFFFFFFFE] = v97;
        LOWORD(v43) = v100;
        v33[0xFFFFFFFF] = v32;
        *v33 = (_WORD)v43;
        LOWORD(v43) = v98;
        v33[1] = v32;
        v34[0xFFFFFFFD] = (_WORD)v43;
        LOWORD(v43) = v101;
        v34[0xFFFFFFFE] = v32;
        *(_WORD *)((char *)v33 + v44) = (_WORD)v43;
        *v34 = v32;
        v45 = v89;
        *(_WORD *)(v89 + 8 * v85) = v99;
        *(_WORD *)(v45 + 8 * v85 + 2) = v32;
        *(_WORD *)((char *)v33 + v83) = v102;
        *(_WORD *)((char *)v34 + v86) = v32;
        v72 += 0x20;
        ++v32;
        v33 += 4;
        v34 += 4;
        v5 = this;
        ++v85;
        v76 += 0x10;
      }
      while ( v85 < v78 );
    }
    v84 = (int)v5[0x10];
    for ( i = 0; i < 3; ++i )
    {
      v47 = 2 * v78;
      LOBYTE(v86) = 0;
      if ( 2 * v78 > 1 )
        sub_8E1200((int)(&v87)[i], 0, v47 - 1, v86);
    }
    v48 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
    v49 = *(_DWORD **)(v48 + 0x19C);
    v80 = v48;
    v50 = v49[8];
    v51 = v50 + ((4 * v96[0] + 0x10) & 0xFFFFFFF0);
    if ( v51 > v49[0xB] )
    {
      v77 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v49 + 0xC))(v49, (4 * v96[0] + 0x10) & 0xFFFFFFF0);
    }
    else
    {
      v49[8] = v51;
      v77 = v50;
    }
    v52 = 0;
    v73 = v5 + 0x13;
    do
    {
      sub_8E0C90(v73, v84, v96[v52], v47, v52, v77);
      ++v52;
      v73 += 3;
    }
    while ( v52 < 3 );
    v53 = *(_DWORD **)(v80 + 0x19C);
    v54 = v77 == v53[0xA];
    v53[8] = v77;
    if ( v54 )
      (*(void (__thiscall **)(_DWORD *, int))(*v53 + 0x10))(v53, v77);
    v55 = (int)v5[0x1C];
    if ( v55 )
    {
      v56 = 0;
      if ( v55 > 0 )
      {
        v57 = 0;
        do
        {
          v58 = (int)v5[0x10] + 0x10 * *(unsigned __int16 *)((char *)v5[0x1E] + v57);
          v57 += 0x10;
          *(_WORD *)(v58 + 4) += v47;
          *(_WORD *)(v58 + 6) += v47;
          ++v56;
        }
        while ( v56 < (int)v5[0x1C] );
      }
    }
    v59 = *(_DWORD **)(v80 + 0x19C);
    v60 = v59[8];
    v61 = (int)v5[0x11];
    v62 = (4 * (v61 >> 5) + 0x30) & 0xFFFFFFF0;
    v63 = v61 >> 3;
    if ( v60 + v62 > v59[0xB] )
      v60 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v59 + 0xC))(v59, v62);
    else
      v59[8] = v60 + v62;
    v64 = v63 >> 4;
    v65 = (_OWORD *)v60;
    if ( v64 >= 0 )
    {
      v66 = v64 + 1;
      do
      {
        v67 = v65++;
        --v66;
        *v67 = 0;
      }
      while ( v66 );
    }
    if ( v78 > 0 )
    {
      v68 = v81;
      v82 = v78;
      do
      {
        *(_DWORD *)(v60 + 4 * (v68 >> 5)) ^= 1 << (v68 & 0x1F);
        ++v68;
        --v82;
      }
      while ( v82 );
    }
    result = (_DWORD *)sub_8E4BC0(v5, v60, a4, 1);
    v69 = *(_DWORD **)(v80 + 0x19C);
    v54 = v60 == v69[0xA];
    v69[8] = v60;
    if ( v54 )
      return (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*v69 + 0x10))(v69, v60);
  }
  return result;
}
