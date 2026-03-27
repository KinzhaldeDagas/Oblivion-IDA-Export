int __thiscall sub_8FB790(unsigned __int16 *this, int *a2, __m128 **a3, int a4, __m128 **a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 *v10; // ebx
  __m128 *v11; // eax
  __m128 *v12; // edi
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm4
  __m128 *v17; // ecx
  __m128 *v18; // esi
  char *v19; // eax
  int v20; // edx
  double v21; // st7
  __m128 v22; // xmm1
  double v23; // st6
  __int16 v24; // si
  int v25; // eax
  _DWORD *v26; // ecx
  unsigned __int64 v27; // rax
  int v28; // esi
  _DWORD *v29; // ecx
  int v32; // [esp+18h] [ebp-58h]
  unsigned int v33; // [esp+18h] [ebp-58h]
  __m128 v34; // [esp+20h] [ebp-50h] BYREF
  float v35; // [esp+30h] [ebp-40h]
  char v36[48]; // [esp+40h] [ebp-30h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtSphereTri";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = *a5;
  v11 = a3[2];
  v12 = *a3;
  v13 = *v11;
  v14 = v11[1];
  v15 = v11[2];
  v16 = v11[3];
  v17 = *a3 + 1;
  v32 = *a2;
  v18 = (__m128 *)(a2[2] + 0x30);
  v19 = (char *)(v36 - (char *)v17);
  v20 = 3;
  do
  {
    *(__m128 *)((char *)v17 + (_DWORD)v19) = _mm_add_ps(
                                               _mm_add_ps(
                                                 _mm_mul_ps(v13, _mm_shuffle_ps(*v17, *v17, 0)),
                                                 _mm_mul_ps(v14, _mm_shuffle_ps(*v17, *v17, 0x55))),
                                               _mm_add_ps(_mm_mul_ps(v15, _mm_shuffle_ps(*v17, *v17, 0xAA)), v16));
    ++v17;
    --v20;
  }
  while ( v20 );
  sub_8D20C0(v18, (__m128 *)v36, (int)(this + 8), &v34);
  v21 = *(float *)(v32 + 0xC) + v12->m128_f32[3];
  if ( v21 + *(float *)(a4 + 8) <= v35 )
  {
    v25 = *(this + 6);
    if ( (_WORD)v25 != 0xFFFF )
    {
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), v25);
      *(this + 6) = 0xFFFF;
    }
  }
  else
  {
    v22 = v34;
    *(float *)&v33 = v12->m128_f32[3] - v35;
    v23 = v35 - v21;
    *v10 = _mm_add_ps(*v18, _mm_mul_ps(_mm_shuffle_ps((__m128)v33, (__m128)v33, 0), v34));
    v10[1] = v22;
    v10[1].m128_f32[3] = v23;
    if ( *(this + 6) == 0xFFFF )
      *(this + 6) = (*(int (__thiscall **)(_DWORD, int *, __m128 **, int, __m128 *))(**((_DWORD **)this + 2) + 8))(
                      *((_DWORD *)this + 2),
                      a2,
                      a3,
                      a4,
                      v10);
    v24 = *(this + 6);
    if ( v24 != (__int16)0xFFFF )
    {
      v10[2].m128_i16[0] = v24;
      *a5 += 3;
    }
  }
  v26 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v27) = v26[TlsIndex];
  if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) )
  {
    v28 = v26[TlsIndex];
    v29 = *(_DWORD **)(v27 + 0x1A4);
    *v29 = "Et";
    v27 = __rdtsc();
    v29[1] = v27;
    *(_DWORD *)(v28 + 0x1A4) = v29 + 3;
  }
  return v27;
}
