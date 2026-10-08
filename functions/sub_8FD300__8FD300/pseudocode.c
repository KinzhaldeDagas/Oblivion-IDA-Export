int __cdecl sub_8FD300(_DWORD *a1, _DWORD *a2, int a3, int *a4)
{
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // esi
  int v11; // edx
  __m128 *v12; // eax
  __m128 *v13; // ecx
  __m128 v14; // xmm0
  __m128 *v15; // ecx
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  double v18; // st7
  long double v19; // st7
  long double v20; // st7
  __m128 v21; // xmm0
  double v22; // st6
  __m128 v23; // xmm2
  __m128 v24; // xmm0
  int v25; // eax
  unsigned __int64 v26; // rax
  int v27; // esi
  _DWORD *v28; // ecx
  float v30; // [esp+18h] [ebp-38h]
  unsigned int v31; // [esp+1Ch] [ebp-34h]
  __m128 v32; // [esp+20h] [ebp-30h] BYREF
  __int128 v33; // [esp+30h] [ebp-20h]
  _DWORD *v34; // [esp+40h] [ebp-10h]
  _DWORD *v35; // [esp+44h] [ebp-Ch]

  v4 = MEMORY[0xBA9DE4]; /*0x8fd30a*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fd312*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fd319*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8fd328*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fd32a*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8fd32c*/
    *v8 = "TtSphereSphere"; /*0x8fd332*/
    v9 = __rdtsc(); /*0x8fd338*/
    v8[1] = v9; /*0x8fd342*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x8fd348*/
  }
  v10 = *a1; /*0x8fd354*/
  v11 = *a2; /*0x8fd356*/
  v34 = a1; /*0x8fd358*/
  v12 = (__m128 *)a1[2]; /*0x8fd35c*/
  v35 = a2; /*0x8fd35f*/
  v13 = (__m128 *)a2[2]; /*0x8fd363*/
  v14 = v13[3]; /*0x8fd36a*/
  v15 = v13 + 3; /*0x8fd36e*/
  v16 = _mm_sub_ps(v12[3], v14); /*0x8fd371*/
  v17 = _mm_mul_ps(v16, v16); /*0x8fd377*/
  v30 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] /*0x8fd394*/
      + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
  v18 = *(float *)(a3 + 8) + *(float *)(v11 + 0xC) + *(float *)(v10 + 0xC); /*0x8fd3a1*/
  if ( v30 < v18 * v18 ) /*0x8fd3b5*/
  {
    if ( v30 <= (double)*(float *)&SrcStr ) /*0x8fd3ca*/
    {
      v20 = *(float *)&SrcStr; /*0x8fd3fa*/
      v22 = *((float *)&v33 + 3); /*0x8fd407*/
      v33 = xmmword_B2F090[0]; /*0x8fd40b*/
      *((float *)&v33 + 3) = v22; /*0x8fd410*/
      v21 = (__m128)v33; /*0x8fd414*/
    }
    else
    {
      v19 = fConstant_1 / sqrt(v30); /*0x8fd3d2*/
      *(float *)&v31 = v19; /*0x8fd3d8*/
      v20 = v19 * v30; /*0x8fd3dc*/
      v21 = _mm_mul_ps(_mm_shuffle_ps((__m128)v31, (__m128)v31, 0), v16); /*0x8fd3f0*/
      v33 = (__int128)v21; /*0x8fd3f3*/
    }
    v23 = _mm_mul_ps(_mm_shuffle_ps((__m128)*(unsigned int *)(v11 + 0xC), (__m128)*(unsigned int *)(v11 + 0xC), 0), v21); /*0x8fd437*/
    v24 = *v15; /*0x8fd43a*/
    *((float *)&v33 + 3) = v20 - (*(float *)(v11 + 0xC) + *(float *)(v10 + 0xC)); /*0x8fd440*/
    v25 = *a4; /*0x8fd444*/
    v32 = _mm_add_ps(v24, v23); /*0x8fd452*/
    (*(void (__thiscall **)(int *, __m128 *))(v25 + 4))(a4, &v32); /*0x8fd457*/
  }
  LODWORD(v26) = ThreadLocalStoragePointer[v4]; /*0x8fd45a*/
  if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) ) /*0x8fd469*/
  {
    v27 = ThreadLocalStoragePointer[v4]; /*0x8fd46b*/
    v28 = *(_DWORD **)(v26 + 0x1A4); /*0x8fd46d*/
    *v28 = "Et"; /*0x8fd473*/
    v26 = __rdtsc(); /*0x8fd479*/
    v28[1] = v26; /*0x8fd483*/
    *(_DWORD *)(v27 + 0x1A4) = v28 + 3; /*0x8fd489*/
  }
  return v26; /*0x8fd48f*/
}
