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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fd7dc*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fd7e9*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8fd7fb*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fd7fd*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8fd7ff*/
    *v8 = "TtBoxBox3"; /*0x8fd805*/
    v9 = __rdtsc(); /*0x8fd80b*/
    v8[1] = v9; /*0x8fd815*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x8fd81b*/
  }
  v10 = *(__m128 ***)a1; /*0x8fd824*/
  v11 = **(__m128 ***)a1; /*0x8fd826*/
  v12 = v11->m128_i32[3]; /*0x8fd828*/
  v13 = v11[1]; /*0x8fd82b*/
  v14 = *(_DWORD *)(*(_DWORD *)a1 + 8); /*0x8fd82f*/
  v15 = **(__m128 ***)(a1 + 4); /*0x8fd835*/
  v16 = v15->m128_i32[3]; /*0x8fd837*/
  v17 = v15[1]; /*0x8fd83a*/
  v18 = *(_DWORD *)(a1 + 4); /*0x8fd83e*/
  v31 = v12; /*0x8fd841*/
  v19 = *(_DWORD *)(v18 + 8); /*0x8fd845*/
  v20 = _mm_add_ps(v13, _mm_shuffle_ps((__m128)(unsigned int)v31, (__m128)(unsigned int)v31, 0)); /*0x8fd852*/
  v32 = v16; /*0x8fd855*/
  v21 = *(_DWORD *)(a1 + 8); /*0x8fd859*/
  v46 = *(unsigned int *)(v21 + 8); /*0x8fd869*/
  v37 = *(_OWORD *)(a1 + 0x10); /*0x8fd87b*/
  v22 = *(_OWORD *)(a1 + 0x20); /*0x8fd880*/
  v33.m128_u64[0] = __PAIR64__(v18, (unsigned int)v10); /*0x8fd884*/
  v23 = *(_DWORD *)(a1 + 0xC); /*0x8fd888*/
  v38 = v22; /*0x8fd88b*/
  v39 = *(_OWORD *)(a1 + 0x30); /*0x8fd8a1*/
  v24 = *(_OWORD *)(a1 + 0x40); /*0x8fd8a6*/
  v33.m128_u64[1] = __PAIR64__(v23, v21); /*0x8fd8b3*/
  v41 = v20; /*0x8fd8ba*/
  v34 = a5; /*0x8fd8c5*/
  v40 = v24; /*0x8fd8cd*/
  v42 = _mm_add_ps(v17, _mm_shuffle_ps((__m128)(unsigned int)v32, (__m128)(unsigned int)v32, 0)); /*0x8fd8e6*/
  v43 = _mm_shuffle_ps((__m128)v46, (__m128)v46, 0); /*0x8fd91c*/
  v35 = v14; /*0x8fd92f*/
  v36 = v19; /*0x8fd933*/
  v47 = 0x3C23D70A; /*0x8fd945*/
  v44 = _mm_add_ps(v43, v20); /*0x8fd950*/
  v45 = _mm_add_ps(v43, v42); /*0x8fd958*/
  sub_9386C0(&v33, a3); /*0x8fd960*/
  v25 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fd96b*/
  *(_BYTE *)(a2 + 2) = a3[2].m128_i8[1]; /*0x8fd972*/
  v26 = v25[MEMORY[0xBA9DE4]]; /*0x8fd97b*/
  if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) ) /*0x8fd98a*/
  {
    v27 = v25[MEMORY[0xBA9DE4]]; /*0x8fd98c*/
    v28 = *(_DWORD **)(v26 + 0x1A4); /*0x8fd98e*/
    *v28 = "Et"; /*0x8fd994*/
    v29 = __rdtsc(); /*0x8fd99a*/
    v28[1] = v29; /*0x8fd9a4*/
    *(_DWORD *)(v27 + 0x1A4) = v28 + 3; /*0x8fd9aa*/
  }
  return a3 + 5; /*0x8fd9b0*/
}
