int __stdcall sub_8F7370(int *a1, int a2, int a3, int *a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // edi
  int v10; // eax
  __m128 *v11; // esi
  int v12; // edx
  __m128 *v13; // eax
  double v14; // st7
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  int v17; // edx
  _DWORD *v18; // ecx
  unsigned __int64 v19; // rax
  int v20; // esi
  _DWORD *v21; // ecx
  int v23; // [esp+10h] [ebp-D0h]
  int *v24; // [esp+18h] [ebp-C8h]
  _BYTE v25[4]; // [esp+1Ch] [ebp-C4h] BYREF
  __m128 v26; // [esp+20h] [ebp-C0h] BYREF
  __m128 v27; // [esp+30h] [ebp-B0h]
  int v28; // [esp+40h] [ebp-A0h]
  int v29; // [esp+44h] [ebp-9Ch]
  __m128 v30; // [esp+50h] [ebp-90h] BYREF
  __m128 v31; // [esp+60h] [ebp-80h]
  int *v32; // [esp+70h] [ebp-70h]
  _DWORD v33[8]; // [esp+74h] [ebp-6Ch] BYREF
  float v34; // [esp+94h] [ebp-4Ch]
  __m128 v35; // [esp+A0h] [ebp-40h] BYREF
  __m128 v36; // [esp+B0h] [ebp-30h]
  __m128 v37; // [esp+C0h] [ebp-20h]
  __m128 v38; // [esp+D0h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f737c*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f7389*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8f739b*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f739d*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8f739f*/
    *v7 = "TtmultiRay-cvx"; /*0x8f73a5*/
    v8 = __rdtsc(); /*0x8f73ab*/
    v7[1] = v8; /*0x8f73b5*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x8f73bb*/
  }
  v9 = *a1; /*0x8f73cc*/
  v24 = *(int **)a2; /*0x8f73d2*/
  sub_8B1FF0(&v35, *(__m128 **)(a2 + 8), (__m128 *)a1[2]); /*0x8f73de*/
  v10 = *(_DWORD *)(v9 + 0x10); /*0x8f73e3*/
  v11 = *(__m128 **)(v9 + 0xC); /*0x8f73e6*/
  v32 = a1; /*0x8f73ec*/
  v33[0] = a2; /*0x8f73f4*/
  v28 = 0; /*0x8f73f8*/
  v29 = 0; /*0x8f73fc*/
  if ( v10 > 0 ) /*0x8f7400*/
  {
    v23 = v10; /*0x8f7406*/
    do /*0x8f75b8*/
    {
      v26 = _mm_add_ps( /*0x8f7473*/
              _mm_add_ps(
                _mm_mul_ps(v35, _mm_shuffle_ps(*v11, *v11, 0)),
                _mm_mul_ps(v36, _mm_shuffle_ps(*v11, *v11, 0x55))),
              _mm_add_ps(_mm_mul_ps(v37, _mm_shuffle_ps(*v11, *v11, 0xAA)), v38));
      v27 = _mm_add_ps( /*0x8f74b4*/
              _mm_add_ps(
                _mm_mul_ps(v35, _mm_shuffle_ps(v11[1], v11[1], 0)),
                _mm_mul_ps(v36, _mm_shuffle_ps(v11[1], v11[1], 0x55))),
              _mm_add_ps(_mm_mul_ps(v37, _mm_shuffle_ps(v11[1], v11[1], 0xAA)), v38));
      v12 = *v24; /*0x8f74b9*/
      v34 = 1.0; /*0x8f74bc*/
      (*(void (__thiscall **)(int *, _BYTE *, __m128 *, _DWORD *))(v12 + 0x14))(v24, v25, &v26, &v33[3]); /*0x8f74c7*/
      if ( v25[0] ) /*0x8f74d0*/
      {
        v13 = *(__m128 **)(a2 + 8); /*0x8f74e4*/
        v14 = v34 - fConstant_1; /*0x8f74e7*/
        v15 = _mm_shuffle_ps((__m128)LODWORD(v34), (__m128)LODWORD(v34), 0); /*0x8f7503*/
        v16 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v15), v26), _mm_mul_ps(v15, v27)); /*0x8f7523*/
        v17 = *a4; /*0x8f7554*/
        v30 = _mm_add_ps( /*0x8f7559*/
                _mm_add_ps(
                  _mm_mul_ps(*v13, _mm_shuffle_ps(v16, v16, 0)),
                  _mm_mul_ps(v13[1], _mm_shuffle_ps(v16, v16, 0x55))),
                _mm_add_ps(_mm_mul_ps(v13[2], _mm_shuffle_ps(v16, v16, 0xAA)), v13[3]));
        v31 = _mm_add_ps( /*0x8f7595*/
                _mm_add_ps(
                  _mm_mul_ps(*v13, _mm_shuffle_ps(*(__m128 *)&v33[3], *(__m128 *)&v33[3], 0)),
                  _mm_mul_ps(v13[1], _mm_shuffle_ps(*(__m128 *)&v33[3], *(__m128 *)&v33[3], 0x55))),
                _mm_mul_ps(v13[2], _mm_shuffle_ps(*(__m128 *)&v33[3], *(__m128 *)&v33[3], 0xAA)));
        v31.m128_f32[3] = v14 * v11->m128_f32[3] + *(float *)(v9 + 0x18); /*0x8f75a5*/
        (*(void (__thiscall **)(int *, __m128 *))(v17 + 4))(a4, &v30); /*0x8f75a9*/
      }
      v11 += 2; /*0x8f75b0*/
      --v23; /*0x8f75b4*/
    }
    while ( v23 ); /*0x8f75b8*/
  }
  v18 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f75be*/
  LODWORD(v19) = v18[MEMORY[0xBA9DE4]]; /*0x8f75cb*/
  if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) ) /*0x8f75da*/
  {
    v20 = v18[MEMORY[0xBA9DE4]]; /*0x8f75dc*/
    v21 = *(_DWORD **)(v19 + 0x1A4); /*0x8f75de*/
    *v21 = "Et"; /*0x8f75e4*/
    v19 = __rdtsc(); /*0x8f75ea*/
    v21[1] = v19; /*0x8f75f4*/
    *(_DWORD *)(v20 + 0x1A4) = v21 + 3; /*0x8f75fa*/
  }
  return v19; /*0x8f7600*/
}
