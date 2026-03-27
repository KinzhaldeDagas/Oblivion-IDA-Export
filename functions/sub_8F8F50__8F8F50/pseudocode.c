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
  __m128 ***v29; // ecx
  __m128 **v30; // eax
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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtCapsTri3";
    v9 = __rdtsc();
    v43 = v9;
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = **a1;
  v11 = (*a1)[2];
  v12 = a1[1];
  v13 = *v11;
  v14 = v11[1];
  v15 = v11[2];
  v16 = v11[3];
  v17 = *v12;
  v18 = v10 + 1;
  v45 = 0;
  v19 = 2;
  do
  {
    *(__m128 *)((char *)v18 + (char *)v46 - (char *)&v10[1]) = _mm_add_ps(
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v13, _mm_shuffle_ps(*v18, *v18, 0)),
                                                                   _mm_mul_ps(v14, _mm_shuffle_ps(*v18, *v18, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v15, _mm_shuffle_ps(*v18, *v18, 0xAA)),
                                                                   v16));
    ++v18;
    --v19;
  }
  while ( v19 );
  v20 = v12[2];
  v21 = *v20;
  v22 = v20[1];
  v23 = v20[2];
  v24 = v20[3];
  v25 = v17 + 1;
  v26 = 3;
  do
  {
    *(__m128 *)((char *)v25 + (char *)v47 - (char *)&v17[1]) = _mm_add_ps(
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v21, _mm_shuffle_ps(*v25, *v25, 0)),
                                                                   _mm_mul_ps(v22, _mm_shuffle_ps(*v25, *v25, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v23, _mm_shuffle_ps(*v25, *v25, 0xAA)),
                                                                   v24));
    ++v25;
    --v26;
  }
  while ( v26 );
  sub_8D0CA0(v46, v10->m128_f32[3], v47, v17->m128_f32[3], &a3->m128_f32[2], 3.4028235e38, 1, &v48);
  if ( *((float *)&v49 + 3) >= (double)*((float *)&v50 + 3) )
  {
    v43 = 1;
    *a4 = v50;
  }
  else
  {
    v43 = 0;
    *a4 = v49;
  }
  v44 = 0;
  v27 = &v48;
  do
  {
    LOWORD(v19) = a3->m128_i16[v44];
    v28 = a1[2];
    if ( v27[1].m128_f32[3] >= (double)*((float *)v28 + 2) )
    {
      if ( (_WORD)v19 != 0xFFFF )
      {
        ((void (__thiscall *)(__m128 **, int))(*a1[3])[1].m128_i32[0])(a1[3], v19);
        v19 = 0xFFFF;
      }
    }
    else
    {
      if ( (_WORD)v19 == 0xFFFF )
      {
        if ( a5[0xC10] )
        {
          if ( ((int (__thiscall *)(__m128 **, int))(*a1[3])->m128_i32[3])(a1[3], 1) )
            goto LABEL_22;
          v29 = (__m128 ***)a5[0xC10];
          v30 = *v29;
          *v29 += 3;
          *v30 = *a5;
          v30[2] = a3;
          v30[1] = a2;
        }
        else
        {
          v19 = ((int (__thiscall *)(__m128 **, _DWORD, __m128 **, __m128 **, __m128 *))(*a1[3])->m128_i32[2])(
                  a1[3],
                  *a1,
                  a1[1],
                  v28,
                  v27);
          if ( (_WORD)v19 == 0xFFFF )
            goto LABEL_22;
        }
      }
      v31 = *a5;
      v32 = *v27;
      v33 = v45 + 1;
      *a5 += 3;
      v45 = v33;
      v34 = v44 == v43;
      *v31 = v32;
      v31[1] = v27[1];
      v31[2].m128_i16[0] = v19;
      if ( v34 )
      {
        v35 = a5[0xC10];
        if ( v35 )
        {
          *(_DWORD *)v35->m128_i32[1] = v31;
          a5[0xC10]->m128_i32[1] += 4;
        }
      }
    }
LABEL_22:
    v36 = v44;
    a3->m128_i16[v44] = v19;
    v27 += 2;
    v44 = v36 + 1;
  }
  while ( v36 + 1 < 3 );
  v37 = NtCurrentTeb()->ThreadLocalStoragePointer;
  a2->m128_i8[2] = v45;
  v38 = v37[TlsIndex];
  if ( *(_DWORD *)(v38 + 0x1A4) < *(_DWORD *)(v38 + 0x1A8) )
  {
    v39 = v37[TlsIndex];
    v40 = *(_DWORD **)(v38 + 0x1A4);
    *v40 = "Et";
    v41 = __rdtsc();
    v43 = v41;
    v40[1] = v41;
    *(_DWORD *)(v39 + 0x1A4) = v40 + 3;
  }
  return a3 + 2;
}
