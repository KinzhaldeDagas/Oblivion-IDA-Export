int __thiscall sub_8F8380(char *this, __m128 **a2, __m128 **a3, int a4, int *a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 *v10; // eax
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __m128 v14; // xmm4
  __m128 *v15; // ecx
  __m128 *v16; // edx
  char *v17; // eax
  int v18; // esi
  __m128 *v19; // eax
  __m128 v20; // xmm1
  __m128 v21; // xmm2
  __m128 v22; // xmm3
  __m128 v23; // xmm4
  __m128 *v24; // edi
  int v25; // ecx
  int v26; // esi
  __m128 *v27; // edx
  char *v28; // ebx
  __m128 *v29; // esi
  float *v30; // edi
  int v31; // edx
  __m128 v32; // xmm0
  _DWORD *v33; // ecx
  unsigned __int64 v34; // rax
  int v35; // esi
  _DWORD *v36; // ecx
  int v38; // [esp+10h] [ebp-110h]
  float v40; // [esp+14h] [ebp-10Ch]
  unsigned int v41; // [esp+18h] [ebp-108h]
  __m128 *v42; // [esp+1Ch] [ebp-104h]
  __m128 v43; // [esp+20h] [ebp-100h] BYREF
  __m128 v44; // [esp+30h] [ebp-F0h]
  __m128 **v45; // [esp+40h] [ebp-E0h]
  __m128 **v46; // [esp+44h] [ebp-DCh]
  __m128 v47; // [esp+50h] [ebp-D0h] BYREF
  float v48; // [esp+60h] [ebp-C0h]
  char v49[48]; // [esp+70h] [ebp-B0h] BYREF
  char v50[128]; // [esp+A0h] [ebp-80h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtMultiSphereTriangle";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = a3[2];
  v11 = *v10;
  v12 = v10[1];
  v13 = v10[2];
  v14 = v10[3];
  v15 = *a2;
  v42 = *a3;
  v16 = *a3 + 1;
  v17 = (char *)(v49 - (char *)v16);
  v18 = 3;
  do
  {
    *(__m128 *)((char *)v16 + (_DWORD)v17) = _mm_add_ps(
                                               _mm_add_ps(
                                                 _mm_mul_ps(v11, _mm_shuffle_ps(*v16, *v16, 0)),
                                                 _mm_mul_ps(v12, _mm_shuffle_ps(*v16, *v16, 0x55))),
                                               _mm_add_ps(_mm_mul_ps(v13, _mm_shuffle_ps(*v16, *v16, 0xAA)), v14));
    ++v16;
    --v18;
  }
  while ( v18 );
  v19 = a2[2];
  v20 = *v19;
  v21 = v19[1];
  v22 = v19[2];
  v23 = v19[3];
  v24 = v15 + 1;
  v25 = v15->m128_i32[3];
  v26 = v25;
  v27 = v24;
  do
  {
    *(__m128 *)((char *)v27 + v50 - (char *)v24) = _mm_add_ps(
                                                     _mm_add_ps(
                                                       _mm_mul_ps(v20, _mm_shuffle_ps(*v27, *v27, 0)),
                                                       _mm_mul_ps(v21, _mm_shuffle_ps(*v27, *v27, 0x55))),
                                                     _mm_add_ps(_mm_mul_ps(v22, _mm_shuffle_ps(*v27, *v27, 0xAA)), v23));
    ++v27;
    --v26;
  }
  while ( v26 > 0 );
  v45 = a2;
  v46 = a3;
  if ( v25 > 0 )
  {
    v28 = this + 0xC;
    v29 = (__m128 *)v50;
    v30 = &v24->m128_f32[3];
    v38 = v25;
    do
    {
      v40 = *v30 + v42->m128_f32[3];
      sub_8D20C0(v29, (__m128 *)v49, (int)v28, &v47);
      if ( v40 + *(float *)(a4 + 8) > v48 )
      {
        v31 = *a5;
        *(float *)&v41 = v42->m128_f32[3] - v48;
        v32 = _mm_add_ps(*v29, _mm_mul_ps(_mm_shuffle_ps((__m128)v41, (__m128)v41, 0), v47));
        v44 = v47;
        v44.m128_f32[3] = v48 - v40;
        v43 = v32;
        (*(void (__thiscall **)(int *, __m128 *))(v31 + 4))(a5, &v43);
      }
      ++v29;
      v30 += 4;
      --v38;
    }
    while ( v38 );
  }
  v33 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v34) = v33[TlsIndex];
  if ( *(_DWORD *)(v34 + 0x1A4) < *(_DWORD *)(v34 + 0x1A8) )
  {
    v35 = v33[TlsIndex];
    v36 = *(_DWORD **)(v34 + 0x1A4);
    *v36 = "Et";
    v34 = __rdtsc();
    v36[1] = v34;
    *(_DWORD *)(v35 + 0x1A4) = v36 + 3;
  }
  return v34;
}
