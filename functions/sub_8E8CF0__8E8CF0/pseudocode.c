int __thiscall sub_8E8CF0(__m128 *this, _BYTE *a2, __m128 *a3, __m128 *a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 v10; // xmm3
  __m128 v11; // xmm5
  __m128 v12; // xmm0
  __m128 v13; // xmm4
  __m128 v14; // xmm7
  __m128 v15; // xmm2
  __m128 v16; // xmm5
  __int32 v17; // ecx
  __m128 v18; // xmm3
  __m128 v19; // xmm1
  __m128 v20; // xmm5
  __m128 v21; // xmm6
  __m128 v22; // xmm0
  __m128 v23; // xmm1
  __m128 v24; // xmm2
  __m128 v25; // xmm0
  __m128 v26; // xmm4
  __m128 v27; // xmm1
  unsigned __int64 v28; // rax
  _DWORD *v29; // ecx
  int v30; // eax
  int v31; // esi
  _DWORD *v32; // ecx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  int v36; // [esp+18h] [ebp-48h] BYREF
  int v37; // [esp+1Ch] [ebp-44h]
  __m128 v38; // [esp+20h] [ebp-40h] BYREF
  _OWORD v39[3]; // [esp+30h] [ebp-30h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8e8d02*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8e8d09*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8e8d1a*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8e8d1c*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8e8d1e*/
    *v8 = "TtrcTransform"; /*0x8e8d24*/
    v9 = __rdtsc(); /*0x8e8d2a*/
    v37 = v9; /*0x8e8d2c*/
    v8[1] = v9; /*0x8e8d34*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x8e8d3a*/
  }
  v10 = *(this + 4); /*0x8e8d43*/
  v11 = *(this + 3); /*0x8e8d52*/
  v12 = _mm_sub_ps(*a3, *(this + 5)); /*0x8e8d56*/
  v13 = _mm_shuffle_ps(v10, v10, 0x44); /*0x8e8d5e*/
  v14 = _mm_shuffle_ps(v10, v10, 0xEE); /*0x8e8d65*/
  v15 = _mm_shuffle_ps(*(this + 2), v11, 0xEE); /*0x8e8d70*/
  v16 = _mm_shuffle_ps(*(this + 2), v11, 0x44); /*0x8e8d74*/
  qmemcpy(v39, a3, sizeof(v39)); /*0x8e8d80*/
  v17 = this->m128_i32[3]; /*0x8e8d88*/
  v18 = *(this + 4); /*0x8e8dab*/
  v19 = _mm_add_ps( /*0x8e8daf*/
          _mm_mul_ps(_mm_shuffle_ps(v16, v13, 0x88), _mm_shuffle_ps(v12, v12, 0)),
          _mm_mul_ps(_mm_shuffle_ps(v16, v13, 0xDD), _mm_shuffle_ps(v12, v12, 0x55)));
  v20 = *(this + 3); /*0x8e8db2*/
  v21 = _mm_shuffle_ps(v12, v12, 0xAA); /*0x8e8db9*/
  v22 = a3[1]; /*0x8e8dbd*/
  v23 = _mm_add_ps(v19, _mm_mul_ps(_mm_shuffle_ps(v15, v14, 0x88), v21)); /*0x8e8dc4*/
  v24 = *(this + 2); /*0x8e8dc7*/
  v39[0] = v23; /*0x8e8dca*/
  v25 = _mm_sub_ps(v22, *(this + 5)); /*0x8e8dd3*/
  v26 = _mm_shuffle_ps(v18, v18, 0x44); /*0x8e8dd9*/
  v27 = _mm_shuffle_ps(v24, v20, 0x44); /*0x8e8de3*/
  v39[1] = _mm_add_ps( /*0x8e8e2c*/
             _mm_add_ps(
               _mm_mul_ps(_mm_shuffle_ps(v27, v26, 0x88), _mm_shuffle_ps(v25, v25, 0)),
               _mm_mul_ps(_mm_shuffle_ps(v27, v26, 0xDD), _mm_shuffle_ps(v25, v25, 0x55))),
             _mm_mul_ps(
               _mm_shuffle_ps(_mm_shuffle_ps(v24, v20, 0xEE), _mm_shuffle_ps(v18, v18, 0xEE), 0x88),
               _mm_shuffle_ps(v25, v25, 0xAA)));
  (*(void (__thiscall **)(__int32, int *, _OWORD *, __m128 *))(*(_DWORD *)v17 + 0x14))(v17, &v36, v39, a4); /*0x8e8e34*/
  if ( (_BYTE)v36 ) /*0x8e8e3d*/
  {
    LODWORD(v28) = a4->m128_i32[1]; /*0x8e8e43*/
    v38.m128_i32[0] = a4->m128_i32[0]; /*0x8e8e46*/
    HIDWORD(v28) = a4->m128_i32[2]; /*0x8e8e4a*/
    *(unsigned __int64 *)((char *)v38.m128_u64 + 4) = v28; /*0x8e8e4d*/
    v38.m128_i32[3] = a4->m128_i32[3]; /*0x8e8e60*/
    hkBasis_TransformVector(a4, this + 2, &v38); /*0x8e8e64*/
  }
  v29 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8e8e69*/
  v30 = v29[MEMORY[0xBA9DE4]]; /*0x8e8e76*/
  if ( *(_DWORD *)(v30 + 0x1A4) >= *(_DWORD *)(v30 + 0x1A8) ) /*0x8e8e85*/
  {
    LODWORD(v34) = a2; /*0x8e8ebd*/
  }
  else
  {
    v31 = v29[MEMORY[0xBA9DE4]]; /*0x8e8e87*/
    v32 = *(_DWORD **)(v30 + 0x1A4); /*0x8e8e89*/
    *v32 = "Et"; /*0x8e8e8f*/
    v33 = __rdtsc(); /*0x8e8e95*/
    v37 = v33; /*0x8e8e97*/
    v34 = __PAIR64__(v33, (unsigned int)a2); /*0x8e8e9f*/
    v32[1] = HIDWORD(v34); /*0x8e8ea2*/
    *(_DWORD *)(v31 + 0x1A4) = v32 + 3; /*0x8e8ea8*/
  }
  *a2 = v36; /*0x8e8eb2*/
  return v34; /*0x8e8eb4*/
}
