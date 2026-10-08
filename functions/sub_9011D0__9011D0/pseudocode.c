int __thiscall sub_9011D0(_DWORD *this, int *a2, int *a3, int a4, __m128 **a5)
{
  int v5; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  int v7; // eax
  _DWORD *v8; // ebx
  int v9; // ebx
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  _DWORD *v12; // ecx
  __m128 *v13; // edx
  int v14; // eax
  __m128 *v15; // esi
  _WORD *v16; // ebx
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  int v19; // edi
  __m128 *v20; // eax
  __m128 v21; // xmm1
  __m128 v22; // xmm2
  __m128 v23; // xmm3
  __m128 v24; // xmm4
  double v25; // st7
  _DWORD *v26; // ecx
  int v27; // eax
  __m128 *v28; // edi
  int v29; // eax
  _DWORD *v30; // ecx
  unsigned __int64 v31; // rax
  int v32; // eax
  int v33; // eax
  _DWORD *v34; // ecx
  unsigned __int64 v35; // rax
  int v36; // ecx
  int v37; // eax
  __m128 *v38; // esi
  __m128 v39; // xmm0
  __int16 v40; // ax
  _DWORD *v41; // ecx
  bool v42; // zf
  _DWORD *v43; // ecx
  unsigned __int64 v44; // rax
  _DWORD *v45; // ecx
  int v47; // [esp+14h] [ebp-6Ch]
  int v48; // [esp+18h] [ebp-68h]
  int v49; // [esp+1Ch] [ebp-64h]
  int v50; // [esp+1Ch] [ebp-64h]
  int v51; // [esp+20h] [ebp-60h]
  int v53; // [esp+28h] [ebp-58h]
  int v54; // [esp+2Ch] [ebp-54h]
  unsigned int v55; // [esp+2Ch] [ebp-54h]
  int v56; // [esp+30h] [ebp-50h]
  float v57; // [esp+30h] [ebp-50h]
  _DWORD v58[3]; // [esp+34h] [ebp-4Ch] BYREF
  __m128 v59[4]; // [esp+40h] [ebp-40h] BYREF

  v5 = MEMORY[0xBA9DE4]; /*0x9011db*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9011e2*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9011e9*/
  v8 = this; /*0x9011f2*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x901200*/
  {
    v9 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x901202*/
    v10 = *(_DWORD **)(v7 + 0x1A4); /*0x901204*/
    *v10 = "LtHeightField"; /*0x90120a*/
    v10[3] = &aBta; /*0x901210*/
    v11 = __rdtsc(); /*0x901217*/
    v10[1] = v11; /*0x901221*/
    *(_DWORD *)(v9 + 0x1A4) = v10 + 4; /*0x901227*/
    v8 = this; /*0x90122d*/
  }
  v49 = *a2; /*0x901239*/
  v56 = *a3; /*0x90124b*/
  sub_8B1FF0(v59, (__m128 *)a3[2], (__m128 *)a2[2]); /*0x90124f*/
  v47 = ThreadLocalStoragePointer[v5]; /*0x90125a*/
  v51 = v8[4]; /*0x901266*/
  v12 = *(_DWORD **)(v47 + 0x19C); /*0x90126a*/
  if ( !v12 ) /*0x90126c*/
    v12 = (_DWORD *)unk_BA7D9C; /*0x90126e*/
  v13 = (__m128 *)v12[8]; /*0x901277*/
  v14 = v8[4] + 1; /*0x90127d*/
  v54 = v14 * 0x10; /*0x901286*/
  if ( (unsigned int)&v13[v14] > v12[0xB] ) /*0x90128a*/
  {
    v48 = (*(int (__thiscall **)(_DWORD *, int))(*v12 + 0xC))(v12, v14 * 0x10); /*0x90129d*/
    v15 = (__m128 *)v48; /*0x9012a1*/
  }
  else
  {
    v12[8] = &v13[v14]; /*0x90128c*/
    v15 = v13; /*0x90128f*/
    v48 = (int)v13; /*0x901291*/
  }
  v16 = (_WORD *)v8[3]; /*0x9012b7*/
  if ( *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] /*0x9012ba*/
                                                                                    + 0x1A8) )
  {
    v17 = *(_DWORD **)(v47 + 0x1A4); /*0x9012c0*/
    *v17 = "StgetSpheres"; /*0x9012c6*/
    v18 = __rdtsc(); /*0x9012cc*/
    v17[1] = v18; /*0x9012d6*/
    *(_DWORD *)(v47 + 0x1A4) = v17 + 3; /*0x9012dc*/
  }
  v19 = v51; /*0x9012e8*/
  v20 = (__m128 *)(*(int (__thiscall **)(int, __m128 *))(*(_DWORD *)v49 + 0x20))(v49, v15); /*0x9012ed*/
  v21 = v59[0]; /*0x9012f0*/
  v22 = v59[1]; /*0x9012f5*/
  v23 = v59[2]; /*0x9012fa*/
  v24 = v59[3]; /*0x9012ff*/
  do /*0x901349*/
  {
    v25 = v20->m128_f32[3]; /*0x901307*/
    *v15 = _mm_add_ps( /*0x90133a*/
             _mm_add_ps(
               _mm_mul_ps(v21, _mm_shuffle_ps(*v20, *v20, 0)),
               _mm_mul_ps(v22, _mm_shuffle_ps(*v20, *v20, 0x55))),
             _mm_add_ps(_mm_mul_ps(v23, _mm_shuffle_ps(*v20, *v20, 0xAA)), v24));
    v15->m128_f32[3] = v25; /*0x90133d*/
    ++v15; /*0x901340*/
    ++v20; /*0x901343*/
    --v19; /*0x901346*/
  }
  while ( v19 > 0 ); /*0x901349*/
  v26 = *(_DWORD **)(v47 + 0x19C); /*0x90134f*/
  if ( !v26 ) /*0x901357*/
    v26 = (_DWORD *)unk_BA7D9C; /*0x901359*/
  v27 = v26[8]; /*0x90135f*/
  if ( (unsigned int)(v27 + v54) > v26[0xB] ) /*0x90136c*/
  {
    v50 = (*(int (__thiscall **)(_DWORD *, int))(*v26 + 0xC))(v26, v54); /*0x90137f*/
    v28 = (__m128 *)v50; /*0x901383*/
  }
  else
  {
    v28 = (__m128 *)v26[8]; /*0x90136e*/
    v26[8] = v27 + v54; /*0x901370*/
    v50 = v27; /*0x901373*/
  }
  v29 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x901391*/
  if ( *(_DWORD *)(v29 + 0x1A4) < *(_DWORD *)(v29 + 0x1A8) ) /*0x9013a0*/
  {
    v30 = *(_DWORD **)(v47 + 0x1A4); /*0x9013a2*/
    *v30 = "Stcollide"; /*0x9013a8*/
    v31 = __rdtsc(); /*0x9013ae*/
    v30[1] = v31; /*0x9013b8*/
    *(_DWORD *)(v47 + 0x1A4) = v30 + 3; /*0x9013be*/
  }
  v32 = *(_DWORD *)(a4 + 8); /*0x9013c7*/
  v58[0] = v48; /*0x9013d2*/
  v58[2] = v32; /*0x9013da*/
  v58[1] = v51; /*0x9013e3*/
  (*(void (__thiscall **)(int, _DWORD *, __m128 *))(*(_DWORD *)v56 + 0x1C))(v56, v58, v28); /*0x9013ea*/
  v33 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x9013fa*/
  if ( *(_DWORD *)(v33 + 0x1A4) < *(_DWORD *)(v33 + 0x1A8) ) /*0x901409*/
  {
    v34 = *(_DWORD **)(v47 + 0x1A4); /*0x90140f*/
    *v34 = "Stexamine"; /*0x901415*/
    v35 = __rdtsc(); /*0x90141b*/
    v34[1] = v35; /*0x901429*/
    *(_DWORD *)(v47 + 0x1A4) = v34 + 3; /*0x90142f*/
  }
  v57 = *(float *)(a4 + 8); /*0x901438*/
  if ( v51 - 1 >= 0 ) /*0x901441*/
  {
    v36 = v48 - v50; /*0x90144b*/
    v53 = v51; /*0x901454*/
    while ( v28->m128_f32[3] > (double)v57 ) /*0x90146c*/
    {
      HIWORD(v37) = 0; /*0x90146e*/
      if ( *v16 != 0xFFFF ) /*0x901477*/
      {
        LOWORD(v37) = *v16; /*0x901470*/
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 2) + 0x10))(*(this + 2), v37); /*0x901487*/
        *v16 = 0xFFFF; /*0x90148a*/
