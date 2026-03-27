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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtMultiSphereTriangle";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = *a1;
  v10 = a2[2];
  v11 = *v10;
  v12 = v10[1];
  v13 = v10[2];
  v14 = v10[3];
  v15 = *a2 + 1;
  v39 = *a2;
  v16 = v15;
  v17 = 3;
  do
  {
    *(__m128 *)((char *)v16 + v47 - (char *)v15) = _mm_add_ps(
                                                     _mm_add_ps(
                                                       _mm_mul_ps(v11, _mm_shuffle_ps(*v16, *v16, 0)),
                                                       _mm_mul_ps(v12, _mm_shuffle_ps(*v16, *v16, 0x55))),
                                                     _mm_add_ps(_mm_mul_ps(v13, _mm_shuffle_ps(*v16, *v16, 0xAA)), v14));
    ++v16;
    --v17;
  }
  while ( v17 );
  v18 = v9->m128_i32[3];
  v19 = v9 + 1;
  v20 = a1[2];
  v21 = *v20;
  v22 = v20[1];
  v23 = v20[2];
  v24 = v20[3];
  v25 = v18;
  v26 = v19;
  do
  {
    *(__m128 *)((char *)v26 + v48 - (char *)v19) = _mm_add_ps(
                                                     _mm_add_ps(
                                                       _mm_mul_ps(v21, _mm_shuffle_ps(*v26, *v26, 0)),
                                                       _mm_mul_ps(v22, _mm_shuffle_ps(*v26, *v26, 0x55))),
                                                     _mm_add_ps(_mm_mul_ps(v23, _mm_shuffle_ps(*v26, *v26, 0xAA)), v24));
    ++v26;
    --v25;
  }
  while ( v25 > 0 );
  v43 = a1;
  v44 = a2;
  sub_8D1DB0(v15, v40);
  if ( v18 > 0 )
  {
    v27 = (__m128 *)v48;
    v28 = &v19->m128_f32[3];
    v36 = v18;
    do
    {
      v38 = *v28 + v39->m128_f32[3];
      sub_8D20C0(v27, (__m128 *)v47, (int)v40, &v45);
      if ( v38 + *(float *)(a3 + 8) > v46 )
      {
        v29 = *a4;
        *(float *)&v37 = v39->m128_f32[3] - v46;
        v30 = _mm_add_ps(*v27, _mm_mul_ps(_mm_shuffle_ps((__m128)v37, (__m128)v37, 0), v45));
        v42 = v45;
        v42.m128_f32[3] = v46 - v38;
        v41 = v30;
        (*(void (__thiscall **)(int *, __m128 *))(v29 + 4))(a4, &v41);
      }
      ++v27;
      v28 += 4;
      --v36;
    }
    while ( v36 );
  }
  v31 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v32) = v31[TlsIndex];
  if ( *(_DWORD *)(v32 + 0x1A4) < *(_DWORD *)(v32 + 0x1A8) )
  {
    v33 = v31[TlsIndex];
    v34 = *(_DWORD **)(v32 + 0x1A4);
    *v34 = "Et";
    v32 = __rdtsc();
    v34[1] = v32;
    *(_DWORD *)(v33 + 0x1A4) = v34 + 3;
  }
  return v32;
}
