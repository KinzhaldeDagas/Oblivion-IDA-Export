int __cdecl sub_906090(__m128 **a1, int a2, __m128 *a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __int32 v10; // edx
  __m128 v11; // xmm0
  _DWORD *v12; // ecx
  unsigned __int64 v13; // rax
  int v14; // esi
  _DWORD *v15; // ecx
  _DWORD v17[7]; // [esp+4h] [ebp-ECh] BYREF
  __m128 v18; // [esp+20h] [ebp-D0h] BYREF
  __m128 v19; // [esp+30h] [ebp-C0h]
  __m128 v20[3]; // [esp+40h] [ebp-B0h] BYREF
  __m128 *v21; // [esp+70h] [ebp-80h]
  __m128 **v22; // [esp+74h] [ebp-7Ch]
  int v23; // [esp+78h] [ebp-78h]
  _BYTE v24[48]; // [esp+80h] [ebp-70h] BYREF
  __m128 v25[4]; // [esp+B0h] [ebp-40h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90609c*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9060a9*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x9060bb*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9060bd*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x9060bf*/
    *v8 = "TtMopp"; /*0x9060c5*/
    v9 = __rdtsc(); /*0x9060cb*/
    v8[1] = v9; /*0x9060d5*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x9060db*/
  }
  sub_8B1FF0(v25, *(__m128 **)(a2 + 8), a1[2]); /*0x9060f6*/
  (*(void (__thiscall **)(_DWORD, __m128 *, __int32, __m128 *))((*a1)->m128_i32[0] + 0xC))( /*0x906113*/
    *a1,
    v25,
    a3->m128_i32[2],
    &v18);
  hkBasis_ProjectVector((__m128 *)&v17[3], *(__m128 **)(a2 + 8), a3 + 1); /*0x906122*/
  v10 = a3->m128_i32[2]; /*0x906133*/
  v11 = _mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0); /*0x90614d*/
  v20[0] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v11), v18), _mm_mul_ps(v11, v19)); /*0x906170*/
  v20[1] = _mm_add_ps(v20[0], *(__m128 *)&v17[3]); /*0x90617c*/
  v22 = a1; /*0x9061a9*/
  v23 = a2; /*0x9061b0*/
  v20[2] = _mm_add_ps( /*0x9061b7*/
             _mm_mul_ps(v11, _mm_sub_ps(v19, v18)),
             _mm_shuffle_ps((__m128)(unsigned int)v10, (__m128)(unsigned int)v10, 0));
  v21 = a3; /*0x9061bc*/
  sub_940A30((int)v24, (int)a1, (int)v20, a4, a5); /*0x9061c0*/
  v12 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9061c5*/
  LODWORD(v13) = v12[MEMORY[0xBA9DE4]]; /*0x9061d2*/
  if ( *(_DWORD *)(v13 + 0x1A4) < *(_DWORD *)(v13 + 0x1A8) ) /*0x9061e1*/
  {
    v14 = v12[MEMORY[0xBA9DE4]]; /*0x9061e3*/
    v15 = *(_DWORD **)(v13 + 0x1A4); /*0x9061e5*/
    *v15 = "Et"; /*0x9061eb*/
    v13 = __rdtsc(); /*0x9061f1*/
    v15[1] = v13; /*0x9061fb*/
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3; /*0x906201*/
  }
  return v13; /*0x906207*/
}
