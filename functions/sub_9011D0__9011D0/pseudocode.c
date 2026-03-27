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

  v5 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  v8 = this;
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v9 = ThreadLocalStoragePointer[TlsIndex];
    v10 = *(_DWORD **)(v7 + 0x1A4);
    *v10 = "LtHeightField";
    v10[3] = &aBta;
    v11 = __rdtsc();
    v10[1] = v11;
    *(_DWORD *)(v9 + 0x1A4) = v10 + 4;
    v8 = this;
  }
  v49 = *a2;
  v56 = *a3;
  sub_8B1FF0(v59, (__m128 *)a3[2], (__m128 *)a2[2]);
  v47 = ThreadLocalStoragePointer[v5];
  v51 = v8[4];
  v12 = *(_DWORD **)(v47 + 0x19C);
  if ( !v12 )
    v12 = (_DWORD *)dword_BA7D9C;
  v13 = (__m128 *)v12[8];
  v14 = v8[4] + 1;
  v54 = v14 * 0x10;
  if ( (unsigned int)&v13[v14] > v12[0xB] )
  {
    v48 = (*(int (__thiscall **)(_DWORD *, int))(*v12 + 0xC))(v12, v14 * 0x10);
    v15 = (__m128 *)v48;
  }
  else
  {
    v12[8] = &v13[v14];
    v15 = v13;
    v48 = (int)v13;
  }
  v16 = (_WORD *)v8[3];
  if ( *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 0x1A8) )
  {
    v17 = *(_DWORD **)(v47 + 0x1A4);
    *v17 = "StgetSpheres";
    v18 = __rdtsc();
    v17[1] = v18;
    *(_DWORD *)(v47 + 0x1A4) = v17 + 3;
  }
  v19 = v51;
  v20 = (__m128 *)(*(int (__thiscall **)(int, __m128 *))(*(_DWORD *)v49 + 0x20))(v49, v15);
  v21 = v59[0];
  v22 = v59[1];
  v23 = v59[2];
  v24 = v59[3];
  do
  {
    v25 = v20->m128_f32[3];
    *v15 = _mm_add_ps(
             _mm_add_ps(
               _mm_mul_ps(v21, _mm_shuffle_ps(*v20, *v20, 0)),
               _mm_mul_ps(v22, _mm_shuffle_ps(*v20, *v20, 0x55))),
             _mm_add_ps(_mm_mul_ps(v23, _mm_shuffle_ps(*v20, *v20, 0xAA)), v24));
    v15->m128_f32[3] = v25;
    ++v15;
    ++v20;
    --v19;
  }
  while ( v19 > 0 );
  v26 = *(_DWORD **)(v47 + 0x19C);
  if ( !v26 )
    v26 = (_DWORD *)dword_BA7D9C;
  v27 = v26[8];
  if ( (unsigned int)(v27 + v54) > v26[0xB] )
  {
    v50 = (*(int (__thiscall **)(_DWORD *, int))(*v26 + 0xC))(v26, v54);
    v28 = (__m128 *)v50;
  }
  else
  {
    v28 = (__m128 *)v26[8];
    v26[8] = v27 + v54;
    v50 = v27;
  }
  v29 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v29 + 0x1A4) < *(_DWORD *)(v29 + 0x1A8) )
  {
    v30 = *(_DWORD **)(v47 + 0x1A4);
    *v30 = "Stcollide";
    v31 = __rdtsc();
    v30[1] = v31;
    *(_DWORD *)(v47 + 0x1A4) = v30 + 3;
  }
  v32 = *(_DWORD *)(a4 + 8);
  v58[0] = v48;
  v58[2] = v32;
  v58[1] = v51;
  (*(void (__thiscall **)(int, _DWORD *, __m128 *))(*(_DWORD *)v56 + 0x1C))(v56, v58, v28);
  v33 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v33 + 0x1A4) < *(_DWORD *)(v33 + 0x1A8) )
  {
    v34 = *(_DWORD **)(v47 + 0x1A4);
    *v34 = "Stexamine";
    v35 = __rdtsc();
    v34[1] = v35;
    *(_DWORD *)(v47 + 0x1A4) = v34 + 3;
  }
  v57 = *(float *)(a4 + 8);
  if ( v51 - 1 >= 0 )
  {
    v36 = v48 - v50;
    v53 = v51;
    while ( v28->m128_f32[3] > (double)v57 )
    {
      HIWORD(v37) = 0;
      if ( *v16 != 0xFFFF )
      {
        LOWORD(v37) = *v16;
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 2) + 0x10))(*(this + 2), v37);
        *v16 = 0xFFFF;
