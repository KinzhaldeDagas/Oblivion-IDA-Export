int __thiscall sub_8FBCE0(void *this, int *a2, __m128 **a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // edx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // esi
  unsigned __int64 v9; // rax
  __m128 *v10; // eax
  __m128 v11; // xmm3
  __m128 v12; // xmm5
  __m128 *v13; // esi
  __m128 v14; // xmm0
  __m128 v15; // xmm4
  __m128 v16; // xmm1
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  int v19; // esi
  _DWORD *v20; // ecx
  __m128 *v22; // [esp-Ch] [ebp-4Ch]
  int v23; // [esp+Ch] [ebp-34h]
  __m128 v24; // [esp+10h] [ebp-30h] BYREF
  __m128 v25; // [esp+20h] [ebp-20h] BYREF
  float v26; // [esp+30h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fbce9*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fbcf8*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8fbd0a*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fbd0c*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8fbd0e*/
    *v8 = "TtSphereTri"; /*0x8fbd14*/
    v9 = __rdtsc(); /*0x8fbd1a*/
    v8[1] = v9; /*0x8fbd24*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x8fbd2a*/
  }
  v10 = a3[2]; /*0x8fbd38*/
  v11 = v10[2]; /*0x8fbd3b*/
  v12 = v10[1]; /*0x8fbd43*/
  v13 = *a3; /*0x8fbd4a*/
  v23 = *a2; /*0x8fbd4c*/
  v14 = _mm_sub_ps(*(__m128 *)(a2[2] + 0x30), v10[3]); /*0x8fbd57*/
  v15 = _mm_shuffle_ps(v11, v11, 0x44); /*0x8fbd5d*/
  v16 = _mm_shuffle_ps(*v10, v12, 0x44); /*0x8fbd67*/
  v22 = *a3 + 1; /*0x8fbda9*/
  v24 = _mm_add_ps( /*0x8fbdb8*/
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v16, v15, 0x88), _mm_shuffle_ps(v14, v14, 0)),
            _mm_mul_ps(_mm_shuffle_ps(v16, v15, 0xDD), _mm_shuffle_ps(v14, v14, 0x55))),
          _mm_mul_ps(
            _mm_shuffle_ps(_mm_shuffle_ps(*v10, v12, 0xEE), _mm_shuffle_ps(v11, v11, 0xEE), 0x88),
            _mm_shuffle_ps(v14, v14, 0xAA)));
  sub_8D20C0(&v24, v22, (int)this + 0x10, &v25); /*0x8fbdbd*/
  if ( v13->m128_f32[3] + *(float *)(v23 + 0xC) > v26 ) /*0x8fbdd8*/
    (*(void (__thiscall **)(int, int *, __m128 **))(*(_DWORD *)a5 + 4))(a5, a2, a3); /*0x8fbde1*/
  v17 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fbde4*/
  LODWORD(v18) = v17[MEMORY[0xBA9DE4]]; /*0x8fbdf1*/
  if ( *(_DWORD *)(v18 + 0x1A4) < *(_DWORD *)(v18 + 0x1A8) ) /*0x8fbe00*/
  {
    v19 = v17[MEMORY[0xBA9DE4]]; /*0x8fbe02*/
    v20 = *(_DWORD **)(v18 + 0x1A4); /*0x8fbe04*/
    *v20 = "Et"; /*0x8fbe0a*/
    v18 = __rdtsc(); /*0x8fbe10*/
    v20[1] = v18; /*0x8fbe1a*/
    *(_DWORD *)(v19 + 0x1A4) = v20 + 3; /*0x8fbe20*/
  }
  return v18; /*0x8fbe26*/
}