LABEL_31:
        v36 = v48 - v50; /*0x901576*/
      }
      ++v28; /*0x90157a*/
      ++v16; /*0x901581*/
      if ( !--v53 ) /*0x901589*/
        goto LABEL_33; /*0x901589*/
    }
    v38 = *a5; /*0x9014a0*/
    *(float *)&v55 = -*(float *)((char *)&v28->m128_f32[3] + v36); /*0x9014a2*/
    v39 = _mm_add_ps(*(__m128 *)((char *)v28 + v36), _mm_mul_ps(_mm_shuffle_ps((__m128)v55, (__m128)v55, 0), *v28)); /*0x9014c8*/
    *v38 = _mm_add_ps( /*0x9014f9*/
             _mm_add_ps(
               _mm_mul_ps(*(__m128 *)a3[2], _mm_shuffle_ps(v39, v39, 0)),
               _mm_mul_ps(*(__m128 *)(a3[2] + 0x10), _mm_shuffle_ps(v39, v39, 0x55))),
             _mm_add_ps(
               _mm_mul_ps(*(__m128 *)(a3[2] + 0x20), _mm_shuffle_ps(v39, v39, 0xAA)),
               *(__m128 *)(a3[2] + 0x30)));
    v38[1] = _mm_add_ps( /*0x901531*/
               _mm_add_ps(
                 _mm_mul_ps(*(__m128 *)a3[2], _mm_shuffle_ps(*v28, *v28, 0)),
                 _mm_mul_ps(*(__m128 *)(a3[2] + 0x10), _mm_shuffle_ps(*v28, *v28, 0x55))),
               _mm_mul_ps(*(__m128 *)(a3[2] + 0x20), _mm_shuffle_ps(*v28, *v28, 0xAA)));
    v38[1].m128_i32[3] = v28->m128_i32[3]; /*0x901538*/
    if ( *v16 == 0xFFFF ) /*0x901540*/
    {
      v40 = (*(int (__thiscall **)(_DWORD, int *, int *, int, __m128 *))(*(_DWORD *)*(this + 2) + 8))( /*0x901558*/
              *(this + 2),
              a2,
              a3,
              a4,
              v38);
      *v16 = v40; /*0x90155f*/
      if ( v40 != (__int16)0xFFFF ) /*0x901562*/
        *a5 += 3; /*0x901567*/
    }
    else
    {
      *a5 += 3; /*0x90156c*/
    }
    v38[2].m128_i16[0] = *v16; /*0x901572*/
    goto LABEL_31; /*0x901572*/
  }
