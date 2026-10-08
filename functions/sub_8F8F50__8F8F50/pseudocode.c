__m128 *__cdecl sub_8F8F50(__m128 ***a1, __m128 *a2, __m128 *a3, _OWORD *a4, __m128 **a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 *v10; // edi
  __m128 *v11; // eax
  __m128 **v12; // edx
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm4
  __m128 *v17; // ebx
  __m128 *v18; // ecx
  int v19; // esi
  __m128 *v20; // ecx
  __m128 v21; // xmm1
  __m128 v22; // xmm2
  __m128 v23; // xmm3
  __m128 v24; // xmm4
  __m128 *v25; // eax
  int v26; // edx
  __m128 *v27; // ebx
  __m128 **v28; // ecx
  __m128 *v29; // ecx
  _DWORD *v30; // eax
  __m128 *v31; // eax
  __m128 v32; // xmm0
  int v33; // edx
  bool v34; // zf
  __m128 *v35; // ecx
  int v36; // eax
  _DWORD *v37; // ecx
  int v38; // eax
  int v39; // esi
  _DWORD *v40; // ecx
  unsigned __int64 v41; // rax
  int v43; // [esp+14h] [ebp-BCh]
  int v44; // [esp+18h] [ebp-B8h]
  int v45; // [esp+1Ch] [ebp-B4h]
  __m128 v46[2]; // [esp+20h] [ebp-B0h] BYREF
  __m128 v47[3]; // [esp+40h] [ebp-90h] BYREF
  __m128 v48; // [esp+70h] [ebp-60h] BYREF
  __int128 v49; // [esp+80h] [ebp-50h]
  __int128 v50; // [esp+A0h] [ebp-30h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f8f5c*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f8f69*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8f8f7b*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f8f7d*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8f8f7f*/
    *v8 = "TtCapsTri3"; /*0x8f8f85*/
    v9 = __rdtsc(); /*0x8f8f8b*/
    v43 = v9; /*0x8f8f8d*/
    v8[1] = v9; /*0x8f8f95*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x8f8f9b*/
  }
  v10 = **a1; /*0x8f8fa6*/
  v11 = (*a1)[2]; /*0x8f8fa8*/
  v12 = a1[1]; /*0x8f8fab*/
  v13 = *v11; /*0x8f8fae*/
  v14 = v11[1]; /*0x8f8fb1*/
  v15 = v11[2]; /*0x8f8fb5*/
  v16 = v11[3]; /*0x8f8fb9*/
  v17 = *v12; /*0x8f8fbd*/
  v18 = v10 + 1; /*0x8f8fbf*/
  v45 = 0; /*0x8f8fc6*/
  v19 = 2; /*0x8f8fd0*/
  do /*0x8f9010*/
  {
    *(__m128 *)((char *)v18 + (char *)v46 - (char *)&v10[1]) = _mm_add_ps( /*0x8f9008*/
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v13, _mm_shuffle_ps(*v18, *v18, 0)),
                                                                   _mm_mul_ps(v14, _mm_shuffle_ps(*v18, *v18, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v15, _mm_shuffle_ps(*v18, *v18, 0xAA)),
                                                                   v16));
    ++v18; /*0x8f900c*/
    --v19; /*0x8f900f*/
  }
  while ( v19 ); /*0x8f9010*/
  v20 = v12[2]; /*0x8f9012*/
  v21 = *v20; /*0x8f9015*/
  v22 = v20[1]; /*0x8f9018*/
  v23 = v20[2]; /*0x8f901c*/
  v24 = v20[3]; /*0x8f9020*/
  v25 = v17 + 1; /*0x8f9024*/
  v26 = 3; /*0x8f902d*/
  do /*0x8f906d*/
  {
    *(__m128 *)((char *)v25 + (char *)v47 - (char *)&v17[1]) = _mm_add_ps( /*0x8f9065*/
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v21, _mm_shuffle_ps(*v25, *v25, 0)),
                                                                   _mm_mul_ps(v22, _mm_shuffle_ps(*v25, *v25, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v23, _mm_shuffle_ps(*v25, *v25, 0xAA)),
                                                                   v24));
    ++v25; /*0x8f9069*/
    --v26; /*0x8f906c*/
  }
  while ( v26 ); /*0x8f906d*/
  sub_8D0CA0(v46, v10->m128_f32[3], v47, v17->m128_f32[3], &a3->m128_f32[2], 3.4028235e38, 1, &v48); /*0x8f9094*/
  if ( *((float *)&v49 + 3) >= (double)*((float *)&v50 + 3) ) /*0x8f90af*/
  {
    v43 = 1; /*0x8f90d4*/
    *a4 = v50; /*0x8f90dc*/
  }
  else
  {
    v43 = 0; /*0x8f90bc*/
    *a4 = v49; /*0x8f90c4*/
  }
  v44 = 0; /*0x8f90e2*/
  v27 = &v48; /*0x8f90ea*/
  do /*0x8f91e6*/
  {
    LOWORD(v19) = a3->m128_i16[v44]; /*0x8f90fa*/
    v28 = a1[2]; /*0x8f9101*/
    if ( v27[1].m128_f32[3] >= (double)*((float *)v28 + 2) ) /*0x8f910c*/
    {
      if ( (_WORD)v19 != 0xFFFF ) /*0x8f91be*/
      {
        ((void (__thiscall *)(__m128 **, int))(*a1[3])[1].m128_i32[0])(a1[3], v19); /*0x8f91c8*/
        v19 = 0xFFFF; /*0x8f91cb*/
      }
    }
    else
    {
      if ( (_WORD)v19 == 0xFFFF ) /*0x8f9117*/
      {
        if ( a5[0xC10] ) /*0x8f9119*/
        {
          if ( ((int (__thiscall *)(__m128 **, int))(*a1[3])->m128_i32[3])(a1[3], 1) ) /*0x8f912a*/
            goto LABEL_22; /*0x8f912f*/
          v29 = a5[0xC10]; /*0x8f9135*/
          v30 = (_DWORD *)v29->m128_i32[0]; /*0x8f913b*/
          v29->m128_i32[0] += 0xC; /*0x8f9140*/
          *v30 = *a5; /*0x8f9147*/
          v30[2] = a3; /*0x8f914c*/
          v30[1] = a2; /*0x8f914f*/
        }
        else
        {
          v19 = ((int (__thiscall *)(__m128 **, _DWORD, __m128 **, __m128 **, __m128 *))(*a1[3])->m128_i32[2])( /*0x8f9167*/
                  a1[3],
                  *a1,
                  a1[1],
                  v28,
                  v27);
          if ( (_WORD)v19 == 0xFFFF ) /*0x8f916e*/
            goto LABEL_22; /*0x8f916e*/
        }
      }
      v31 = *a5; /*0x8f9170*/
      v32 = *v27; /*0x8f9176*/
      v33 = v45 + 1; /*0x8f9179*/
      *a5 += 3; /*0x8f917d*/
      v45 = v33; /*0x8f9183*/
      v34 = v44 == v43; /*0x8f918b*/
      *v31 = v32; /*0x8f918d*/
      v31[1] = v27[1]; /*0x8f9194*/
      v31[2].m128_i16[0] = v19; /*0x8f9198*/
      if ( v34 ) /*0x8f919c*/
      {
        v35 = a5[0xC10]; /*0x8f919e*/
        if ( v35 ) /*0x8f91a6*/
        {
          *(_DWORD *)v35->m128_i32[1] = v31; /*0x8f91ab*/
          a5[0xC10]->m128_i32[1] += 4; /*0x8f91b3*/
        }
      }
    }
LABEL_22:
    v36 = v44; /*0x8f91d0*/
    a3->m128_i16[v44] = v19; /*0x8f91d7*/
    v27 += 2; /*0x8f91dc*/
    v44 = v36 + 1; /*0x8f91e2*/
  }
  while ( v36 + 1 < 3 ); /*0x8f91e6*/
  v37 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f91f3*/
  a2->m128_i8[2] = v45; /*0x8f91fa*/
  v38 = v37[MEMORY[0xBA9DE4]]; /*0x8f9203*/
  if ( *(_DWORD *)(v38 + 0x1A4) < *(_DWORD *)(v38 + 0x1A8) ) /*0x8f9212*/
  {
    v39 = v37[MEMORY[0xBA9DE4]]; /*0x8f9214*/
    v40 = *(_DWORD **)(v38 + 0x1A4); /*0x8f9216*/
    *v40 = "Et"; /*0x8f921c*/
    v41 = __rdtsc(); /*0x8f9222*/
    v43 = v41; /*0x8f9224*/
    v40[1] = v41; /*0x8f922c*/
    *(_DWORD *)(v39 + 0x1A4) = v40 + 3; /*0x8f9232*/
  }
  return a3 + 2; /*0x8f923b*/
}
