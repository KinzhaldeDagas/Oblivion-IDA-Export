int __thiscall sub_8FC220(unsigned __int16 *this, int *a2, __m128 **a3, int a4, __m128 **a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 *v10; // esi
  __m128 *v11; // eax
  __m128 *v12; // ebx
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm4
  __m128 *v17; // ecx
  __m128 *v18; // edi
  char *v19; // eax
  int v20; // edx
  double v21; // st7
  __m128 v22; // xmm1
  __m128 v23; // xmm0
  long double v24; // st6
  long double v25; // st5
  int v26; // ecx
  long double v27; // st4
  int v28; // edx
  int v29; // eax
  int v30; // ecx
  double v31; // st5
  int v32; // eax
  __int32 v33; // edx
  __m128 v34; // xmm1
  __m128 v35; // xmm0
  float v36; // xmm2_4
  __m128 v37; // xmm3
  __m128 v38; // xmm0
  __m128 v39; // xmm0
  __int16 v40; // di
  int v41; // eax
  _DWORD *v42; // ecx
  unsigned __int64 v43; // rax
  int v44; // esi
  _DWORD *v45; // ecx
  int v47; // [esp+10h] [ebp-50h]
  float v48; // [esp+10h] [ebp-50h]
  float v49; // [esp+10h] [ebp-50h]
  float v51; // [esp+18h] [ebp-48h]
  unsigned int v52; // [esp+1Ch] [ebp-44h]
  __m128 v53; // [esp+20h] [ebp-40h]
  __m128 v54; // [esp+30h] [ebp-30h] BYREF
  __m128 v55; // [esp+40h] [ebp-20h] BYREF
  __m128 v56; // [esp+50h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtSphereCapsule";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = *a5;
  v11 = a3[2];
  v12 = *a3;
  v13 = *v11;
  v14 = v11[1];
  v15 = v11[2];
  v16 = v11[3];
  v17 = *a3 + 1;
  v47 = *a2;
  v18 = (__m128 *)(a2[2] + 0x30);
  v19 = (char *)((char *)&v55 - (char *)v17);
  v20 = 2;
  do
  {
    *(__m128 *)((char *)v17 + (_DWORD)v19) = _mm_add_ps(
                                               _mm_add_ps(
                                                 _mm_mul_ps(v13, _mm_shuffle_ps(*v17, *v17, 0)),
                                                 _mm_mul_ps(v14, _mm_shuffle_ps(*v17, *v17, 0x55))),
                                               _mm_add_ps(_mm_mul_ps(v15, _mm_shuffle_ps(*v17, *v17, 0xAA)), v16));
    ++v17;
    --v20;
  }
  while ( v20 );
  sub_8D1CD0(v18, &v55, &v56, &v54);
  v21 = *(float *)(v47 + 0xC) + v12->m128_f32[3];
  v22 = _mm_sub_ps(*v18, v54);
  v23 = _mm_mul_ps(v22, v22);
  v48 = _mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0]);
  if ( v48 >= (v21 + *(float *)(a4 + 8)) * (v21 + *(float *)(a4 + 8)) )
  {
    v41 = *(this + 6);
    if ( (_WORD)v41 != 0xFFFF )
    {
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), v41);
      *(this + 6) = 0xFFFF;
    }
  }
  else
  {
    if ( v48 <= (double)*(float *)&SrcStr )
    {
      v24 = *(float *)&SrcStr;
      v53 = _mm_sub_ps(v56, v55);
      v25 = fabs(v53.m128_f32[0]);
      v26 = 0;
      v27 = fabs(v53.m128_f32[1]);
      v28 = 1;
      v51 = fabs(v53.m128_f32[2]);
      if ( v27 < v25 )
      {
        v28 = 0;
        v49 = v27;
        v25 = v49;
        v26 = 1;
      }
      if ( v51 >= v25 )
      {
        v29 = 2;
      }
      else
      {
        v29 = v26;
        v26 = 2;
      }
      v10[1].m128_i32[v26] = 0;
      v30 = v28;
      v31 = v53.m128_f32[v28];
      v32 = v29;
      v33 = v53.m128_i32[v32];
      v10[1].m128_i32[3] = 0;
      v10[1].m128_i32[v30] = v33;
      v10[1].m128_f32[v32] = -v31;
    }
    else
    {
      v10[1] = v22;
      v24 = sqrt(v48);
    }
    v34 = v10[1];
    v35 = _mm_mul_ps(v34, v34);
    v36 = _mm_shuffle_ps(v35, v35, 0x55).m128_f32[0] + v35.m128_f32[0];
    v37 = _mm_shuffle_ps(v35, v35, 0xAA);
    v38 = v37;
    v38.m128_f32[0] = v37.m128_f32[0] + v36;
    v53 = v38;
    v53.m128_f32[0] = 1.0 / fsqrt(v37.m128_f32[0] + v36);
    v39 = (__m128)0x3F000000u;
    v39.m128_f32[0] = (float)(0.5 * v53.m128_f32[0])
                    * (float)(3.0 - (float)((float)((float)(v37.m128_f32[0] + v36) * v53.m128_f32[0]) * v53.m128_f32[0]));
    v10[1] = _mm_mul_ps(_mm_shuffle_ps(v39, v39, 0), v34);
    *(float *)&v52 = v12->m128_f32[3] - v24;
    *v10 = _mm_add_ps(*v18, _mm_mul_ps(_mm_shuffle_ps((__m128)v52, (__m128)v52, 0), v10[1]));
    v10[1].m128_f32[3] = v24 - v21;
    if ( *(this + 6) == 0xFFFF )
      *(this + 6) = (*(int (__thiscall **)(_DWORD, int *, __m128 **, int, __m128 *))(**((_DWORD **)this + 2) + 8))(
                      *((_DWORD *)this + 2),
                      a2,
                      a3,
                      a4,
                      v10);
    v40 = *(this + 6);
    if ( v40 != (__int16)0xFFFF )
    {
      v10[2].m128_i16[0] = v40;
      *a5 += 3;
    }
  }
  v42 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v43) = v42[TlsIndex];
  if ( *(_DWORD *)(v43 + 0x1A4) < *(_DWORD *)(v43 + 0x1A8) )
  {
    v44 = v42[TlsIndex];
    v45 = *(_DWORD **)(v43 + 0x1A4);
    *v45 = "Et";
    v43 = __rdtsc();
    v45[1] = v43;
    *(_DWORD *)(v44 + 0x1A4) = v45 + 3;
  }
  return v43;
}
