int __cdecl sub_8FBB20(_DWORD *a1, __m128 **a2, int a3, int *a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // ecx
  __m128 *v10; // edi
  __m128 *v11; // ebx
  __m128 *v12; // eax
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm4
  __m128 *v17; // ecx
  __m128 *v18; // edi
  int v19; // edx
  signed int v20; // eax
  double v21; // st7
  double v22; // st7
  int v23; // edx
  __m128 v24; // xmm0
  _DWORD *v25; // ecx
  unsigned __int64 v26; // rax
  int v27; // esi
  _DWORD *v28; // ecx
  int v30; // [esp+18h] [ebp-98h]
  unsigned int v31; // [esp+18h] [ebp-98h]
  float v32[5]; // [esp+1Ch] [ebp-94h] BYREF
  __m128 v33; // [esp+30h] [ebp-80h] BYREF
  __m128 v34; // [esp+40h] [ebp-70h]
  _DWORD *v35; // [esp+50h] [ebp-60h]
  __m128 **v36; // [esp+54h] [ebp-5Ch]
  __m128 v37; // [esp+60h] [ebp-50h] BYREF
  float v38; // [esp+70h] [ebp-40h]
  char v39[48]; // [esp+80h] [ebp-30h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fbb2c*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fbb39*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8fbb4b*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fbb4d*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8fbb4f*/
    *v7 = "TtSphereTri"; /*0x8fbb55*/
    v8 = __rdtsc(); /*0x8fbb5b*/
    v7[1] = v8; /*0x8fbb65*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x8fbb6b*/
  }
  sub_8D1DB0(*a2 + 1, v32); /*0x8fbb7f*/
  v9 = *a1; /*0x8fbb87*/
  v10 = (__m128 *)a1[2]; /*0x8fbb89*/
  v11 = *a2; /*0x8fbb8c*/
  v35 = a1; /*0x8fbb8e*/
  v12 = a2[2]; /*0x8fbb92*/
  v36 = a2; /*0x8fbb95*/
  v13 = *v12; /*0x8fbb99*/
  v14 = v12[1]; /*0x8fbb9c*/
  v15 = v12[2]; /*0x8fbba0*/
  v16 = v12[3]; /*0x8fbba4*/
  v30 = v9; /*0x8fbba8*/
  v17 = v11 + 1; /*0x8fbbac*/
  v18 = v10 + 3; /*0x8fbbb9*/
  v19 = 3; /*0x8fbbbe*/
  do /*0x8fbbfe*/
  {
    *(__m128 *)((char *)v17 + v39 - (char *)&v11[1]) = _mm_add_ps( /*0x8fbbf6*/
                                                         _mm_add_ps(
                                                           _mm_mul_ps(v13, _mm_shuffle_ps(*v17, *v17, 0)),
                                                           _mm_mul_ps(v14, _mm_shuffle_ps(*v17, *v17, 0x55))),
                                                         _mm_add_ps(
                                                           _mm_mul_ps(v15, _mm_shuffle_ps(*v17, *v17, 0xAA)),
                                                           v16));
    ++v17; /*0x8fbbfa*/
    --v19; /*0x8fbbfd*/
  }
  while ( v19 ); /*0x8fbbfe*/
  v20 = sub_8D20C0(v18, (__m128 *)v39, (int)v32, &v37); /*0x8fbc13*/
  v21 = *(float *)(v30 + 0xC); /*0x8fbc1c*/
  LODWORD(v32[4]) = v20; /*0x8fbc1f*/
  v22 = v21 + v11->m128_f32[3]; /*0x8fbc23*/
  if ( v22 + *(float *)(a3 + 8) > v38 ) /*0x8fbc3a*/
  {
    v23 = *a4; /*0x8fbc4b*/
    *(float *)&v31 = v11->m128_f32[3] - v38; /*0x8fbc51*/
    v24 = *v18; /*0x8fbc68*/
    v34 = v37; /*0x8fbc6b*/
    v34.m128_f32[3] = v38 - v22; /*0x8fbc70*/
    v33 = _mm_add_ps(v24, _mm_mul_ps(_mm_shuffle_ps((__m128)v31, (__m128)v31, 0), v37)); /*0x8fbc7d*/
    (*(void (__thiscall **)(int *, __m128 *))(v23 + 4))(a4, &v33); /*0x8fbc82*/
  }
  v25 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fbc89*/
  LODWORD(v26) = v25[MEMORY[0xBA9DE4]]; /*0x8fbc96*/
  if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) ) /*0x8fbca5*/
  {
    v27 = v25[MEMORY[0xBA9DE4]]; /*0x8fbca7*/
    v28 = *(_DWORD **)(v26 + 0x1A4); /*0x8fbca9*/
    *v28 = "Et"; /*0x8fbcaf*/
    v26 = __rdtsc(); /*0x8fbcb5*/
    v28[1] = v26; /*0x8fbcbf*/
    *(_DWORD *)(v27 + 0x1A4) = v28 + 3; /*0x8fbcc5*/
  }
  return v26; /*0x8fbccb*/
}
