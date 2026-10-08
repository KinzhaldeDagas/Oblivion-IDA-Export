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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9100a3*/
  v4 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9100aa*/
  if ( *(_DWORD *)(v4 + 0x1A4) < *(_DWORD *)(v4 + 0x1A8) ) /*0x9100bc*/
  {
    v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9100be*/
    v6 = *(_DWORD **)(v4 + 0x1A4); /*0x9100c0*/
    *v6 = "TtDashpot"; /*0x9100c6*/
    v7 = __rdtsc(); /*0x9100cc*/
    v6[1] = v7; /*0x9100d6*/
    *(_DWORD *)(v5 + 0x1A4) = v6 + 3; /*0x9100dc*/
  }
  v8 = *((_DWORD *)this + 6); /*0x9100e8*/
  v9 = *((_DWORD *)this + 7); /*0x9100f4*/
  v18 = *(float *)(a2 + 8) * flt_A9CBBC; /*0x9100fb*/
  hkTransform_TransformPosition(&v23, (__m128 *)(*(_DWORD *)(v8 + 0x50) + 0x10), this + 2); /*0x91010b*/
  v19 = *(__m128 **)(v8 + 0x50); /*0x91011d*/
  hkTransform_TransformPosition(&v22, (__m128 *)(*(_DWORD *)(v9 + 0x50) + 0x10), this + 3); /*0x910126*/
  v10 = v19[0xD]; /*0x910140*/
  *(float *)&v20 = v18 * *((float *)this + 0x10); /*0x910147*/
  v11 = _mm_sub_ps(v10, *(__m128 *)(*(_DWORD *)(v9 + 0x50) + 0xD0)); /*0x91015f*/
  v12 = (__m128)v20; /*0x910162*/
  *(float *)&v21 = v18 * *((float *)this + 0x11); /*0x910168*/
  *(this + 5) = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), _mm_sub_ps(v23, v22)); /*0x91017c*/
  *(this + 5) = _mm_add_ps(*(this + 5), _mm_mul_ps(_mm_shuffle_ps((__m128)v21, (__m128)v21, 0), v11)); /*0x910193*/
  v24 = _mm_mul_ps(_mm_shuffle_ps((__m128)0xBF800000, (__m128)0xBF800000, 0), *(this + 5)); /*0x9101b3*/
  sub_8A6410(v8); /*0x9101b8*/
  (*(void (__thiscall **)(_DWORD, __m128 *, __m128 *))(**(_DWORD **)(v8 + 0x50) + 0x60))( /*0x9101ce*/
    *(_DWORD *)(v8 + 0x50),
    &v24,
    &v23);
  sub_8A6410(v9); /*0x9101d7*/
  (*(void (__thiscall **)(_DWORD, __m128 *, __m128 *))(**(_DWORD **)(v9 + 0x50) + 0x60))( /*0x9101e7*/
    *(_DWORD *)(v9 + 0x50),
    this + 5,
    &v22);
  v13 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9101ea*/
  LODWORD(v14) = v13[MEMORY[0xBA9DE4]]; /*0x9101f7*/
  if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) ) /*0x910206*/
  {
    v15 = v13[MEMORY[0xBA9DE4]]; /*0x910208*/
    v16 = *(_DWORD **)(v14 + 0x1A4); /*0x91020a*/
    *v16 = "Et"; /*0x910210*/
    v14 = __rdtsc(); /*0x910216*/
    v16[1] = v14; /*0x910220*/
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3; /*0x910226*/
  }
  return v14; /*0x91022c*/
}
