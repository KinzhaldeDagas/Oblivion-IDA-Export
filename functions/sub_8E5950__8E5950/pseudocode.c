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

  v4 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e5968*/
  v5 = *(_DWORD **)(v4 + 0x19C); /*0x8e596b*/
  v6 = v5[8]; /*0x8e5971*/
  v7 = *((_DWORD *)this + 0x11); /*0x8e5975*/
  v76 = v4; /*0x8e5978*/
  v8 = v6 + ((4 * v7 + 0x10) & 0xFFFFFFF0); /*0x8e5987*/
  v75 = this; /*0x8e598d*/
  v92 = 0; /*0x8e5991*/
  if ( v8 > v5[0xB] ) /*0x8e5999*/
  {
    v78 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v5 + 0xC))(v5, (4 * v7 + 0x10) & 0xFFFFFFF0); /*0x8e59aa*/
  }
  else
  {
    v5[8] = v8; /*0x8e599b*/
    v78 = v6; /*0x8e599e*/
  }
  v9 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e59ba*/
  v93 = v7 | 0x80000000; /*0x8e59d1*/
  if ( *(_DWORD *)(v9 + 0x1A4) < *(_DWORD *)(v9 + 0x1A8) ) /*0x8e59d5*/
  {
    v10 = *(_DWORD **)(v76 + 0x1A4); /*0x8e59db*/
    *v10 = "LtquerySingleAabb"; /*0x8e59e1*/
    v10[3] = "marker"; /*0x8e59e7*/
    v11 = __rdtsc(); /*0x8e59ee*/
    v10[1] = v11; /*0x8e59f8*/
    *(_DWORD *)(v76 + 0x1A4) = v10 + 4; /*0x8e59fe*/
  }
  v12 = *((_DWORD *)this + 0x11); /*0x8e5a04*/
  v13 = *(_DWORD **)(v76 + 0x19C); /*0x8e5a0b*/
  v14 = v13[8]; /*0x8e5a11*/
  v15 = (4 * (v12 >> 5) + 0x30) & 0xFFFFFFF0; /*0x8e5a20*/
  if ( v14 + v15 > v13[0xB] ) /*0x8e5a29*/
  {
    v77 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v13 + 0xC))( /*0x8e5a3a*/
            v13,
            (4 * (*((int *)this + 0x11) >> 5) + 0x30) & 0xFFFFFFF0);
    v14 = v77; /*0x8e5a3e*/
  }
  else
  {
    v13[8] = v14 + v15; /*0x8e5a2b*/
    v77 = v14; /*0x8e5a2e*/
  }
  v16 = v12 >> 7; /*0x8e5a40*/
  v17 = (_OWORD *)v14; /*0x8e5a48*/
  if ( v16 >= 0 ) /*0x8e5a4a*/
  {
    v18 = v16 + 1; /*0x8e5a4c*/
    do /*0x8e5a59*/
    {
      v19 = v17++; /*0x8e5a50*/
      --v18; /*0x8e5a55*/
      *v19 = 0; /*0x8e5a56*/
    }
    while ( v18 ); /*0x8e5a59*/
  }
  v20 = *(this + 3); /*0x8e5a65*/
  v90 = _mm_add_ps( /*0x8e5a91*/
          _mm_max_ps(
            _mm_min_ps(_mm_mul_ps(_mm_add_ps(*a2, *(this + 1)), v20), (__m128)xmmword_B2FC70),
            (__m128)xmmword_A9A660),
          (__m128)xmmword_A9A650);
  v94 = ((unsigned __int32)v90.m128_i32[0] >> 7) & 0xFFFE; /*0x8e5ac3*/
  v95 = ((unsigned __int32)v90.m128_i32[1] >> 7) & 0xFFFE; /*0x8e5adf*/
  v21 = (unsigned __int32)v90.m128_i32[2] >> 7; /*0x8e5ae3*/
  v91 = _mm_add_ps( /*0x8e5aed*/
          _mm_max_ps(
            _mm_min_ps(_mm_mul_ps(_mm_add_ps(a2[1], *(this + 2)), v20), (__m128)xmmword_B2FC70),
            (__m128)xmmword_A9A660),
          (__m128)xmmword_A9A650);
  v96 = v21 & 0xFFFE; /*0x8e5b0a*/
  v22 = (unsigned __int16)((unsigned __int32)v91.m128_i32[0] >> 7) | 1; /*0x8e5b2e*/
  v23 = (unsigned __int16 *)(*((_DWORD *)this + 0x13) + 4); /*0x8e5b31*/
  if ( *((_DWORD *)this + 0x1C) ) /*0x8e5b14*/
  {
    v24 = 0x10 - *((_DWORD *)this + 0x1D); /*0x8e5b48*/
    if ( v94 >> v24 > 0 ) /*0x8e5b52*/
    {
      v25 = (unsigned __int16 *)(0x10 * (v94 >> v24) + *((_DWORD *)this + 0x1E) - 0x10); /*0x8e5b63*/
      *(_DWORD *)(v14 + 4 * ((int)*v25 >> 5)) ^= 1 << (*v25 & 0x1F); /*0x8e5b7f*/
      v26 = *((unsigned __int16 **)v25 + 1); /*0x8e5b86*/
      if ( *((_DWORD *)v25 + 2) - 1 >= 0 ) /*0x8e5b89*/
      {
        v79 = *((_DWORD *)v25 + 2); /*0x8e5b8c*/
        do /*0x8e5bb1*/
        {
          v27 = *v26++; /*0x8e5b93*/
          *(_DWORD *)(v14 + 4 * (v27 >> 5)) ^= 1 << (v27 & 0x1F); /*0x8e5baa*/
          --v79; /*0x8e5bad*/
        }
        while ( v79 ); /*0x8e5bb1*/
      }
      v28 = *((_DWORD *)this + 0x10); /*0x8e5bba*/
      v29 = 0x10 * *v25; /*0x8e5bbd*/
      v30 = *(unsigned __int16 *)(v29 + v28 + 8); /*0x8e5bc0*/
      v31 = *(unsigned __int16 *)(v29 + v28 + 0xA); /*0x8e5bc5*/
      v32 = v28 + v29; /*0x8e5bca*/
      v33 = *((_DWORD *)this + 0x13); /*0x8e5bcc*/
      v34 = v33 + 4 * v30 + 4; /*0x8e5bcf*/
      v35 = v33 + 4 * v31; /*0x8e5bd3*/
      v80 = v32; /*0x8e5bd8*/
      for ( i = v35; v34 < v35; v34 += 4 ) /*0x8e5be0*/
      {
        if ( (*(_BYTE *)v34 & 1) == 0 ) /*0x8e5be5*/
        {
          *(_DWORD *)(v14 + 4 * ((int)*(unsigned __int16 *)(v34 + 2) >> 5)) &= ~(1 << (*(_WORD *)(v34 + 2) & 0x1F)); /*0x8e5c01*/
          v35 = i; /*0x8e5c04*/
          v32 = v80; /*0x8e5c08*/
        }
      }
      v22 = (unsigned __int16)((unsigned __int32)v91.m128_i32[0] >> 7) | 1; /*0x8e5c1a*/
      v23 = (unsigned __int16 *)(*((_DWORD *)this + 0x13) + 4 * *(unsigned __int16 *)(v32 + 8) + 4); /*0x8e5c1e*/
    }
  }
  if ( *v23 < (unsigned int)v94 ) /*0x8e5c29*/
  {
    do /*0x8e5c55*/
    {
      v36 = v23[1]; /*0x8e5c34*/
      v23 += 2; /*0x8e5c46*/
      *(_DWORD *)(v14 + 4 * (v36 >> 5)) ^= 1 << (v36 & 0x1F); /*0x8e5c4b*/
    }
    while ( *v23 < (unsigned int)v94 ); /*0x8e5c55*/
    v22 = (unsigned __int16)((unsigned __int32)v91.m128_i32[0] >> 7) | 1; /*0x8e5c57*/
  }
  for ( j = *v23; j < v22; v23 += 2 ) /*0x8e5c63*/
  {
    if ( (j & 1) == 0 ) /*0x8e5c68*/
    {
      v38 = v23[1]; /*0x8e5c6e*/
      v39 = 1 << (v38 & 0x1F); /*0x8e5c78*/
      v38 >>= 5; /*0x8e5c7a*/
      v40 = v39 ^ *(_DWORD *)(v14 + 4 * v38); /*0x8e5c80*/
      v22 = (unsigned __int16)((unsigned __int32)v91.m128_i32[0] >> 7) | 1; /*0x8e5c82*/
      *(_DWORD *)(v14 + 4 * v38) = v40; /*0x8e5c86*/
    }
    j = v23[2]; /*0x8e5c89*/
  }
  v41 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e5ca3*/
  if ( *(_DWORD *)(v41 + 0x1A4) < *(_DWORD *)(v41 + 0x1A8) ) /*0x8e5cb2*/
  {
    v42 = *(_DWORD **)(v76 + 0x1A4); /*0x8e5cb8*/
    *v42 = "Styz-Axis"; /*0x8e5cbe*/
    v43 = __rdtsc(); /*0x8e5cc4*/
    v42[1] = v43; /*0x8e5cce*/
    *(_DWORD *)(v76 + 0x1A4) = v42 + 3; /*0x8e5cd4*/
  }
  v44 = *((_DWORD *)this + 0x16); /*0x8e5cda*/
  v84 = v44 + 4 * *((_DWORD *)this + 0x17) - 8; /*0x8e5cf3*/
  v91.m128_i16[0] = ((int)sub_8E0C30((unsigned __int16 *)(v44 + 4), v84, v95) - v44) >> 2; /*0x8e5d05*/
  v45 = sub_8E0C30((unsigned __int16 *)(v44 + 4), v84, ((unsigned __int32)v91.m128_i32[1] >> 7) | 1); /*0x8e5d16*/
  v46 = 0xFFFFFFFC - v44; /*0x8e5d20*/
  v47 = *((_DWORD *)this + 0x19); /*0x8e5d22*/
  v91.m128_i16[2] = ((int)v45 + v46) >> 2; /*0x8e5d31*/
  v85 = v47 + 4 * *((_DWORD *)this + 0x1A) - 8; /*0x8e5d45*/
  v91.m128_i16[1] = ((int)sub_8E0C30((unsigned __int16 *)(v47 + 4), v85, v96) - v47) >> 2; /*0x8e5d57*/
  v91.m128_i16[3] = (int)((int)sub_8E0C30( /*0x8e5d80*/
                                 (unsigned __int16 *)(v47 + 4),
                                 v85,
                                 ((unsigned __int32)v91.m128_i32[2] >> 7) | 1)
                        + 0xFFFFFFFC
                        - v47) >> 2;
  v48 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e5d8a*/
  if ( *(_DWORD *)(v48 + 0x1A4) < *(_DWORD *)(v48 + 0x1A8) ) /*0x8e5d99*/
  {
    v49 = *(_DWORD **)(v76 + 0x1A4); /*0x8e5d9f*/
    *v49 = "StScanBitfield"; /*0x8e5da5*/
    v50 = __rdtsc(); /*0x8e5dab*/
    v49[1] = v50; /*0x8e5db5*/
    *(_DWORD *)(v76 + 0x1A4) = v49 + 3; /*0x8e5dbb*/
  }
  v51 = v77; /*0x8e5dc1*/
  v52 = v77 + 4 * (*((int *)this + 0x11) >> 5) + 4; /*0x8e5dce*/
  v53 = (unsigned int *)v77; /*0x8e5dd4*/
  v86 = (unsigned int *)v77; /*0x8e5dd6*/
  v89 = v52; /*0x8e5dda*/
  if ( v77 < v52 ) /*0x8e5dde*/
  {
    v54 = v91.m128_i32[0]; /*0x8e5de4*/
    v55 = *((_DWORD *)this + 0x10) + 0x24; /*0x8e5de8*/
    v81 = v55; /*0x8e5deb*/
    do /*0x8e5f16*/
    {
      v56 = *v53; /*0x8e5df0*/
      v73 = *v53; /*0x8e5df4*/
      if ( *v53 ) /*0x8e5df4*/
      {
        do /*0x8e5eee*/
        {
          if ( (v56 & 0xF) != 0 ) /*0x8e5e03*/
          {
            if ( (v56 & 1) == 0 /*0x8e5e2b*/
              || (((v91.m128_i32[1] - *(_DWORD *)(v55 - 0x24)) | (*(_DWORD *)(v55 - 0x20) - v54)) & 0x80008000) != 0
              || (*(_BYTE *)(v55 - 0x18) & 1) != 0 )
            {
              v57 = v78; /*0x8e5e3f*/
              v58 = v92; /*0x8e5e43*/
            }
            else
            {
              v57 = v78; /*0x8e5e31*/
              *(_DWORD *)(v78 + 4 * v92) = v55 - 0x24; /*0x8e5e35*/
              v58 = ++v92; /*0x8e5e38*/
            }
            if ( (v56 & 2) != 0 ) /*0x8e5e4a*/
            {
              if ( (((v91.m128_i32[1] - *(_DWORD *)(v55 - 0x14)) | (*(_DWORD *)(v55 - 0x10) - v54)) & 0x80008000) == 0 /*0x8e5e69*/
                && (*(_BYTE *)(v55 - 8) & 1) == 0 )
              {
                *(_DWORD *)(v57 + 4 * v58++) = v55 - 0x14; /*0x8e5e6b*/
                v92 = v58; /*0x8e5e6f*/
              }
              v56 = v73; /*0x8e5e73*/
            }
            if ( (v56 & 4) != 0 ) /*0x8e5e7a*/
            {
              if ( (((v91.m128_i32[1] - *(_DWORD *)(v55 - 4)) | (*(_DWORD *)v55 - v91.m128_i32[0])) & 0x80008000) == 0 /*0x8e5e9c*/
                && (*(_BYTE *)(v55 + 8) & 1) == 0 )
              {
                *(_DWORD *)(v57 + 4 * v58++) = v55 - 4; /*0x8e5e9e*/
                v92 = v58; /*0x8e5ea2*/
              }
              v56 = v73; /*0x8e5ea6*/
            }
            if ( (v56 & 8) != 0 ) /*0x8e5ead*/
            {
              if ( (((v91.m128_i32[1] - *(_DWORD *)(v55 + 0xC)) | (*(_DWORD *)(v55 + 0x10) - v91.m128_i32[0])) /*0x8e5ed0*/
                  & 0x80008000) == 0
                && (*(_BYTE *)(v55 + 0x18) & 1) == 0 )
              {
                *(_DWORD *)(v57 + 4 * v58) = v55 + 0xC; /*0x8e5ed2*/
                v92 = v58 + 1; /*0x8e5ed6*/
              }
              v56 = v73; /*0x8e5eda*/
            }
          }
          v54 = v91.m128_i32[0]; /*0x8e5ede*/
          v56 >>= 4; /*0x8e5ee2*/
          v55 += 0x40; /*0x8e5ee5*/
          v73 = v56; /*0x8e5eea*/
        }
        while ( v56 ); /*0x8e5eee*/
        v53 = v86; /*0x8e5ef4*/
        v51 = v77; /*0x8e5ef8*/
        v52 = v89; /*0x8e5efc*/
      }
      ++v53; /*0x8e5f04*/
      v55 = v81 + 0x200; /*0x8e5f07*/
      v81 += 0x200; /*0x8e5f0e*/
      v86 = v53; /*0x8e5f12*/
    }
    while ( (unsigned int)v53 < v52 ); /*0x8e5f16*/
  }
  v59 = *(_DWORD **)(v76 + 0x19C); /*0x8e5f20*/
  v60 = v51 == v59[0xA]; /*0x8e5f26*/
  v59[8] = v51; /*0x8e5f29*/
  if ( v60 ) /*0x8e5f2c*/
    (*(void (__thiscall **)(_DWORD *, unsigned int))(*v59 + 0x10))(v59, v51); /*0x8e5f31*/
  v61 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e5f41*/
  if ( *(_DWORD *)(v61 + 0x1A4) < *(_DWORD *)(v61 + 0x1A8) ) /*0x8e5f50*/
  {
    v62 = *(_DWORD **)(v76 + 0x1A4); /*0x8e5f52*/
    *v62 = "lt"; /*0x8e5f58*/
    v63 = __rdtsc(); /*0x8e5f5e*/
    v89 = v63; /*0x8e5f60*/
    v62[1] = v63; /*0x8e5f68*/
    *(_DWORD *)(v76 + 0x1A4) = v62 + 3; /*0x8e5f6e*/
  }
  v64 = a3 + 9; /*0x8e5f7d*/
  v65 = 2 * v92 + 2; /*0x8e5f80*/
  if ( a3 ) /*0x8e5f84*/
  {
    *a3 = (int)v64; /*0x8e5f8e*/
    a3[1] = 0; /*0x8e5f90*/
    a3[2] = v65 | 0x80000000; /*0x8e5f97*/
  }
  v66 = a3 + 3; /*0x8e5f9a*/
  if ( a3 != (int *)0xFFFFFFF4 ) /*0x8e5fa5*/
  {
    *v66 = (int)&v64[v65]; /*0x8e5faa*/
    a3[4] = 0; /*0x8e5fb4*/
    a3[5] = v65 | 0x80000000; /*0x8e5fb7*/
  }
  v67 = a3 + 6; /*0x8e5fba*/
  if ( a3 != (int *)0xFFFFFFE8 ) /*0x8e5fbf*/
  {
    *v67 = (int)&v64[2 * v65]; /*0x8e5fc9*/
    a3[7] = 0; /*0x8e5fcb*/
    a3[8] = v65 | 0x80000000; /*0x8e5fce*/
  }
  *(_DWORD *)(*a3 + 4 * a3[1]++) = 0; /*0x8e5fe4*/
  *(_DWORD *)(a3[3] + 4 * a3[4]++) = 0; /*0x8e5fef*/
  *(_DWORD *)(a3[6] + 4 * a3[7]++) = 0; /*0x8e5ffa*/
  v74 = (unsigned __int16 **)v78; /*0x8e600d*/
  if ( v92 - 1 >= 0 ) /*0x8e6011*/
  {
    v87 = v92; /*0x8e6018*/
    do /*0x8e610a*/
    {
      *(_DWORD *)(*a3 + 4 * a3[1]) = *(_DWORD *)(v75[4].m128_i32[3] + 4 * (*v74)[4]); /*0x8e6039*/
      v68 = *a3; /*0x8e603f*/
      ++a3[1]; /*0x8e6042*/
      *(_DWORD *)(v68 + 4 * a3[1]++) = *(_DWORD *)(v75[4].m128_i32[3] + 4 * (*v74)[5]); /*0x8e605c*/
      *(_DWORD *)(a3[3] + 4 * a3[4]++) = *(_DWORD *)(v75[5].m128_i32[2] + 4 * **v74); /*0x8e607d*/
      *(_DWORD *)(a3[3] + 4 * a3[4]++) = *(_DWORD *)(v75[5].m128_i32[2] + 4 * (*v74)[2]); /*0x8e60a2*/
      *(_DWORD *)(a3[6] + 4 * a3[7]) = *(_DWORD *)(v75[6].m128_i32[1] + 4 * (*v74)[1]); /*0x8e60d0*/
      v69 = a3[7] + 1; /*0x8e60d6*/
      a3[7] = v69; /*0x8e60d7*/
      *(_DWORD *)(*v67 + 4 * v69) = *(_DWORD *)(v75[6].m128_i32[1] + 4 * (*v74)[3]); /*0x8e60f1*/
      ++a3[7]; /*0x8e60ff*/
      ++v74; /*0x8e6102*/
      --v87; /*0x8e6106*/
    }
    while ( v87 ); /*0x8e610a*/
    v66 = a3 + 3; /*0x8e6110*/
  }
  v70 = a3; /*0x8e6114*/
  v88 = a3; /*0x8e6116*/
  v82 = 3; /*0x8e611a*/
  do /*0x8e615b*/
  {
    LOBYTE(v89) = 0; /*0x8e6129*/
    if ( v70[1] - 1 > 1 ) /*0x8e612e*/
    {
      sub_8E1200(*v70 + 4, 0, v70[1] - 2, v89); /*0x8e613f*/
      v70 = v88; /*0x8e6144*/
    }
    v70 += 3; /*0x8e614f*/
    v60 = v82 == 1; /*0x8e6152*/
    v88 = v70; /*0x8e6153*/
    --v82; /*0x8e6157*/
  }
  while ( !v60 ); /*0x8e615b*/
  *(_DWORD *)(*a3 + 4 * a3[1]++) = 0xFFFC; /*0x8e6174*/
  *(_DWORD *)(*v66 + 4 * v66[1]++) = 0xFFFC; /*0x8e6183*/
  *(_DWORD *)(a3[6] + 4 * a3[7]++) = 0xFFFC; /*0x8e618e*/
  v71 = *(_DWORD **)(v76 + 0x19C); /*0x8e6198*/
  v60 = v78 == v71[0xA]; /*0x8e619e*/
  v71[8] = v78; /*0x8e61a1*/
  if ( v60 ) /*0x8e61a4*/
    (*(void (__thiscall **)(_DWORD *, int))(*v71 + 0x10))(v71, v78); /*0x8e61a9*/
  return v93; /*0x8e61cb*/
}
