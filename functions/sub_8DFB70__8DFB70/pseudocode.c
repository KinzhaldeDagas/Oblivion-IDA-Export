int __userpurge sub_8DFB70@<eax>(float a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4@<esi>, int a5, int a6, float a7)
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

  *(float *)(LODWORD(a1) + 8) = a7;
  *(_BYTE *)(LODWORD(a1) + 0x44) = 1;
  v8 = *(_DWORD *)(a5 + 0x88) + 1;
  *(float *)(a5 + 0x10) = a7 + *(float *)(a5 + 0x10);
  *(_DWORD *)(a5 + 0x88) = v8;
  v9 = *(int **)(LODWORD(a1) + 0x20);
  v10 = *v9;
  v63 = a1;
  (*(void (__thiscall **)(int *, int, int, int))(v10 + 8))(v9, a3, a4, a2);
  v11 = a7 + *(float *)(a5 + 0x18);
  *(_DWORD *)(a5 + 0x14) = *(_DWORD *)(a5 + 0x18);
  *(float *)(a5 + 0x18) = v11;
  v12 = *(float *)(a5 + 0x14);
  v59 = *(float *)(a5 + 0x14);
  v60 = v11;
  v61 = v11 - v12;
  if ( v61 == *(float *)&SrcStr )
    v62 = 0.0;
  else
    v62 = fConstant_1 / v61;
  v13 = v59;
  *(_DWORD *)(a5 + 0xC) = *(_DWORD *)(a5 + 0x14);
  v14 = v60;
  *(float *)(a5 + 0x160) = v13;
  *(float *)(a5 + 0x164) = v14;
  *(float *)(a5 + 0x168) = v61;
  *(float *)(a5 + 0x16C) = v62;
  v15 = *(_DWORD *)(a5 + 0x74) + 0x10;
  *(float *)v15 = v13;
  *(float *)(v15 + 4) = v60;
  *(float *)(v15 + 8) = v61;
  *(float *)(v15 + 0xC) = v62;
  (*(void (__thiscall **)(_DWORD, int, float *))(**(_DWORD **)(a5 + 0x5C) + 0xC))(*(_DWORD *)(a5 + 0x5C), a5, &v59);
  sub_8CC3F0((const void **)a5);
  TESTexture::ClearComponentReferences(v16);
  v17 = v61;
  v18 = v60;
  v19 = v61;
  *(float *)(a5 + 0x160) = v59;
  v20 = v62;
  *(float *)(a5 + 0x164) = v18;
  *(float *)(a5 + 0x168) = v19;
  *(float *)(a5 + 0x16C) = v20;
  v21 = v17 * *(float *)(a5 + 0x270);
  *(float *)(a5 + 0x264) = v21;
  *(float *)(a5 + 0x268) = (double)*(int *)(a5 + 0x26C) * v62;
  v22 = *(__m128 *)(a5 + 0x20);
  v63 = v21;
  *(__m128 *)(a5 + 0x180) = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v63), (__m128)LODWORD(v63), 0), v22);
  v23 = *(__m128 *)(a5 + 0x20);
  v63 = v19;
  *(__m128 *)(a5 + 0x190) = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v19), (__m128)LODWORD(v19), 0), v23);
  if ( *(int *)(a5 + 0x3C) > 0 )
  {
    v64[1] = *(_DWORD *)(a5 + 0x3C);
    LOBYTE(v64[0]) = 0;
    HIWORD(v64[0]) = 0;
    sub_9264D0((LPCRITICAL_SECTION)(LODWORD(a1) + 0xC0), (int)v64, 1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(LODWORD(a1) + 0xC0));
  v24 = *(_DWORD *)(a5 + 0x264);
  v25 = *(_DWORD *)(a5 + 0x268);
  v66[2] = 0;
  *(float *)&v66[1] = a1;
  v26 = *(const void **)(a5 + 0x74);
  v66[0] = a5;
  qmemcpy(v67, v26, sizeof(v67));
  v27 = v65;
  v72 = *(_DWORD *)(a5 + 0x270);
  v68 = v24;
  v28 = *(_DWORD *)(a5 + 0x168);
  v69 = v25;
  v29 = *(_DWORD *)(a5 + 0x16C);
  v70 = v28;
  v71 = v29;
  sub_8DF6B0(v65, v66);
  sub_8D84F0((const void **)&v27[3].DebugInfo, (int *)&v27[4].OwningThread);
  LockCount = v27[3].LockCount;
  v31 = 0;
  v73[0xC0D] = 3.4028235e38;
  v63 = 0.0;
  if ( LockCount > 0 )
  {
    do
    {
      v32 = &v27[3].DebugInfo->Type + 4 * v31;
      v33 = *(_DWORD *)v32;
      v34 = *(char *)(*(_DWORD *)v32 + 5);
      v35 = *((_DWORD *)v32 + 1) + *(char *)(*((_DWORD *)v32 + 1) + 5);
      v36 = *((int **)v27[1].LockSemaphore + 0x1D);
      v37 = *v36;
      v64[0] = (int)v36;
      v38 = v33 + v34;
      v39 = *(_BYTE *)(v37 + *(unsigned __int16 *)(v35 + 0x1A) + 8 * *(unsigned __int16 *)(v38 + 0x1A) + 0x19D4);
      if ( v39 )
      {
        v58 = (int *)v64[0];
        *(_BYTE *)(v64[0] + 0xC) = *(_BYTE *)(0x3C * v39 + v37 + 0x1A24);
        v40 = sub_8E7850(v38, v35, v58);
        v27 = v65;
        if ( v40 )
          sub_8DF5C0(v40, *((_DWORD *)v65[1].LockSemaphore + 0x1D), v73, (_RTL_CRITICAL_SECTION_0 *)v65);
      }
      else
      {
        v27 = v65;
      }
      v41 = v27[3].LockCount;
      v31 = ++LODWORD(v63);
    }
    while ( SLODWORD(v63) < v41 );
  }
  LockSemaphore = (int)v27[4].LockSemaphore;
  v43 = 0;
  v27[3].LockCount = 0;
  if ( LockSemaphore > 0 )
  {
    do
    {
      v44 = (_DWORD *)sub_8E66D0(
                        *((_DWORD *)v27[4].OwningThread + 2 * v43)
                      + *(char *)(*((_DWORD *)v27[4].OwningThread + 2 * v43) + 5),
                        *((_DWORD *)v27[4].OwningThread + 2 * v43 + 1)
                      + *(char *)(*((_DWORD *)v27[4].OwningThread + 2 * v43 + 1) + 5));
      if ( v44 )
        sub_8E7920(v44);
      ++v43;
    }
    while ( v43 < (int)v27[4].LockSemaphore );
  }
  v27[4].LockSemaphore = 0;
  LOBYTE(v27[2].SpinCount) = 0;
  if ( (*(_DWORD *)(a5 + 0x88))-- == 1 )
  {
    if ( *(_DWORD *)(a5 + 0x84) )
    {
      if ( !*(_BYTE *)(a5 + 0x90) )
        sub_899210(a5);
    }
  }
  if ( v27[1].DebugInfo )
    sub_8D33E0((float **)v27, a5, *(float *)(a5 + 0x18));
  LODWORD(v46) = *(_DWORD *)(a5 + 0x110);
  *(_DWORD *)(a5 + 0xC) = *(_DWORD *)(a5 + 0x18);
  if ( (_DWORD)v46 )
  {
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    v48 = TlsIndex;
    v49 = ThreadLocalStoragePointer[TlsIndex];
    if ( *(_DWORD *)(v49 + 0x1A4) < *(_DWORD *)(v49 + 0x1A8) )
    {
      v50 = *(_DWORD **)(v49 + 0x1A4);
      *v50 = "TtPostSimulateCb";
      v51 = __rdtsc();
      v64[0] = v51;
      HIDWORD(v51) = v51;
      LODWORD(v51) = ThreadLocalStoragePointer[v48];
      v50[1] = HIDWORD(v51);
      *(_DWORD *)(v51 + 0x1A4) = v50 + 3;
    }
    v52 = *(float *)(a5 + 0x18);
    v53 = *(float *)(a5 + 0x14);
    v59 = *(float *)(a5 + 0x14);
    v60 = v52;
    v61 = v52 - v53;
    if ( v61 == *(float *)&SrcStr )
      v62 = 0.0;
    else
      v62 = fConstant_1 / v61;
    sub_8DCD60((int)&v59, a5, (int)&v59);
    LODWORD(v46) = ThreadLocalStoragePointer[v48];
    if ( *(_DWORD *)(v46 + 0x1A4) < *(_DWORD *)(v46 + 0x1A8) )
    {
      v54 = ThreadLocalStoragePointer[v48];
      v55 = *(_DWORD **)(v46 + 0x1A4);
      *v55 = "Et";
      v46 = __rdtsc();
      v55[1] = v46;
      *(_DWORD *)(v54 + 0x1A4) = v55 + 3;
    }
  }
  return v46;
}
