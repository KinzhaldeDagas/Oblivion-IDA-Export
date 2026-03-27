int __thiscall sub_8FAA30(unsigned __int16 *this, int *a2, __m128 **a3, int a4, __m128 **a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 *v10; // esi
  __m128 *v11; // ebx
  float *v12; // ecx
  int v13; // edx
  __m128 v14; // xmm0
  __m128 v15; // xmm2
  __m128 v16; // xmm0
  __m128 v17; // xmm4
  __m128 v18; // xmm1
  __m128 v19; // xmm1
  double v20; // st7
  __m128 v21; // xmm0
  __m128 *v22; // edx
  double v23; // st7
  double v24; // st7
  int v25; // eax
  double v26; // st7
  double v27; // st6
  __int16 v28; // bx
  int v29; // eax
  _DWORD *v30; // ecx
  unsigned __int64 v31; // rax
  int v32; // esi
  _DWORD *v33; // ecx
  float v35; // [esp+10h] [ebp-30h]
  float v36; // [esp+14h] [ebp-2Ch]
  int v38; // [esp+1Ch] [ebp-24h]
  unsigned int v39; // [esp+1Ch] [ebp-24h]
  float v40; // [esp+20h] [ebp-20h]
  __m128 v41; // [esp+30h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtSphereBox";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = *a5;
  v11 = (__m128 *)(a2[2] + 0x30);
  sub_88FD10(&v41, a3[2], v11);
  v12 = (float *)*a3;
  v13 = *a2;
  v14 = _mm_and_ps(v41, (__m128)xmmword_A372D0);
  v15 = _mm_sub_ps(_mm_min_ps(v14, (*a3)[1]), v14);
  v38 = *a2;
  if ( (_mm_movemask_ps(v15) & 7) == 0 )
  {
    v22 = a3[2];
    v35 = v14.m128_f32[0] - v12[4];
    v36 = v14.m128_f32[1] - v12[5];
    v23 = v14.m128_f32[2] - v12[6];
    if ( v35 <= (double)v36 )
    {
      if ( v36 > v23 )
      {
        v26 = v10[1].m128_f32[3];
        v10[1] = v22[1];
        v10[1].m128_f32[3] = v26;
        v25 = 1;
        v23 = v36;
        goto LABEL_12;
      }
    }
    else if ( v35 > v23 )
    {
      v24 = v10[1].m128_f32[3];
      v10[1] = *v22;
      v10[1].m128_f32[3] = v24;
      v25 = 0;
      v23 = v35;
LABEL_12:
      if ( v41.m128_f32[v25] < (double)*(float *)&SrcStr )
        v10[1] = _mm_xor_ps(v10[1], (__m128)xmmword_A965C0);
      v13 = v38;
      v20 = v23 - v12[3] - *(float *)(v38 + 0xC);
      goto LABEL_15;
    }
    v27 = v10[1].m128_f32[3];
    v10[1] = v22[2];
    v10[1].m128_f32[3] = v27;
    v25 = 2;
    goto LABEL_12;
  }
  v16 = _mm_mul_ps(v15, v15);
  v16.m128_f32[0] = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
  v40 = 1.0 / fsqrt(v16.m128_f32[0]);
  v17 = (__m128)0x3F000000u;
  v17.m128_f32[0] = 0.5 * v40;
  v18 = v17;
  v18.m128_f32[0] = (float)(0.5 * v40) * (float)(3.0 - (float)((float)(v16.m128_f32[0] * v40) * v40));
  v19 = _mm_shuffle_ps(v18, v18, 0);
  v20 = (float)(v16.m128_f32[0] * v19.m128_f32[0]) - (v12[3] + *(float *)(v13 + 0xC));
  if ( v20 <= *(float *)(a4 + 8) )
  {
    v21 = _mm_xor_ps(_mm_xor_ps(_mm_mul_ps(v19, v15), _mm_and_ps(v41, (__m128)xmmword_A965C0)), (__m128)xmmword_A965C0);
    v10[1] = _mm_add_ps(
               _mm_add_ps(
                 _mm_mul_ps(*a3[2], _mm_shuffle_ps(v21, v21, 0)),
                 _mm_mul_ps(a3[2][1], _mm_shuffle_ps(v21, v21, 0x55))),
               _mm_mul_ps(a3[2][2], _mm_shuffle_ps(v21, v21, 0xAA)));
LABEL_15:
    *(float *)&v39 = -v20 - *(float *)(v13 + 0xC);
    *v10 = _mm_add_ps(*v11, _mm_mul_ps(_mm_shuffle_ps((__m128)v39, (__m128)v39, 0), v10[1]));
    v10[1].m128_f32[3] = v20;
    if ( *(this + 6) == 0xFFFF )
      *(this + 6) = (*(int (__thiscall **)(_DWORD, int *, __m128 **, int, __m128 *))(**((_DWORD **)this + 2) + 8))(
                      *((_DWORD *)this + 2),
                      a2,
                      a3,
                      a4,
                      v10);
    v28 = *(this + 6);
    if ( v28 != (__int16)0xFFFF )
    {
      v10[2].m128_i16[0] = v28;
      *a5 += 3;
    }
    goto LABEL_21;
  }
  v29 = *(this + 6);
  if ( (_WORD)v29 != 0xFFFF )
  {
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), v29);
    *(this + 6) = 0xFFFF;
  }
LABEL_21:
  v30 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v31) = v30[TlsIndex];
  if ( *(_DWORD *)(v31 + 0x1A4) < *(_DWORD *)(v31 + 0x1A8) )
  {
    v32 = v30[TlsIndex];
    v33 = *(_DWORD **)(v31 + 0x1A4);
    *v33 = "Et";
    v31 = __rdtsc();
    v33[1] = v31;
    *(_DWORD *)(v32 + 0x1A4) = v33 + 3;
  }
  return v31;
}
