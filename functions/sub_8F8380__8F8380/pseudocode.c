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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f8397*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f839e*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8f83af*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f83b1*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8f83b3*/
    *v8 = "TtMultiSphereTriangle"; /*0x8f83b9*/
    v9 = __rdtsc(); /*0x8f83bf*/
    v8[1] = v9; /*0x8f83c9*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x8f83cf*/
  }
  v10 = a3[2]; /*0x8f83da*/
  v11 = *v10; /*0x8f83dd*/
  v12 = v10[1]; /*0x8f83e0*/
  v13 = v10[2]; /*0x8f83e4*/
  v14 = v10[3]; /*0x8f83e8*/
  v15 = *a2; /*0x8f83ef*/
  v42 = *a3; /*0x8f83f1*/
  v16 = *a3 + 1; /*0x8f83f5*/
  v17 = (char *)(v49 - (char *)v16); /*0x8f83fc*/
  v18 = 3; /*0x8f83fe*/
  do /*0x8f843e*/
  {
    *(__m128 *)((char *)v16 + (_DWORD)v17) = _mm_add_ps( /*0x8f8436*/
                                               _mm_add_ps(
                                                 _mm_mul_ps(v11, _mm_shuffle_ps(*v16, *v16, 0)),
                                                 _mm_mul_ps(v12, _mm_shuffle_ps(*v16, *v16, 0x55))),
                                               _mm_add_ps(_mm_mul_ps(v13, _mm_shuffle_ps(*v16, *v16, 0xAA)), v14));
    ++v16; /*0x8f843a*/
    --v18; /*0x8f843d*/
  }
  while ( v18 ); /*0x8f843e*/
  v19 = a2[2]; /*0x8f8440*/
  v20 = *v19; /*0x8f8443*/
  v21 = v19[1]; /*0x8f8446*/
  v22 = v19[2]; /*0x8f844a*/
  v23 = v19[3]; /*0x8f844e*/
  v24 = v15 + 1; /*0x8f8452*/
  v25 = v15->m128_i32[3]; /*0x8f8455*/
  v26 = v25; /*0x8f845f*/
  v27 = v24; /*0x8f8461*/
  do /*0x8f84a2*/
  {
    *(__m128 *)((char *)v27 + v50 - (char *)v24) = _mm_add_ps( /*0x8f8498*/
                                                     _mm_add_ps(
                                                       _mm_mul_ps(v20, _mm_shuffle_ps(*v27, *v27, 0)),
                                                       _mm_mul_ps(v21, _mm_shuffle_ps(*v27, *v27, 0x55))),
                                                     _mm_add_ps(_mm_mul_ps(v22, _mm_shuffle_ps(*v27, *v27, 0xAA)), v23));
    ++v27; /*0x8f849c*/
    --v26; /*0x8f849f*/
  }
  while ( v26 > 0 ); /*0x8f84a2*/
  v45 = a2; /*0x8f84a9*/
  v46 = a3; /*0x8f84ad*/
  if ( v25 > 0 ) /*0x8f84b1*/
  {
    v28 = this + 0xC; /*0x8f84bb*/
    v29 = (__m128 *)v50; /*0x8f84be*/
    v30 = &v24->m128_f32[3]; /*0x8f84c5*/
    v38 = v25; /*0x8f84c8*/
    do /*0x8f8562*/
    {
      v40 = *v30 + v42->m128_f32[3]; /*0x8f84e3*/
      sub_8D20C0(v29, (__m128 *)v49, (int)v28, &v47); /*0x8f84e9*/
      if ( v40 + *(float *)(a4 + 8) > v48 ) /*0x8f8504*/
      {
        v31 = *a5; /*0x8f8519*/
        *(float *)&v41 = v42->m128_f32[3] - v48; /*0x8f851f*/
        v32 = _mm_add_ps(*v29, _mm_mul_ps(_mm_shuffle_ps((__m128)v41, (__m128)v41, 0), v47)); /*0x8f853e*/
        v44 = v47; /*0x8f8541*/
        v44.m128_f32[3] = v48 - v40; /*0x8f8546*/
        v43 = v32; /*0x8f854b*/
        (*(void (__thiscall **)(int *, __m128 *))(v31 + 4))(a5, &v43); /*0x8f8550*/
      }
      ++v29; /*0x8f8557*/
      v30 += 4; /*0x8f855a*/
      --v38; /*0x8f855e*/
    }
    while ( v38 ); /*0x8f8562*/
  }
  v33 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f8568*/
  LODWORD(v34) = v33[MEMORY[0xBA9DE4]]; /*0x8f8575*/
  if ( *(_DWORD *)(v34 + 0x1A4) < *(_DWORD *)(v34 + 0x1A8) ) /*0x8f8584*/
  {
    v35 = v33[MEMORY[0xBA9DE4]]; /*0x8f8586*/
    v36 = *(_DWORD **)(v34 + 0x1A4); /*0x8f8588*/
    *v36 = "Et"; /*0x8f858e*/
    v34 = __rdtsc(); /*0x8f8594*/
    v36[1] = v34; /*0x8f859e*/
    *(_DWORD *)(v35 + 0x1A4) = v36 + 3; /*0x8f85a4*/
  }
  return v34; /*0x8f85aa*/
}
