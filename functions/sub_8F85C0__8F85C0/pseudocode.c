int __cdecl sub_8F85C0(__m128 **a1, __m128 **a2, int a3, int *a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // edx
  __m128 *v10; // eax
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __m128 v14; // xmm4
  __m128 *v15; // esi
  __m128 *v16; // ecx
  int v17; // edi
  int v18; // ebx
  __m128 *v19; // edi
  __m128 *v20; // eax
  __m128 v21; // xmm1
  __m128 v22; // xmm2
  __m128 v23; // xmm3
  __m128 v24; // xmm4
  int v25; // edx
  __m128 *v26; // ecx
  __m128 *v27; // esi
  float *v28; // edi
  int v29; // edx
  __m128 v30; // xmm0
  _DWORD *v31; // ecx
  unsigned __int64 v32; // rax
  int v33; // esi
  _DWORD *v34; // ecx
  int v36; // [esp+10h] [ebp-120h]
  unsigned int v37; // [esp+14h] [ebp-11Ch]
  float v38; // [esp+18h] [ebp-118h]
  __m128 *v39; // [esp+1Ch] [ebp-114h]
  float v40[4]; // [esp+20h] [ebp-110h] BYREF
  __m128 v41; // [esp+30h] [ebp-100h] BYREF
  __m128 v42; // [esp+40h] [ebp-F0h]
  __m128 **v43; // [esp+50h] [ebp-E0h]
  __m128 **v44; // [esp+54h] [ebp-DCh]
  __m128 v45; // [esp+60h] [ebp-D0h] BYREF
  float v46; // [esp+70h] [ebp-C0h]
  char v47[48]; // [esp+80h] [ebp-B0h] BYREF
  char v48[128]; // [esp+B0h] [ebp-80h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f85cc*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f85d9*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8f85eb*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f85ed*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8f85ef*/
    *v7 = "TtMultiSphereTriangle"; /*0x8f85f5*/
    v8 = __rdtsc(); /*0x8f85fb*/
    v7[1] = v8; /*0x8f8605*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x8f860b*/
  }
  v9 = *a1; /*0x8f8617*/
  v10 = a2[2]; /*0x8f861b*/
  v11 = *v10; /*0x8f861e*/
  v12 = v10[1]; /*0x8f8621*/
  v13 = v10[2]; /*0x8f8625*/
  v14 = v10[3]; /*0x8f8629*/
  v15 = *a2 + 1; /*0x8f862d*/
  v39 = *a2; /*0x8f8637*/
  v16 = v15; /*0x8f863b*/
  v17 = 3; /*0x8f863f*/
  do /*0x8f867f*/
  {
    *(__m128 *)((char *)v16 + v47 - (char *)v15) = _mm_add_ps( /*0x8f8677*/
                                                     _mm_add_ps(
                                                       _mm_mul_ps(v11, _mm_shuffle_ps(*v16, *v16, 0)),
                                                       _mm_mul_ps(v12, _mm_shuffle_ps(*v16, *v16, 0x55))),
                                                     _mm_add_ps(_mm_mul_ps(v13, _mm_shuffle_ps(*v16, *v16, 0xAA)), v14));
    ++v16; /*0x8f867b*/
    --v17; /*0x8f867e*/
  }
  while ( v17 ); /*0x8f867f*/
  v18 = v9->m128_i32[3]; /*0x8f8681*/
  v19 = v9 + 1; /*0x8f8684*/
  v20 = a1[2]; /*0x8f868a*/
  v21 = *v20; /*0x8f868d*/
  v22 = v20[1]; /*0x8f8690*/
  v23 = v20[2]; /*0x8f8694*/
  v24 = v20[3]; /*0x8f8698*/
  v25 = v18; /*0x8f86a3*/
  v26 = v19; /*0x8f86a5*/
  do /*0x8f86ed*/
  {
    *(__m128 *)((char *)v26 + v48 - (char *)v19) = _mm_add_ps( /*0x8f86e3*/
                                                     _mm_add_ps(
                                                       _mm_mul_ps(v21, _mm_shuffle_ps(*v26, *v26, 0)),
                                                       _mm_mul_ps(v22, _mm_shuffle_ps(*v26, *v26, 0x55))),
                                                     _mm_add_ps(_mm_mul_ps(v23, _mm_shuffle_ps(*v26, *v26, 0xAA)), v24));
    ++v26; /*0x8f86e7*/
    --v25; /*0x8f86ea*/
  }
  while ( v25 > 0 ); /*0x8f86ed*/
  v43 = a1; /*0x8f86fb*/
  v44 = a2; /*0x8f86ff*/
  sub_8D1DB0(v15, v40); /*0x8f8703*/
  if ( v18 > 0 ) /*0x8f870d*/
  {
    v27 = (__m128 *)v48; /*0x8f8713*/
    v28 = &v19->m128_f32[3]; /*0x8f871a*/
    v36 = v18; /*0x8f871d*/
    do /*0x8f87b6*/
    {
      v38 = *v28 + v39->m128_f32[3]; /*0x8f8734*/
      sub_8D20C0(v27, (__m128 *)v47, (int)v40, &v45); /*0x8f8741*/
      if ( v38 + *(float *)(a3 + 8) > v46 ) /*0x8f875c*/
      {
        v29 = *a4; /*0x8f876d*/
        *(float *)&v37 = v39->m128_f32[3] - v46; /*0x8f8773*/
        v30 = _mm_add_ps(*v27, _mm_mul_ps(_mm_shuffle_ps((__m128)v37, (__m128)v37, 0), v45)); /*0x8f8792*/
        v42 = v45; /*0x8f8795*/
        v42.m128_f32[3] = v46 - v38; /*0x8f879a*/
        v41 = v30; /*0x8f879f*/
        (*(void (__thiscall **)(int *, __m128 *))(v29 + 4))(a4, &v41); /*0x8f87a4*/
      }
      ++v27; /*0x8f87ab*/
      v28 += 4; /*0x8f87ae*/
      --v36; /*0x8f87b2*/
    }
    while ( v36 ); /*0x8f87b6*/
  }
  v31 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f87bc*/
  LODWORD(v32) = v31[MEMORY[0xBA9DE4]]; /*0x8f87c9*/
  if ( *(_DWORD *)(v32 + 0x1A4) < *(_DWORD *)(v32 + 0x1A8) ) /*0x8f87d8*/
  {
    v33 = v31[MEMORY[0xBA9DE4]]; /*0x8f87da*/
    v34 = *(_DWORD **)(v32 + 0x1A4); /*0x8f87dc*/
    *v34 = "Et"; /*0x8f87e2*/
    v32 = __rdtsc(); /*0x8f87e8*/
    v34[1] = v32; /*0x8f87f2*/
    *(_DWORD *)(v33 + 0x1A4) = v34 + 3; /*0x8f87f8*/
  }
  return v32; /*0x8f87fe*/
}