LABEL_31:
        v36 = v48 - v50;
      }
      ++v28;
      ++v16;
      if ( !--v53 )
        goto LABEL_33;
    }
    v38 = *a5;
    *(float *)&v55 = -*(float *)((char *)&v28->m128_f32[3] + v36);
    v39 = _mm_add_ps(*(__m128 *)((char *)v28 + v36), _mm_mul_ps(_mm_shuffle_ps((__m128)v55, (__m128)v55, 0), *v28));
    *v38 = _mm_add_ps(
             _mm_add_ps(
               _mm_mul_ps(*(__m128 *)a3[2], _mm_shuffle_ps(v39, v39, 0)),
               _mm_mul_ps(*(__m128 *)(a3[2] + 0x10), _mm_shuffle_ps(v39, v39, 0x55))),
             _mm_add_ps(
               _mm_mul_ps(*(__m128 *)(a3[2] + 0x20), _mm_shuffle_ps(v39, v39, 0xAA)),
               *(__m128 *)(a3[2] + 0x30)));
    v38[1] = _mm_add_ps(
               _mm_add_ps(
                 _mm_mul_ps(*(__m128 *)a3[2], _mm_shuffle_ps(*v28, *v28, 0)),
                 _mm_mul_ps(*(__m128 *)(a3[2] + 0x10), _mm_shuffle_ps(*v28, *v28, 0x55))),
               _mm_mul_ps(*(__m128 *)(a3[2] + 0x20), _mm_shuffle_ps(*v28, *v28, 0xAA)));
    v38[1].m128_i32[3] = v28->m128_i32[3];
    if ( *v16 == 0xFFFF )
    {
      v40 = (*(int (__thiscall **)(_DWORD, int *, int *, int, __m128 *))(*(_DWORD *)*(this + 2) + 8))(
              *(this + 2),
              a2,
              a3,
              a4,
              v38);
      *v16 = v40;
      if ( v40 != (__int16)0xFFFF )
        *a5 += 3;
    }
    else
    {
      *a5 += 3;
    }
    v38[2].m128_i16[0] = *v16;
    goto LABEL_31;
  }
LABEL_33:
  v41 = *(_DWORD **)(v47 + 0x19C);
  if ( !v41 )
    v41 = (_DWORD *)dword_BA7D9C;
  v42 = v50 == v41[0xA];
  v41[8] = v50;
  if ( v42 )
    (*(void (__thiscall **)(_DWORD *, int))(*v41 + 0x10))(v41, v50);
  v43 = *(_DWORD **)(v47 + 0x19C);
  if ( !v43 )
    v43 = (_DWORD *)dword_BA7D9C;
  v42 = v48 == v43[0xA];
  v43[8] = v48;
  if ( v42 )
    (*(void (__thiscall **)(_DWORD *, int))(*v43 + 0x10))(v43, v48);
  LODWORD(v44) = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v44 + 0x1A4) < *(_DWORD *)(v44 + 0x1A8) )
  {
    v45 = *(_DWORD **)(v47 + 0x1A4);
    *v45 = "lt";
    v44 = __rdtsc();
    v45[1] = v44;
    *(_DWORD *)(v47 + 0x1A4) = v45 + 3;
  }
  return v44;
}
