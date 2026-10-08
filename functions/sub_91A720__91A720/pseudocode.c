int __thiscall sub_91A720(_DWORD *this, int a2, int a3)
{
  int v3; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  _DWORD *v13; // eax
  int v14; // ebx
  int v15; // edi
  __m128 *v16; // esi
  int v17; // ecx
  __m128 *v18; // esi
  int v19; // ecx
  unsigned __int64 v20; // rax
  int v21; // esi
  _DWORD *v22; // ecx
  int v24; // [esp+0h] [ebp-A4h]
  int v25; // [esp+0h] [ebp-A4h]
  int v26; // [esp+18h] [ebp-8Ch]
  _DWORD *v28; // [esp+20h] [ebp-84h]
  __m128 v29[4]; // [esp+24h] [ebp-80h] BYREF
  __m128 v30[4]; // [esp+64h] [ebp-40h] BYREF

  v3 = MEMORY[0xBA9DE4]; /*0x91a72d*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91a735*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91a73c*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x91a751*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91a753*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x91a755*/
    *v7 = "TthkSweptTransformDisplayViewer"; /*0x91a75b*/
    v8 = __rdtsc(); /*0x91a761*/
    v7[1] = v8; /*0x91a76b*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x91a771*/
  }
  v9 = a2; /*0x91a777*/
  v10 = 0; /*0x91a77d*/
  v26 = 0; /*0x91a781*/
  if ( *(int *)(a2 + 0x3C) > 0 ) /*0x91a785*/
  {
    do /*0x91a8c5*/
    {
      v11 = *(_DWORD *)(*(_DWORD *)(v9 + 0x38) + 4 * v10); /*0x91a793*/
      v12 = *(_DWORD *)(v11 + 0x38); /*0x91a796*/
      v13 = (_DWORD *)(v11 + 0x34); /*0x91a799*/
      v14 = 0; /*0x91a79c*/
      v28 = v13; /*0x91a7a0*/
      if ( v12 > 0 ) /*0x91a7a4*/
      {
        while ( 1 ) /*0x91a7b2*/
        {
          v15 = *(_DWORD *)(*v13 + 4 * v14); /*0x91a7b2*/
          v16 = (__m128 *)(*(_DWORD *)(v15 + 0x50) + 0x50); /*0x91a7b8*/
          hkMatrix3_SetFromQuaternion(v29[0].m128_f32, (float *)(*(_DWORD *)(v15 + 0x50) + 0x70)); /*0x91a7c3*/
          v17 = *(this + 0xFFFFFFFB); /*0x91a7d5*/
          v24 = unk_BA8420; /*0x91a802*/
          v29[3] = _mm_sub_ps( /*0x91a81a*/
                     *v16,
                     _mm_add_ps(
                       _mm_add_ps(
                         _mm_mul_ps(v29[0], _mm_shuffle_ps(v16[4], v16[4], 0)),
                         _mm_mul_ps(v29[1], _mm_shuffle_ps(v16[4], v16[4], 0x55))),
                       _mm_mul_ps(v29[2], _mm_shuffle_ps(v16[4], v16[4], 0xAA))));
          (*(void (__thiscall **)(int, __m128 *, int, int))(*(_DWORD *)v17 + 0xC))(v17, v29, v15 + 0x15, v24); /*0x91a822*/
          v18 = (__m128 *)(*(_DWORD *)(v15 + 0x50) + 0x50); /*0x91a828*/
          hkMatrix3_SetFromQuaternion(v30[0].m128_f32, (float *)(*(_DWORD *)(v15 + 0x50) + 0x80)); /*0x91a833*/
          v19 = *(this + 0xFFFFFFFB); /*0x91a84d*/
          v25 = unk_BA8420; /*0x91a87d*/
          v30[3] = _mm_sub_ps( /*0x91a88f*/
                     v18[1],
                     _mm_add_ps(
                       _mm_add_ps(
                         _mm_mul_ps(v30[0], _mm_shuffle_ps(v18[4], v18[4], 0)),
                         _mm_mul_ps(v30[1], _mm_shuffle_ps(v18[4], v18[4], 0x55))),
                       _mm_mul_ps(v30[2], _mm_shuffle_ps(v18[4], v18[4], 0xAA))));
          (*(void (__thiscall **)(int, __m128 *, int, int))(*(_DWORD *)v19 + 0xC))(v19, v30, v15 + 0x16, v25); /*0x91a89a*/
          if ( ++v14 >= v28[1] ) /*0x91a8a7*/
            break; /*0x91a8a7*/
          v13 = v28; /*0x91a7ac*/
        }
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91a8ad*/
        v10 = v26; /*0x91a8b4*/
        v9 = a2; /*0x91a8b8*/
      }
      v26 = ++v10; /*0x91a8c1*/
    }
    while ( v10 < *(_DWORD *)(v9 + 0x3C) ); /*0x91a8c5*/
    v3 = MEMORY[0xBA9DE4]; /*0x91a8cb*/
  }
  LODWORD(v20) = ThreadLocalStoragePointer[v3]; /*0x91a8d1*/
  if ( *(_DWORD *)(v20 + 0x1A4) < *(_DWORD *)(v20 + 0x1A8) ) /*0x91a8e0*/
  {
    v21 = ThreadLocalStoragePointer[v3]; /*0x91a8e2*/
    v22 = *(_DWORD **)(v20 + 0x1A4); /*0x91a8e4*/
    *v22 = "Et"; /*0x91a8ea*/
    v20 = __rdtsc(); /*0x91a8f0*/
    v22[1] = v20; /*0x91a8fa*/
    *(_DWORD *)(v21 + 0x1A4) = v22 + 3; /*0x91a900*/
  }
  return v20; /*0x91a906*/
}
