int __thiscall sub_8FA180(char *this, __m128 **a2, __m128 **a3, int a4, __m128 **a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  __m128 *v11; // edi
  __m128 *v12; // eax
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm4
  __m128 *v17; // esi
  __m128 *v18; // ecx
  int v19; // edx
  __m128 *v20; // ecx
  __m128 v21; // xmm1
  __m128 v22; // xmm2
  __m128 v23; // xmm3
  __m128 v24; // xmm4
  __m128 *v25; // eax
  int v26; // edx
  __m128 *v27; // edi
  char *v28; // esi
  __int16 v29; // ax
  __m128 *v30; // eax
  __m128 v31; // xmm0
  int v32; // eax
  _DWORD *v33; // ecx
  unsigned __int64 v34; // rax
  int v35; // esi
  _DWORD *v36; // ecx
  int v38; // [esp+Ch] [ebp-A4h]
  __m128 v39; // [esp+10h] [ebp-A0h] BYREF
  float v40; // [esp+2Ch] [ebp-84h]
  float v41; // [esp+4Ch] [ebp-64h]
  float v42; // [esp+6Ch] [ebp-44h]
  __m128 v43[2]; // [esp+70h] [ebp-40h] BYREF
  __m128 v44[2]; // [esp+90h] [ebp-20h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fa195*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fa19c*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x8fa1ad*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fa1af*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x8fa1b1*/
    *v9 = "TtCapsCaps"; /*0x8fa1b7*/
    v10 = __rdtsc(); /*0x8fa1bd*/
    v9[1] = v10; /*0x8fa1c7*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x8fa1cd*/
  }
  v11 = *a2; /*0x8fa1dc*/
  v40 = *(float *)(a4 + 8); /*0x8fa1de*/
  v12 = a2[2]; /*0x8fa1e2*/
  v41 = v40; /*0x8fa1e5*/
  v42 = v40; /*0x8fa1ec*/
  v13 = *v12; /*0x8fa1f0*/
  v14 = v12[1]; /*0x8fa1f3*/
  v15 = v12[2]; /*0x8fa1f7*/
  v16 = v12[3]; /*0x8fa1fb*/
  v17 = *a3; /*0x8fa1ff*/
  v18 = v11 + 1; /*0x8fa201*/
  v19 = 2; /*0x8fa20d*/
  do /*0x8fa24d*/
  {
    *(__m128 *)((char *)v18 + (char *)v44 - (char *)&v11[1]) = _mm_add_ps( /*0x8fa245*/
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v13, _mm_shuffle_ps(*v18, *v18, 0)),
                                                                   _mm_mul_ps(v14, _mm_shuffle_ps(*v18, *v18, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v15, _mm_shuffle_ps(*v18, *v18, 0xAA)),
                                                                   v16));
    ++v18; /*0x8fa249*/
    --v19; /*0x8fa24c*/
  }
  while ( v19 ); /*0x8fa24d*/
  v20 = a3[2]; /*0x8fa252*/
  v21 = *v20; /*0x8fa255*/
  v22 = v20[1]; /*0x8fa258*/
  v23 = v20[2]; /*0x8fa25c*/
  v24 = v20[3]; /*0x8fa260*/
  v25 = v17 + 1; /*0x8fa264*/
  v26 = 2; /*0x8fa26d*/
  do /*0x8fa2ad*/
  {
    *(__m128 *)((char *)v25 + (char *)v43 - (char *)&v17[1]) = _mm_add_ps( /*0x8fa2a5*/
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v21, _mm_shuffle_ps(*v25, *v25, 0)),
                                                                   _mm_mul_ps(v22, _mm_shuffle_ps(*v25, *v25, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v23, _mm_shuffle_ps(*v25, *v25, 0xAA)),
                                                                   v24));
    ++v25; /*0x8fa2a9*/
    --v26; /*0x8fa2ac*/
  }
  while ( v26 ); /*0x8fa2ad*/
  sub_8D0290(v44, v11->m128_f32[3], v43, v17->m128_f32[3], &v39); /*0x8fa2c9*/
  v27 = &v39; /*0x8fa2d1*/
  v28 = this + 0xC; /*0x8fa2d5*/
  v38 = 3; /*0x8fa2d8*/
  do /*0x8fa35b*/
  {
    if ( v27[1].m128_f32[3] >= (double)*(float *)(a4 + 8) ) /*0x8fa2ee*/
    {
      HIWORD(v32) = 0; /*0x8fa333*/
      if ( *(_WORD *)v28 != 0xFFFF ) /*0x8fa33c*/
      {
        LOWORD(v32) = *(_WORD *)v28; /*0x8fa335*/
        (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), v32); /*0x8fa344*/
        *(_WORD *)v28 = 0xFFFF; /*0x8fa347*/
      }
    }
    else if ( *(_WORD *)v28 != 0xFFFF /*0x8fa310*/
           || (v29 = (*(int (__thiscall **)(_DWORD, __m128 **, __m128 **, int, __m128 *))(**((_DWORD **)this + 2) + 8))(
                       *((_DWORD *)this + 2),
                       a2,
                       a3,
                       a4,
                       v27),
               *(_WORD *)v28 = v29,
               v29 != (__int16)0xFFFF) )
    {
      v30 = *a5; /*0x8fa315*/
      v31 = *v27; /*0x8fa317*/
      *a5 += 3; /*0x8fa31d*/
      *v30 = v31; /*0x8fa31f*/
      v30[1] = v27[1]; /*0x8fa326*/
      v30[2].m128_i16[0] = *(_WORD *)v28; /*0x8fa32d*/
    }
    v28 += 2; /*0x8fa350*/
    v27 += 2; /*0x8fa353*/
    --v38; /*0x8fa357*/
  }
  while ( v38 ); /*0x8fa35b*/
  v33 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fa35d*/
  LODWORD(v34) = v33[MEMORY[0xBA9DE4]]; /*0x8fa36a*/
  if ( *(_DWORD *)(v34 + 0x1A4) < *(_DWORD *)(v34 + 0x1A8) ) /*0x8fa379*/
  {
    v35 = v33[MEMORY[0xBA9DE4]]; /*0x8fa37b*/
    v36 = *(_DWORD **)(v34 + 0x1A4); /*0x8fa37d*/
    *v36 = "Et"; /*0x8fa383*/
    v34 = __rdtsc(); /*0x8fa389*/
    v36[1] = v34; /*0x8fa393*/
    *(_DWORD *)(v35 + 0x1A4) = v36 + 3; /*0x8fa399*/
  }
  return v34; /*0x8fa39f*/
}
