int __userpurge sub_8DFB70@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4@<esi>, int a5, int a6, float a7)
{
  int v8; // eax
  int *v9; // ecx
  int v10; // edx
  double v11; // st7
  double v12; // st6
  float v13; // eax
  float v14; // ecx
  int v15; // edx
  void *v16; // ecx
  double v17; // st7
  float v18; // edx
  float v19; // eax
  float v20; // ecx
  double v21; // st7
  __m128 v22; // xmm1
  __m128 v23; // xmm1
  int v24; // edx
  int v25; // eax
  const void *v26; // esi
  struct _RTL_CRITICAL_SECTION *v27; // edi
  int v28; // edx
  int v29; // eax
  int LockCount; // ecx
  int v31; // eax
  WORD *v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // esi
  int *v36; // ecx
  int v37; // edi
  int v38; // eax
  char v39; // cl
  int v40; // eax
  LONG v41; // ecx
  int LockSemaphore; // eax
  int v43; // esi
  _DWORD *v44; // eax
  unsigned __int64 v46; // rax
  _DWORD *ThreadLocalStoragePointer; // esi
  int v48; // edi
  int v49; // eax
  _DWORD *v50; // ecx
  unsigned __int64 v51; // rax
  double v52; // st7
  double v53; // st6
  int v54; // esi
  _DWORD *v55; // ecx
  int *v58; // [esp-4h] [ebp-30E8h]
  float v59; // [esp+18h] [ebp-30CCh] BYREF
  float v60; // [esp+1Ch] [ebp-30C8h]
  float v61; // [esp+20h] [ebp-30C4h]
  float v62; // [esp+24h] [ebp-30C0h]
  float v63; // [esp+28h] [ebp-30BCh]
  int v64[2]; // [esp+2Ch] [ebp-30B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v65; // [esp+34h] [ebp-30B0h]
  int v66[3]; // [esp+38h] [ebp-30ACh] BYREF
  _BYTE v67[44]; // [esp+44h] [ebp-30A0h] BYREF
  int v68; // [esp+70h] [ebp-3074h]
  int v69; // [esp+74h] [ebp-3070h]
  int v70; // [esp+78h] [ebp-306Ch]
  int v71; // [esp+7Ch] [ebp-3068h]
  int v72; // [esp+80h] [ebp-3064h]
  float v73[3089]; // [esp+A0h] [ebp-3044h] BYREF

  *(float *)(a1 + 8) = a7; /*0x8dfb8d*/
  *(_BYTE *)(a1 + 0x44) = 1; /*0x8dfb90*/
  v8 = *(_DWORD *)(a5 + 0x88) + 1; /*0x8dfb9d*/
  *(float *)(a5 + 0x10) = a7 + *(float *)(a5 + 0x10); /*0x8dfb9e*/
  *(_DWORD *)(a5 + 0x88) = v8; /*0x8dfba1*/
  v9 = *(int **)(a1 + 0x20); /*0x8dfba7*/
  v10 = *v9; /*0x8dfbaa*/
  v63 = *(float *)&a1; /*0x8dfbad*/
  (*(void (__thiscall **)(int *, int, int, int))(v10 + 8))(v9, a3, a4, a2); /*0x8dfbb1*/
  v11 = a7 + *(float *)(a5 + 0x18); /*0x8dfbb7*/
  *(_DWORD *)(a5 + 0x14) = *(_DWORD *)(a5 + 0x18); /*0x8dfbbd*/
  *(float *)(a5 + 0x18) = v11; /*0x8dfbc0*/
  v12 = *(float *)(a5 + 0x14); /*0x8dfbc3*/
  v59 = *(float *)(a5 + 0x14); /*0x8dfbc6*/
  v60 = v11; /*0x8dfbcc*/
  v61 = v11 - v12; /*0x8dfbd4*/
  if ( v61 == *(float *)&SrcStr ) /*0x8dfbeb*/
    v62 = 0.0; /*0x8dfbed*/
  else
    v62 = fConstant_1 / v61; /*0x8dfc01*/
  v13 = v59; /*0x8dfc08*/
  *(_DWORD *)(a5 + 0xC) = *(_DWORD *)(a5 + 0x14); /*0x8dfc0c*/
  v14 = v60; /*0x8dfc0f*/
  *(float *)(a5 + 0x160) = v13; /*0x8dfc1b*/
  *(float *)(a5 + 0x164) = v14; /*0x8dfc1d*/
  *(float *)(a5 + 0x168) = v61; /*0x8dfc24*/
  *(float *)(a5 + 0x16C) = v62; /*0x8dfc2b*/
  v15 = *(_DWORD *)(a5 + 0x74) + 0x10; /*0x8dfc31*/
  *(float *)v15 = v13; /*0x8dfc34*/
  *(float *)(v15 + 4) = v60; /*0x8dfc3a*/
  *(float *)(v15 + 8) = v61; /*0x8dfc41*/
  *(float *)(v15 + 0xC) = v62; /*0x8dfc48*/
  (*(void (__thiscall **)(_DWORD, int, float *))(**(_DWORD **)(a5 + 0x5C) + 0xC))(*(_DWORD *)(a5 + 0x5C), a5, &v59); /*0x8dfc56*/
  sub_8CC3F0((const void **)a5); /*0x8dfc5a*/
  Shared_NoOpVirtual_60D0A0(v16); /*0x8dfc62*/
  v17 = v61; /*0x8dfc67*/
  v18 = v60; /*0x8dfc6f*/
  v19 = v61; /*0x8dfc73*/
  *(float *)(a5 + 0x160) = v59; /*0x8dfc77*/
  v20 = v62; /*0x8dfc79*/
  *(float *)(a5 + 0x164) = v18; /*0x8dfc7d*/
  *(float *)(a5 + 0x168) = v19; /*0x8dfc80*/
  *(float *)(a5 + 0x16C) = v20; /*0x8dfc83*/
  v21 = v17 * *(float *)(a5 + 0x270); /*0x8dfc86*/
  *(float *)(a5 + 0x264) = v21; /*0x8dfc90*/
  *(float *)(a5 + 0x268) = (double)*(int *)(a5 + 0x26C) * v62; /*0x8dfca0*/
  v22 = *(__m128 *)(a5 + 0x20); /*0x8dfca6*/
  v63 = v21; /*0x8dfcaa*/
  *(__m128 *)(a5 + 0x180) = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v63), (__m128)LODWORD(v63), 0), v22); /*0x8dfcbe*/
  v23 = *(__m128 *)(a5 + 0x20); /*0x8dfcc5*/
  v63 = v19; /*0x8dfcc9*/
  *(__m128 *)(a5 + 0x190) = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v19), (__m128)LODWORD(v19), 0), v23); /*0x8dfcdd*/
  if ( *(int *)(a5 + 0x3C) > 0 ) /*0x8dfce9*/
  {
    v64[1] = *(_DWORD *)(a5 + 0x3C); /*0x8dfceb*/
    LOBYTE(v64[0]) = 0; /*0x8dfcfc*/
    HIWORD(v64[0]) = 0; /*0x8dfd01*/
    sub_9264D0((LPCRITICAL_SECTION)(a1 + 0xC0), v64, 1); /*0x8dfd06*/
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 0xC0)); /*0x8dfd12*/
  v24 = *(_DWORD *)(a5 + 0x264); /*0x8dfd18*/
  v25 = *(_DWORD *)(a5 + 0x268); /*0x8dfd1e*/
  v66[2] = 0; /*0x8dfd24*/
  v66[1] = a1; /*0x8dfd28*/
  v26 = *(const void **)(a5 + 0x74); /*0x8dfd2c*/
  v66[0] = a5; /*0x8dfd2f*/
  qmemcpy(v67, v26, sizeof(v67)); /*0x8dfd3c*/
  v27 = v65; /*0x8dfd44*/
  v72 = *(_DWORD *)(a5 + 0x270); /*0x8dfd48*/
  v68 = v24; /*0x8dfd53*/
  v28 = *(_DWORD *)(a5 + 0x168); /*0x8dfd57*/
  v69 = v25; /*0x8dfd5d*/
  v29 = *(_DWORD *)(a5 + 0x16C); /*0x8dfd61*/
  v70 = v28; /*0x8dfd6a*/
  v71 = v29; /*0x8dfd6e*/
  sub_8DF6B0(v65, v66); /*0x8dfd75*/
  sub_8D84F0((const void **)&v27[3].DebugInfo, (int *)&v27[4].OwningThread); /*0x8dfd82*/
  LockCount = v27[3].LockCount; /*0x8dfd87*/
  v31 = 0; /*0x8dfd8a*/
  v73[0xC0D] = 3.4028235e38; /*0x8dfd91*/
  v63 = 0.0; /*0x8dfd9c*/
  if ( LockCount > 0 ) /*0x8dfda0*/
  {
    do /*0x8dfe32*/
    {
      v32 = &v27[3].DebugInfo->Type + 4 * v31; /*0x8dfda9*/
      v33 = *(_DWORD *)v32; /*0x8dfdac*/
      v34 = *(char *)(*(_DWORD *)v32 + 5); /*0x8dfdb5*/
      v35 = *((_DWORD *)v32 + 1) + *(char *)(*((_DWORD *)v32 + 1) + 5); /*0x8dfdb9*/
      v36 = *((int **)v27[1].LockSemaphore + 0x1D); /*0x8dfdbe*/
      v37 = *v36; /*0x8dfdc1*/
      v64[0] = (int)v36; /*0x8dfdc3*/
      v38 = v33 + v34; /*0x8dfdcb*/
      v39 = *(_BYTE *)(v37 + *(unsigned __int16 *)(v35 + 0x1A) + 8 * *(unsigned __int16 *)(v38 + 0x1A) + 0x19D4); /*0x8dfdd3*/
      if ( v39 ) /*0x8dfddc*/
      {
        v58 = (int *)v64[0]; /*0x8dfdef*/
        *(_BYTE *)(v64[0] + 0xC) = *(_BYTE *)(0x3C * v39 + v37 + 0x1A24); /*0x8dfdf2*/
        v40 = sub_8E7850((_DWORD *)v38, (_DWORD *)v35, v58); /*0x8dfdf5*/
        v27 = v65; /*0x8dfdfa*/
        if ( v40 ) /*0x8dfe03*/
          sub_8DF5C0(v40, *((_DWORD *)v65[1].LockSemaphore + 0x1D), v73, (_RTL_CRITICAL_SECTION_0 *)v65); /*0x8dfe16*/
      }
      else
      {
        v27 = v65; /*0x8dfe20*/
      }
      v41 = v27[3].LockCount; /*0x8dfe28*/
      v31 = ++LODWORD(v63); /*0x8dfe2b*/
    }
    while ( SLODWORD(v63) < v41 ); /*0x8dfe32*/
  }
  LockSemaphore = (int)v27[4].LockSemaphore; /*0x8dfe38*/
  v43 = 0; /*0x8dfe3b*/
  v27[3].LockCount = 0; /*0x8dfe3f*/
  if ( LockSemaphore > 0 ) /*0x8dfe42*/
  {
    do /*0x8dfe79*/
    {
      v44 = (_DWORD *)sub_8E66D0( /*0x8dfe5e*/
                        *((_DWORD *)v27[4].OwningThread + 2 * v43)
                      + *(char *)(*((_DWORD *)v27[4].OwningThread + 2 * v43) + 5),
                        *((_DWORD *)v27[4].OwningThread + 2 * v43 + 1)
                      + *(char *)(*((_DWORD *)v27[4].OwningThread + 2 * v43 + 1) + 5));
      if ( v44 ) /*0x8dfe68*/
        sub_8E7920(v44); /*0x8dfe6b*/
      ++v43; /*0x8dfe76*/
    }
    while ( v43 < (int)v27[4].LockSemaphore ); /*0x8dfe79*/
  }
  v27[4].LockSemaphore = 0; /*0x8dfe7b*/
  LOBYTE(v27[2].SpinCount) = 0; /*0x8dfe82*/
  if ( (*(_DWORD *)(a5 + 0x88))-- == 1 ) /*0x8dfe86*/
  {
    if ( *(_DWORD *)(a5 + 0x84) ) /*0x8dfe8e*/
    {
      if ( !*(_BYTE *)(a5 + 0x90) ) /*0x8dfe98*/
        sub_899210(a5); /*0x8dfea4*/
    }
  }
  if ( v27[1].DebugInfo ) /*0x8dfea9*/
    sub_8D33E0((float **)v27, a5, *(float *)(a5 + 0x18)); /*0x8dfeb7*/
  LODWORD(v46) = *(_DWORD *)(a5 + 0x110); /*0x8dfebc*/
  *(_DWORD *)(a5 + 0xC) = *(_DWORD *)(a5 + 0x18); /*0x8dfec7*/
  if ( (_DWORD)v46 ) /*0x8dfeca*/
  {
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8dfed0*/
    v48 = MEMORY[0xBA9DE4]; /*0x8dfed7*/
    v49 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8dfedd*/
    if ( *(_DWORD *)(v49 + 0x1A4) < *(_DWORD *)(v49 + 0x1A8) ) /*0x8dfeec*/
    {
      v50 = *(_DWORD **)(v49 + 0x1A4); /*0x8dfeee*/
      *v50 = "TtPostSimulateCb"; /*0x8dfef4*/
      v51 = __rdtsc(); /*0x8dfefa*/
      v64[0] = v51; /*0x8dfefc*/
      HIDWORD(v51) = v51; /*0x8dff00*/
      LODWORD(v51) = ThreadLocalStoragePointer[v48]; /*0x8dff04*/
      v50[1] = HIDWORD(v51); /*0x8dff07*/
      *(_DWORD *)(v51 + 0x1A4) = v50 + 3; /*0x8dff0d*/
    }
    v52 = *(float *)(a5 + 0x18); /*0x8dff13*/
    v53 = *(float *)(a5 + 0x14); /*0x8dff16*/
    v59 = *(float *)(a5 + 0x14); /*0x8dff19*/
    v60 = v52; /*0x8dff1f*/
    v61 = v52 - v53; /*0x8dff27*/
    if ( v61 == *(float *)&SrcStr ) /*0x8dff3e*/
      v62 = 0.0; /*0x8dff40*/
    else
      v62 = fConstant_1 / v61; /*0x8dff54*/
    sub_8DCD60((int)&v59, a5, (int)&v59); /*0x8dff5e*/
    LODWORD(v46) = ThreadLocalStoragePointer[v48]; /*0x8dff63*/
    if ( *(_DWORD *)(v46 + 0x1A4) < *(_DWORD *)(v46 + 0x1A8) ) /*0x8dff77*/
    {
      v54 = ThreadLocalStoragePointer[v48]; /*0x8dff79*/
      v55 = *(_DWORD **)(v46 + 0x1A4); /*0x8dff7b*/
      *v55 = "Et"; /*0x8dff81*/
      v46 = __rdtsc(); /*0x8dff87*/
      v55[1] = v46; /*0x8dff91*/
      *(_DWORD *)(v54 + 0x1A4) = v55 + 3; /*0x8dff97*/
    }
  }
  return v46; /*0x8dffa0*/
}
