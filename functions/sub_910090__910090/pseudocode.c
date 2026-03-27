int __thiscall sub_910090(__m128 *this, int a2)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v4; // eax
  int v5; // edi
  _DWORD *v6; // ecx
  unsigned __int64 v7; // rax
  int v8; // ebx
  int v9; // edi
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  int v15; // esi
  _DWORD *v16; // ecx
  float v18; // [esp+14h] [ebp-3Ch]
  __m128 *v19; // [esp+18h] [ebp-38h]
  unsigned int v20; // [esp+18h] [ebp-38h]
  unsigned int v21; // [esp+18h] [ebp-38h]
  __m128 v22; // [esp+20h] [ebp-30h] BYREF
  __m128 v23; // [esp+30h] [ebp-20h] BYREF
  __m128 v24; // [esp+40h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v4 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v4 + 0x1A4) < *(_DWORD *)(v4 + 0x1A8) )
  {
    v5 = ThreadLocalStoragePointer[TlsIndex];
    v6 = *(_DWORD **)(v4 + 0x1A4);
    *v6 = "TtDashpot";
    v7 = __rdtsc();
    v6[1] = v7;
    *(_DWORD *)(v5 + 0x1A4) = v6 + 3;
  }
  v8 = *((_DWORD *)this + 6);
  v9 = *((_DWORD *)this + 7);
  v18 = *(float *)(a2 + 8) * flt_A9CBBC;
  sub_88FCC0(&v23, (__m128 *)(*(_DWORD *)(v8 + 0x50) + 0x10), this + 2);
  v19 = *(__m128 **)(v8 + 0x50);
  sub_88FCC0(&v22, (__m128 *)(*(_DWORD *)(v9 + 0x50) + 0x10), this + 3);
  v10 = v19[0xD];
  *(float *)&v20 = v18 * *((float *)this + 0x10);
  v11 = _mm_sub_ps(v10, *(__m128 *)(*(_DWORD *)(v9 + 0x50) + 0xD0));
  v12 = (__m128)v20;
  *(float *)&v21 = v18 * *((float *)this + 0x11);
  *(this + 5) = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), _mm_sub_ps(v23, v22));
  *(this + 5) = _mm_add_ps(*(this + 5), _mm_mul_ps(_mm_shuffle_ps((__m128)v21, (__m128)v21, 0), v11));
  v24 = _mm_mul_ps(_mm_shuffle_ps((__m128)0xBF800000, (__m128)0xBF800000, 0), *(this + 5));
  sub_8A6410(v8);
  (*(void (__thiscall **)(_DWORD, __m128 *, __m128 *))(**(_DWORD **)(v8 + 0x50) + 0x60))(
    *(_DWORD *)(v8 + 0x50),
    &v24,
    &v23);
  sub_8A6410(v9);
  (*(void (__thiscall **)(_DWORD, __m128 *, __m128 *))(**(_DWORD **)(v9 + 0x50) + 0x60))(
    *(_DWORD *)(v9 + 0x50),
    this + 5,
    &v22);
  v13 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v14) = v13[TlsIndex];
  if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) )
  {
    v15 = v13[TlsIndex];
    v16 = *(_DWORD **)(v14 + 0x1A4);
    *v16 = "Et";
    v14 = __rdtsc();
    v16[1] = v14;
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3;
  }
  return v14;
}
