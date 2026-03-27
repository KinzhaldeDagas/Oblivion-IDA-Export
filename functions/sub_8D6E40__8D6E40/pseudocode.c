int __stdcall sub_8D6E40(__m128 *a1, float *a2)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // edi
  int v4; // eax
  int v5; // esi
  _DWORD *v6; // ecx
  unsigned __int64 v7; // rax
  void *v8; // ecx
  __m128 v9; // xmm2
  __int32 v10; // ecx
  int v11; // eax
  _DWORD *v12; // ecx
  unsigned __int64 v13; // rax
  __int32 v14; // eax
  int v15; // edi
  int v16; // ecx
  _DWORD *v17; // edi
  int v18; // ebx
  __int32 v19; // eax
  __int32 v20; // ecx
  int v21; // edx
  int v22; // eax
  __int32 v23; // ecx
  int v24; // eax
  unsigned int v25; // edx
  _DWORD *v26; // ecx
  unsigned __int64 v27; // rax
  __int32 v28; // eax
  _DWORD *v29; // ecx
  int v30; // eax
  _DWORD *v31; // edi
  unsigned __int64 v32; // rax
  int i; // edi
  int v34; // ecx
  int v35; // edi
  _DWORD *v36; // ecx
  unsigned __int64 v37; // rax
  int v38; // eax
  _DWORD *v39; // ecx
  unsigned __int64 v40; // rax
  __int32 v41; // eax
  int v43; // eax
  _DWORD *v44; // ecx
  unsigned __int64 v45; // rax
  int v46; // eax
  int v47; // esi
  _DWORD *v48; // ecx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  int v51; // ebx
  _DWORD *v52; // ecx
  int v54; // [esp-8h] [ebp-58h]
  int v55; // [esp+Ch] [ebp-44h]
  __int32 v56; // [esp+Ch] [ebp-44h]
  __int32 v57; // [esp+10h] [ebp-40h]
  __int32 v58; // [esp+10h] [ebp-40h]
  _DWORD *v59; // [esp+18h] [ebp-38h]
  _DWORD v60[11]; // [esp+24h] [ebp-2Ch] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v3 = TlsIndex;
  v4 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v4 + 0x1A4) < *(_DWORD *)(v4 + 0x1A8) )
  {
    v5 = ThreadLocalStoragePointer[TlsIndex];
    v6 = *(_DWORD **)(v4 + 0x1A4);
    *v6 = "LtIntegrate";
    v6[3] = "Init";
    v7 = __rdtsc();
    v6[1] = v7;
    *(_DWORD *)(v5 + 0x1A4) = v6 + 4;
  }
  a1[0x16].m128_u64[0] = *(_QWORD *)a2;
  a1[0x16].m128_f32[2] = a2[2];
  v8 = *((void **)a2 + 3);
  a1[0x16].m128_i32[3] = (__int32)v8;
  a1[0x26].m128_f32[1] = a1[0x27].m128_f32[0] * a2[2];
  v9 = _mm_shuffle_ps((__m128)a1[0x26].m128_u32[1], (__m128)a1[0x26].m128_u32[1], 0);
  a1[0x26].m128_f32[2] = (double)a1[0x26].m128_i32[3] * a2[3];
  a1[0x18] = _mm_mul_ps(v9, a1[2]);
  a1[0x19] = _mm_mul_ps(_mm_shuffle_ps((__m128)*((unsigned int *)a2 + 2), (__m128)*((unsigned int *)a2 + 2), 0), a1[2]);
  TESTexture::ClearComponentReferences(v8);
  sub_8CC3F0((const void **)a1);
  v10 = a1[8].m128_i32[2] + 1;
  --a1[8].m128_i32[3];
  v11 = ThreadLocalStoragePointer[v3];
  a1[8].m128_i32[2] = v10;
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) )
  {
    v12 = *(_DWORD **)(v11 + 0x1A4);
    *v12 = "StActions";
    v13 = __rdtsc();
    HIDWORD(v13) = v13;
    LODWORD(v13) = ThreadLocalStoragePointer[v3];
    v12[1] = HIDWORD(v13);
    *(_DWORD *)(v13 + 0x1A4) = v12 + 3;
  }
  v14 = 0;
  v57 = 0;
  if ( a1[3].m128_i32[3] > 0 )
  {
    do
    {
      v15 = *(_DWORD *)(a1[3].m128_i32[2] + 4 * v14);
      v16 = *(_DWORD *)(v15 + 0x60);
      v17 = (_DWORD *)(v15 + 0x5C);
      v18 = 0;
      if ( v16 > 0 )
      {
        do
        {
          (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(*v17 + 4 * v18) + 8))(
            *(_DWORD *)(*v17 + 4 * v18),
            a1 + 0x16);
          ++v18;
        }
        while ( v18 < v17[1] );
        v14 = v57;
      }
      v57 = ++v14;
    }
    while ( v14 < a1[3].m128_i32[3] );
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    v3 = TlsIndex;
  }
  v19 = a1[8].m128_i32[2] - 1;
  ++a1[8].m128_i32[3];
  a1[8].m128_i32[2] = v19;
  if ( !v19 )
  {
    if ( a1[8].m128_i32[1] )
    {
      if ( !a1[9].m128_i8[0] )
        sub_899210((int)a1);
    }
  }
  ++a1[8].m128_i32[2];
  v20 = a1[0x26].m128_i32[2];
  v60[0] = a1[0x26].m128_i32[1];
  v21 = *((_DWORD *)a2 + 2);
  v22 = *((_DWORD *)a2 + 3);
  v60[1] = v20;
  v23 = a1[0x27].m128_i32[0];
  v60[3] = v22;
  v24 = ThreadLocalStoragePointer[v3];
  v60[2] = v21;
  v25 = *(_DWORD *)(v24 + 0x1A4);
  v60[4] = v23;
  if ( v25 < *(_DWORD *)(v24 + 0x1A8) )
  {
    v26 = *(_DWORD **)(v24 + 0x1A4);
    *v26 = "StIntegrate";
    v27 = __rdtsc();
    v26[1] = v27;
    *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x1A4) = v26 + 3;
  }
  v28 = a1[3].m128_i32[3] - 1;
  v58 = v28;
  if ( v28 >= 0 )
  {
    while ( 1 )
    {
      v29 = *(_DWORD **)(a1[3].m128_i32[2] + 4 * v28);
      v59 = v29;
      if ( v29[3] )
      {
        sub_924000((int)&a1[0x16], a1 + 0x17, v60, v29, v29[0xD], v29[0xE]);
      }
      else
      {
        v30 = ThreadLocalStoragePointer[v3];
        if ( *(_DWORD *)(v30 + 0x1A4) < *(_DWORD *)(v30 + 0x1A8) )
        {
          v55 = ThreadLocalStoragePointer[v3];
          v31 = *(_DWORD **)(v30 + 0x1A4);
          *v31 = "TtSingleObj";
          v32 = __rdtsc();
          v31[1] = v32;
          *(_DWORD *)(v55 + 0x1A4) = v31 + 3;
        }
        for ( i = v29[0xE] - 1; i >= 0; --i )
        {
          v34 = *(_DWORD *)(*(_DWORD *)(v59[0xD] + 4 * i) + 0x50);
          (*(void (__thiscall **)(int, __m128 *, __m128 *))(*(_DWORD *)v34 + 0x10))(v34, a1 + 0x16, a1 + 0x19);
        }
        if ( *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex]
                                                                                  + 0x1A8) )
        {
          v35 = ThreadLocalStoragePointer[TlsIndex];
          v36 = *(_DWORD **)(v35 + 0x1A4);
          *v36 = "Et";
          v37 = __rdtsc();
          v36[1] = v37;
          *(_DWORD *)(v35 + 0x1A4) = v36 + 3;
        }
        v3 = TlsIndex;
      }
      if ( a1[0x13].m128_i32[1] )
      {
        v38 = ThreadLocalStoragePointer[v3];
        if ( *(_DWORD *)(v38 + 0x1A4) < *(_DWORD *)(v38 + 0x1A8) )
        {
          v39 = *(_DWORD **)(v38 + 0x1A4);
          *v39 = "StPostIntegrateCb";
          v40 = __rdtsc();
          v39[1] = v40;
          *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x1A4) = v39 + 3;
        }
        v41 = a1[3].m128_i32[3] - 1;
        v56 = v41;
        if ( v41 >= 0 )
        {
          while ( 1 )
          {
            v54 = *(_DWORD *)(a1[3].m128_i32[2] + 4 * v41);
            sub_8DCF10(v54, (int)a1, v54, (int)a2);
            if ( --v56 < 0 )
              break;
            v41 = v56;
          }
        }
      }
      if ( --v58 < 0 )
        break;
      v28 = v58;
    }
  }
  if ( a1[8].m128_i32[2]-- == 1 )
  {
    if ( a1[8].m128_i32[1] )
    {
      if ( !a1[9].m128_i8[0] )
        sub_899210((int)a1);
    }
  }
  if ( a1[0x11].m128_i32[3] )
  {
    v43 = ThreadLocalStoragePointer[v3];
    if ( *(_DWORD *)(v43 + 0x1A4) < *(_DWORD *)(v43 + 0x1A8) )
    {
      v44 = *(_DWORD **)(v43 + 0x1A4);
      *v44 = "TtPostIntegrateCb";
      v45 = __rdtsc();
      HIDWORD(v45) = v45;
      LODWORD(v45) = ThreadLocalStoragePointer[v3];
      v44[1] = HIDWORD(v45);
      *(_DWORD *)(v45 + 0x1A4) = v44 + 3;
    }
    sub_8DCDF0((int)a2, (int)a1, (int)a2);
    v46 = ThreadLocalStoragePointer[v3];
    if ( *(_DWORD *)(v46 + 0x1A4) < *(_DWORD *)(v46 + 0x1A8) )
    {
      v47 = ThreadLocalStoragePointer[v3];
      v48 = *(_DWORD **)(v46 + 0x1A4);
      *v48 = "Et";
      v49 = __rdtsc();
      v48[1] = v49;
      *(_DWORD *)(v47 + 0x1A4) = v48 + 3;
    }
  }
  LODWORD(v50) = ThreadLocalStoragePointer[v3];
  if ( *(_DWORD *)(v50 + 0x1A4) < *(_DWORD *)(v50 + 0x1A8) )
  {
    v51 = ThreadLocalStoragePointer[v3];
    v52 = *(_DWORD **)(v50 + 0x1A4);
    *v52 = "lt";
    v50 = __rdtsc();
    v52[1] = v50;
    *(_DWORD *)(v51 + 0x1A4) = v52 + 3;
  }
  return v50;
}