LABEL_33:
  v41 = *(_DWORD **)(v47 + 0x19C); /*0x90158f*/
  if ( !v41 ) /*0x90159b*/
    v41 = (_DWORD *)unk_BA7D9C; /*0x90159d*/
  v42 = v50 == v41[0xA]; /*0x9015a7*/
  v41[8] = v50; /*0x9015aa*/
  if ( v42 ) /*0x9015ad*/
    (*(void (__thiscall **)(_DWORD *, int))(*v41 + 0x10))(v41, v50); /*0x9015b2*/
  v43 = *(_DWORD **)(v47 + 0x19C); /*0x9015b5*/
  if ( !v43 ) /*0x9015bd*/
    v43 = (_DWORD *)unk_BA7D9C; /*0x9015bf*/
  v42 = v48 == v43[0xA]; /*0x9015c9*/
  v43[8] = v48; /*0x9015cc*/
  if ( v42 ) /*0x9015cf*/
    (*(void (__thiscall **)(_DWORD *, int))(*v43 + 0x10))(v43, v48); /*0x9015d4*/
  LODWORD(v44) = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x9015e3*/
  if ( *(_DWORD *)(v44 + 0x1A4) < *(_DWORD *)(v44 + 0x1A8) ) /*0x9015f2*/
  {
    v45 = *(_DWORD **)(v47 + 0x1A4); /*0x9015f4*/
    *v45 = "lt"; /*0x9015fa*/
    v44 = __rdtsc(); /*0x901600*/
    v45[1] = v44; /*0x90160a*/
    *(_DWORD *)(v47 + 0x1A4) = v45 + 3; /*0x901610*/
  }
  return v44; /*0x901616*/
}
