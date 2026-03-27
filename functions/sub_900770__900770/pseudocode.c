int __cdecl sub_900770(_DWORD *a1, int a2, int a3, int *a4)
{
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // esi
  int v11; // ebx
  _DWORD *v12; // ecx
  int v13; // edx
  unsigned int v14; // eax
  int v15; // edi
  int v16; // eax
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  int v19; // esi
  int v20; // eax
  _DWORD *v21; // ecx
  unsigned __int64 v22; // rax
  int v23; // edx
  __m128 v24; // xmm1
  __m128 v25; // xmm2
  __m128 v26; // xmm3
  __m128 v27; // xmm4
  __m128 *v28; // eax
  int v29; // ecx
  double v30; // st7
  int v31; // eax
  _DWORD *v32; // ecx
  unsigned __int64 v33; // rax
  _DWORD *v34; // ecx
  __m128 *v35; // esi
  unsigned int v36; // eax
  int v37; // ecx
  int v38; // eax
  _DWORD *v39; // ecx
  unsigned __int64 v40; // rax
  int v41; // edi
  __m128 v42; // xmm1
  double v43; // st7
  __m128 *v44; // eax
  __m128 v45; // xmm0
  __int32 v46; // edx
  __m128 v47; // xmm2
  __m128 v48; // xmm3
  __m128 v49; // xmm0
  __m128 v50; // xmm1
  int v51; // eax
  _DWORD *v52; // ecx
  bool v53; // zf
  _DWORD *v54; // ecx
  int v55; // eax
  unsigned __int64 v56; // rax
  _DWORD *v57; // ecx
  __m128 *v59; // [esp+0h] [ebp-B8h]
  __m128 *v60; // [esp+4h] [ebp-B4h]
  int v61; // [esp+1Ch] [ebp-9Ch]
  int v62; // [esp+20h] [ebp-98h]
  int v63; // [esp+24h] [ebp-94h] BYREF
  float v64; // [esp+2Ch] [ebp-8Ch]
  int v65; // [esp+30h] [ebp-88h]
  float v66; // [esp+34h] [ebp-84h]
  int v67; // [esp+38h] [ebp-80h]
  _DWORD v68[3]; // [esp+3Ch] [ebp-7Ch] BYREF
  __m128 v69[4]; // [esp+48h] [ebp-70h] BYREF
  __m128 v70; // [esp+88h] [ebp-30h] BYREF
  __m128 v71; // [esp+98h] [ebp-20h]
  _DWORD *v72; // [esp+A8h] [ebp-10h]
  int v73; // [esp+ACh] [ebp-Ch]

  v4 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "LtHeightField";
    v8[3] = &aBta;
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4;
  }
  v10 = *a1;
  v60 = (__m128 *)a1[2];
  v59 = *(__m128 **)(a2 + 8);
  v64 = *(float *)a2;
  sub_8B1FF0(v69, v59, v60);
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)v10 + 0x1C))(v10, &v63);
  v11 = ThreadLocalStoragePointer[v4];
  v12 = *(_DWORD **)(v11 + 0x19C);
  v62 = v63;
  v67 = v11;
  if ( !v12 )
    v12 = (_DWORD *)dword_BA7D9C;
  v13 = v12[8];
  LODWORD(v66) = 0x10 * v63;
  v14 = (0x10 * v63 + 0x10) & 0xFFFFFFF0;
  if ( v13 + v14 > v12[0xB] )
  {
    v65 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v12 + 0xC))(v12, v14);
    v15 = v65;
  }
  else
  {
    v12[8] = v13 + v14;
    v15 = v13;
    v65 = v13;
  }
  v16 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) )
  {
    v17 = *(_DWORD **)(v11 + 0x1A4);
    *v17 = "StgetSpheres";
    v18 = __rdtsc();
    v17[1] = v18;
    *(_DWORD *)(v11 + 0x1A4) = v17 + 3;
  }
  v19 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x20))(v10, v15);
  v20 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v20 + 0x1A4) < *(_DWORD *)(v20 + 0x1A8) )
  {
    v21 = *(_DWORD **)(v11 + 0x1A4);
    *v21 = "Sttransform";
    v22 = __rdtsc();
    v21[1] = v22;
    *(_DWORD *)(v11 + 0x1A4) = v21 + 3;
  }
  v23 = v62;
  v24 = v69[0];
  v25 = v69[1];
  v26 = v69[2];
  v27 = v69[3];
  v28 = (__m128 *)v19;
  v29 = v15 - v19;
  do
  {
    v30 = v28->m128_f32[3];
    *(__m128 *)((char *)v28 + v29) = _mm_add_ps(
                                       _mm_add_ps(
                                         _mm_mul_ps(v24, _mm_shuffle_ps(*v28, *v28, 0)),
                                         _mm_mul_ps(v25, _mm_shuffle_ps(*v28, *v28, 0x55))),
                                       _mm_add_ps(_mm_mul_ps(v26, _mm_shuffle_ps(*v28, *v28, 0xAA)), v27));
    *(float *)((char *)&v28->m128_f32[3] + v29) = v30;
    ++v28;
    --v23;
  }
  while ( v23 > 0 );
  v31 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v31 + 0x1A4) < *(_DWORD *)(v31 + 0x1A8) )
  {
    v32 = *(_DWORD **)(v11 + 0x1A4);
    *v32 = "Stcollide";
    v33 = __rdtsc();
    v32[1] = v33;
    *(_DWORD *)(v11 + 0x1A4) = v32 + 3;
  }
  v34 = *(_DWORD **)(v11 + 0x19C);
  if ( !v34 )
    v34 = (_DWORD *)dword_BA7D9C;
  v35 = (__m128 *)v34[8];
  v36 = (LODWORD(v66) + 0x10) & 0xFFFFFFF0;
  if ( (unsigned int)v35 + v36 > v34[0xB] )
  {
    v61 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v34 + 0xC))(v34, (LODWORD(v66) + 0x10) & 0xFFFFFFF0);
    v35 = (__m128 *)v61;
  }
  else
  {
    v34[8] = (char *)v35 + v36;
    v61 = (int)v35;
  }
  v68[0] = v15;
  v37 = *(_DWORD *)(a3 + 8);
  v68[1] = v62;
  v68[2] = v37;
  (*(void (__thiscall **)(float, _DWORD *, __m128 *))(*(_DWORD *)LODWORD(v64) + 0x1C))(
    COERCE_FLOAT(LODWORD(v64)),
    v68,
    v35);
  v38 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v38 + 0x1A4) < *(_DWORD *)(v38 + 0x1A8) )
  {
    v39 = *(_DWORD **)(v11 + 0x1A4);
    *v39 = "Stexamine";
    v40 = __rdtsc();
    v64 = *(float *)&v40;
    v39[1] = v40;
    *(_DWORD *)(v11 + 0x1A4) = v39 + 3;
  }
  v64 = *(float *)(a3 + 8);
  if ( v62 - 1 >= 0 )
  {
    v41 = v65 - (_DWORD)v35;
    do
    {
      if ( v35->m128_f32[3] <= (double)v64 )
      {
        v42 = *v35;
        v43 = -*(float *)((char *)&v35->m128_f32[3] + v41) - v35->m128_f32[3];
        v73 = a2;
        v44 = *(__m128 **)(a2 + 8);
        v72 = a1;
        v66 = v43;
        v45 = _mm_add_ps(
                *(__m128 *)((char *)v35 + v41),
                _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v66), (__m128)LODWORD(v66), 0), v42));
        v46 = v35->m128_i32[3];
        v70 = _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(*v44, _mm_shuffle_ps(v45, v45, 0)),
                  _mm_mul_ps(v44[1], _mm_shuffle_ps(v45, v45, 0x55))),
                _mm_add_ps(_mm_mul_ps(v44[2], _mm_shuffle_ps(v45, v45, 0xAA)), v44[3]));
        v47 = _mm_mul_ps(v44[2], _mm_shuffle_ps(v42, v42, 0xAA));
        v48 = _mm_mul_ps(v44[1], _mm_shuffle_ps(v42, v42, 0x55));
        v49 = _mm_shuffle_ps(v42, v42, 0);
        v50 = *v44;
        v51 = *a4;
        v71 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v50, v49), v48), v47);
        v71.m128_i32[3] = v46;
        (*(void (__thiscall **)(int *, __m128 *))(v51 + 4))(a4, &v70);
      }
      ++v35;
      --v62;
    }
    while ( v62 );
    v11 = v67;
    v35 = (__m128 *)v61;
  }
  v52 = *(_DWORD **)(v11 + 0x19C);
  if ( !v52 )
    v52 = (_DWORD *)dword_BA7D9C;
  v53 = v35 == (__m128 *)v52[0xA];
  v52[8] = v35;
  if ( v53 )
    (*(void (__thiscall **)(_DWORD *, __m128 *))(*v52 + 0x10))(v52, v35);
  v54 = *(_DWORD **)(v11 + 0x19C);
  if ( !v54 )
    v54 = (_DWORD *)dword_BA7D9C;
  v55 = v65;
  v53 = v65 == v54[0xA];
  v54[8] = v65;
  if ( v53 )
    (*(void (__thiscall **)(_DWORD *, int))(*v54 + 0x10))(v54, v55);
  LODWORD(v56) = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v56 + 0x1A4) < *(_DWORD *)(v56 + 0x1A8) )
  {
    v57 = *(_DWORD **)(v11 + 0x1A4);
    *v57 = "lt";
    v56 = __rdtsc();
    v57[1] = v56;
    *(_DWORD *)(v11 + 0x1A4) = v57 + 3;
  }
  return v56;
}
