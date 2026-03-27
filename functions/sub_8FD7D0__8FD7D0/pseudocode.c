__m128 *__cdecl sub_8FD7D0(int a1, int a2, __m128 *a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 **v10; // ecx
  __m128 *v11; // edx
  __int32 v12; // edi
  __m128 v13; // xmm1
  int v14; // ebx
  __m128 *v15; // esi
  __int32 v16; // edx
  __m128 v17; // xmm2
  unsigned int v18; // esi
  int v19; // edi
  __m128 v20; // xmm1
  unsigned int v21; // edx
  __int128 v22; // xmm0
  unsigned int v23; // ecx
  __int128 v24; // xmm0
  _DWORD *v25; // ecx
  int v26; // eax
  int v27; // edi
  _DWORD *v28; // ecx
  unsigned __int64 v29; // rax
  __int32 v31; // [esp+Ch] [ebp-154h]
  __int32 v32; // [esp+Ch] [ebp-154h]
  __m128 v33; // [esp+30h] [ebp-130h] BYREF
  int v34; // [esp+40h] [ebp-120h]
  int v35; // [esp+44h] [ebp-11Ch]
  int v36; // [esp+48h] [ebp-118h]
  __int128 v37; // [esp+50h] [ebp-110h]
  __int128 v38; // [esp+60h] [ebp-100h]
  __int128 v39; // [esp+70h] [ebp-F0h]
  __int128 v40; // [esp+80h] [ebp-E0h]
  __m128 v41; // [esp+90h] [ebp-D0h]
  __m128 v42; // [esp+A0h] [ebp-C0h]
  __m128 v43; // [esp+B0h] [ebp-B0h]
  __m128 v44; // [esp+C0h] [ebp-A0h]
  __m128 v45; // [esp+D0h] [ebp-90h]
  unsigned int v46; // [esp+E0h] [ebp-80h]
  int v47; // [esp+E4h] [ebp-7Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtBoxBox3";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = *(__m128 ***)a1;
  v11 = **(__m128 ***)a1;
  v12 = v11->m128_i32[3];
  v13 = v11[1];
  v14 = *(_DWORD *)(*(_DWORD *)a1 + 8);
  v15 = **(__m128 ***)(a1 + 4);
  v16 = v15->m128_i32[3];
  v17 = v15[1];
  v18 = *(_DWORD *)(a1 + 4);
  v31 = v12;
  v19 = *(_DWORD *)(v18 + 8);
  v20 = _mm_add_ps(v13, _mm_shuffle_ps((__m128)(unsigned int)v31, (__m128)(unsigned int)v31, 0));
  v32 = v16;
  v21 = *(_DWORD *)(a1 + 8);
  v46 = *(unsigned int *)(v21 + 8);
  v37 = *(_OWORD *)(a1 + 0x10);
  v22 = *(_OWORD *)(a1 + 0x20);
  v33.m128_u64[0] = __PAIR64__(v18, (unsigned int)v10);
  v23 = *(_DWORD *)(a1 + 0xC);
  v38 = v22;
  v39 = *(_OWORD *)(a1 + 0x30);
  v24 = *(_OWORD *)(a1 + 0x40);
  v33.m128_u64[1] = __PAIR64__(v23, v21);
  v41 = v20;
  v34 = a5;
  v40 = v24;
  v42 = _mm_add_ps(v17, _mm_shuffle_ps((__m128)(unsigned int)v32, (__m128)(unsigned int)v32, 0));
  v43 = _mm_shuffle_ps((__m128)v46, (__m128)v46, 0);
  v35 = v14;
  v36 = v19;
  v47 = 0x3C23D70A;
  v44 = _mm_add_ps(v43, v20);
  v45 = _mm_add_ps(v43, v42);
  sub_9386C0(&v33, a3);
  v25 = NtCurrentTeb()->ThreadLocalStoragePointer;
  *(_BYTE *)(a2 + 2) = a3[2].m128_i8[1];
  v26 = v25[TlsIndex];
  if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) )
  {
    v27 = v25[TlsIndex];
    v28 = *(_DWORD **)(v26 + 0x1A4);
    *v28 = "Et";
    v29 = __rdtsc();
    v28[1] = v29;
    *(_DWORD *)(v27 + 0x1A4) = v28 + 3;
  }
  return a3 + 5;
}
