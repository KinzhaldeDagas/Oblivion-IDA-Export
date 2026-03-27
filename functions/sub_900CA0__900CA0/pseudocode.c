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
  __m128 *v19; // eax
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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "LtHeightField";
    v8[3] = "ClosestPoints";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4;
  }
  if ( a5 )
    sub_900770(a1, (int)a2, (int)a3, a5);
  v10 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v10 + 0x1A4) < *(_DWORD *)(v10 + 0x1A8) )
  {
    v11 = ThreadLocalStoragePointer[TlsIndex];
    v12 = *(_DWORD **)(v10 + 0x1A4);
    *v12 = "StGetSpheres";
    v13 = __rdtsc();
    v12[1] = v13;
    *(_DWORD *)(v11 + 0x1A4) = v12 + 3;
  }
  v14 = (__m128 *)a2[2];
  v15 = *a1;
  v49 = (__m128 *)a1[2];
  v53 = *a2;
  sub_8B1FF0(v56, v14, v49);
  (*(void (__thiscall **)(int *, int *))(*v15 + 0x1C))(v15, &v51);
  v52 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v16 = *(_DWORD **)(v52 + 0x19C);
  v55 = v51;
  if ( !v16 )
    v16 = (_DWORD *)dword_BA7D9C;
  v17 = v16[8];
  v18 = 0x10 * (v51 + 1);
  if ( (unsigned int)(v17 + v18) > v16[0xB] )
  {
    v50 = (*(int (__thiscall **)(_DWORD *, int))(*v16 + 0xC))(v16, v18);
  }
  else
  {
    v16[8] = v17 + v18;
    v50 = v17;
  }
  v19 = (__m128 *)a2[2];
  v20 = v19[2];
  v21 = v19[1];
  v22 = *v15;
  v23 = _mm_shuffle_ps(v20, v20, 0x44);
  v24 = _mm_shuffle_ps(*v19, v21, 0x44);
  *(__m128 *)&v71[1] = _mm_add_ps(
                         _mm_add_ps(
                           _mm_mul_ps(_mm_shuffle_ps(v24, v23, 0x88), _mm_shuffle_ps(a3[1], a3[1], 0)),
                           _mm_mul_ps(_mm_shuffle_ps(v24, v23, 0xDD), _mm_shuffle_ps(a3[1], a3[1], 0x55))),
                         _mm_mul_ps(
                           _mm_shuffle_ps(_mm_shuffle_ps(*v19, v21, 0xEE), _mm_shuffle_ps(v20, v20, 0xEE), 0x88),
                           _mm_shuffle_ps(a3[1], a3[1], 0xAA)));
  v25 = (__m128 *)(*(int (__thiscall **)(int *, int))(v22 + 0x20))(v15, v50);
  v26 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) )
  {
    v27 = *(_DWORD **)(v52 + 0x1A4);
    *v27 = "StCastSpheres";
    v28 = __rdtsc();
    v54 = v28;
    HIDWORD(v28) = v52;
    v27[1] = v28;
    *(_DWORD *)(HIDWORD(v28) + 0x1A4) = v27 + 3;
  }
  v29 = a3[1].m128_i32[0];
  v70 = a3[2].m128_i32[0];
  v30 = a3[1].m128_i32[1];
  v60 = v29;
  v31 = a3[1].m128_i32[2];
  v61 = v30;
  v32 = a3[1].m128_i32[3];
  v33 = v55;
  v62 = v31;
  v63 = v32;
  v67 = 0;
  v68 = 0;
  v57[1] = 0x3F800000;
  v57[0] = &off_A9BA78;
  v64 = a1;
  v65 = a4;
  if ( v55 > 0 )
  {
    do
    {
      v34 = _mm_shuffle_ps(*v25, *v25, 0xAA);
      v35 = _mm_shuffle_ps(*v25, *v25, 0);
      v36 = _mm_shuffle_ps(*v25, *v25, 0x55);
      v69 = v25->m128_i32[3];
      v37 = a1[2];
      v66[0] = _mm_add_ps(
                 _mm_add_ps(_mm_mul_ps(v56[0], v35), _mm_mul_ps(v56[1], v36)),
                 _mm_add_ps(_mm_mul_ps(v56[2], v34), v56[3]));
      v66[1] = _mm_add_ps(v66[0], *(__m128 *)&v71[1]);
      v38 = _mm_mul_ps(*((__m128 *)v37 + 2), v34);
      v39 = *(__m128 *)v37;
      v40 = _mm_add_ps(v38, *((__m128 *)v37 + 3));
      v41 = *((__m128 *)v37 + 1);
      v42 = *v53;
      v59 = v69;
      v58 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v39, v35), _mm_mul_ps(v41, v36)), v40);
      (*(void (__thiscall **)(int *, __m128 *, int **, _DWORD *))(v42 + 0x20))(v53, v66, a2, v57);
      ++v25;
      --v33;
    }
    while ( v33 );
  }
  v43 = *(_DWORD **)(v52 + 0x19C);
  if ( !v43 )
    v43 = (_DWORD *)dword_BA7D9C;
  v44 = v50 == v43[0xA];
  v43[8] = v50;
  if ( v44 )
    (*(void (__thiscall **)(_DWORD *, int))(*v43 + 0x10))(v43, v50);
  LODWORD(v45) = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v45 + 0x1A4) < *(_DWORD *)(v45 + 0x1A8) )
  {
    v46 = v52;
    v47 = *(_DWORD **)(v52 + 0x1A4);
    *v47 = "lt";
    v45 = __rdtsc();
    v47[1] = v45;
    *(_DWORD *)(v46 + 0x1A4) = v47 + 3;
  }
  return v45;
}
