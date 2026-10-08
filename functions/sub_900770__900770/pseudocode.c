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

  v4 = MEMORY[0xBA9DE4]; /*0x90077d*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x900785*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90078c*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x90079b*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90079d*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x90079f*/
    *v8 = "LtHeightField"; /*0x9007a5*/
    v8[3] = &aBta; /*0x9007ab*/
    v9 = __rdtsc(); /*0x9007b2*/
    v8[1] = v9; /*0x9007bc*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4; /*0x9007c2*/
  }
  v10 = *a1; /*0x9007cb*/
  v60 = (__m128 *)a1[2]; /*0x9007d8*/
  v59 = *(__m128 **)(a2 + 8); /*0x9007d9*/
  v64 = *(float *)a2; /*0x9007de*/
  sub_8B1FF0(v69, v59, v60); /*0x9007e2*/
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)v10 + 0x1C))(v10, &v63); /*0x9007f0*/
  v11 = ThreadLocalStoragePointer[v4]; /*0x9007f3*/
  v12 = *(_DWORD **)(v11 + 0x19C); /*0x9007f6*/
  v62 = v63; /*0x900802*/
  v67 = v11; /*0x900806*/
  if ( !v12 ) /*0x90080a*/
    v12 = (_DWORD *)unk_BA7D9C; /*0x90080c*/
  v13 = v12[8]; /*0x900812*/
  LODWORD(v66) = 0x10 * v63; /*0x900818*/
  v14 = (0x10 * v63 + 0x10) & 0xFFFFFFF0; /*0x90081f*/
  if ( v13 + v14 > v12[0xB] ) /*0x900828*/
  {
    v65 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v12 + 0xC))(v12, v14); /*0x90083b*/
    v15 = v65; /*0x90083f*/
  }
  else
  {
    v12[8] = v13 + v14; /*0x90082a*/
    v15 = v13; /*0x90082d*/
    v65 = v13; /*0x90082f*/
  }
  v16 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x90084d*/
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x90085c*/
  {
    v17 = *(_DWORD **)(v11 + 0x1A4); /*0x90085e*/
    *v17 = "StgetSpheres"; /*0x900864*/
    v18 = __rdtsc(); /*0x90086a*/
    v17[1] = v18; /*0x900874*/
    *(_DWORD *)(v11 + 0x1A4) = v17 + 3; /*0x90087a*/
  }
  v19 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x20))(v10, v15); /*0x90088e*/
  v20 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x900896*/
  if ( *(_DWORD *)(v20 + 0x1A4) < *(_DWORD *)(v20 + 0x1A8) ) /*0x9008a5*/
  {
    v21 = *(_DWORD **)(v11 + 0x1A4); /*0x9008a7*/
    *v21 = "Sttransform"; /*0x9008ad*/
    v22 = __rdtsc(); /*0x9008b3*/
    v21[1] = v22; /*0x9008bd*/
    *(_DWORD *)(v11 + 0x1A4) = v21 + 3; /*0x9008c3*/
  }
  v23 = v62; /*0x9008c9*/
  v24 = v69[0]; /*0x9008cd*/
  v25 = v69[1]; /*0x9008d2*/
  v26 = v69[2]; /*0x9008d7*/
  v27 = v69[3]; /*0x9008dc*/
  v28 = (__m128 *)v19; /*0x9008e3*/
  v29 = v15 - v19; /*0x9008e5*/
  do /*0x90092b*/
  {
    v30 = v28->m128_f32[3]; /*0x9008ea*/
    *(__m128 *)((char *)v28 + v29) = _mm_add_ps( /*0x90091d*/
                                       _mm_add_ps(
                                         _mm_mul_ps(v24, _mm_shuffle_ps(*v28, *v28, 0)),
                                         _mm_mul_ps(v25, _mm_shuffle_ps(*v28, *v28, 0x55))),
                                       _mm_add_ps(_mm_mul_ps(v26, _mm_shuffle_ps(*v28, *v28, 0xAA)), v27));
    *(float *)((char *)&v28->m128_f32[3] + v29) = v30; /*0x900921*/
    ++v28; /*0x900925*/
    --v23; /*0x900928*/
  }
  while ( v23 > 0 ); /*0x90092b*/
  v31 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x90093a*/
  if ( *(_DWORD *)(v31 + 0x1A4) < *(_DWORD *)(v31 + 0x1A8) ) /*0x900949*/
  {
    v32 = *(_DWORD **)(v11 + 0x1A4); /*0x90094b*/
    *v32 = "Stcollide"; /*0x900951*/
    v33 = __rdtsc(); /*0x900957*/
    v32[1] = v33; /*0x900961*/
    *(_DWORD *)(v11 + 0x1A4) = v32 + 3; /*0x900967*/
  }
  v34 = *(_DWORD **)(v11 + 0x19C); /*0x90096d*/
  if ( !v34 ) /*0x900975*/
    v34 = (_DWORD *)unk_BA7D9C; /*0x900977*/
  v35 = (__m128 *)v34[8]; /*0x900981*/
  v36 = (LODWORD(v66) + 0x10) & 0xFFFFFFF0; /*0x900987*/
  if ( (unsigned int)v35 + v36 > v34[0xB] ) /*0x900990*/
  {
    v61 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v34 + 0xC))(v34, (LODWORD(v66) + 0x10) & 0xFFFFFFF0); /*0x9009a1*/
    v35 = (__m128 *)v61; /*0x9009a5*/
  }
  else
  {
    v34[8] = (char *)v35 + v36; /*0x900992*/
    v61 = (int)v35; /*0x900995*/
  }
  v68[0] = v15; /*0x9009ab*/
  v37 = *(_DWORD *)(a3 + 8); /*0x9009b2*/
  v68[1] = v62; /*0x9009b5*/
  v68[2] = v37; /*0x9009b9*/
  (*(void (__thiscall **)(float, _DWORD *, __m128 *))(*(_DWORD *)LODWORD(v64) + 0x1C))( /*0x9009c9*/
    COERCE_FLOAT(LODWORD(v64)),
    v68,
    v35);
  v38 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x9009d9*/
  if ( *(_DWORD *)(v38 + 0x1A4) < *(_DWORD *)(v38 + 0x1A8) ) /*0x9009e8*/
  {
    v39 = *(_DWORD **)(v11 + 0x1A4); /*0x9009ea*/
    *v39 = "Stexamine"; /*0x9009f0*/
    v40 = __rdtsc(); /*0x9009f6*/
    v64 = *(float *)&v40; /*0x9009f8*/
    v39[1] = v40; /*0x900a00*/
    *(_DWORD *)(v11 + 0x1A4) = v39 + 3; /*0x900a06*/
  }
  v64 = *(float *)(a3 + 8); /*0x900a0f*/
  if ( v62 - 1 >= 0 ) /*0x900a18*/
  {
    v41 = v65 - (_DWORD)v35; /*0x900a25*/
    do /*0x900b1a*/
    {
      if ( v35->m128_f32[3] <= (double)v64 ) /*0x900a3c*/
      {
        v42 = *v35; /*0x900a46*/
        v43 = -*(float *)((char *)&v35->m128_f32[3] + v41) - v35->m128_f32[3]; /*0x900a4e*/
        v73 = a2; /*0x900a54*/
        v44 = *(__m128 **)(a2 + 8); /*0x900a5b*/
        v72 = a1; /*0x900a5e*/
        v66 = v43; /*0x900a65*/
        v45 = _mm_add_ps( /*0x900a81*/
                *(__m128 *)((char *)v35 + v41),
                _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v66), (__m128)LODWORD(v66), 0), v42));
        v46 = v35->m128_i32[3]; /*0x900a8f*/
        v70 = _mm_add_ps( /*0x900ab9*/
                _mm_add_ps(
                  _mm_mul_ps(*v44, _mm_shuffle_ps(v45, v45, 0)),
                  _mm_mul_ps(v44[1], _mm_shuffle_ps(v45, v45, 0x55))),
                _mm_add_ps(_mm_mul_ps(v44[2], _mm_shuffle_ps(v45, v45, 0xAA)), v44[3]));
        v47 = _mm_mul_ps(v44[2], _mm_shuffle_ps(v42, v42, 0xAA)); /*0x900ad0*/
        v48 = _mm_mul_ps(v44[1], _mm_shuffle_ps(v42, v42, 0x55)); /*0x900ada*/
        v49 = _mm_shuffle_ps(v42, v42, 0); /*0x900ae0*/
        v50 = *v44; /*0x900ae4*/
        v51 = *a4; /*0x900ae7*/
        v71 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v50, v49), v48), v47); /*0x900afa*/
        v71.m128_i32[3] = v46; /*0x900b04*/
        (*(void (__thiscall **)(int *, __m128 *))(v51 + 4))(a4, &v70); /*0x900b0b*/
      }
      ++v35; /*0x900b12*/
      --v62; /*0x900b16*/
    }
    while ( v62 ); /*0x900b1a*/
    v11 = v67; /*0x900b20*/
    v35 = (__m128 *)v61; /*0x900b24*/
  }
  v52 = *(_DWORD **)(v11 + 0x19C); /*0x900b28*/
  if ( !v52 ) /*0x900b30*/
    v52 = (_DWORD *)unk_BA7D9C; /*0x900b32*/
  v53 = v35 == (__m128 *)v52[0xA]; /*0x900b38*/
  v52[8] = v35; /*0x900b3b*/
  if ( v53 ) /*0x900b3e*/
    (*(void (__thiscall **)(_DWORD *, __m128 *))(*v52 + 0x10))(v52, v35); /*0x900b43*/
  v54 = *(_DWORD **)(v11 + 0x19C); /*0x900b46*/
  if ( !v54 ) /*0x900b4e*/
    v54 = (_DWORD *)unk_BA7D9C; /*0x900b50*/
  v55 = v65; /*0x900b56*/
  v53 = v65 == v54[0xA]; /*0x900b5a*/
  v54[8] = v65; /*0x900b5d*/
  if ( v53 ) /*0x900b60*/
    (*(void (__thiscall **)(_DWORD *, int))(*v54 + 0x10))(v54, v55); /*0x900b65*/
  LODWORD(v56) = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x900b74*/
  if ( *(_DWORD *)(v56 + 0x1A4) < *(_DWORD *)(v56 + 0x1A8) ) /*0x900b83*/
  {
    v57 = *(_DWORD **)(v11 + 0x1A4); /*0x900b85*/
    *v57 = "lt"; /*0x900b8b*/
    v56 = __rdtsc(); /*0x900b91*/
    v57[1] = v56; /*0x900b9b*/
    *(_DWORD *)(v11 + 0x1A4) = v57 + 3; /*0x900ba1*/
  }
  return v56; /*0x900ba7*/
}
