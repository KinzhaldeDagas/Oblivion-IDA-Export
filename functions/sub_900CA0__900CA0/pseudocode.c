int __cdecl sub_900CA0(int **a1, int **a2, __m128 *a3, int a4, int *a5)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // esi
  _DWORD *v12; // ecx
  unsigned __int64 v13; // rax
  __m128 *v14; // eax
  int *v15; // esi
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // edx
  int *v19; // eax
  __m128 v20; // xmm3
  __m128 v21; // xmm5
  int v22; // edx
  __m128 v23; // xmm4
  __m128 v24; // xmm0
  __m128 *v25; // esi
  int v26; // eax
  _DWORD *v27; // ecx
  unsigned __int64 v28; // rax
  __int32 v29; // ecx
  __int32 v30; // edx
  __int32 v31; // ecx
  __int32 v32; // edx
  int v33; // edi
  __m128 v34; // xmm1
  __m128 v35; // xmm3
  __m128 v36; // xmm2
  int *v37; // eax
  __m128 v38; // xmm4
  __m128 v39; // xmm1
  __m128 v40; // xmm4
  __m128 v41; // xmm0
  int v42; // eax
  _DWORD *v43; // eax
  bool v44; // zf
  unsigned __int64 v45; // rax
  int v46; // ecx
  _DWORD *v47; // esi
  __m128 *v49; // [esp+0h] [ebp-114h]
  int v50; // [esp+18h] [ebp-FCh]
  int v51; // [esp+1Ch] [ebp-F8h] BYREF
  int v52; // [esp+24h] [ebp-F0h]
  int *v53; // [esp+28h] [ebp-ECh]
  int v54; // [esp+2Ch] [ebp-E8h]
  int v55; // [esp+30h] [ebp-E4h]
  __m128 v56[4]; // [esp+34h] [ebp-E0h] BYREF
  _DWORD v57[4]; // [esp+74h] [ebp-A0h] BYREF
  __m128 v58; // [esp+84h] [ebp-90h]
  __int32 v59; // [esp+94h] [ebp-80h]
  __int32 v60; // [esp+A4h] [ebp-70h]
  __int32 v61; // [esp+A8h] [ebp-6Ch]
  __int32 v62; // [esp+ACh] [ebp-68h]
  __int32 v63; // [esp+B0h] [ebp-64h]
  int **v64; // [esp+B4h] [ebp-60h]
  int v65; // [esp+B8h] [ebp-5Ch]
  __m128 v66[2]; // [esp+C4h] [ebp-50h] BYREF
  int v67; // [esp+E4h] [ebp-30h]
  int v68; // [esp+E8h] [ebp-2Ch]
  __int32 v69; // [esp+F4h] [ebp-20h]
  __int32 v70; // [esp+F8h] [ebp-1Ch]
  _QWORD v71[3]; // [esp+FCh] [ebp-18h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x900cb4*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x900cbb*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x900ccb*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x900ccd*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x900ccf*/
    *v8 = "LtHeightField"; /*0x900cd5*/
    v8[3] = "ClosestPoints"; /*0x900cdb*/
    v9 = __rdtsc(); /*0x900ce2*/
    v8[1] = v9; /*0x900cec*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4; /*0x900cf2*/
  }
  if ( a5 ) /*0x900d03*/
    sub_900770(a1, (int)a2, (int)a3, a5); /*0x900d0c*/
  v10 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x900d1a*/
  if ( *(_DWORD *)(v10 + 0x1A4) < *(_DWORD *)(v10 + 0x1A8) ) /*0x900d29*/
  {
    v11 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x900d2b*/
    v12 = *(_DWORD **)(v10 + 0x1A4); /*0x900d2d*/
    *v12 = "StGetSpheres"; /*0x900d33*/
    v13 = __rdtsc(); /*0x900d39*/
    v12[1] = v13; /*0x900d43*/
    *(_DWORD *)(v11 + 0x1A4) = v12 + 3; /*0x900d49*/
  }
  v14 = (__m128 *)a2[2]; /*0x900d54*/
  v15 = *a1; /*0x900d57*/
  v49 = (__m128 *)a1[2]; /*0x900d59*/
  v53 = *a2; /*0x900d5a*/
  sub_8B1FF0(v56, v14, v49); /*0x900d63*/
  (*(void (__thiscall **)(int *, int *))(*v15 + 0x1C))(v15, &v51); /*0x900d71*/
  v52 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x900d87*/
  v16 = *(_DWORD **)(v52 + 0x19C); /*0x900d8b*/
  v55 = v51; /*0x900d93*/
  if ( !v16 ) /*0x900d97*/
    v16 = (_DWORD *)unk_BA7D9C; /*0x900d99*/
  v17 = v16[8]; /*0x900da1*/
  v18 = 0x10 * (v51 + 1); /*0x900da7*/
  if ( (unsigned int)(v17 + v18) > v16[0xB] ) /*0x900db0*/
  {
    v50 = (*(int (__thiscall **)(_DWORD *, int))(*v16 + 0xC))(v16, v18); /*0x900dc3*/
  }
  else
  {
    v16[8] = v17 + v18; /*0x900db2*/
    v50 = v17; /*0x900db5*/
  }
  v19 = a2[2]; /*0x900dc7*/
  v20 = *((__m128 *)v19 + 2); /*0x900dca*/
  v21 = *((__m128 *)v19 + 1); /*0x900dd1*/
  v22 = *v15; /*0x900de0*/
  v23 = _mm_shuffle_ps(v20, v20, 0x44); /*0x900de5*/
  v24 = _mm_shuffle_ps(*(__m128 *)v19, v21, 0x44); /*0x900def*/
  *(__m128 *)&v71[1] = _mm_add_ps( /*0x900e34*/
                         _mm_add_ps(
                           _mm_mul_ps(_mm_shuffle_ps(v24, v23, 0x88), _mm_shuffle_ps(a3[1], a3[1], 0)),
                           _mm_mul_ps(_mm_shuffle_ps(v24, v23, 0xDD), _mm_shuffle_ps(a3[1], a3[1], 0x55))),
                         _mm_mul_ps(
                           _mm_shuffle_ps(
                             _mm_shuffle_ps(*(__m128 *)v19, v21, 0xEE),
                             _mm_shuffle_ps(v20, v20, 0xEE),
                             0x88),
                           _mm_shuffle_ps(a3[1], a3[1], 0xAA)));
  v25 = (__m128 *)(*(int (__thiscall **)(int *, int))(v22 + 0x20))(v15, v50); /*0x900e4c*/
  v26 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x900e4e*/
  if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) ) /*0x900e5d*/
  {
    v27 = *(_DWORD **)(v52 + 0x1A4); /*0x900e63*/
    *v27 = "StCastSpheres"; /*0x900e69*/
    v28 = __rdtsc(); /*0x900e6f*/
    v54 = v28; /*0x900e71*/
    HIDWORD(v28) = v52; /*0x900e79*/
    v27[1] = v28; /*0x900e7d*/
    *(_DWORD *)(HIDWORD(v28) + 0x1A4) = v27 + 3; /*0x900e83*/
  }
  v29 = a3[1].m128_i32[0]; /*0x900e8f*/
  v70 = a3[2].m128_i32[0]; /*0x900e91*/
  v30 = a3[1].m128_i32[1]; /*0x900e98*/
  v60 = v29; /*0x900e9b*/
  v31 = a3[1].m128_i32[2]; /*0x900ea2*/
  v61 = v30; /*0x900ea5*/
  v32 = a3[1].m128_i32[3]; /*0x900eac*/
  v33 = v55; /*0x900eaf*/
  v62 = v31; /*0x900eb7*/
  v63 = v32; /*0x900ec1*/
  v67 = 0; /*0x900ecb*/
  v68 = 0; /*0x900ed2*/
  v57[1] = 0x3F800000; /*0x900ed9*/
  v57[0] = &off_A9BA78; /*0x900ee1*/
  v64 = a1; /*0x900ee9*/
  v65 = a4; /*0x900ef0*/
  if ( v55 > 0 ) /*0x900ef7*/
  {
    do /*0x900fb7*/
    {
      v34 = _mm_shuffle_ps(*v25, *v25, 0xAA); /*0x900f19*/
      v35 = _mm_shuffle_ps(*v25, *v25, 0); /*0x900f23*/
      v36 = _mm_shuffle_ps(*v25, *v25, 0x55); /*0x900f27*/
      v69 = v25->m128_i32[3]; /*0x900f3e*/
      v37 = a1[2]; /*0x900f45*/
      v66[0] = _mm_add_ps( /*0x900f58*/
                 _mm_add_ps(_mm_mul_ps(v56[0], v35), _mm_mul_ps(v56[1], v36)),
                 _mm_add_ps(_mm_mul_ps(v56[2], v34), v56[3]));
      v66[1] = _mm_add_ps(v66[0], *(__m128 *)&v71[1]); /*0x900f68*/
      v38 = _mm_mul_ps(*((__m128 *)v37 + 2), v34); /*0x900f78*/
      v39 = *(__m128 *)v37; /*0x900f7b*/
      v40 = _mm_add_ps(v38, *((__m128 *)v37 + 3)); /*0x900f7e*/
      v41 = *((__m128 *)v37 + 1); /*0x900f81*/
      v42 = *v53; /*0x900f85*/
      v59 = v69; /*0x900f87*/
      v58 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v39, v35), _mm_mul_ps(v41, v36)), v40); /*0x900fa8*/
      (*(void (__thiscall **)(int *, __m128 *, int **, _DWORD *))(v42 + 0x20))(v53, v66, a2, v57); /*0x900fb0*/
      ++v25; /*0x900fb3*/
      --v33; /*0x900fb6*/
    }
    while ( v33 ); /*0x900fb7*/
  }
  v43 = *(_DWORD **)(v52 + 0x19C); /*0x900fc1*/
  if ( !v43 ) /*0x900fc9*/
    v43 = (_DWORD *)unk_BA7D9C; /*0x900fcb*/
  v44 = v50 == v43[0xA]; /*0x900fd4*/
  v43[8] = v50; /*0x900fd7*/
  if ( v44 ) /*0x900fda*/
    (*(void (__thiscall **)(_DWORD *, int))(*v43 + 0x10))(v43, v50); /*0x900fe1*/
  LODWORD(v45) = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x900ff1*/
  if ( *(_DWORD *)(v45 + 0x1A4) < *(_DWORD *)(v45 + 0x1A8) ) /*0x901000*/
  {
    v46 = v52; /*0x901002*/
    v47 = *(_DWORD **)(v52 + 0x1A4); /*0x901006*/
    *v47 = "lt"; /*0x90100c*/
    v45 = __rdtsc(); /*0x901012*/
    v47[1] = v45; /*0x90101c*/
    *(_DWORD *)(v46 + 0x1A4) = v47 + 3; /*0x901022*/
  }
  return v45; /*0x901028*/
}
