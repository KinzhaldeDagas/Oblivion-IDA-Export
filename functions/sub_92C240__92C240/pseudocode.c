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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v3 = TlsIndex;
  v4 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v4 + 0x1A4) < *(_DWORD *)(v4 + 0x1A8) )
  {
    v5 = ThreadLocalStoragePointer[TlsIndex];
    v6 = *(_DWORD **)(v4 + 0x1A4);
    *v6 = "TtplanesToVerts";
    v7 = __rdtsc();
    v56 = (char *)v7;
    v6[1] = v7;
    *(_DWORD *)(v5 + 0x1A4) = v6 + 3;
  }
  v8 = a1[1];
  v52 = 0;
  v53 = 0;
  v9 = ThreadLocalStoragePointer[v3];
  v10 = *(_DWORD **)(v9 + 0x19C);
  v57 = v9;
  v54 = 0x80000000;
  v11 = (__m128 *)v10[8];
  v12 = &v11[v8 + 1];
  if ( (unsigned int)v12 > v10[0xB] )
  {
    v13 = (__m128 *)(*(int (__thiscall **)(_DWORD *, int))(*v10 + 0xC))(v10, 0x10 * (v8 + 1));
  }
  else
  {
    v10[8] = v12;
    v13 = v11;
  }
  v14 = a1[1];
  v15 = 0;
  v52 = v13;
  v54 = v8 | 0x80000000;
  v55 = (__int32 *)v13;
  v53 = v14;
  if ( v14 > 0 )
  {
    v16 = 0;
    do
    {
      v52[v16] = *(__m128 *)(*a1 + v16 * 0x10);
      v14 = v53;
      ++v15;
      ++v16;
    }
    while ( v15 < v53 );
  }
  if ( v14 > 1 )
    sub_92B640((int)v52, 0, v14 - 1, (int (__cdecl *)(char *, int, __int128 *))sub_92C9B0);
  if ( sub_92BD20((int *)&v52, &v58, &v59, (__m128 *)&v66[1], &v62) == 1 )
  {
    v17 = NtCurrentTeb()->ThreadLocalStoragePointer;
    v18 = v57;
    if ( *(_DWORD *)(v17[TlsIndex] + 0x1A4) < *(_DWORD *)(v17[TlsIndex] + 0x1A8) )
    {
      v19 = *(_DWORD **)(v57 + 0x1A4);
      *v19 = "Et";
      v20 = __rdtsc();
      v56 = (char *)v20;
      v19[1] = v20;
      *(_DWORD *)(v18 + 0x1A4) = v19 + 3;
    }
    v21 = *(_DWORD **)(v18 + 0x19C);
    v22 = v55;
    v23 = v55 == (__int32 *)v21[0xA];
    v21[8] = v55;
    if ( v23 )
      (*(void (__thiscall **)(_DWORD *, __int32 *))(*v21 + 0x10))(v21, v22);
    if ( v54 >= 0 )
      sub_8A75D0(*(_DWORD *)(v18 + 0x19C), v52, 0x10 * v54, 0x14);
    return 1;
  }
  else
  {
    v25 = a2[1];
    v26 = (unsigned int)a2[2] & 0x3FFFFFFF;
    v70 = &v73;
    v71 = 0;
    v72 = 0x80000080;
    if ( v25 == (const void *)v26 )
      sub_8A6EE0(a2, 0x10);
    v27 = v62;
    v28 = (__m128 *)((char *)*a2 + 0x10 * (_DWORD)a2[1]);
    a2[1] = (char *)a2[1] + 1;
    *v28 = v27;
    if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
      sub_8A6EE0(a2, 0x10);
    v29 = *(_OWORD *)&v66[1];
    v30 = (char *)*a2 + 0x10 * (_DWORD)a2[1];
    a2[1] = (char *)a2[1] + 1;
    *v30 = v29;
    v31 = v64;
    v32 = v61;
    v33 = (__m128 *)&v70[0x20 * v71++];
    v33->m128_i32[0] = v63;
    v33->m128_i32[1] = v31;
    v34 = v60.m128_i32[2];
    v60.m128_i32[2] = (__int32)&v66[1];
    v33->m128_i32[2] = v34;
    v33[1] = v32;
    v60.m128_u64[0] = __PAIR64__(v69, v67);
    sub_92B580(&v52, v67, v69, v68, &v61);
    sub_92C020(&v60, &v52, (const void **)&v70, a2);
    v60.m128_i32[0] = v68;
    *(unsigned __int64 *)((char *)v60.m128_u64 + 4) = __PAIR64__(&v66[1], v69);
    sub_92B580(&v52, v68, v69, v67, &v61);
    sub_92C020(&v60, &v52, (const void **)&v70, a2);
    v60.m128_i32[0] = v63;
    *(unsigned __int64 *)((char *)v60.m128_u64 + 4) = __PAIR64__(&v62, v65);
    sub_92B580(&v52, v63, v65, v64, &v61);
    sub_92C020(&v60, &v52, (const void **)&v70, a2);
    v60.m128_i32[0] = v64;
    *(unsigned __int64 *)((char *)v60.m128_u64 + 4) = __PAIR64__(&v62, v65);
    sub_92B580(&v52, v64, v65, v63, &v61);
    sub_92C020(&v60, &v52, (const void **)&v70, a2);
    if ( v72 >= 0 )
      sub_8A75D0(*(_DWORD *)(v57 + 0x19C), v70, 0x20 * v72, 0x14);
    v35 = (__m128 *)*a2;
    v36 = (__m128 *)*a2;
    if ( (int)((int)a2[1] + 0xFFFFFFFF) >= 0 )
    {
      v56 = (char *)a2[1];
      do
      {
        v37 = 0;
        if ( v53 <= 0 )
        {
LABEL_31:
          v41 = v36++;
          *v41 = *v35;
        }
        else
        {
          v38 = *v35;
          v39 = v52;
          while ( 1 )
          {
            v40 = _mm_mul_ps(*v39, v38);
            *(float *)&v58 = (float)(_mm_shuffle_ps(v40, v40, 0x55).m128_f32[0] + v40.m128_f32[0])
                           + (float)(_mm_shuffle_ps(v40, v40, 0xAA).m128_f32[0]
                                   + _mm_shuffle_ps(*v39, *v39, 0xFF).m128_f32[0]);
            if ( *(float *)&v58 > (double)flt_A3C778 )
              break;
            ++v37;
            ++v39;
            if ( v37 >= v53 )
              goto LABEL_31;
          }
        }
        ++v35;
        --v56;
      }
      while ( v56 );
    }
    v42 = ((char *)v36 - (_BYTE *)*a2) >> 4;
    v43 = v42;
    v44 = (unsigned int)a2[2] & 0x3FFFFFFF;
    if ( v44 < v42 )
    {
      v45 = 2 * v44;
      if ( v42 >= v45 )
        v45 = v42;
      sub_8A6E40(a2, v45, 0x10);
    }
    a2[1] = (const void *)v43;
    if ( v43 > 1 )
      sub_92B640((int)*a2, 0, v43 - 1, (int (__cdecl *)(char *, int, __int128 *))sub_92C9B0);
    sub_92DCA0(0.000019999999, (int)a2, (int)&v58);
    v46 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
    v47 = v57;
    if ( *(_DWORD *)(v46 + 0x1A4) < *(_DWORD *)(v46 + 0x1A8) )
    {
      v48 = *(_DWORD **)(v57 + 0x1A4);
      *v48 = "Et";
      v49 = __rdtsc();
      v58 = v49;
      v48[1] = v49;
      *(_DWORD *)(v47 + 0x1A4) = v48 + 3;
    }
    v50 = *(_DWORD **)(v47 + 0x19C);
    v51 = v55;
    v23 = v55 == (__int32 *)v50[0xA];
    v50[8] = v55;
    if ( v23 )
      (*(void (__thiscall **)(_DWORD *, __int32 *))(*v50 + 0x10))(v50, v51);
    if ( v54 >= 0 )
      sub_8A75D0(*(_DWORD *)(v47 + 0x19C), v52, 0x10 * v54, 0x14);
    return 0;
  }
}
