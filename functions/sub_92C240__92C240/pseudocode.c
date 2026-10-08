signed int __cdecl sub_92C240(_DWORD *a1, const void **a2)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  _DWORD *v6; // esi
  unsigned __int64 v7; // rax
  int v8; // esi
  int v9; // eax
  _DWORD *v10; // ecx
  __m128 *v11; // edx
  __m128 *v12; // ebx
  __m128 *v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  _DWORD *v17; // edx
  int v18; // esi
  _DWORD *v19; // ecx
  unsigned __int64 v20; // rax
  _DWORD *v21; // ecx
  __int32 *v22; // eax
  bool v23; // zf
  const void *v25; // eax
  unsigned int v26; // edx
  __m128 v27; // xmm0
  __m128 *v28; // eax
  __int128 v29; // xmm0
  _OWORD *v30; // eax
  int v31; // ecx
  __m128 v32; // xmm0
  __m128 *v33; // eax
  __int32 v34; // ecx
  __m128 *v35; // ebx
  __m128 *v36; // edx
  int v37; // ecx
  __m128 v38; // xmm2
  __m128 *v39; // edi
  __m128 v40; // xmm0
  __m128 *v41; // eax
  int v42; // edx
  int v43; // edi
  signed int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // esi
  _DWORD *v48; // ecx
  unsigned __int64 v49; // rax
  _DWORD *v50; // ecx
  __int32 *v51; // eax
  __m128 *v52; // [esp+10h] [ebp-1090h] BYREF
  int v53; // [esp+14h] [ebp-108Ch]
  signed int v54; // [esp+18h] [ebp-1088h]
  __int32 *v55; // [esp+1Ch] [ebp-1084h]
  char *v56; // [esp+20h] [ebp-1080h]
  int v57; // [esp+24h] [ebp-107Ch]
  int v58; // [esp+28h] [ebp-1078h] BYREF
  __int32 v59; // [esp+2Ch] [ebp-1074h] BYREF
  __m128 v60; // [esp+30h] [ebp-1070h] BYREF
  __m128 v61; // [esp+40h] [ebp-1060h] BYREF
  __m128 v62; // [esp+50h] [ebp-1050h] BYREF
  int v63; // [esp+60h] [ebp-1040h]
  int v64; // [esp+64h] [ebp-103Ch]
  unsigned int v65; // [esp+68h] [ebp-1038h]
  _DWORD v66[5]; // [esp+6Ch] [ebp-1034h] BYREF
  unsigned int v67; // [esp+80h] [ebp-1020h]
  int v68; // [esp+84h] [ebp-101Ch]
  unsigned int v69; // [esp+88h] [ebp-1018h]
  char *v70; // [esp+90h] [ebp-1010h] BYREF
  int v71; // [esp+94h] [ebp-100Ch]
  int v72; // [esp+98h] [ebp-1008h]
  char v73; // [esp+A0h] [ebp-1000h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x92c250*/
  v3 = MEMORY[0xBA9DE4]; /*0x92c258*/
  v4 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x92c25e*/
  if ( *(_DWORD *)(v4 + 0x1A4) < *(_DWORD *)(v4 + 0x1A8) ) /*0x92c26f*/
  {
    v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x92c271*/
    v6 = *(_DWORD **)(v4 + 0x1A4); /*0x92c273*/
    *v6 = "TtplanesToVerts"; /*0x92c279*/
    v7 = __rdtsc(); /*0x92c27f*/
    v56 = (char *)v7; /*0x92c281*/
    v6[1] = v7; /*0x92c289*/
    *(_DWORD *)(v5 + 0x1A4) = v6 + 3; /*0x92c28f*/
  }
  v8 = a1[1]; /*0x92c298*/
  v52 = 0; /*0x92c29d*/
  v53 = 0; /*0x92c2a1*/
  v9 = ThreadLocalStoragePointer[v3]; /*0x92c2a5*/
  v10 = *(_DWORD **)(v9 + 0x19C); /*0x92c2a8*/
  v57 = v9; /*0x92c2ae*/
  v54 = 0x80000000; /*0x92c2b8*/
  v11 = (__m128 *)v10[8]; /*0x92c2c0*/
  v12 = &v11[v8 + 1]; /*0x92c2c6*/
  if ( (unsigned int)v12 > v10[0xB] ) /*0x92c2cc*/
  {
    v13 = (__m128 *)(*(int (__thiscall **)(_DWORD *, int))(*v10 + 0xC))(v10, 0x10 * (v8 + 1)); /*0x92c2d8*/
  }
  else
  {
    v10[8] = v12; /*0x92c2ce*/
    v13 = v11; /*0x92c2d1*/
  }
  v14 = a1[1]; /*0x92c2db*/
  v15 = 0; /*0x92c2e4*/
  v52 = v13; /*0x92c2e8*/
  v54 = v8 | 0x80000000; /*0x92c2ec*/
  v55 = (__int32 *)v13; /*0x92c2f0*/
  v53 = v14; /*0x92c2f4*/
  if ( v14 > 0 ) /*0x92c2f8*/
  {
    v16 = 0; /*0x92c2fa*/
    do /*0x92c318*/
    {
      v52[v16] = *(__m128 *)(*a1 + v16 * 0x10); /*0x92c30a*/
      v14 = v53; /*0x92c30e*/
      ++v15; /*0x92c312*/
      ++v16; /*0x92c313*/
    }
    while ( v15 < v53 ); /*0x92c318*/
  }
  if ( v14 > 1 ) /*0x92c31d*/
    sub_92B640((int)v52, 0, v14 - 1, (int (__cdecl *)(char *, int, __int128 *))sub_92C9B0); /*0x92c32d*/
  if ( sub_92BD20((int *)&v52, &v58, &v59, (__m128 *)&v66[1], &v62) == 1 ) /*0x92c359*/
  {
    v17 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x92c35f*/
    v18 = v57; /*0x92c37a*/
    if ( *(_DWORD *)(v17[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v17[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x92c37e*/
    {
      v19 = *(_DWORD **)(v57 + 0x1A4); /*0x92c380*/
      *v19 = "Et"; /*0x92c386*/
      v20 = __rdtsc(); /*0x92c38c*/
      v56 = (char *)v20; /*0x92c38e*/
      v19[1] = v20; /*0x92c396*/
      *(_DWORD *)(v18 + 0x1A4) = v19 + 3; /*0x92c39c*/
    }
    v21 = *(_DWORD **)(v18 + 0x19C); /*0x92c3a2*/
    v22 = v55; /*0x92c3a8*/
    v23 = v55 == (__int32 *)v21[0xA]; /*0x92c3ac*/
    v21[8] = v55; /*0x92c3af*/
    if ( v23 ) /*0x92c3b2*/
      (*(void (__thiscall **)(_DWORD *, __int32 *))(*v21 + 0x10))(v21, v22); /*0x92c3b7*/
    if ( v54 >= 0 ) /*0x92c3c0*/
      sub_8A75D0(*(_DWORD *)(v18 + 0x19C), v52, 0x10 * v54, 0x14); /*0x92c3d8*/
    return 1; /*0x92c3dd*/
  }
  else
  {
    v25 = a2[1]; /*0x92c3ef*/
    v26 = (unsigned int)a2[2] & 0x3FFFFFFF; /*0x92c3f2*/
    v70 = &v73; /*0x92c401*/
    v71 = 0; /*0x92c408*/
    v72 = 0x80000080; /*0x92c413*/
    if ( v25 == (const void *)v26 ) /*0x92c41e*/
      sub_8A6EE0(a2, 0x10); /*0x92c423*/
    v27 = v62; /*0x92c430*/
    v28 = (__m128 *)((char *)*a2 + 0x10 * (_DWORD)a2[1]); /*0x92c43a*/
    a2[1] = (char *)a2[1] + 1; /*0x92c43d*/
    *v28 = v27; /*0x92c440*/
    if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x92c450*/
      sub_8A6EE0(a2, 0x10); /*0x92c455*/
    v29 = *(_OWORD *)&v66[1]; /*0x92c462*/
    v30 = (char *)*a2 + 0x10 * (_DWORD)a2[1]; /*0x92c46c*/
    a2[1] = (char *)a2[1] + 1; /*0x92c46f*/
    *v30 = v29; /*0x92c472*/
    v31 = v64; /*0x92c483*/
    v32 = v61; /*0x92c487*/
    v33 = (__m128 *)&v70[0x20 * v71++]; /*0x92c491*/
    v33->m128_i32[0] = v63; /*0x92c49f*/
    v33->m128_i32[1] = v31; /*0x92c4a1*/
    v34 = v60.m128_i32[2]; /*0x92c4a4*/
    v60.m128_i32[2] = (__int32)&v66[1]; /*0x92c4ac*/
    v33->m128_i32[2] = v34; /*0x92c4b0*/
    v33[1] = v32; /*0x92c4b3*/
    v60.m128_u64[0] = __PAIR64__(v69, v67); /*0x92c4d4*/
    sub_92B580(&v52, v67, v69, v68, &v61); /*0x92c4e1*/
    sub_92C020(&v60, &v52, (const void **)&v70, a2); /*0x92c4f9*/
    v60.m128_i32[0] = v68; /*0x92c526*/
    *(unsigned __int64 *)((char *)v60.m128_u64 + 4) = __PAIR64__(&v66[1], v69); /*0x92c52f*/
    sub_92B580(&v52, v68, v69, v67, &v61); /*0x92c533*/
    sub_92C020(&v60, &v52, (const void **)&v70, a2); /*0x92c54b*/
    v60.m128_i32[0] = v63; /*0x92c578*/
    *(unsigned __int64 *)((char *)v60.m128_u64 + 4) = __PAIR64__(&v62, v65); /*0x92c57c*/
    sub_92B580(&v52, v63, v65, v64, &v61); /*0x92c588*/
    sub_92C020(&v60, &v52, (const void **)&v70, a2); /*0x92c5a0*/
    v60.m128_i32[0] = v64; /*0x92c5ca*/
    *(unsigned __int64 *)((char *)v60.m128_u64 + 4) = __PAIR64__(&v62, v65); /*0x92c5d3*/
    sub_92B580(&v52, v64, v65, v63, &v61); /*0x92c5d7*/
    sub_92C020(&v60, &v52, (const void **)&v70, a2); /*0x92c5ef*/
    if ( v72 >= 0 ) /*0x92c600*/
      sub_8A75D0(*(_DWORD *)(v57 + 0x19C), v70, 0x20 * v72, 0x14); /*0x92c61f*/
    v35 = (__m128 *)*a2; /*0x92c628*/
    v36 = (__m128 *)*a2; /*0x92c62a*/
    if ( (int)((int)a2[1] + 0xFFFFFFFF) >= 0 ) /*0x92c62c*/
    {
      v56 = (char *)a2[1]; /*0x92c62f*/
      do /*0x92c6a9*/
      {
        v37 = 0; /*0x92c637*/
        if ( v53 <= 0 ) /*0x92c63b*/
        {
LABEL_31:
          v41 = v36++; /*0x92c692*/
          *v41 = *v35; /*0x92c69a*/
        }
        else
        {
          v38 = *v35; /*0x92c63d*/
          v39 = v52; /*0x92c640*/
          while ( 1 ) /*0x92c64a*/
          {
            v40 = _mm_mul_ps(*v39, v38); /*0x92c64a*/
            *(float *)&v58 = (float)(_mm_shuffle_ps(v40, v40, 0x55).m128_f32[0] + v40.m128_f32[0]) /*0x92c671*/
                           + (float)(_mm_shuffle_ps(v40, v40, 0xAA).m128_f32[0]
                                   + _mm_shuffle_ps(*v39, *v39, 0xFF).m128_f32[0]);
            if ( *(float *)&v58 > (double)flt_A3C778 ) /*0x92c684*/
              break; /*0x92c684*/
            ++v37; /*0x92c68a*/
            ++v39; /*0x92c68b*/
            if ( v37 >= v53 ) /*0x92c690*/
              goto LABEL_31; /*0x92c690*/
          }
        }
        ++v35; /*0x92c6a1*/
        --v56; /*0x92c6a5*/
      }
      while ( v56 ); /*0x92c6a9*/
    }
    v42 = ((char *)v36 - (_BYTE *)*a2) >> 4; /*0x92c6b2*/
    v43 = v42; /*0x92c6b5*/
    v44 = (unsigned int)a2[2] & 0x3FFFFFFF; /*0x92c6b7*/
    if ( v44 < v42 ) /*0x92c6be*/
    {
      v45 = 2 * v44; /*0x92c6c0*/
      if ( v42 >= v45 ) /*0x92c6c4*/
        v45 = v42; /*0x92c6c6*/
      sub_8A6E40(a2, v45, 0x10); /*0x92c6cc*/
    }
    a2[1] = (const void *)v43; /*0x92c6d7*/
    if ( v43 > 1 ) /*0x92c6da*/
      sub_92B640((int)*a2, 0, v43 - 1, (int (__cdecl *)(char *, int, __int128 *))sub_92C9B0); /*0x92c6e8*/
    sub_92DCA0(0.000019999999, (int)a2, &v58); /*0x92c6fb*/
    v46 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x92c70c*/
    v47 = v57; /*0x92c71b*/
    if ( *(_DWORD *)(v46 + 0x1A4) < *(_DWORD *)(v46 + 0x1A8) ) /*0x92c724*/
    {
      v48 = *(_DWORD **)(v57 + 0x1A4); /*0x92c726*/
      *v48 = "Et"; /*0x92c72c*/
      v49 = __rdtsc(); /*0x92c732*/
      v58 = v49; /*0x92c734*/
      v48[1] = v49; /*0x92c73c*/
      *(_DWORD *)(v47 + 0x1A4) = v48 + 3; /*0x92c742*/
    }
    v50 = *(_DWORD **)(v47 + 0x19C); /*0x92c748*/
    v51 = v55; /*0x92c74e*/
    v23 = v55 == (__int32 *)v50[0xA]; /*0x92c752*/
    v50[8] = v55; /*0x92c755*/
    if ( v23 ) /*0x92c758*/
      (*(void (__thiscall **)(_DWORD *, __int32 *))(*v50 + 0x10))(v50, v51); /*0x92c75d*/
    if ( v54 >= 0 ) /*0x92c766*/
      sub_8A75D0(*(_DWORD *)(v47 + 0x19C), v52, 0x10 * v54, 0x14); /*0x92c77e*/
    return 0; /*0x92c785*/
  }
}
