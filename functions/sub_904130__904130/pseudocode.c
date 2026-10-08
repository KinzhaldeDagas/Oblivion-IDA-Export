int __thiscall sub_904130(_DWORD *this, int a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // edi
  __m128 *v11; // esi
  __m128 v12; // xmm3
  __m128 v13; // xmm5
  __m128 v14; // xmm0
  __m128 v15; // xmm4
  __m128 v16; // xmm1
  __int32 v17; // eax
  int v18; // ecx
  _DWORD *v19; // ecx
  unsigned __int64 v20; // rax
  int v21; // esi
  _DWORD *v22; // ecx
  __m128 *v24; // [esp+18h] [ebp-C8h]
  _DWORD v26[4]; // [esp+20h] [ebp-C0h] BYREF
  __m128 v27[6]; // [esp+30h] [ebp-B0h] BYREF
  __m128 v28; // [esp+90h] [ebp-50h] BYREF
  __m128 v29[3]; // [esp+A0h] [ebp-40h] BYREF
  __int32 v30; // [esp+D0h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x904147*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90414e*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x90415f*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x904161*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x904163*/
    *v8 = "TtTransform"; /*0x904169*/
    v9 = __rdtsc(); /*0x90416f*/
    v8[1] = v9; /*0x904179*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x90417f*/
  }
  v24 = *(__m128 **)a2; /*0x90418d*/
  v10 = *(_DWORD *)a2 + 0x20; /*0x904191*/
  sub_8B1F70(v27, *(__m128 **)(a2 + 8), (__m128 *)v10); /*0x90419a*/
  v11 = *(__m128 **)(a2 + 8); /*0x90419f*/
  v27[4] = v11[4]; /*0x9041b1*/
  v27[5] = v11[5]; /*0x9041c2*/
  sub_889470(&v28, v11 + 6, v24 + 1); /*0x9041ca*/
  sub_889470(v29, v11 + 7, v24 + 1); /*0x9041e2*/
  v12 = *(__m128 *)(v10 + 0x20); /*0x9041e7*/
  v13 = *(__m128 *)(v10 + 0x10); /*0x9041f9*/
  v14 = _mm_sub_ps(v11[8], *(__m128 *)(v10 + 0x30)); /*0x904201*/
  v15 = _mm_shuffle_ps(v12, v12, 0x44); /*0x904207*/
  v16 = _mm_shuffle_ps(*(__m128 *)v10, v13, 0x44); /*0x904211*/
  v29[1] = _mm_add_ps( /*0x904250*/
             _mm_add_ps(
               _mm_mul_ps(_mm_shuffle_ps(v16, v15, 0x88), _mm_shuffle_ps(v14, v14, 0)),
               _mm_mul_ps(_mm_shuffle_ps(v16, v15, 0xDD), _mm_shuffle_ps(v14, v14, 0x55))),
             _mm_mul_ps(
               _mm_shuffle_ps(_mm_shuffle_ps(*(__m128 *)v10, v13, 0xEE), _mm_shuffle_ps(v12, v12, 0xEE), 0x88),
               _mm_shuffle_ps(v14, v14, 0xAA)));
  v29[2] = v11[9]; /*0x90425f*/
  v30 = v11[0xA].m128_i32[0]; /*0x90426d*/
  v26[3] = a2; /*0x904274*/
  v26[2] = v27; /*0x90427c*/
  v17 = v24->m128_i32[3]; /*0x904283*/
  v26[1] = *(_DWORD *)(a2 + 4); /*0x90428a*/
  v18 = *(this + 3); /*0x90428e*/
  v26[0] = v17; /*0x9042a1*/
  (*(void (__thiscall **)(int, _DWORD *, int, int, int))(*(_DWORD *)v18 + 0x14))(v18, v26, a3, a4, a5); /*0x9042a8*/
  v19 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9042ab*/
  LODWORD(v20) = v19[MEMORY[0xBA9DE4]]; /*0x9042b8*/
  if ( *(_DWORD *)(v20 + 0x1A4) < *(_DWORD *)(v20 + 0x1A8) ) /*0x9042c7*/
  {
    v21 = v19[MEMORY[0xBA9DE4]]; /*0x9042c9*/
    v22 = *(_DWORD **)(v20 + 0x1A4); /*0x9042cb*/
    *v22 = "Et"; /*0x9042d1*/
    v20 = __rdtsc(); /*0x9042d7*/
    v22[1] = v20; /*0x9042e1*/
    *(_DWORD *)(v21 + 0x1A4) = v22 + 3; /*0x9042e7*/
  }
  return v20; /*0x9042ed*/
}
